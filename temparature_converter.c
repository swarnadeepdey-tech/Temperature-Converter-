#include<stdio.h>

//function declaration
void Cel(int p, int n, float b, float a[10], float c);
void Fah(int q, int m, float d[10], float e, float f);
void Kel(int r, int o, float g[10], float h, float i);

int main()
{
    int s, p, q, r, n, m, o;
    float a[10], b, c, d[10], e, f, g[10], h, i;

    printf("In which scale you want to give the temperature:-\n1.Celsius\n2.Fahrenheit\n3.Kelvin\nChoose the number:-");
    scanf("%d", &s);

    switch(s){
        case 1:
            //function call
            Cel(p, n, b, a, c);
            break;

        case 2:
            //function call
            Fah(q, m, d, e, f);
            break;

        case 3:
            //function call
            Kel(r, o, g, h, i);
            break;

        default:
            printf("\nChoose the correct number");
    }
}

void Cel(int p, int n, float b, float a[10], float c)
{
    printf("How many temperatures you want to convert (max 10): ");
    scanf("%d", &n);

    if(n < 10){
        for(int i = 0; i < n; i++){
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &a[i]);
        }

        printf("In which scale you want the result:-\n1.Fahrenheit\n2.Kelvin\nChoose the number:-");
        scanf("%d", &p);

        switch(p){
            case 1:
                for(int i = 0; i < n; i++){
                    b = 1.8 * a[i];
                    b += 32;
                    printf("%.2f C = %.2f F\n", a[i], b);
                }
                break;

            case 2:
                for(int i = 0; i < n; i++){
                    c = a[i] + 273.15;
                    printf("%.2f C = %.2f K\n", a[i], c);
                }
                break;

            default:
                printf("Choose the correct number");
        }
    }
    else {
        printf("Enter the value between or equal to 10");
    }
}

void Fah(int q, int m, float d[10], float e, float f)
{
    printf("How many temperatures you want to convert (max 10): ");
    scanf("%d", &m);

    if(m <= 10){
        for(int i = 0; i < m; i++){
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &d[i]);
        }

        printf("In which scale you want the result:-\n1.Celsius\n2.Kelvin\nChoose the number:-");
        scanf("%d", &q);

        switch(q){
            case 1:
                for(int i = 0; i < m; i++){
                    e = d[i] - 32;
                    e *= 0.5555;
                    printf("%.2f F = %.2f C\n", d[i], e);
                }
                break;

            case 2:
                for(int i = 0; i < m; i++){
                    d[i] -= 32;
                    f = d[i] * 5 / 9;
                    f += 273.15;
                    printf("%.2f F = %.2f K\n", d[i] + 32, f);
                }
                break;

            default:
                printf("Choose the correct number");
        }
    }
    else {
        printf("Enter the value between or equal to 10");
    }
}

void Kel(int r, int o, float g[10], float h, float i)
{
    printf("How many temperatures you want to convert (max 10): ");
    scanf("%d", &o);

    if(o <= 10){
        for(int i = 0; i < o; i++){
            printf("Enter the temperature in Kelvin: ");
            scanf("%f", &g[i]);
        }

        printf("In which scale you want the result:-\n1.Celsius\n2.Fahrenheit\nChoose the number:-");
        scanf("%d", &r);

        switch(r){
            case 1:
                for(int i = 0; i < o; i++){
                    h = g[i] - 273.15;
                    printf("%.2f K = %.2f C\n", g[i], h);
                }
                break;

            case 2:
                for(int j = 0; j < o; j++){
                    g[j] -= 273.15;
                    i = g[j] * 9 / 5;
                    i += 32;
                    printf("%.2f K = %.2f F\n", g[j] + 273.15, i);
                }
                break;

            default:
                printf("Choose the correct number");
        }
    }
    else {
        printf("Enter the value between or equal to 10");
    }
}
