#include "../template.h"

const int MN = 4011;
const int inf = 1000111000;
int n, k, cost[MN][MN], dp[811][MN];

inline int phi(int i, int j) {
    return cost[j][j] - cost[j][i-1] - cost[i-1][j] + cost[i-1][i-1];
}

void tinh(int i, int L, int R, int optL, int optR) {
    if (L > R) return ;

    int mid = (L + R) >> 1, savek = optL;
    dp[i][mid] = inf;
    FOR(k,optL,min(mid-1, optR)) {
        int cur = dp[i-1][k] + phi(k+1, mid);
        if (cur < dp[i][mid]) {
            dp[i][mid] = cur;
            savek = k;
        }
    }
    tinh(i, L, mid-1, optL, savek);
    tinh(i, mid+1, R, savek, optR);
}

void main() {
    cin >> n >> k;
    FOR(i,1,n) FOR(j,1,n) {
        cin >> cost[i][j];
        cost[i][j] = cost[i-1][j] + cost[i][j-1] - cost[i-1][j-1] + cost[i][j];
    }
    dp[0][0] = 0;
    FOR(i,1,n) dp[0][i] = inf;

    FOR(i,1,k) {
        tinh(i, 1, n, 0, n);
    }
    cout << dp[k][n] / 2 << endl;
}
