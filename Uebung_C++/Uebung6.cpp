#include <unistd.h>
#include <iostream>
#include <sys/wait.h>
using namespace std;
int main () {
    int limit = 50;
    int counter = 0;
    pid_t pid = fork ();
    cout <<" begin " <<endl;
    if(pid == 0){
        cout << "Hier wuerde der Kindprozess arbeiten ..." << endl;
        exit(0);
    }else if(pid > 0){
        sleep (3);
        cout << "Hier meldet sich der Elternprozess ..." << endl;
    }else{
        cout <<"fork failed !"<<endl;
        return -1;
    }
    
    cout <<"end"<<endl;
    return 0;
}