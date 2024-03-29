// HackerLand University has the following grading policy:

// Every student receives a grade  in the inclusive range from 0 to 100 .
// Any grade less than 40 is a failing grade.
// Sam is a professor at the university and likes to round each student's  according to these rules:

// If the difference between the grade and the next multiple of 5 is less than 3, round grade  up to the next multiple of 5.
// If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.


vector<int> gradingStudents(vector<int> grades) {
    
    int expected,value;
    
    for(int i=0;i<grades.size();i++){
        if(grades[i]>=38){
        expected = (grades[i] - grades[i]%5)+5;
        value = expected - grades[i];
        
        if(value<3){
            grades[i]= expected;
        }
        
        }
        
    }    
    return grades;
}
