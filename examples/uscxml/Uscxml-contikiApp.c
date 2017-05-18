
#include "contiki.h"
#include <stdio.h> /* For printf() */
#include "Uscxml-c-scaffolding.h"
#include <stdlib.h> /* For exit() */

#define HELLOWORLD_CONTIKIINVOKER
/*---------------------------------------------------------------------------*/
PROCESS(contiki_main_process, "Contiki main process");
AUTOSTART_PROCESSES(&contiki_main_process);
/*---------------------------------------------------------------------------*/
PROCESS_THREAD(contiki_main_process, ev, data)
{
  PROCESS_BEGIN();
  //window_pass(&window);
	printf("About to call main test\n");
	if(!main_test()){
		printf("Run successful\n");
	}else{
		printf("Run Failed\n");
	}
  //print_hello();
    printf("main_test finished\n");
	//fflush(stdout);
	//fflush(stderr);
	exit(0);
  PROCESS_END();
  
}
/*---------------------------------------------------------------------------*/
