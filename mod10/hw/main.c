/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Use of PlaylistNode
 *
 *        Version:  1.0
 *        Created:  03/26/2019 10:04:25 AM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.out -lm
 *          Usage:  ./main.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "PlaylistNode.h"

// Constants

// Function Prototypes
void PrintMenu(char playlistTitle[]);

// Main Function
int main(int argc, char* argv[])
{
    char playlistTitle[50];
    // 1) Prompt user for playlist title. Use fgets, and do not forget to
    // eliminate the end-of-line char
    printf("Enter playlist's title:\n");
    fgets(playlistTitle, 50, stdin);
    playlistTitle[strlen(playlistTitle) - 1] = '\0';
    // 2) Output playlist menu options
    PrintMenu(playlistTitle);


    return 0;
}
// Function Definitions

void PrintMenu(char playlistTitle[])
{
    // Create a bunch of temp variables: chars, ints, and PlaylistNode(pointers)
    char menuOp = ' ';
    // Output menu option
    // Create a loop to print your options
    while(menuOp != 'q')
    {
        printf("%s PLAYLIST MENU\n", playlistTitle);  // TODO: Remove before upload to zybooks
        // Check for valid choices
        printf("a - Add song\n");
        printf("r - Remove song\n");
        printf("c - Change position of song\n");
        printf("s - Output songs by specific artist\n");
        printf("t - Output total time of playlist (in seconds)\n");
        printf("o - Output full playlist\n");
        printf("q - Quit\n");

        printf("Choose an option:\n");
        scanf(" %c\n", &menuOp);
        // Set corresponding menu action:
        switch (menuOp)
        {
            case 'a':
                printf("add song");
                break;
            case 'r':
                printf("Remove song");
                break;
            case 'c':
                printf("Change position of song");
                break;
            case 's':
                printf("Output songs by specific artist");
                break;
            case 't':
                printf("Output total time of playlist (in seconds)");
            case 'o':
                printf("Output full playlist");
                break;
            case 'q':
                printf("Quit");
                break;
                menuOp = 'q'; // TODO:Remoe, this is only for testing
        }
    }// end of loop
    return;
}

