# Smartbond SDK6 Application Examples

This is the repository storing example for the [DA145xx family](https://www.dialog-semiconductor.com/products/bluetooth-low-energy/da14530-and-da14531).

For information about the DA145xx platform and how to bring up your development kit, please refer to the [Getting started User Manual](http://lpccs-docs.dialog-semiconductor.com/UM-B-117-DA14531-Getting-Started-With-The-Pro-Development-Kit/index.html)

## Examples Overview

<table>
    <thead>
        <tr>
            <th>Module</th>
            <th>DA14531 Pro Dev Kit</th>
            <th>DA14585 Pro Dev Kit</th>
            <th>DA14585 Basic Kit</th>
            <th>DA14531 USB Kit</th>
            <th>Example name</th>
            <th>Key Words</th>
            <th>Example Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/active_scanner">active_scanner</a></td>
            <td>scanning mode - advertising data - UART</td>
            <td>This example shows how to setup the DA145xx device in active scanning mode,&#xA0; On advertising data report, the data is formatted and pushed on the UART</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/advertising_example">advertising</a></td>
            <td>button - advertising - Sleep- Wakeup up</td>
            <td>This example shows how to Use a button to switch between advertising methods, Go for sleep and wakeup , Timer callback is used</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/ble_burst_adv">burst_adv</a></td>
            <td>Burst advertising - UART</td>
            <td>This is a simple example showing how to implement &apos;burst&apos; advertising on the DA14531 and DA14585/6 devices</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/ble_Notify_button_Wakeup">button_Wakeup</a></td>
            <td>notification - BLE -Button presses</td>
            <td>This example shows how to configure a DA14531 or DA14585/586 device to send notifications to a BLE central by button presses</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/ble_pressure_sensor_bmp388">pressure_sensor</a></td>
            <td>BLE- PRESSURE 5 CLICK Board&#x2122;</td>
            <td>This is Simple example showing how to interface the DA14585/586 and DA14531 with the Thermo 8 click board&#x2122;</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/ble_temperature_ntf">ble_temperature</a></td>
            <td>MCP9808-&#xA0; Thermo 8 click board -I2C</td>
            <td>This is Simple example showing how to interface the DA14585/586 and DA14531 with the PRESSURE 5 CLICK Board&#x2122;</td>
        </tr>
        <tr>
            <td></td>
            <td></td>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td><a href="connectivity/BLE2IR">BLE2IR</a></td>
            <td>Remote Control Unit</td>
            <td>This example provides an implementation of a Simple RCU using a custom BLE profile</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/ble-Midi">ble-Midi</a></td>
            <td>MIDI - BLE</td>
            <td>This example shows how to&#xA0; create MIDI service on DA145xx BLE device</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td><a href="connectivity/central">central</a></td>
            <td>BLE-Central</td>
            <td>This project is intended to illustrate to the user How to scan for peer devices and how to parse advertisement data during the scan process + BLE connection</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td><a href="connectivity/central_Security_Demo">central_Security</a></td>
            <td>pairing - encryption -bonding</td>
            <td>The main example purpose is to demonstrate the basic pairing, encryption and bonding process on central side</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td></td>
            <td><a href="connectivity/hibernation_and_stateaware_hibernation">hibernation</a></td>
            <td>Hibernation- State aware hibernation</td>
            <td>This example demonstrates the&#xA0; Hibernation and the State aware hibernation features on the DA14531</td>
        </tr>
        <tr>
            <td><strong>Connectivity</strong></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td><a href="connectivity/ibeacon">ibeacon</a></td>
            <td>iBeacon- payload parameters -advertising interval, UUID</td>
            <td>This is an&#xA0; iBeacon implementation for the DA14531, DA14585/DA14586</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td></td>
            <td><a href="connectivity/ibeacon_Optim">ibeacon_Optim</a></td>
            <td>ibeacon - power optimization</td>
            <td>The example demonstrates an optimized software implementation for ibeacon on the DA14531</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/multi_con_periph">multi_con_periph</a></td>
            <td>Central - peripheral- connection</td>
            <td>This example demonstrates how a single peripheral can be connected to more than one central.</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/multirole">multirole</a></td>
            <td>Central- peripheral - scan-advertise roles</td>
            <td>The example demonstrates the capabilities of the DA14531/585/586 as a Central and a peripheral i.e. scan and advertise role</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/scan_request_track">scan_request_track</a></td>
            <td>scan- central -track</td>
            <td>This example demonstrates how a peripheral device can track if it is scanned and which central device performs the scanning procedure</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/simple_beacon">simple_beacon</a></td>
            <td>Beacon- Non-Connectable Advertising</td>
            <td>The main purpose of this Software &#x395;xample is to demonstrate creating a Non-Connectable Advertising application example</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/svc_data_beacon">svc_data_beacon</a></td>
            <td>Beacon- Non-Connectable Advertising - UUID</td>
            <td>The main purpose of this software example is to demonstrate creating a Non-Connectable Advertising application example that includes service data. Specifically, this example illustrates the idea of including Service Data from a 16-bit UUID
                as defined by the Bluetooth SIG</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td></td>
            <td><a href="connectivity/Quuppa_DialogTag">Quuppa Tag Emu&#xA0;</a></td>
            <td>Quuppa Intelligent Locating System&#x2122;- real-time location-BLE-Tag</td>
            <td>this is the&#xA0; QUUPPA Tag Emu Demo on the DA14531</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="connectivity/Coexistence-example">Coexistence</a></td>
            <td>WiFi coexistence -BLE</td>
            <td>The example provides guidelines on how the WiFi coexistence feature can be enabled on the SDK</td>
        </tr>
        <tr>
            <td><strong>Features</strong></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="features/dynamic_L2CAP_Packet_size_Optimization">L2CAP</a></td>
            <td>L2CAP- DLE-throughput</td>
            <td>This project is intended to illustrate to the user how to do a peer feature request for determining peer DLE capability<br>and how to request DLE and utilize larger packets to enhance throughput</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td><a href="features/reset_Indication_update">reset_Indication</a></td>
            <td>Reset - source</td>
            <td>The current SW example demonstrates how to issue and identify the different kinds of reset on the DA14531 and DA14585/586 devices as well as identifying if the device run into a Hardfault or an NMI interrupt.</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td><a href="features/social-distancing-application">social-distancing</a></td>
            <td>DA14531 - social distancing (SDT)</td>
            <td>This example configures a DA14531 device to be used for social distancing purposes</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td></td>
            <td><a href="features/DA14531_Timer1_SW_Example">Timer1</a></td>
            <td>Timer 1 -DA14531</td>
            <td>This software example demonstrates the usage of the TIMER1 hardware block. The SW example exposes the basic functions that TIMER1 offers</td>
        </tr>
        <tr>
            <td><strong>Helpers</strong></td>
            <td></td>
            <td></td>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td><a href="helpers/usb_preloaded%20_firmware">usb_preloaded</a></td>
            <td>USB- DA14531-&#xA0; OTP unique random address - BD address - UART print</td>
            <td>The main purpose of this software example is to provide the source files containing the firmware for the preloaded binary in the DA14531 USB kit.</td>
        </tr>
        <tr>
            <td><strong>Interfaces</strong></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="interfaces/accel-Sensor">accel-Sensor</a></td>
            <td>I2C accelerometer -BLE notifications</td>
            <td>This example shows how to acquire data from an I2C accelerometer and send the measurements with BLE notifications using a DA14531 or DA14585/586 device</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td></td>
            <td><a href="interfaces/external-processor-stm32">external-processor</a></td>
            <td>STM32- DA14531 RAM - External MCU</td>
            <td>The goal of this example is to show how to load a program into the RAM of the DA14531 via a STM32 microcontroller</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="interfaces/HID-Gamepad-Digitizer">HID-Gamepad</a></td>
            <td>HID gamepad - BLE HOGPD profile.</td>
            <td>A DA14585/6 HID gamepad demo project. Used to demonstrate the usage of HID features over BLE with HOGPD profile.</td>
        </tr>
        <tr>
            <td></td>
            <td></td>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td><a href="interfaces/MCube-Accel-MC36xx">MCube-Accel</a></td>
            <td>I2C- MC36xx (MC3672/35) accelerometers.</td>
            <td>Sample software application to interface Dialog DA14585/586 BLE SoC&apos;s with mCube MC36xx (MC3672/35) accelerometers.</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td><a href="interfaces/segger_rtt">segger_rtt</a></td>
            <td>Segger RTT</td>
            <td>This example illustrates to the user, how to use SEGGER RTT in conjunction with the DA145xx family.</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td><a href="interfaces/simple_button">simple_button</a></td>
            <td>Button - Press - UART</td>
            <td>This example shows How to configure a button for short press and long press</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td></td>
            <td><a href="interfaces/SPI_or_I2C_DMA_accelerometer">SPI-_I2C_DMA</a></td>
            <td>SPI - I2C to interface with the LIS2DH acceleromete</td>
            <td>This example demonstrates how to use SPI or I2C to interface with the LIS2DH acceleromete</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td></td>
            <td><a href="interfaces/wakeup_hibernation_ext_timer">wakeup_ext_timer</a></td>
            <td>Eddystone beacon- TPL5010EVM - Wakeup</td>
            <td>This example configures a DA14531 device to be used as an Eddystone beacon.</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td><a href="interfaces/wakeup-button">wakeup-button</a></td>
            <td>SW2-SW3 button -wakeup up</td>
            <td>This example shows how to wake up using two possible sources, button SW2 or button SW3.<br>it shows how&#xA0; to detect the source, button SW2 or button SW3.</td>
        </tr>
        <tr>
            <td></td>
            <td>&#x2714;&#xFE0F;</td>
            <td>&#x2714;&#xFE0F;</td>
            <td></td>
            <td></td>
            <td><a href="interfaces/I2C-Master-Slave">I2C-Master-Slave</a></td>
            <td>I2C - Master-slave</td>
            <td>This example describes how to perform I2C data buffer transmission/reception between two boards in asynchronous mode (non-blocking communication). The project is split in two parts: the Master Board and the Slave Board.</td>
        </tr>
    </tbody>
</table>


## Example usage
<br/>
To run any of these SW examples, the user needs:

- DA14531/DA14585/DA14586 hardware.
- Keil µvision.
- Dialog SDK 6.0.14 available
- Python script

<br/>
Begin by cloning this repository locally and then link the SW example to the SDK. Below is the description on how to use the python script to link the SDK and the SW example, and to clean the SW example project environment (remove absolute paths).


**Note**: _It is highly recommended the user creates files that are added in the *src* folder of the SW example. By default, the Python script does not process user files located outside the *src* folder. You are free to create any folder under the *src* user space. You need to make sure the new folder path under *src* is added in the Keil project as a relative path._


<br/>

### <ins> Linking the project environment and the Dialog 6.0.14 SDK </ins>

<br/>

**Note**: _Linking the SW example project environment and Dialog 6.0.14 SDK adds absolute file paths to files in your SW example project environment path containing information about your system’s folder structure. The Python script also supports cleaning these absolute file paths. See “Cleaning the project environment”._

<br/>

Below are the steps to link the SW example project environment to the 6.0.14 SDK.

1. Python 3.6 or higher is required to run the small example environment generation script.
Python can be downloaded from [Python.org](http://python.org).

2. Navigate to the main page of the github SDK6 examples repository and download the SW example. You can do so by clicking on "Code" and selecting "Download Zip", or use the HTTPS or SSH to clone the repository to your local.

3. Extract the zip file.

4. Open a terminal and run:

    ```console
    > cd <example folder>/project_environment
    > python dlg_make_keil5_env_v2.000.py -sdkpath “<path to your sdk repository>”
    ```

    For instance:
    ```console
    > python dlg_make_keil5_env_v2.000.py -sdkpath “C:\dev\6.0.14”
    ```

5. The script should indicate successful execution, as shown below, 

![](img/pythonscript_link.png)

<br/>

### <ins> Cleaning the project environment </ins>

<br/>

Linking the project adds absolute paths to the project files, pointing them to the 6.0.14 SDK. The clean functionality removes these absolute paths.
Since absolute paths contain intermediate directory names, the clean command makes sure these intermediate directories are not shared with internal and external application users.

Example: After linking, `C:\Users\Your_name\Upcoming_project\Keil_5` reveals the user’s name and the name of the project the user is working on.
Below are the steps to clean the SW example project environment.

<br/>

1. Python 3.6 or higher is required to run the small example environment generation script.
Python can be downloaded from [Python.org](http://python.org).

2. Navigate to the main page of the github SDK6 examples repository and download the SW example. You can do so by clicking on "Code" and selecting "Download Zip", or use the HTTPS or SSH to clone the repository to your local.

3. Extract the zip file.

4. Open a terminal and run:

    ```console
    > cd <example folder>/project_environment
    > python dlg_make_keil5_env_v2.000.py -sdkpath “clean”
    ```

5. The script should indicate successful execution, as shown below,

![](img/pythonscript_clean.png)

<br/>
<br/>

## Example compatibility

Not all the examples will run on the latest version of the SDK6, the tested version is indicated in the Readme. If you find and example that needs porting to the latest version please report it in the issues.
