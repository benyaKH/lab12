#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double data[],int N,double result[]){
    double sum=0;
    double Square = 0 ;
    double multi = 1 ;
    double divi = 0 ;
    double max = data[0] ;
    double min = data[0] ;
    for(int i=0;i<N;i++){
        sum += data[i];
        Square += data[i]*data[i];
        multi *=data[i];
        divi += (1/(data[i]));
        if(data[i]>max) max=data[i];
        if(data[i]<min) min=data[i];
    }
    result[0] = sum/N ;
    result[1] = sqrt((Square/N)-((sum/N)*(sum/N)));
    result[2] = pow(multi,1.00/N);
    result[3] = N/divi ;
    result[4] = max ;
    result[5] = min ;
}