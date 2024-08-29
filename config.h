/* Automatic Shutdown */
#define POWEROFF 1
/* GRSecurity BadUSB Prevention */
#define USBOFF 0
#define STRICT_USBOFF 0
/* Allows for you to receive an SMS to your phone when someone inputs a wrong 
 * password or pressed ALT/CTRL/F1-13/SYSRQ */
#define TWILIO_SEND 0
/* This option allows the webcam to take a shot when someone inputs a wrong 
 * password or pressed ALT/CTRL/F1-13/SYSRQ */
#define WEBCAM_SHOT 1
/* Upload the picture to imgur */
#define IMGUR_UPLOAD 0
/* Option for playing an alarm when the wrong password is given */
#define PLAY_AUDIO 1
/* Option for transparency */
#define TRANSPARENT 1

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#abb2bf";

/* text size (must be a valid size) */
static const char * text_size = "fixed";
