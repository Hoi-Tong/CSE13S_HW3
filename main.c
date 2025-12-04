#include "string2.h"
#include <stdio.h>

int main(void) {
    /* ───────── strlen checks ───────── */
    strlen("abc");
    strlen("abcd");
    strlen(NULL);
    strlen("");
    strlen(" ");
    strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    strlen("aa\0");
    strlen("a\n");

    /* ───────── strstr checks ───────── */
    strstr("abc", "a");
    strstr("abc", "d");
    strstr(NULL, "a");
    strstr(NULL, NULL);
    strstr("abc", NULL);
    strstr("abc", "");
    strstr("abc", "abcde");
    strstr("abc", "b");
    strstr("abc", "c");

    /* ───────── strncpy checks ───────── */
    char buffer1[10]; /*when src is less than n*/
    strncpy(buffer1, "ab", 5);

    char buffer2[10]; /*when src is equal to n*/
    strncpy(buffer2, "abcde", 5);

    char buffer3[10]; /*when src is longer than n*/
    strncpy(buffer3, "abcdefgh", 5);

    char buffer4[10]; /*when src is NULL*/
    strncpy(buffer4, NULL, 4);

    char buffer5[10]; /*when n is 0 and src is NULL*/
    strncpy(buffer5, NULL, 2);

    char buffer6[10];
    strncpy(buffer6, "aaa", 0);

    char buffer7[10];
    strncpy(buffer7, "aaa", 1);

    char buffer8[10];
    strncpy(buffer8, "", 3);

    char buffer9[10];
    strncpy(buffer9, "aa\n", 3);

    /* ───────── strcmp checks ───────── */
    strcmp("abc", "abc");
    strcmp("", "");

    strcmp(NULL, NULL);

    strcmp("ab", "yz");
    strcmp("abc", "abz");
    strcmp("", "a");

    strcmp("yz", "ab");
    strcmp("abz", "abc");
    strcmp("a", "");

    strcmp("abc", "acc");

    return 0;
}