#include <unistd.h>
#include <iostream>
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
        cout << "Ich warte nicht auf den anderen Prozess !" << endl;
    }else{
        cout <<"fork failed !"<<endl;
        return -1;
    }

    cout <<"end"<<endl;
    return 0;
}


// Kontrolle mit ps -p und die in Konsole angezeigten pid