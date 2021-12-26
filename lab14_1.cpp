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

void stat(const double a[],int n,double b[]){

for(int i = 0;i < n;i++){
    b[0] += a[i]/n ;
}
double sum = 0 ,Mean = b[0]; 
for(int i = 0;i < n;i++){
    sum += pow(a[i]-Mean,2) ;
    b[1] = sqrt(sum/n) ;
}
b[2] = 1 ;
for(int i = 0;i < n;i++){
    b[2] *= pow(a[i],1.0/n) ;
}  
double sum1 = 0 ;
for(int i = 0;i < n;i++){
    sum1 += (1.0/a[i]) ;
    b[3] = n/sum1 ;
}
double Max = a[0],Min = a[0] ;
for(int i = 0;i < n;i++){
    if(a[i] > Max){
        Max = a[i] ;
        b[4] = a[i] ;
    }if(a[i] < Min){
        b[5] = a[i] ;
    }
}

}


