//***********************************************
//export gpio pin on the BeagleBone to prepare for usage
//
//USAGE: specify gpio # as an int
//
//written by: 	Andrew Miller
//Date:		9 September 2012
//***********************************************
int export_gpio(int gpio);

//***********************************************
//unexport gpio pin on the BeagleBone
//
//USAGE: specify gpio # as an int
//
//written by: 	Andrew Miller
//Date:		9 September 2012
//***********************************************
int unexport_gpio(int gpio);

//***********************************************
//set direction of gpio to either in or out specified by string
//GPIO MUST BE EXPORTED
//
//USAGE: specify gpio # as an int
//USAGE: specify direction as a string of either "in" or "out"
//
//written by:	Andrew Miller
//Date:		9 September 2012
//***********************************************
int set_gpio_direction(int gpio, char* direction);

//set value of gpio
//GPIO MUST BE EXPORTED
//
//USAGE: specify gpio # as an int
//USAGE: specify value as an int of either 1 or 0
//
//written by:	Andrew Miller
//Date:		9 September 2012
int set_gpio_value(int gpio, int value);

//***********************************************
//set trigger edge for given gpio pin
//GPIO MUST BE EXPORTED
//
//USAGE: specify gpio # as an int
//USAGE: specify edge as a string of "rising", "falling", or "both"
//
//written by: 	Andrew Miller
//Date:		10 September 2012
//***********************************************
int set_gpio_edge(int gpio, char* edge);

//***********************************************
//set file descriptor
//GPIO MUST BE EXPORTED
//
//USAGE: specify gpio # as an int
//
//written:	by RidgeRun
//Date:		2011
//***********************************************
int gpio_fd_open(int gpio);

//***********************************************
//close file descriptor
//GPIO MUST BE EXPORTED
//
//USAGE: give fd of open gpio
//
//written by:	RidgeRun
//Date:		2011
//***********************************************
int gpio_fd_close(int fd);

//***********************************************
//set new value for omap_mux
//
//to see all muxes and possible values, look at
// /sys/kernel/debug/omap_mux
//
//all muxes are listed here. grep if looking for
//any particular component or cat into any mux to
//see what is attached.
//
//USAGE: provide mux name as a string EX) "gpmc_a11"
//USAGE: provide the mux enable as an int from 0-7
//
//written by: 	Andrew Miller
//Date:		10 September 2012
//***********************************************
int set_mux_value(char* mux, int value);

//***********************************************
//read specified anilog pin
//
//USAGE: specify ain1-7 for reading Ex) "ain6"
//	 will read ain5
//
//written by:	Andrew Miller
//Date:		10 September 2012
//***********************************************
int read_ain(char* ain);

//***********************************************
//set pwm on a given pwm output
//
//USAGE: specify pwm as string, EX) ehrpwm.2:0
//USAGE: specify period_freq in hertz
//USAGE: specify duty cycle as percent
//
//written by: 	Andrew Miller
//Date:		10 September 2012
//***********************************************
int set_pwm(char* pwm, int period_freq, int duty_percent);

//***********************************************
//unset pwm on a given pwm output
//
//USAGE: specify pwm as a string EX) "ehrpwm.2:0"
//
//written by:	Andrew Miller
//Date:		10 September 2012
//***********************************************
int unset_pwm(char* pwm);
