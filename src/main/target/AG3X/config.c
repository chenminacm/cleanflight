
/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdbool.h>
#include <stdint.h>

#include <platform.h>

#ifdef USE_TARGET_CONFIG

#include "io/serial.h"

#include "config_helper.h"

static targetSerialPortFunction_t targetSerialPortFunction[] = {
    { SERIAL_PORT_USART1,      FUNCTION_RX_SERIAL },
    { SERIAL_PORT_UART4,       FUNCTION_ESC_SENSOR },
    // { SERIAL_PORT_SOFTSERIAL1, FUNCTION_VTX_SMARTAUDIO },
};

void targetConfiguration(void)
{
    targetSerialPortFunctionConfig(targetSerialPortFunction, ARRAYLEN(targetSerialPortFunction));
}
#endif
