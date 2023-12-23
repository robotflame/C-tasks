#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;

class Student {
public:
    string name;
    map<string, char> courses;
};

int main() {
    vector<Student> students;

    string name;

    cout << "Name: ";
    getline(cin, name);

    while (name != "stop")
    {
        string course_name;

        cout << "course names: ";
        getline(cin, course_name);
        while (course_name != "stop")
        {
            char grade;
            cout << "Grade: ";
            cin >> grade;
            cin.ignore();

            Student new_student;
            new_student.name = name;
            new_student.courses.insert({course_name, grade});

            students.push_back(new_student);

            cout << "course name: ";
            getline(cin, course_name);
        }
        cout << "Name: ";
        getline(cin, name);
    }

    if (!students.empty()) {
        for (auto i = students.begin(); i != students.end(); ++i)
            for (auto j = i->courses.begin(); j != i->courses.end(); ++j) {
                cout << i->name << " - " << j->first << " - " << j->second << "\n";
            }

    }

    return 0;
}