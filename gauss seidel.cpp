
#include<iostream>
#include <cstdlib>

using namespace std;
int main(){
    int a,b;
    cout<<"enter the equation in diagonally dominant form:"<<endl;

       cout<<"enter the number of equations you have:";
       cin>>a;
        cout<<"enter the number of variables you have:";
        cin>>b;
       double m[a][b+1];
       for(int i=0 ;i<a;i++){
    for(int j=0;j<=b;j++){
            if(j==b){cout<<endl<<"RHS of equation:";}
            else {cout<<endl<<"matrix["<<i<<"]["<<j<<"] =";}
        cin>>m[i][j];
    }
}

double m1[b],sum1[b];

for(int i=0;i<b;i++){
    m1[i]=0;
    sum1[i]=0;
}




  for(int i=0 ;i<6;i++){

    for(int j=0;j<a;j++){
            for(int k=0;k<b;k++){

             if(j!=k){
        sum1[j]+=m[j][k]*m1[k];

        }

        }
            m1[j]=(m[j][b]-(sum1[j]))/m[j][j];
            sum1[j]=0;










    } cout<<endl<<"after iter "<<i;
    for(int i=0;i<b;i++){

    cout<<endl<<"ans: "<<m1[i];}

    }



}
