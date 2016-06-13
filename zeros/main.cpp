//
//  main.cpp
//  zeros
//
//  Created by Miguel Cuellar on 1/14/16.
//  Copyright © 2016 Miguel Cuellar. All rights reserved.
//

#include <iostream>
#import "stdlib.h"
using namespace std;
int main() {
    int n,contuno=0, contzero=0;
    string pal;
    cin>>n;
    cin>>pal;
    for (int i=0; i<n; i++) {
        if (pal[i]=='0') {
            contzero++;}
            else if (pal[i]=='1'){
                contuno++;
            }}
        cout<<abs(contzero-contuno)<<endl;
    return 0;
}
/*
1
 n+1
 n
 
 n+1
 n
 1
 
 4n+5

 

*/