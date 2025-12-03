#include "string2.h"
#include <stdio.h>

int main(void) {
    /* ───────── strlen checks ───────── */
    const char *str = "abc";
    assert(strlen(str)==3);
    
    assert(strlen(NULL) == 0);
    assert(strlen("")==0);
    assert(strlen(" ")== 1
)
    /* ───────── strstr checks ───────── */
    assert(strstr("abc", "a")== 0);
    assert(strstr("abc", "d")==NULL);
    assert(strstr(NULL, "a")== NULL);
    assert(strstr(NULL, NULL)==NULL);
    assertEqual(strstr("abc", NULL)=="abc");

    /* ───────── strncpy checks ───────── */
    char buffer1[5]; /*when src is less than n*/
    strncpy(buffer1, "ab", 5);
    assertEqual(buffer1, "ab\0\0");

    char buffer2[5]; /*when src is equal to n*/
    strncpy(buffer2, "abcde", 5);
    assertEqual(buffer2, "abcde");

    char buffer3[11]; /*when src is longer than n*/
    strncpy(buffer3, "abcdefghijk", 5);
    assertEqual(buffer3, "abcdefghijk");

    char buffer4[5]; /*when src is NULL*/
    strncpy(buffer4, NULL, 4);
    assertEqual(buffer4, "\0\0\0\0");

    char buffer5[1]; /*when n is 0 and src is NULL*/
    strncpy(buffer5, NULL, 0);
    assertEqual(buffer5, "");

    /* ───────── strcmp checks ───────── */
    assert(strcmp("abc", "abc")==0);
    assert(strcmp("", "")==0);

    assert(strcmp(NULL, NULL)==0);

    assert(strcmp("ab", "yz") < 0);
    assert(strcmp("abc", "abz") < 0);
    assert(strcmp("", "a") < 0);

    assert(strcmp("yz", "ab") > 0);
    assert(strcmp("abz", "abc") > 0);
    assert(strcmp("a", "") > 0);

    return 0;
}