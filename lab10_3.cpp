#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include<fstream>


using namespace std;

int main(){
    
    int count = 0 ;
    float sum = 0 ;
    float SOPS = 0;
    string textline;
    ifstream source("score.txt");
    
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        SOPS += pow(atof(textline.c_str()),2);
        count++;
    }
    
    float mean = sum/count;
    cout << "Number of data = "<<count<< "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = "<< sqrt(SOPS/count-(pow(mean,2)));
}