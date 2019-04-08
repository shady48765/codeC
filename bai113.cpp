//
//  bai113.cpp
//  baitapC
//
//  Created by 1 on 4/5/19.
//  Copyright © 2019 1. All rights reserved.
//

#include "bai113.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;
int tinh(int n,int i, int j);
int main()
{
    int n=0;
    int i,j;
    while ((n==2) || (n==4) || (n==6) || (n==8) || (n==10)) {
        cout<<"nhap so"<<endl;
        cin>>n;
    }
    cout<<"nhap so i"<<endl;
    cin>>i;
    cout<<"nhap so j"<<endl;
    cin>>j;
    cout<<i<<"\t";
    tinh(n, i, j);
    return 0;
}
int tinh(int n,int i, int j)
{
    int s=i;
    for (int a=2; n; a++) {
        cout<<s*j<<"\t";   }
    return 0;
}

