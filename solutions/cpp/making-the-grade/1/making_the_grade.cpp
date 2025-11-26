#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> res;
    for ( double score : student_scores){
        res.push_back(static_cast<int> (score));
    }
    return res;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int res = 0;

    for (int score : student_scores){
        if (score < 41){
            res+=1;
        }
    }
    return res;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int range = highest_score - 40;
    
    int dev = range /4;
    
    std::array<int, 4> res {41 , 41+dev, 41+dev*2, 41+dev*3};
    return res;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> res = {};

    for (int i = 0; i < student_scores.size(); i ++){
        int score = student_scores.at(i);
        std::string str_score = std::to_string(score);
        std::string str_i = std::to_string(i+1); 
        res.push_back(str_i + ". " + student_names.at(i) + ": " + str_score);
    }
    return res;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for ( int i = 0; i < student_scores.size(); i++){
        if (student_scores.at(i) == 100){
            return student_names.at(i);
        }
    }
    return "";
}
