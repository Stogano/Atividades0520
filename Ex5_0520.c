void inverter_string(char *str) {
    char *inicio = str;
    char *fim = str;


    while (*fim != '\0') {
        fim++;
    }
    fim--; 


    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}