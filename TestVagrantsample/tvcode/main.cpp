#include <bits/stdc++.h>
using namespace std;

int main(){
    float gst_maximum = 0;
    float val;
    float products = 0;
    float total = 0, z=0;
    float unit[4] = {1100, 900, 200, 100};
    float gst[4] = {0.18, 0.12, 0.28, 0.0};
    float quantity[4] = {1, 4, 3, 2};
    float discount = 0;
    for(int i=0;i<4;i++){
        if(unit[i]>=500){
        discount += unit[i]*0.05;
        }
    }

    for(int i=0;i<4;i++){
        val = unit[i] * gst[i] * quantity[i];
        z+=val;
        total += unit[i] * quantity[i];


    if(val>gst_maximum){
        gst_maximum = val;
        products = i;
    }
    }
cout<<"Maximum GST is"<<"\t"<<products+1;
cout<<"\n";
cout<<"Total amount to be paid to shopkeeper"<<"\t"<<total-z-discount;
cout<<"\n";
return 0;
}
