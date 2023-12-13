#include <unistd.h>
#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;
int main () {
    int limit = 50;
    int counter = 0;
    pid_t pid = fork ();
    cout <<" begin " <<endl;
    if(pid == 0){
        sleep (3);
        cout << " Parent : " << getppid () << endl;
        sleep (3);
    }else if(pid > 0){
        int status ;
        cout << "Jetzt warte ich auf den Kindprozess ." << endl;
        wait(&status);
    }else{
        cout <<"fork failed !"<<endl;
        return -1;
    }
    
    cout <<"end"<<endl;
    return 0;
}