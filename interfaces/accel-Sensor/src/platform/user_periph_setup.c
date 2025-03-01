/**
 ****************************************************************************************
 *
 * @file user_periph_setup.c
 *
 * @brief Peripherals setup and initialization.
 *
 * Copyright (c) 2012-2019 Dialog Semiconductor. All rights reserved.
 *
 * This software ("Software") is owned by Dialog Semiconductor.
 *
 * By using this Software you agree that Dialog Semiconductor retains all
 * intellectual property and proprietary rights in and to this Software and any
 * use, reproduction, disclosure or distribution of the Software without express
 * written permission or a license agreement from Dialog Semiconductor is
 * strictly prohibited. This Software is solely for use on or in conjunction
 * with Dialog Semiconductor products.
 *
 * EXCEPT AS OTHERWISE PROVIDED IN A LICENSE AGREEMENT BETWEEN THE PARTIES, THE
 * SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. EXCEPT AS OTHERWISE
 * PROVIDED IN A LICENSE AGREEMENT BETWEEN THE PARTIES, IN NO EVENT SHALL
 * DIALOG SEMICONDUCTOR BE LIABLE FOR ANY DIRECT, SPECIAL, INDIRECT, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF
 * USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
 * OF THE SOFTWARE. 
 *
 ****************************************************************************************
 */

/*
 * INCLUDE FILES
 ****************************************************************************************
 */

#include "rwip_config.h"             // SW configuration
#include "user_periph_setup.h"       // peripheral configuration
#include "system_library.h"
#include "gpio.h"
#include "i2c.h"
#include "user_ADXL345.h"

#if DEVELOPMENT_DEBUG

void GPIO_reservations(void)
{
/*
* Globally reserved GPIOs reservation
*/

/*
* Application specific GPIOs reservation. Used only in Development mode (#if DEVELOPMENT_DEBUG)

i.e.
    RESERVE_GPIO(DESCRIPTIVE_NAME, GPIO_PORT_0, GPIO_PIN_1, PID_GPIO);    //Reserve P_01 as Generic Purpose I/O
*/
#ifndef NO_SENSOR
    // Reserve GPIOs for ADXL345 sensor
    RESERVE_GPIO(ADXL_GPIO_SDA, ADXL345_SDA_PORT, ADXL345_SDA_PIN, PID_I2C_SDA);
    RESERVE_GPIO(ADXL_GPIO_SCL, ADXL345_SCL_PORT, ADXL345_SCL_PIN, PID_I2C_SCL);
#endif
}
#endif //DEVELOPMENT_DEBUG

void set_pad_functions(void)        // set gpio port function mode
{
/*
* Configure application ports.
i.e.
    GPIO_ConfigurePin( GPIO_PORT_0, GPIO_PIN_1, OUTPUT, PID_GPIO, false ); // Set P_01 as Generic purpose Output
*/

#ifdef __DA14586__
    // disallow spontaneous flash wake-up
    GPIO_ConfigurePin(SPI_EN_PORT, SPI_EN_PIN, OUTPUT, PID_SPI_EN, true);
#endif

#ifndef NO_SENSOR    
    // Configure GPIOs for the ADXL345 sensor
    GPIO_ConfigurePin(ADXL345_SDA_PORT, ADXL345_SDA_PIN, INPUT_PULLUP, PID_I2C_SDA, true);
    GPIO_ConfigurePin(ADXL345_SCL_PORT, ADXL345_SCL_PIN, INPUT_PULLUP, PID_I2C_SCL, true);
#endif
}

void periph_init(void)
{
    // Configuration struct for I2C
    static const i2c_cfg_t i2c_cfg = {
    .clock_cfg.ss_hcnt = I2C_SS_SCL_HCNT_REG_RESET,
    .clock_cfg.ss_lcnt = I2C_SS_SCL_LCNT_REG_RESET,
    .clock_cfg.fs_hcnt = I2C_FS_SCL_HCNT_REG_RESET,
    .clock_cfg.fs_lcnt = I2C_FS_SCL_LCNT_REG_RESET,
    .restart_en = I2C_RESTART_ENABLE,
    .speed = I2C_SPEED_MODE,
    .mode = I2C_MODE_MASTER,
    .addr_mode = I2C_ADDRESS_MODE,
    .address = ADXL345_I2C_ADDRESS,
    .tx_fifo_level = 1,
    .rx_fifo_level = 1,
    };

#ifndef __DA14531__
    // Power up peripherals' power domain
    SetBits16(PMU_CTRL_REG, PERIPH_SLEEP, 0);
    while (!(GetWord16(SYS_STAT_REG) & PER_IS_UP));
    SetBits16(CLK_16M_REG, XTAL16_BIAS_SH_ENABLE, 1);
#endif

    //rom patch
    patch_func();

    //Init pads
    set_pad_functions();
    
    // Initialize the I2C module
    i2c_init(&i2c_cfg);

    // Enable the pads
    SetBits16(SYS_CTRL_REG, PAD_LATCH_EN, 1);
		
	ADXL345_init(); //Initialise the ADXL345
}
