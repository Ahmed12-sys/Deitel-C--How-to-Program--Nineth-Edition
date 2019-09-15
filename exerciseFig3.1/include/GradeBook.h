#ifndef GRADEBOOK_H
#define GRADEBOOK_H


class GradeBook
{
    public:
        /** Default constructor */
        GradeBook();
        /** Default destructor */
        virtual ~GradeBook();

        /** Access CourseName
         * \return The current value of CourseName
         */
        string GetCourseName() { return CourseName; }
        /** Set CourseName
         * \param val New value to set
         */
        void SetCourseName(string val) { CourseName = val; }

    protected:

    private:
        string CourseName; //!< Member variable "CourseName"
};

#endif // GRADEBOOK_H
