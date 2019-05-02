#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int k=200;
    int c=900;
    int p=2700;
    
    float array_new[200];
    float array_old[200];
    float delta_t=0.5;
    float delta_x=0.01;
    float n=k*c/p;
    float T=0.0;
    float t=0.0;

  for(int i=0; i<200; i++){
    for(int t=0; t<200; t++){
        
        if((i=0)&&(i=200)){
          array_old[i]=300;
        }
        
        else{
            array_old[i]=0.0;
        }
    }
  }
    
while (t<100){
    for (int i=1; i<200; i++){
             T = (array_old[i+1]+array_old[i-1]-2*array_old[i]);
             array_new[i]=array_old[i]+T*n*(delta_t/delta_x*delta_x);
       }
        t=t+delta_t;
    for (int i=1; i<200; i++){
        array_old[i]=array_new[i];
    }
    
    ofstream outfile;
    outfile.open("calor.dat");
    for(int i=0;i<200;i++){
      outfile << array_old[i] << i << endl;
    }
    outfile.close();
    return 0;
    }
}
