#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(void)
{
    char g[19][166]=
    {  /*          1         2         3         4         5*/
        /*123456789012345678901234567890123456789012345678901*/
        {" DDDDDDDDDDDDDDDDDDDDDDDD                AAAAAAAAAAAAAAA        MMMMMMMA                MMMMMMMM NNNNN                 NNNNN                              \0"},/*0*/
        {" DDDD             DDDDDDDDD             AAAAAA     AAAAAA       MMMMM  MM              MM  MMMMM NNNNNN                NNNNN                              \0"},/*1*/
        {" DDDD                DDDDDDDD          AAAAA         AAAAA      MMMMM   MM            MM   MMMMM NNNNN N               NNNNN                              \0"},/*2*/
        {" DDDD                  DDDDDDD        AAAAA           AAAAA     MMMMM    MM          MM    MMMMM NNNNN  N              NNNNN                              \0"},/*3*/
        {" DDDD                       DDDD     AAAAA             AAAAA    MMMMM     MM        MM     MMMMM NNNNN   N             NNNNN                              \0"},/*4*/
        {" DDDD                       DDDDD   AAAAA               AAAAA   MMMMM      MM      MM      MMMMM NNNNN    N            NNNNN                              \0"},/*5*/
        {" DDDD                       DDDDD  AAAAA                 AAAAA  MMMMM       MM    MM       MMMMM NNNNN     N           NNNNN                              \0"},/*6*/
        {" DDDD                       DDDDD AAAAA                  AAAAAA MMMMM        MM  MM        MMMMM NNNNN      N          NNNNN                              \0"},/*7*/
        {" DDDD                       DDDDD AAAAAAAAAAAAAAAAAAAAAAAAAAAAA MMMMM         MMMM         MMMMM NNNNN       N         NNNNN                              \0"},/*8*/
        {" DDDD                       DDDDD AAAAAAAAAAAAAAAAAAAAAAAAAAAAA MMMMM                      MMMMM NNNNN        N        NNNNN                              \0"},/*9*/
        {" DDDD                       DDDDD AAAAAAAAAAAAAAAAAAAAAAAAAAAAA MMMMM                      MMMMM NNNNN         N       NNNNN                              \0"},/*0*/
        {" DDDD                       DDDDD AAAAA                   AAAAA MMMMM                      MMMMM NNNNN          N      NNNNN                              \0"},/*1*/
        {" DDDD                       DDDDD AAAAA                   AAAAA MMMMM                      MMMMM NNNNN           N     NNNNN                              \0"},/*2*/
        {" DDDD                       DDDD  AAAAA                   AAAAA MMMMM                      MMMMM NNNNN            N    NNNNN                              \0"},/*3*/
        {" DDDD                       DDDD  AAAAA                   AAAAA MMMMM                      MMMMM NNNNN             N   NNNNN                              \0"},/*4*/
        {" DDDD                    DDDDDD   AAAAA                   AAAAA MMMMM                      MMMMM NNNNN              N  NNNNN                              \0"},/*5*/ 
        {" DDDD                 DDDDDDDD    AAAAA                   AAAAA AAAAA                      MMMMM NNNNN               N NNNNN                              \0"},/*6*/
        {" DDDD              DDDDDDDD       AAAAA                   AAAAA MMMMM                      MMMMM NNNNN                NNNNNN                              \0"},/*7*/
        {" DDDDDDDDDDDDDDDDDDDDDDDDD        AAAAA                   AAAAA MMMMM                      MMMMM NNNNN                 NNNNN                              \0"} /*8*/
    };
    int a;
    while(1)
    {
        for(a=0;a<20;a++)
        {
           printf(ANSI_COLOR_YELLOW"%s",g[a]);
           printf("\n");
        }
        usleep(100000);
    }
    return 0;
}

