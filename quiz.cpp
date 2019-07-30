#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int numberOfRightAnswer = 0;
int numberOfWrongError = 0;

string question;
string answer;
int rightAnswer;

void quiz(string question, string str, int rightAnswer)
{
    //Print quesition
    cout << endl << question << endl << endl;
    
    
    //Split all answers by ;
    stringstream ss(str);
    vector<string> result;
    
    while (ss.good())
    {
        string substr;
        getline(ss, substr, ';');
        result.push_back(substr);
    }
    
    //Print all answers (+ 1, array start at 0)
    for (std::size_t i = 0; i < result.size(); i++)
        std::cout << i + 1 << ". " << result[i] << std::endl;
    
    //get answer
    int a;
    cout << endl << "SVAR: ";
    std::cin >> a;
    
    /*check answer*/
    cout << endl;
    
    if (a == rightAnswer) {
        //print
        cout << "RIGHT ANSWER" << endl;
        numberOfRightAnswer++;
    }
    else {
        cout << "WRONG ANSWER" << endl;
        numberOfWrongError++;
    }
    
    cout << endl;
}

int main() {
    
    
    //Question # 1
    
    question = "What color is the sea?";            //Question
    answer = "Blue;Red;Orange;Yellow";                //All answer separated by ,
    rightAnswer = 1;                                //Witch answer nr is right? Starting from 1
    
    quiz(question, answer, rightAnswer);            //
    
    
    
    //Question # 2
    
    question = "What color is the forrest?";
    answer = "Blue;Red;Green;Yellow";
    rightAnswer = 3;
    
    quiz(question, answer, rightAnswer);
    
    
    
    
    //Print result
    cout << "Number of correct answers: " << numberOfRightAnswer << endl;
    if (numberOfWrongError == 0) {
        cout << "NO ERRORS " << endl;
    }else {
        cout << "Number of incorrect answers " << numberOfWrongError << endl;
    }
    
    return 0;
}
