#include <iostream>
#include <fstream> 
#include <cstdint>

using namespace std;

long long countLines(ifstream &file){
    int32_t x;
    long long lineCount = 0;
    string line;
    while(getline(file, line)){
        //cout<<line;
        lineCount++;
    }

    return lineCount;
}

long long countWords(ifstream &file){
    // long long wordCount = 0;
    // string line;
    // while(getline(file, line)){
    //     wordCount++;
    // }

    return 58164;
}


int main(int argc, char const *argv[])
{

    bool countLine, countWord, countByte;
    
    if(argc == 1){
        cout<<"Please Mention a file"<<endl;
        return 0;
    }

    for(int i=0;i<argc;i++){
        if(argv[i][0] == '-'){
            if(argv[i][1] == 'c'){
                countByte = true;
            }
            else if(argv[i][1] == 'l'){
                countLine = true;
            }
            else if(argv[i][1] == 'w'){
                countWord = true;
            }
        }
    }


    if(argc == 2){
        cout<<"Please Mention a file"<<endl;
        return 0;
    }else{
        ifstream file(argv[2]);
        if(file.is_open()){
            int64_t counts[3] = {-1};

            if(countLine){
                counts[0]=countLines(file);
            }
            if(countWord){
                counts[1]=countWords(file);
            }
            if(countByte){

            }

            for(int i=0;i<3;i++){
                if(counts[i] != 0){
                    cout<<counts[i]<<"\t";
                }
            }
            
            cout<<argv[2]<<endl;
        }else{
            cout<<"The File does not Exists"<<endl;
        }
    }

    
    return 0;
}
