#include<iostream>
using namespace std;

void main() {
    char com[30];
    int i=2,a=0;

    // Prompt user to input a comment
    cout<<"\n Enter Data:";
    gets(com);

    // Check if the first character is a forward slash
    if(com[0]=='/') {

        // Check if the second character is also a forward slash
        if(com[1]=='/')
            cout<<"\n It is a comment";
        else if(com[1]=='*') { // Check if the second character is an asterisk

            // Loop through the comment to check if it ends with "*/"
            for(i=2;i<=30;i++) {
                if(com[i]=='*' && com[i+1]=='/') { // If "*/" is found, it is a comment
                    cout<<"\n It is a comment";
                    a=1;
                    break;
                }
                else // If not found, continue searching
                    continue;
            }

            // If "*/" is not found within the comment, it is not a comment
            if(a==0)
                cout<<"\n It is not a comment";
        }
        else // If the second character is neither "/" nor "*", it is not a comment
            cout<<"\n It is not a comment";
    }
    else // If the first character is not a forward slash, it is not a comment
        cout<<"\n It is not a comment";
}
