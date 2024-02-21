#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;
float gradientw1(float x1, float x2, float y, float w1, float w2)
{
    float doh1 = -2*(y - (w1*x1 + w2*x2))*x1;
    return doh1;

};

float gradientw2(float x1, float x2, float y, float w1, float w2)
{
    float doh2 = -2*(y - (w1*x1 + w2*x2))*x2;
    return doh2;
};

int main()
{
    int arr[4][3] ={{0,1,1},{2,1,9},{1,0,1},{-2,1,7}};
    int w1 = 1;
    int w2 = 3;


    for (int i = 0; i < 4; i++) {
        int k=0;

            int x1 = arr[i][k];
            int x2 = arr[i][k+1];
            int y = arr[i][k+2];

    int grad1= gradientw1( x1,  x2,  y,  w1,  w2);
    int grad2= gradientw2( x1,  x2,  y,  w1,  w2);


        cout<<"dE/dw1 :"<<grad1<<" "<<"dE/dw2 :"<<grad2<<endl;
            
        }
    }
