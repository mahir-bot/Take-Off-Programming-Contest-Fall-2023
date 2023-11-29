#include <stdio.h>
#include <string.h>

int main() {
    int frac_length;
    scanf("%d", &frac_length);
    char nam[frac_length + 1];
    scanf("%s", nam);
    char murderer_blood[3];
    scanf("%s", murderer_blood);
    int p_length;
    scanf("%d", &p_length);
    int num_poeple;
    scanf("%d", &num_poeple);
    while (num_poeple--) {
        char p_name[p_length + 1];
        scanf("%s", p_name);
        char p_blood[3];
        scanf("%s", p_blood);
        int chck = 0;
        for (int i = 0; i <= p_length - frac_length; ++i) {
            int j;
            for (j = 0; j < frac_length; ++j) {
                if (p_name[i + j] != nam[j]) {
                    break;
                }
            }
            if (j == frac_length)
                chck = 1;
        }
        if (!chck)
            printf("Not guilty\n");
        else if ((p_blood[0] == murderer_blood[0] && p_blood[1] == murderer_blood[1]))
            printf("Guilty\n");
        else
            printf("Suspected\n");
    }
}