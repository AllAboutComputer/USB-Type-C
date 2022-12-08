# USB Type C
- The USB Type-C port is a type of connector that is capable of transmitting data, video, and power. It is a reversible port, meaning that it can be inserted into a device in either orientation. The USB Type-C port is able to convert the voltage of the power that it is receiving from a device, allowing it to charge devices with different power requirements.

- In terms of machine code, an example of the electricity conversion process for a USB Type-C port could look something like this:
```
// Check the voltage of the power source
mov ax, voltage
cmp ax, 5
je set_5V

cmp ax, 9
je set_9V

cmp ax, 12
je set_12V

// Set the output voltage to 5V
set_5V:
  mov output_voltage, 5
  jmp end

// Set the output voltage to 9V
set_9V:
  mov output_voltage, 9
  jmp end

// Set the output voltage to 12V
set_12V:
  mov output_voltage, 12
  jmp end

end:
```

- Here is a table with some more information about the USB Type-C port and its ability to convert electricity:

| Property         | Description                                                                  |
|------------------|------------------------------------------------------------------------------|
| Connector type   | Reversible, 24-pin                                                           |
| Power capabilities | Can provide up to 100 watts of power                                           |
| Voltage range    | Can convert voltage from 5V to 20V                                           |
| Data transfer rate | Up to 10 Gbps                                                                  |

Note: This code and information is for illustrative purposes only and is not intended to be a fully functional implementation.
