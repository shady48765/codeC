#include <iostream>
using namespace std;
int n,m;
int arr[100][100];
int pipes[8][3];
bool count2[100][100]={false};
int totalcost=0;

void count(int, int, int, bool[100][100]);

int main(){
	int t;
	cin>>t;
	int test=1;
	while(t--){
		cin>>n;
		cin>>m;

		bool visited[100][100]={false};
		int x,y;
		cin>>x>>y;
		int k;
		cin>>k;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
				count2[i][j]=false;
			}
		}
		
		count(x,y,k,visited);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<count2[i][j]<<" ";
			}
			cout<<endl;
		}
		
		cout<<"#"<<test++<<" "<<totalcost<<endl;	
	}
	return 0;
}

void count(int x, int y, int k, bool visited[100][100]){
	if(x>=n || y>=m || x<0 || y<0){
		return;
	}
	
	if(visited[x][y] == true){
		return;
	}
	
	if(arr[x][y] == 0){
		return;
	}
	if(k == 0){
		return;
	}
	
	visited[x][y]=true;
	
	if(count2[x][y] == false){
		totalcost++;
		count2[x][y]=true;
	}
	
	if(pipes[arr[x][y]][0]!=0 && pipes[arr[x-1][y]][2]!=0 ){
		count(x-1,y,k-1,visited);
	}
	
	if(pipes[arr[x][y]][2]!=0 && pipes[arr[x+1][y]][0]!=0 ){
		count(x+1,y,k-1,visited);
	}

	if(pipes[arr[x][y]][1]!=0 && pipes[arr[x][y+1]][3]!=0 ){
		count(x,y+1,k-1,visited);
	}

	if(pipes[arr[x][y]][3]!=0 && pipes[arr[x][y-1]][1]!=0 ){
		count(x,y-1,k-1,visited);
	}
	
	visited[x][y]=false;

}