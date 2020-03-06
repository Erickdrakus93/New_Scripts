#include <iostream>
#include <string.h>

using namespace std;

int main(void) {
    char s[] = "The mississippi is a long river";
    cout << "s = \" " << s << "\"\n";
    char* p = strchr(s, ' '); // This is the instance  of the pointer function;
    std::cout << "strchr(s, '') points to s[" << p-s <<"].\n";
    p = strrchr(s, 's'); // Here is the update of the instance of p
    std::cout << "strrchr(s, 's') points to s[" << p - s << "].\n";
    p = strchr(s, 's'); // Here we update the p status
    cout << "ctrchr(s, 's') points  to s[" << p - s << "].\n";
    p = strstr(s, "is");
    cout << "strstr(s, \"is\") points to s[" << p - s << "].\n";
    p = strstr(s, "isi"); // Here we update the value of p
    if(p==NULL){
        cout << "strstr(s,\"isi\") returns NULL\n";

    }
}


//Here we can define the subroutine Copy

char* strcopy(char* s1, const *char s2) {
    for (char *p = s1; *s2) {
        *p++ = *s2++;
    }
    *p = '\0';
    return s1;
}

char* strcat(char* s1, const char* s2, int_t n) {
    for (char *end = s1; *end; end++) {
        for (char *ptr = s2; *ptr && p - s2 < n) {
            *end++ = *ptr++;
        }
    }
    *end = '\0';
    return s1;
}

// Here we can use the plural context

void pluralize(char* s) {
    int len = strlen(s);
    char *p = s + len - 1;
    char *q = s + len - 2;
    if (*p == 'h' && (*q == 'c' || *q == 's')) strcat(p, "es");
    else if (*p == 's')
        strcat(p, "es");
    else if (*p == 'y')
        if (isvowel(*q))
            strcat(p, "s");
        else
            strcat(p, "ies");
    else if (*p == "
        if (isvowel(*q))
            strcat(p, "zes");
        else
            strcat(p, "es");
    else
        strcat(p, "s");

}