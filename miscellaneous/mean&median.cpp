#include<bits/stdc++.h>
using namespace std;
void readNumber(vector<double> &numberList, int amount) {
    double number;
    for (unsigned int i = 0; i < amount; i++) {
        cin >> number;
        numberList.push_back(number);

    }

}
double calculateMean(const vector<double> &numberList) {
    double sum = 0, mean;
    for (unsigned int i = 0; i < numberList.size(); i++) {
        sum = sum + numberList[i];
    }
    mean = sum / numberList.size();
    return mean;
}

double determineMedian(const vector<double> &numberList) {
    sort(numberList.begin(), numberList.end());
    double median;
    if (numberList.size() % 2 == 0) {
        median = (numberList[numberList.size() / 2 - 1] + numberList[numberList.size() / 2]) / 2;
    } else {
        median = numberList[numberList.size() / 2];
    }
    return median;
}

int main() {
    double input;
    cout << "How many numbers are there in the list?" << endl;
    cin >> input;
    if (input < 1) {
        cerr << "Error : Please set one number" << endl;
        return 1;
    }
    int amount = floor(input);
    vector<double> numberList;
    cout << "Please give " << amount << "numbers." << endl;
    readNumber(numberList, amount);
    double mean = calculateMean(numberList);
    double median = determineMedian(numberList);

    cout << "The Mean of this list of numbers is " << mean << ". " << endl;
    cout << "The Median of this list of numbers is " << median << "." << endl;
    return 0;


}