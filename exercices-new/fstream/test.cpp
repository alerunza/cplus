#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream file;
    file.open("file.txt");

    if(file.is_open()){
        
/*         file<<"Micheleeee"<<endl;
        file<<"Aleee"<<endl; */
        string ciao;
        while(getline(file, ciao)){
            cout<<ciao<<endl;
        }
        file.close();
    }

    return 0;
}