#include <unistd.h>
#include <iostream>
using namespace std;
int main () {
    int limit = 50;
    int counter = 0;
    pid_t pid = fork();
    pid_t pid_2 = fork();
    cout <<" begin " <<endl;

    if(pid_2 == 0 && pid == 0){
        // 2.1 
        //cout << "Kind: " << i << endl;
        cout<<"Enkelkind - Prozess : "<<getpid()<<" Parent : "<<getppid() << endl;
    } else if (!( pid_2 > 0 && pid > 0)){
        cout<<"Kind - Prozess : "<<getpid()<<" Parent : "<< getppid()<<endl;
    } else if(pid > 0){
        // 2.1
        //cout << " Eltern : " << i << endl;
        cout<<"Eltern - Prozess : "<<getpid()<<" Parent : "<<getppid()<<endl;
    }else{
        cout <<"fork failed !"<<endl;
        return -1;
    }
    cout <<"end"<<endl;
    return 0;
}