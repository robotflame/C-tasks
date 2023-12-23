
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace  std;


int main() {

    vector<float> vector;


    float nr;
    cout << "Write in a number or 0 to quit: " << endl;
    cin >> nr;
    while (nr != 0)
    {
        vector.push_back(nr);
        cout << "Write in a number or 0 to quit: " << endl;
        cin >> nr;
    }



    float average = accumulate( vector.begin(), vector.end(), 0.0)/vector.size();
    cout << "Average : " << average << endl;


    size_t vectorSize = vector.size();


    sort(vector.begin(), vector.end());
    if (vectorSize % 2 == 0)
    {
        cout << "Median : ";
        cout << static_cast<float>((vector[vectorSize / 2-1] + vector[(vectorSize / 2)]) / 2) << endl;
    }
    else
    {
        cout << "Median : ";
        cout << vector[vectorSize / 2] << endl;
    }


    sort(vector.begin(), vector.end(), greater<float>());
    cout << "Descending : ";

    for(int i = 0; i < vectorSize; i++)
    {
        cout << vector[i] << " ";
    }
    return 0;

}