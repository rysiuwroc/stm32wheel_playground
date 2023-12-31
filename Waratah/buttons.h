// AUTO-GENERATED by WaratahCmd.exe

// HID Usage Tables: 1.4.0
// Descriptor size: 46 (bytes)
// +----------+-------+-------------------+
// | ReportId | Kind  | ReportSizeInBytes |
// +----------+-------+-------------------+
// |        1 | Input |                 3 |
// +----------+-------+-------------------+
static const uint8_t hidReportDescriptor [] = 
{
    0x05, 0x01,          // UsagePage(Generic Desktop[0x0001])
    0x09, 0x04,          // UsageId(Joystick[0x0004])
    0xA1, 0x01,          // Collection(Application)
    0x85, 0x01,          //     ReportId(1)
    0x09, 0x33,          //     UsageId(Rx[0x0033])
    0x15, 0x00,          //     LogicalMinimum(0)
    0x26, 0xFF, 0x00,    //     LogicalMaximum(255)
    0x95, 0x01,          //     ReportCount(1)
    0x75, 0x08,          //     ReportSize(8)
    0x81, 0x02,          //     Input(Data, Variable, Absolute, NoWrap, Linear, PreferredState, NoNullPosition, BitField)
    0x09, 0x31,          //     UsageId(Y[0x0031])
    0x15, 0x81,          //     LogicalMinimum(-127)
    0x25, 0x7F,          //     LogicalMaximum(127)
    0x81, 0x02,          //     Input(Data, Variable, Absolute, NoWrap, Linear, PreferredState, NoNullPosition, BitField)
    0x05, 0x09,          //     UsagePage(Button[0x0009])
    0x09, 0x01,          //     UsageId(Button 1[0x0001])
    0x15, 0x00,          //     LogicalMinimum(0)
    0x25, 0x01,          //     LogicalMaximum(1)
    0x75, 0x01,          //     ReportSize(1)
    0x81, 0x02,          //     Input(Data, Variable, Absolute, NoWrap, Linear, PreferredState, NoNullPosition, BitField)
    0x75, 0x07,          //     ReportSize(7)
    0x81, 0x03,          //     Input(Constant, Variable, Absolute, NoWrap, Linear, PreferredState, NoNullPosition, BitField)
    0xC0,                // EndCollection()
};

#pragma pack(push,1)

struct HidReportInput1
{
    uint8_t ReportId = 1;
    uint8_t Payload[3];
};

#pragma pack(pop)