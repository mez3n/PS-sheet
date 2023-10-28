//
// Created by Mazen on 10/19/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> sides(6);
    long long sum = 0;
    for (int i = 0; i < 6; i++) {
        cin >> sides[i];
        sum += sides[i];
    }
    long double tri1=sides[0]*sides[0]* sqrt(3)*0.25;
    long double tri2=sides[2]*sides[2]* sqrt(3)*0.25;
    long double tri3=sides[4]*sides[4]* sqrt(3)*0.25;
    int x= sides[0]+sides[1]+sides[2];
    long double hex=x*x*sqrt(3)*0.25;
    hex-=tri1+tri2+tri3;
    /*
    long double hex=0.5*(2*sides[1]+0.5*sides[0]+0.5*sides[2])*0.5* sqrt(3)*sides[0];
    hex+=0.5*(2*sides[4]+0.5*sides[3]+0.5*sides[5])*0.5* sqrt(3)*sides[5];
     */
    double tri= sqrt(3)*0.25;
    long long count=round(hex/tri);
    cout<<count;





    return 0;
}