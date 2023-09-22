#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int score=0;
        string target[10];
        
        for(int i=0;i<10;i++){
            cin>>target[i];

            if(i==0||i==9){
                for(int j=0;j<10;j++){
                    if(target[i][j]=='X')
                    score++;
            }
            }

            else if(i==1||i==8){
                for(int j=1;j<9;j++){
                    if(target[i][j]=='X')
                    score+=2;
            }
            if(target[i][0]=='X') score++;
            if(target[i][9]=='X') score++;
            }

            else if(i==2||i==7){
                for(int j=2;j<8;j++){
                    if(target[i][j]=='X')
                    score+=3;
            }
            if(target[i][0]=='X') score++;
            if(target[i][9]=='X') score++;
            if(target[i][1]=='X') score+=2;
            if(target[i][8]=='X') score+=2;
            }

            else if(i==3||i==6){
                for(int j=3;j<7;j++){
                    if(target[i][j]=='X')
                    score+=4;
            }
            if(target[i][0]=='X') score++;
            if(target[i][9]=='X') score++;
            if(target[i][1]=='X') score+=2;
            if(target[i][8]=='X') score+=2;
            if(target[i][2]=='X') score+=3;
            if(target[i][7]=='X') score+=3;
            }

            else if(i==4||i==5){
                for(int j=4;j<6;j++){
                    if(target[i][j]=='X')
                    score+=5;
            }
            if(target[i][0]=='X') score++;
            if(target[i][9]=='X') score++;
            if(target[i][1]=='X') score+=2;
            if(target[i][8]=='X') score+=2;
            if(target[i][2]=='X') score+=3;
            if(target[i][7]=='X') score+=3;
            if(target[i][3]=='X') score+=4;
            if(target[i][6]=='X') score+=4;
            }

        }
        cout<<score<<'\n';
    }
    return 0;
}
