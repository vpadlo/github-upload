#include "mbed.h"
#include "RawCAN.h"

RawCAN can1(PB_8, PB_9, 500000);
RawCAN can2(PB_12, PB_13, 500000);

void canFilter(void)
{
	CANMessage msg;
	can1.read(msg);
	can2.write(msg);
}

int main()
{
	printf("Mbed OS version: %d.%d.%d\r\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
	can1.attach(canFilter);
	printf("CAN filter handler attached\r\n");
}
