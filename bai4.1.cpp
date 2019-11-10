vector<int> nodes[MN];
vector<int> f[MN];

void cap2(int u, int v) {
    for(int x = u; x <= n; x += x & -x)
        nodes[x].push_back(v);
}

void dc2(int u, int v) {
    for(int x = u; x > 0; x -= x & -x)
        nodes[x].push_back(v);
}

void cap(int u, int v) {
    for(int x = u; x <= n; x += x & -x)
        for(int y = lower_bound(nodes[x].begin(), nodes[x].end(), v) - nodes[x].begin() + 1; y <= nodes[x].size(); y += y & -y)
            f[x][y]++;
}

int dc(int u, int v) {
    int res = 0;
    for(int x = u; x > 0; x -= x & -x)
        for(int y = upper_bound(nodes[x].begin(), nodes[x].end(), v) - nodes[x].begin(); y > 0; y -= y & -y)
            res += f[x][y];
    return res;
}

int main() {
    FORD(i,n,1) {
        cap2(a[i].b, a[i].c);
        dc2(a[i].b, a[i].c);
    }
    FOR(i,1,n) {
        nodes[i].push_back(1000111000);
        sort(nodes[i].begin(), nodes[i].end());
        f[i].resize(SZ(nodes[i]) + 3);
    }
}
