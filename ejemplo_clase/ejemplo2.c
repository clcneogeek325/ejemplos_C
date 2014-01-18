
# include <stdio.h>

main()
	{
int calificacion;

 char nombre[]="30";
 printf ("ingrese su nombre: ");
  scanf ("nombre");
printf ("Nombre:",nombre);
int cal;
printf("ingrese su calificacion");
scanf ("cal");
printf("Calificacion:",cal);

aprobado();
reprobado();

}
aprobado(){
printf ("\t aprobado\n");
int a=70;
for(a;a>=70;a++){
printf ("aprobado "a);
}	
}
reprobado(){
printf ("\t reprobado\n");
int a=70;
for(a;a<=70;a++){
printf ("aprobado "a);
	}
}