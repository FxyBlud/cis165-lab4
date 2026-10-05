#include <iostream>
using namespace std;
int main()
{
    double score1 = 28;
    double score2 = 32;
    double score3 = 37;
    double score4 = 24;
    double score5 = 33;
    
    double sum = score1 + score2 + score3 + score4 + score5;
    double average = sum / 5;
    
    cout << "Average: " << average << endl;
    return 0;
}
