#include <string>

class GradeBook
{
    public:
         explicit GradeBook( std::string, std::string );
         void setCourseName( std::string );
         void setInstructorName (std::string);
         std::string getCourseName() const;
         std::string getInstructorName () const;
         void displayMessage() const;

    private:
        std::string courseName;
        std::string InstructorName;
};
