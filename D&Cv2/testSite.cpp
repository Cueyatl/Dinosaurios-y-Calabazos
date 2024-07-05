#include <iostream>
#include <random>
#include <ctime>
#include <string>
using namespace std;

int main() {
    // Define probabilities for each option
    double prob_AtaqueUno[] = {0.5, 0.16, 0.16, 0.16};  // Numbers 1, 2, 3, 4 probabilities
    double prob_AtaqueDos[] = {0.5, 0.16, 0.16, 0.16};  // Numbers 1, 2, 3, 4 probabilities
    double prob_AtaqueTres[] = {0.5, 0.16, 0.16, 0.16};  // Numbers 1, 2, 3, 4 probabilities
    double prob_AtaqueCuatro[] = {0.5, 0.16, 0.16, 0.16};  // Numbers 1, 2, 3, 4 probabilities
    

    // Get user input for option (A or B)
    char chosen_option;
    cout << "Enter option (A or B): ";
    cin >> chosen_option;

    // Select probabilities based on chosen option
    double* probabilities = (chosen_option == 'A') ? prob_AtaqueUno : prob_AtaqueDos:;
    
    

    // Seed random number generator with current time for different sequences each run
    default_random_engine generator(time(NULL));
    uniform_real_distribution<double> distribution(0.0, 1.0); // Generate random numbers between 0.0 (inclusive) and 1.0 (exclusive)

    // Generate a random number between 0 and 1
    double random_number = distribution(generator);

    // Select the chosen number based on cumulative probabilities
    double cumulative_probability = 0;
    int chosen_number;
    for (int i = 0; i < 4; ++i) {
        cumulative_probability += probabilities[i];
        if (random_number < cumulative_probability) {
            chosen_number = i + 1; // Numbers start from 1
            break;
        }
    }

    // Print the chosen number
    cout << "Chosen number (option " << chosen_option << "): " << chosen_number << endl;

    return 0;

}


// // #include <iostream>
// #include <cstdlib>
// // #include <ctime>

// using namespace std;

void setProbabilities(double probabilities[], char option) {
    switch(option) {
        case 'a':
            probabilities[0] = 0.6;
            probabilities[1] = 0.1;
            probabilities[2] = 0.1;
            probabilities[3] = 0.1;
            break;
        case 'b':
            probabilities[0] = 0.1;
            probabilities[1] = 0.7;
            probabilities[2] = 0.1;
            probabilities[3] = 0.1;
            break;
        case 'c':
            probabilities[0] = 0.1;
            probabilities[1] = 0.1;
            probabilities[2] = 0.7;
            probabilities[3] = 0.1;
            break;
        case 'd':
            probabilities[0] = 0.1;
            probabilities[1] = 0.1;
            probabilities[2] = 0.1;
            probabilities[3] = 0.7;
            break;
        default:
            cout << "Invalid option selected." << endl;
            exit(1);
    }
}

int getRandomNumber(double probabilities[]) {
    double r = ((double) rand() / (RAND_MAX));
    double cumulativeProbability = 0.0;

    for (int i = 0; i < 4; ++i) {
        cumulativeProbability += probabilities[i];
        if (r < cumulativeProbability) {
            return i + 1;
        }
    }
    return 4; // Should not reach here if probabilities sum to 1
}

// int main() {
//     srand(time(0));

//     char option;
//     cout << "Enter option (a, b, c, or d): ";
//     cin >> option;

//     double probabilities[4] = {0};

//     setProbabilities(probabilities, option);

//     int randomNumber = getRandomNumber(probabilities);

//     cout << "Random number based on option " << option << ": " << randomNumber << endl;

//     return 0;
// }
