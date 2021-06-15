#include <stdio.h>

int main () {

  float temp_max, temp_min, var_temp, var, var_maior;
  int hora,nu_leituras;
  int i;



  
  scanf ("%d", &nu_leituras);
  scanf ("%d %f %f", &hora, &temp_max, &temp_min);
  var= temp_max - temp_min;
  
  for (i=0; i<nu_leituras-1;i++) {
    scanf ("%d %f %f", &hora, &temp_max, &temp_min);
    var_maior = temp_max - temp_min;
    if (var_maior > var) {
        var= var_maior;
    }

  }
  // agora como faz pra relacionar a maior variação com o horário correspondente?






  return 0;
}