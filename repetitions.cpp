#include <iostream>
#include <string>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
 
int main(){
    long long max_streak = 1;
    long long new_streak = 1;
    string letters;
    cin >> letters;
 
    for (int i=1;i<letters.length();i++){
        if (letters[i]==letters[i-1])
        {
            new_streak++;
        }
        else{
            if (new_streak > max_streak)
            {
                max_streak = new_streak;
                new_streak = 1;
            }
            else
            {
                new_streak = 1;
            }
        }
 
    }
    if (new_streak > max_streak)
    {
        max_streak = new_streak;
    }
    cout << max_streak << endl;
}
