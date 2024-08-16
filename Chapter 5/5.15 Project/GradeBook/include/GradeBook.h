#include <string>

class GradeBook
{
    public:
    explicit GradeBook(std::string );
    void setCourseName(std::string );
    std::string getCourseName() const;
    void displayMessage() const;
    void inputGrades();
    void displayGradeReport();
    double calculateGPA();


    private:
    std::string courseName;
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int fCount;
    double grade_point_average;
};
