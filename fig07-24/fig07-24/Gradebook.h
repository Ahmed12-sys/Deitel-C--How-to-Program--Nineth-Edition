#pragma once

#include <string>

class GradeBook {
public:
	// constants
	static const int students = 10;
	static const int tests = 3;

	GradeBook(std::string, const int[][tests]);

	// SETTERS
	void setCourseName(std::string);

	// GETTERS
	std::string getCourseName();
	int getMinimum();
	int getMaximum();
	double getAverage(const int[], const int);

	void displayMessage();
	void processGrades();
	void outputBarChart();
	void outputGrades();

private:
	std::string courseName;

	int grades[students][tests];
};