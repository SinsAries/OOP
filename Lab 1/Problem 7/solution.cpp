#include <bits/stdc++.h>

using namespace std;

class Student {
    string full_name, study_strength;
    float math_points, physics_points, chemistry_points, average_points;
public:
    void init() {
        do {
            cout << "Enter full name: ";
            getline(cin, full_name);
        } while(!correct_name_format(full_name));

        do {
            cout << "Enter math points: ";
            cin >> math_points;
        } while(math_points < 0 || math_points > 10);

        do {
            cout << "Enter physics points: ";
            cin >> physics_points;
        } while(physics_points < 0 || physics_points > 10);

        do {
            cout << "Enter chemistry points: ";
            cin >> chemistry_points;
        } while(chemistry_points < 0 || chemistry_points > 10);

        average_points = (2 * math_points + physics_points + chemistry_points) / 4;

        if (average_points >= 9)
            study_strength = "Excellent";
        else if (average_points >= 8)
            study_strength = "Good";
        else if (average_points >= 6.5)
            study_strength = "Ok";
        else if (average_points >= 5)
            study_strength = "Average";
        else
            study_strength = "Weak";
    }
    float get_math_points() {
        return math_points;
    }
    float get_average() {
        return average_points;
    }
    bool containsName(const string& keyword) const {
        string lowerName = full_name, lowerKeyword = keyword;
        transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
        transform(lowerKeyword.begin(), lowerKeyword.end(), lowerKeyword.begin(), ::tolower);
        return lowerName.find(lowerKeyword) != string::npos;
    }
    void print_inform() {
        cout << "Full name: " << full_name << '\n';
        cout << "Math points: " << math_points << '\n';
        cout << "Physics points: " << physics_points << '\n';
        cout << "Chemistry points: " << chemistry_points << '\n';
        cout << "Average points: " << average_points << '\n';
        cout << "Study strength: " << study_strength << '\n';
    }
private:
    bool correct_name_format(string name) {
        if (name.size() < 1) 
            return false;
        for (int i = 0; i < name.size(); i++)
            if(name[i] >= '0' && name[i] <= '9') 
                return false;
        return true;
    }
};

int main() {
    vector<Student> students;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << '\n';
        Student s;
        s.init();
        students.push_back(s);
    }

    auto maxStudent = max_element(students.begin(), students.end(),
        []( Student a, Student b) {
            return a.get_average() < b.get_average();
        });
    cout << "Student with highest average points: " << maxStudent->get_average() << '\n';

    /*
     * Search for a student by name
     */
    string searchName;
    cin.ignore();  // Ignore the newline character left by cin
    cout << "Enter the name to search: ";
    getline(cin, searchName);
    cout << "Search results:\n";
    bool found = false;
    for (auto student : students) {
        if (student.containsName(searchName)) {
            student.print_inform();
            found = true;
        }
    }
    if (!found) {
        cout << "No student found with the name " << searchName << '\n';
    }

    auto minMathScore = min_element(students.begin(), students.end(),
        [](Student a, Student b) {
            return a.get_math_points() < b.get_math_points();
        })->get_math_points();
    cout << "Students with lowest math score:\n";
    for (auto student : students) {
        if (student.get_math_points() == minMathScore) {
            student.print_inform();
        }
    }
}