/*
 * =====================================================================================
 *
 *       Filename:  students.c
 *
 *    Description:  Create a dynamically allocated
 *
 *        Version:  1.0
 *        Created:  03/21/2019 08:45:53 AM
 *       Revision:  none
 *       Compiler:  gcc students.c -o students.out -lm
 *          Usage:  ./students.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define MAX 50
typedef struct Student
{
    char fName[50];
    int idNum;
    struct Student* next;
} Student;
// Function Prototypes
void AddStudent(Student* thisStudent, char name[], int id, Student* newStudent);
void LinkStudent(Student* thisStudent, Student* newStudent);
void DisplayStudent(const Student* st);


// Main Function
int main(int argc, char* argv[])
{
    int id = 0;
    char name[MAX] = "";
    char ans = 'y';
    char dummy;
    //Student st;

    Student *headRec = NULL;
    Student *nextRec = NULL;
    
    Student *currentRec = NULL;
    while(ans == 'y')
    {
        // first round headRec = Null
        if(headRec != NULL)
        {
            LinkStudent(headRec, nextRec);
        }
        // Allocate the memory for the new record
        currentRec = (Student*)malloc(sizeof(Student));
        // first round headRec == NULL
        //save the address of the first record
        if(id == 0)         
        {
            headRec = currentRec;

        }

        printf("Student %d\n", id + 1);
        id = id + 1;
        printf("Enter your name:\n");
        fgets(name, MAX, stdin);
        name[strlen(name)-1] = '\0'; // Eliminate EOL character
        // Save it to a Student struct
        AddStudent(headRec, name, id, NULL);
        // Do you want another record [y|n]
        printf("Do you want another record [y|n]\n");
        scanf(" %c%c", &ans, &dummy);
        fflush(stdin);
    }
    // Display ALL student records
    while(currentRec != NULL)
    {
        //Displayone record;
        DisplayStudent(currentRec);
        // Get the next record
        currentRec = currentRec->next;
    }
    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddStudent
 *  Description:  Populate a Student structure
 * =====================================================================================
 */
void AddStudent(Student* thisStudent, char name[], int id, Student* newStudent)
{
    strcpy(thisStudent ->fName,name);
    thisStudent->idNum = id;
    thisStudent->next = newStudent; // set the address fo the next member
    
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Displaystudent
 *  Description:  Display a Student Record
 * =====================================================================================
 */
void DisplayStudent(const Student* st)
{
    printf("Hi [%s] student with id[%d]\n",
            st->fName, st->idNum);
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LinkStudent
 *  Description:  Connect one nodee/structure to another
 * =====================================================================================
 */
void LinkStudent(Student* thisStudent, Student* newStudent)
{
    // Connect the records
//    Student* tmp = NULL;                 // dummy
//    tmp = thisStudent->next;             // currently should be NULL
//    newStudent->next = tmp;              // set is end of the list
    
    thisStudent->next = newStudent;      // Connect this to next record
    return;
}
