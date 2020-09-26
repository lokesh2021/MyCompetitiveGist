#include<bits/stdc++.h>
using namespace std;

struct Card //declaring strut
{
    int face;
    int shape;
    int color;
};

int main(){
    struct Card deck[52]; //creating structure size of 52 
    deck[0].color=0;
    printf("%d",deck[0].color);
}