#include <iostream>    
#include <string>  
#include<cstring>                         // NOT COMPLETE
using namespace std;
int lives = 5;
int score = 0;
class LV1
{
    private:
    /*
    int number;
    string words[number];
    int score;
    int lives;
    public:
    game(int x, string * arr, int y, int z)
    {
        number = x;
        score = y;
        lives = z;
        for(int i =0 ; i < x; i++)
        {
            words[i] = arr[i];
        }
    }
    class lv1:class game
    {
        string words[2] = {"late","tale"};
        public:
        lv1() : game(x,words[0],z)
        {
            
        }      
    }
    wordle()
    {

    }
    */
    string words[2] = {"late", "tale"};
    protected:
    string l1;
    string l2;
    string l3;
    string l4;
    int correct;
    int total;
    int limit;
    
    public:
    LV1() {
        correct = 0;
        total = 2;
        limit = 2;     
    }
    virtual void play()
    {    
            while (true) {
            bool match = false;
            string guess;
            cout << "Total words you have to guess: " << total << endl;
            cout<<"Total lives: "<<lives<<endl;
            cout << "Enter a word formed by these letters" << endl;
        //    cout << "(1) a\t(2) t\t(3) l\t(4) e" << endl;     REMOVE LATER
            cout<<words[0][2]<<" "<<words[0][3]<<" "<<words[0][0]<<" "<<words[0][1]<<endl;
            cin >> guess;

            for (int i = 0; i<total; i++) {
                if (guess == words[i]) {
                    correct++;
                    total--;
                    match = true;
                    score++;
                    cout<<"Nice you got that right\n";
                    cout<<"Your score is: "<<score<<endl;

                }
            }

            if (!match) {
                lives--;
                cout<<"Yikes! Be careful you got that wrong\n";
                cout<<"You have "<<lives<<" left\n";
            }

            if (correct == limit) {
                cout<<"Congrats you guessed them all right\n";
                score=score+2;
                cout<<"The score is: "<<score;
                break;
            }
            if (lives == 0)
            {
                cout<<"You have lost\n";
                break;
            }
        }

    }
};
//string array[3] = {"late", "tale" , "alte"};  //remove this later on
void introline()
{
    for(int i=0;i<139;i++)
    {
        cout<<"-";
    }
}
void lvlmenu()
{
    cout<<"LV: 1\n";
    cout<<"LV: 2\n";
    cout<<"LV: 3\n";
    cout<<"LV: 4\n";
}
class LV2 :public LV1
{
    private:
    string words[4] = {"post","pots","spot","stop"};
    public:
    LV2()
    {
        correct = 0;
        total = 4;
        limit = 4;
    }
    void play()
    {
         while (true) {
            bool match = false;
            string guess;
            cout << "Total words you have to guess: " << total << endl;
            cout<<"Total lives: "<<lives<<endl;
            cout << "Enter a word formed by these letters" << endl;
        //    cout << "(1) a\t(2) t\t(3) l\t(4) e" << endl;     REMOVE LATER
            cout<<words[0][3]<<" "<<words[0][1]<<" "<<words[0][0]<<" "<<words[0][2]<<endl;
            cin >> guess;

            for (int i = 0; i<total; i++) {
                if (guess == words[i]) {
                    correct++;
                    total--;
                    match = true;
                    score++;
                    cout<<"Nice you got that right\n";
                    cout<<"Your score is: "<<score<<endl;

                }
            }

            if (!match) {
                lives--;
                cout<<"Yikes! Be careful you got that wrong\n";
                cout<<"You have "<<lives<<" left\n";
            }

            if (correct == limit) {
                cout<<"Congrats you guessed them all right\n";
                score=score+2;
                cout<<"The score is: "<<score;
                break;
            }
            if (lives == 0)
            {
                cout<<"You have lost\n";
                break;
            }
        }

    }


};
void wordle()
{
     introline();
    cout<<"\n";
    cout<<"\t\t\t\t\t\t\tWELCOME TO WORDLY"<<endl;
    cout<<"\t\t\t\t\t\tThe best guessing game on net\n";
    introline();
    cout<<"\nRULES OF THE GAME:\n";
    cout<<"1) You will be given 4 letters and you would have to come up with a word from combination of those 4 letters\n2) You will have to guess a total of two to three words per level to move on\n3) You will have a total of five lives\n\n";
    introline();
    cout<<"\n";
    lvlmenu();
    cout<<"\nWelcome to LV1\n";
    LV1 game;
    game.play();
    if(lives!=0)
    {
        cout<<"\nWelcome to LV2\n";
        LV2 game2;
        game2.play();
    }

}

int main()
{
    // introline();
    // cout<<"\n";
    // cout<<"\t\t\t\t\t\t\tWELCOME TO WORDLY"<<endl;
    // cout<<"\t\t\t\t\t\tThe best guessing game on net\n";
    // introline();
    // cout<<"\nRULES OF THE GAME:\n";
    // cout<<"1) You will be given 4 letters and you would have to come up with a word from combination of those 4 letters\n2) You will have to guess a total of two to three words per level to move on\n3) You will have a total of five lives\n\n";
    // introline();
    // cout<<"\n";
    // lvlmenu();
    // LV1 game;
    // game.play();
    wordle();

    
    
    return 0;
}