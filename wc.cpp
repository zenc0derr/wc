#include <iostream>
#include <fstream> 

using namespace std;


int main(int argc, char const *argv[])
{
    
    if(argc == 1){
        cout<<"Please Mention a file"<<endl;
        return 0;
    }

    for(int i=0;i<argc;i++){
        int choice;
        if(argv[i][0] == '-'){
            if(argv[i][2] == 'c'){
                choice = 0;
            }
            else if(argv[i][2] == 'l'){
                choice = 1;
            }
            else if(argv[i][2] == 'w'){
                choice = 2;
            }
        }
    }

    if(argc == 2){
        cout<<"Please Mention a file"<<endl;
        return 0;
    }else{
        ifstream file(argv[2]);
        if(file.is_open()){
            
        }else{
            
        }
    }

    
    return 0;
}
