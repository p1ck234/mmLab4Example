
#include <iostream>

float f(int x, int y)
{
    return x+3*y;
}
using namespace std;

int main() {
    int n = 4;
    float a[20][2], b[20], x,y,x1 = 0.0 ,x2 = 0.0, max = -100;
    a[0][0] = 1; a[0][1] = 4; b[0] = 4;
    a[1][0] = 1; a[1][1] = 1; b[1] = 6;
    a[2][0] = 1; a[2][1] = 0; b[2] = 2;
    a[3][0] = 0; a[3][1] = 1; b[3] = 0;
    
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            if(abs(a[i][0]*a[j][1] - a[i][1]*a[j][0]) > 0.0001)
            {
                x = (b[i] * a[j][1] -a[i][1] * b[j])/(a[i][0]*a[j][1]-a[i][1]*a[j][0]);
                y = (a[i][0]*b[j]-b[i]*a[j][0])/(a[i][0]*a[j][1]-a[i][1]*a[j][0]);
                int t = 1;
                cout << x<< "  " << y << "  " << i << "  " << j << endl;
                for (int k = 0; k<n; k++)
                {
                    switch (k) {
                        case 1:
                            if (a[k][0]*x+a[k][1]*y>b[k])t=0;
                            break;
                        case 2:
                            if (a[k][0]*x+a[k][1]*y<b[k])t=0;
                            break;
                        case 3:
                            if (a[k][0]*x+a[k][1]*y>b[k])t=0;
                            break;
                        case 4:
                            if (a[k][0]*x+a[k][1]*y>b[k])t=0;
                            break;
                            
                        default:
                            break;
                    }
                    cout << t << endl;
                    if((t) && (f(x,y) > max))
                    {
                        max = f(x,y);
                        x1 = x;
                        x2 = y;
                    }
                }
            }
    cout << x1 << " " << x2 << " " << max << endl;
}

