struct Node {
    int optimal;
    int open;
    int close;

    Node(int opt, int o, int c) {
        optimal = opt;
        open = o;
        close = c;
    }
};


void update(int id, int l, int r, int i, int v) {
    if (i < l || r < i) {
        return ;
    }
    if (l == r) {
        ST[id] = v;
        return ;
    }
    int mid = (l + r) / 2;
    update(id*2, l, mid, i, v);
    update(id*2 + 1, mid+1, r, i, v);
    ST[id] = max(ST[id*2], ST[id*2 + 1]);
}
int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return -INFINITY;
    }
    if (u <= l && r <= v) {
        return ST[id];
    }
    int mid = (l + r) / 2;
    return max(get(id*2, l, mid, u, v), get(id*2 + 1, mid+1, r, u, v));
}


