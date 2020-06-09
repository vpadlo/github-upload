#pragma once

#include "drivers/CAN.h"

namespace mbed {
	class RawCAN : public CAN {
	public:
		RawCAN(PinName rd, PinName td)
			: CAN(rd, td) {}
		;
		RawCAN(PinName rd, PinName td, int hz)
			: CAN(rd, td, hz) {}
		;
	protected:
		virtual void lock() {}
		virtual void unlock() {}
	};
}
