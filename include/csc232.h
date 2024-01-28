/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2024
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.2023.07.27
 * @date    07/27/2023
 *
 * @copyright Copyright (c) 2023 James R. Daehn
 */

#ifndef MSU_CSC232_H_
#define MSU_CSC232_H_

#define FALSE 0
#define TRUE 1

#define FINISHED_PART_1 TRUE
#define FINISHED_PART_2 TRUE
#define FINISHED_PART_3 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include "expanded_templates.h"

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

const int ROSTER_SIZE(5);

const int NUM_COURSES(3);

double grades[ROSTER_SIZE];

double gradeBook[NUM_COURSES][ROSTER_SIZE];

double maxGrade(int num_elements,double array[]);

int indexOfMaxGrade(int num_rows, int num_columns, double arrays[][NUM_COURSES]);

double maxGrade(int num_elements, double array[]){
        int max = 0;
        for (int i = 0; i<num_elements; i++){
            if (array[max] < array[i]){
                max = i;
            }
        }
        return array[max];
    }


    int indexOfMaxGrade(int num_rows, int num_columns, double arrays[][ROSTER_SIZE]){
        int num_rows_max = 0;
        int num_columns_max = 0;
        for (int i=0; i< num_rows; i++){
            for (int j=0; j<num_columns; j++){
                if (arrays[num_rows_max][num_columns_max]< arrays[i][j]){
                    num_columns_max = j;
                    num_rows_max = i;
                }
            }

        }
        return num_rows_max;
    }


#endif // MSU_CSC232_H_
