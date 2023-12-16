#include <stdio.h>

void main(){
	printf("## progam antrian CS ##\n");
	
	char no_antrian[5] = {'A', 'B', 'C', 'D', 'E'};
	
	//MENGGUNAKAN POINTER
	char *ptr_current = &no_antrian;
	
	for(int i = 0; i < 5; i++) {
		printf("Pelanggan dengan no antrian %C silahkan ke loket!\n", *ptr_current);
		printf("saat ini CS sedang melayani: %c\n", *ptr_current);
		printf("-------Tekan Enter Untuk Next------------");
		getchar();
		ptr_current++;
	}
	printf("diam, selesai dia");
}