#include <iostream>
#include <fstream> 

using namespace std;

long long countLines(ifstream &file){
    long long lineCount = 0;
    string line;
    while(getline(file, line)){
        lineCount++;
    }

    return lineCount;
}

int main(int argc, char const *argv[])
{
    
    if(argc == 1){
        cout<<"Please Mention a file"<<endl;
        return 0;
    }
    int choice;
    for(int i=0;i<argc;i++){
        if(argv[i][0] == '-'){
            if(argv[i][1] == 'c'){
                choice = 0;
            }
            else if(argv[i][1] == 'l'){
                choice = 1;
            }
            else if(argv[i][1] == 'w'){
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
            if(choice == 1){
                cout<<countLines(file)<<" "<<argv[2]<<endl;
            }
        }else{
            
        }
    }

    
    return 0;
}
