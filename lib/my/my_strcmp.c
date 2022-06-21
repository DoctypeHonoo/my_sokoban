/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** function  that compares  the  two  strings  s1 and s2
*/

int special_case(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    if (s1[i] == '\0' && s2[j] != '\0')
        return -1;
    if (s1[i] != '\0' && s2[j] == '\0')
        return 1;
    return 0;
}

int normal_case(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int l1 = 0;
    int l2 = 0;

    while (s1[l1] != '\0')
        l1++;
    while (s2[l2] != '\0')
        l2++;
    while (s1[i] == s2[j]) {
        i++;
        j++;
        if (s1[l1] == s2[l2])
            return 0;
    }
    if (s1[i] > s2[j])
        return 1;
    if (s1[i] < s2[j])
        return -1;
    return 0;
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    if (s1[i] == '\0' || s2[j] == '\0')
        return special_case(s1, s2);
    else
        return normal_case(s1, s2);
}
