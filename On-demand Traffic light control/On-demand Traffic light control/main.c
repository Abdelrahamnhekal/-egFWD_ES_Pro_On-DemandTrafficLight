/*
 * myProject.c
 *
 * Created: 11/4/2022 9:23:46 PM
 *  Author:  abdelrahman hekal
 */
#include "../On-demand Traffic light control/APP/app.c"

void main(void)
{
	DIO_init(PORTA, PIN0, OUTPUT);
	DIO_write(PORTA, PIN0, HIGH);
	TIMER0_Delay(2000);
	DIO_write(PORTA, PIN0, LOW);
}
