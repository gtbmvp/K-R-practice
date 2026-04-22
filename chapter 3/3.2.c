#include <stdio.h>
#include <stdlib.h>

void escape(const char *s, char *t) {
    int i = 0, k = 0;
    while (s[i] != '\0') {
        char current = s[i];
        switch (current) {
            case '\n': {
                t[k] = '\\';
                t[k + 1] = 'n';
                k += 2;
                break;
            }
            case '\t': {
                t[k] = '\\';
                t[k + 1] = 't';
                k += 2;
                break;
            }
            default: {
                t[k] = s[i];
                k++;
            }
        }
        i++;
    }
    
    t[k] = '\0';
}

void unescape(const char *s, char *t) {
    int i = 0, k = 0;
    while (s[i] != '\0') {
        char current = s[i];
        if (current == '\\' && s[i + 1] != '\0') {
            switch (s[++i]) {
                case 'n': {
                    t[k++] = '\n';
                    break;
                }
                case 't': {
                    t[k++] = '\t';
                    break;
                }
                default: {
                    t[k++] = '\\';
                    t[k++] = s[i];
                }
            }
        } else t[k++] = s[i];
        
        i++;
    }
    
    t[k] = '\0';
}

int main() {
    return 0;
}
