#include<stdio.h>


int main(){

printf("\nPrograma que muestra los numeros con letra\n\n");
int uni,dec,cen;


	
	printf("Dame el numero (separado por un espacio):\n");
	scanf("%d %d %d",&cen,&dec,&uni);
	
		 if(cen==1 && dec==0 && uni==0){
				printf("cien");
			}else 
			if(cen==1){
				printf("ciento");
			}
				if(cen==2){
					printf("docientos");
				}
					if(cen==3){
						printf("trecientos");
					}
						if(cen==4){
							printf("cuatrocientos");
						}
							if(cen==5){
								printf("quinientos");
							}
								if(cen==6){
									printf("seicientos");
									}
										if(cen==7){
										printf("setecientos");
									}
										if(cen==8){
											printf("ochocientos");
										}
											if(cen==9){
												printf("novecientos");
											}
												
	
					
	else

				/*	
				if(cen==0  && dec==1 && uni==0){
				printf("diez");
					}
						if(uni==1 && dec==1 && cen==0){
							printf("once");
						}
							if(uni==2 && dec==1 && cen==0){
							printf("doce");
								}
									if(uni==3 && dec==1 && cen==0){
										printf("trece");
										}
											if(uni==4 && dec==1 && cen==0){
												printf("catorce");
												}
												if(uni==5 && dec==1 && cen==0){
													printf("quince");
													}*/
		
		if(dec==0){
				printf("");
		 }
			if(dec==1){
				printf("dieci");
			}
				if(dec==2){
					printf("veinti");
				}
					if(dec==3){
						printf("treintay");
					}
						if(dec==4){
							printf("cuarentay");
						}
							if(dec==5){
								printf("cincuentay");
							}
								if(dec==6){
									printf("sesentay");
									}
										if(dec==7){
										printf("setentay");
									}
										if(dec==8){
											printf("ochentay");
										}
											if(dec==9){
												printf("noventay");
											}
		
	else	
	
		if(uni==0){
				printf("cero");
		 } 
			if(uni==1){
				printf("uno");
			}
				if(uni==2){
					printf("dos");
				}
					if(uni==3){
						printf("tres");
					}
						if(uni==4){
							printf("cuatro");
						}
							if(uni==5){
								printf("cinco");
							}
								if(uni==6){
									printf("seis");
									}
										if(uni==7){
										printf("siete");
									}
										if(uni==8){
											printf("ocho");
										}
											if(uni==9){
												printf("nueve");
											}
		
	return 0;
			
}