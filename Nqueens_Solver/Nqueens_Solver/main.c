/*
 * File:   main.cpp
 * Author: j4-smith
 *N-Queens example in C
 * First Created on 25 April 2014, 18:42
 * Modified in light of student progress 
 
 * Rewritten Oct 2015 to use more generic solution structures 
 * and functions with NQueens-specific names that call the functions that modify the
 */


#include <stdio.h>
#include <stdlib.h>
#include "StructureDefinitions.h"
#include "SolutionListOperations.h"
#include "NQueensChecker.h"


candidateSolution workingCandidate;//this one will hold the soltion we arecurrently considering
candidateList  currentListOfCandidates; // this list will store all the soltion we;ve created but not examined yet
candidateList listOfExaminedCandidates; // this is where we will store all the ones we're done with



//************************ don't edit anything above this line***********************//


int main(int argc, const char * argv[])
{
    
    /* the next set of variables get used within our main function
     * but aren't declared globally becuase we don't want the other functions to change them inadvertently */
    int numberOfCompleteSolutionsFound = 0; //simple flag to let us know whether we have stopped
    int numberOfSolutionsExamined = 0; //simple counter
    int indexOfSolutionWeAreLookingAt; //index in list of current solution being examined
    int newLength, valueToAdd; // used when we extend the working candidate
	

    //start off by emptying the lists of candidate solutions
    CleanListsOfSolutionsToStart();
	CleanWorkingCandidate();
    
    /* So now let's start by creating our first solution
     * which we do by filling the values into the variable we declared as the workingCandidate
     * We'll begin by putting the first queen into column ), or specified from the command line
   */
   valueToAdd = 0;
   if(argc==2)
     {
       valueToAdd = atoi(argv[1]);
       if (valueToAdd >=N || valueToAdd <0)
           PrintThisMessageAndExit("Invalid Input");
     }
	   
	
	AddQueenToNextRowInColumn(valueToAdd);
    CalculateNumberOfVulnerableQueensForWorkingCandidate(); //should return zero because there is only one queen:)
    numberOfSolutionsExamined=1;
    
    //and we can put this as our first item in the list to start the process
    AddWorkingCandidateToCurrentList();
    
    
    //Now we will go into a loop examining solutions until we find one that is full and has no vulnerable queens
    
   // end of  statement dealing with search
    
    
    
    
    return 0;
}



