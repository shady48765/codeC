#include "template.h"

const int MAXN = 105000;

struct node {
	int next[26];
	int len;
	int sufflink;
};

int len;
char s[MAXN];
node tree[MAXN]; 
int num; 		
int s; 			
bool them(int pos) {
	int c = s, cl = 0;
	int l = s[pos] - 'a';

	while (true) {
		cl = tree[c].len;
		if (pos - 1 - cl >= 0 && s[pos - 1 - cl] == s[pos])    	
			break;	
		c = tree[c].sufflink;
	}		
	if (tree[c].next[l]) {	
		suff = tree[c].next[l];
		return false;
	}

	num++;
	suff = num;
	tree[num].len = tree[c].len + 2;
	tree[c].next[l] = num;

	if (tree[num].len == 1) {
		tree[num].sufflink = 2;
		return true;
	}

	while (true) {
		c = tree[c].sufflink;
		cl = tree[c].len;
		if (pos - 1 - cl >= 0 && s[pos - 1 - cl] == s[pos]) {
			tree[num].sufflink = tree[c].next[l];
			break;
		}    	
	}           

	return true;
}

void tao() {
	num = 2; suff = 2;
	tree[1].len = -1; tree[1].sufflink = 1;
	tree[2].len = 0; tree[2].sufflink = 1;
}

int solve() {
	scanf("%s\n", &s[0]);
	len = strlen(s);
	tao();
	for (int i = 0; i < len; i++) {
		them(i);
	}
	return 0;
} 
