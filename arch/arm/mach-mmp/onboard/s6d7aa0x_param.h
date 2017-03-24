#ifndef __S6D78A0X_PARAM_H__
#define __S6D78A0X_PARAM_H__

#include <mach/pxa168fb.h>

#define LP_MODE	(1)
#define HS_MODE (0)

#define S6D78A0X_SLEEP_OUT_DELAY (120)
#define S6D78A0X_DISP_ON_DELAY (100)
#define S6D78A0X_DISP_OFF_DELAY (40)
#define S6D78A0X_SLEEP_IN_DELAY (120)

#define CONFIG_LDI_SUPPORT_MDNIE
#define ENABLE_MDNIE_TUNING

#ifdef CONFIG_LDI_SUPPORT_MDNIE
#define S6D78A0X_REG_MDNIE 0xEC
#endif


static u8 s6d78a0x_passwd1_enable[] = {
	0xF0,
	0x5A, 0X5A,
};

static u8 s6d78a0x_passwd1_disable[] = {
	0xF0,
	0xA5, 0XA5,
};

static u8 s6d78a0x_passwd2_enable[] = {
	0xF1,
	0x5A, 0X5A,
};

static u8 s6d78a0x_passwd2_disable[] = {
	0xF1,
	0xA5, 0XA5,
};

static u8 s6d78a0x_passwd3_enable[] = {
	0xFC,
	0xA5, 0xA5,
};

static u8 s6d78a0x_passwd4_enable[] = {
	0xD0,
	0x00, 0x10,
};

static u8 s6d78a0x_passwd5_enable[] = {
	0xB1,
	0x10,
};

static u8 s6d78a0x_passwd6_enable[] = {
	0xB2,
	0x14, 0x22, 0x2F, 0x04,
};

static u8 s6d78a0x_passwd7_enable[] = {
	0xF2,
	0x02, 0x08, 0x08, 0x40, 0x10,
};

static u8 s6d78a0x_passwd8_enable[] = {
	0xB0,
	0x04,
};

static u8 s6d78a0x_passwd9_enable[] = {
	0xFD,
	0x09,
};

/* Power setting sequence */

static u8 s6d78a0x_reg_F3h[] = {
	0xF3,
	0x01, 0xD7, 0xE2, 0x62, 0xF4, 0xF7, 0x77, 0x3C, 0x26, 0x00,
};

static u8 s6d78a0x_reg_F4h[] = {
	0xF4,
	0x00, 0x02, 0x03, 0x26, 0x03, 0x02, 0x09, 0x00,
	0x07, 0x16, 0x16, 0x03, 0x00, 0x08, 0x08, 0x03, 
	0x0E, 0x0F, 0x12, 0x1C, 0x1D, 0x1E, 0x0C, 0x09, 
	0x01, 0x04, 0x02, 0x61, 0x74, 0x75, 0x72, 0x83, 
	0x80, 0x80, 0xB0, 0x00, 0x01, 0x01, 0x28, 0x04, 
	0x03, 0x28, 0x01, 0xD1, 0x32,
};

static u8 s6d78a0x_reg_B0h[] = {
	0xB0,
	0x01,
};

static u8 s6d78a0x_reg_F5h[] = {
	0xF5,
	0x28, 0x28, 0x5F, 0xAB, 0x98, 0x52, 0x0F, 0x33, 
	0x43, 0x04, 0x59, 0x54, 0x52, 0x05, 0x40, 0x60, 
	0x4E, 0x60, 0x40, 0x27, 0x26, 0x52, 0x25, 0x6D, 
	0x18,
};

/* Initializing swquence */

static u8 s6d78a0x_reg_EEh[] = {
	0xEE,
	0x25, 0x00, 0x25, 0x00, 0x25, 0x00, 0x25, 0x00,
};


static u8 s6d78a0x_reg_EFh[] = {
	0xEF,
	0x12, 0x12, 0x43, 0x43, 0xA0, 0x04, 0x24, 0x81, 
};
static u8 s6d78a0x_reg_F7h[] = {
	0xF7,
	0x0A, 0x0A, 0x08, 0x08, 0x0B, 0x0B, 0x09, 0x09, 
	0x04, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x0A, 0x0A, 0x08, 0x08, 0x0B, 0x0B, 0x09, 0x09, 
	0x04, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
};


static u8 s6d78a0x_reg_BCh[] = {
	0xBC,
	0x01, 0x4E, 0x08, 
};


static u8 s6d78a0x_reg_E1h[] = {
	0xE1,
	0x03, 0x10, 0x1C, 0xA0, 0x10, 
};


static u8 s6d78a0x_reg_F6h[] = {
	0xF6,
	0x60, 0x25, 0xA6, 0x00, 0x00, 0x00, 
};

static u8 s6d78a0x_reg_FEh[] = {
	0xFE,
	0x00, 0x0D, 0x03, 0x21, 0x00, 0x08,
};
/* Gamma Setting Sequence */

static u8 s6d78a0x_reg_FAh[] = {
	0xFA,
	0x00, 0x35, 0x08, 0x0E, 0x07, 0x0D, 0x12, 0x11, 
	0x14, 0x1D, 0x20, 0x21, 0x21, 0x1F, 0x1F, 0x20, 
	0x26,
};


static u8 s6d78a0x_reg_FBh[] = {
	0xFB,
	0x00, 0x35, 0x08, 0x0E, 0x07, 0x0D, 0x12, 0x11, 
	0x14, 0x1D, 0x20, 0x21, 0x21, 0x1F, 0x1F, 0x20, 
	0x26,
};

/* Display on */
static u8 s6d78a0x_reg_11h[] = {
	0x11,
	0x00
};

static u8 s6d78a0x_reg_C3h[] = {
	0xC3,
	0x29, 0x00, 0x2a, //10kHz
//	0xCF, 0x00, 0x2A, //42.6kHz 
//	0x40, 0x00, 0x28, 
};

static u8 s6d78a0x_reg_35h[] = {
	0x35,
	0x00,
};

static u8 s6d78a0x_reg_29h[] = {
	0x29,
	0x00
};

static u8 s6d78a0x_reg_51h[] = {
	0x51,
	0xFF,
};
static u8 s6d78a0x_reg_53h[] = {
	0x53,
	0x24,
};

static u8 exit_sleep[] = {0x11, 0x00};
static u8 display_on[] = {0x29, 0x00};
static u8 display_off[] = {0x28, 0x00};
static u8 enter_sleep[] = {0x10, 0x00};

static u8 pkt_size_cmd[] = {0x1};
static u8 pkt_size_2_cmd[] = {0x2};
static u8 read_id1[] = {0xda};
static u8 read_id2[] = {0xdb};
static u8 read_id3[] = {0xdc};
static u8 read_esd[] = {0x0a};

static struct dsi_cmd_desc s6d78a0x_video_read_id1_cmds[] = {
	{DSI_DI_SET_MAX_PKT_SIZE, HS_MODE, 0, sizeof(pkt_size_cmd), pkt_size_cmd},
	{DSI_DI_DCS_READ, HS_MODE, 0, sizeof(read_id1), read_id1},
};

static struct dsi_cmd_desc s6d78a0x_video_read_id2_cmds[] = {
	{DSI_DI_SET_MAX_PKT_SIZE, HS_MODE, 0, sizeof(pkt_size_cmd), pkt_size_cmd},
	{DSI_DI_DCS_READ, HS_MODE, 0, sizeof(read_id2), read_id2},
};

static struct dsi_cmd_desc s6d78a0x_video_read_id3_cmds[] = {
	{DSI_DI_SET_MAX_PKT_SIZE, HS_MODE, 0, sizeof(pkt_size_cmd), pkt_size_cmd},
	{DSI_DI_DCS_READ, HS_MODE, 0, sizeof(read_id3), read_id3},
};

static struct dsi_cmd_desc s6d78a0x_video_read_esd_cmds[] = {
	{DSI_DI_SET_MAX_PKT_SIZE, HS_MODE, 0, sizeof(pkt_size_cmd), pkt_size_cmd},
	{DSI_DI_DCS_READ, HS_MODE, 0, sizeof(read_esd), read_esd},
};

static struct dsi_cmd_desc s6d78a0x_video_display_enable_access_register[] = {
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_passwd1_enable),s6d78a0x_passwd1_enable},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_passwd2_enable),s6d78a0x_passwd2_enable},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_passwd3_enable),s6d78a0x_passwd3_enable},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_passwd4_enable),s6d78a0x_passwd4_enable},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_passwd5_enable),s6d78a0x_passwd5_enable},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_passwd6_enable),s6d78a0x_passwd6_enable},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_passwd7_enable),s6d78a0x_passwd7_enable},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_passwd8_enable),s6d78a0x_passwd8_enable},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_passwd9_enable),s6d78a0x_passwd9_enable},
};

static struct dsi_cmd_desc s6d78a0x_video_display_disable_access_register[] = {
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_passwd1_disable), s6d78a0x_passwd1_disable},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_passwd2_disable), s6d78a0x_passwd2_disable},
};

static struct dsi_cmd_desc s6d78a0x_video_display_init_cmds[] = {

	/* Power setting sequence */ 
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_F3h), s6d78a0x_reg_F3h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_F4h), s6d78a0x_reg_F4h},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_reg_B0h), s6d78a0x_reg_B0h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_F5h), s6d78a0x_reg_F5h},
	/* Initializing swquence */ 
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_EEh), s6d78a0x_reg_EEh},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_EFh), s6d78a0x_reg_EFh},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_F7h), s6d78a0x_reg_F7h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_BCh), s6d78a0x_reg_BCh},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_E1h), s6d78a0x_reg_E1h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_F6h), s6d78a0x_reg_F6h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_FEh), s6d78a0x_reg_FEh},
	/* Gamma Setting Sequence */ 
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_FAh), s6d78a0x_reg_FAh},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_FBh), s6d78a0x_reg_FBh},

};


static struct dsi_cmd_desc s6d78a0x_video_display_on_cmds[] = {
	/* Display on */
	{DSI_DI_DCS_SWRITE, HS_MODE, 10, sizeof(s6d78a0x_reg_11h), s6d78a0x_reg_11h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 120, sizeof(s6d78a0x_reg_C3h), s6d78a0x_reg_C3h},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_reg_35h), s6d78a0x_reg_35h},
	{DSI_DI_DCS_SWRITE, HS_MODE, 0, sizeof(s6d78a0x_reg_29h), s6d78a0x_reg_29h},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_reg_51h), s6d78a0x_reg_51h},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_reg_53h), s6d78a0x_reg_53h},

//	{DSI_DI_DCS_SWRITE1, HS_MODE, S6D78A0X_SLEEP_OUT_DELAY, sizeof(exit_sleep),exit_sleep},
//	{DSI_DI_DCS_SWRITE1, HS_MODE, S6D78A0X_DISP_ON_DELAY, sizeof(display_on),display_on},
};

static struct dsi_cmd_desc s6d78a0x_video_display_off_cmds[] = {
	{DSI_DI_DCS_LWRITE, HS_MODE, S6D78A0X_DISP_OFF_DELAY, sizeof(display_off),display_off},
	{DSI_DI_DCS_LWRITE, HS_MODE, S6D78A0X_SLEEP_IN_DELAY, sizeof(enter_sleep),enter_sleep},
};

static u8 s6d78a0x_es2_batctl[] = {
	0xBC,
	0x01
};

static u8 s6d78a0x_es2_reg_B1h[] = {
	0xB1,
	0x82
};

static u8 s6d78a0x_es2_reg_D0h[] = {
	0xD0,
	0xC8
};

static u8 s6d78a0x_es2_reg_F4h[] = {
	0xF4,
	0x01, 0x10, 0x32, 0x00, 0x24, 0x26, 0x28, 0x27,
	0x27, 0x27, 0x27, 0x2B, 0x2C, 0x65, 0x6A, 0x34,
	0x60,
};

static u8 s6d78a0x_es2_reg_EFh[] = {
	0xEF,
	0x12, 0x12, 0x80, 0x21, 0x00, 0x21, 0x0B, 0x00,
	0x22, 0x22, 0x48, 0x01, 0x10, 0x21, 0x29, 0x03,
	0x03, 0x40, 0x00, 0x10,
};

static u8 s6d78a0x_es2_reg_F2h[] = {
	0xF2,
	0x11, 0x04, 0x00, 0x10, 0x10, 0x1A, 0x10,
};

static u8 s6d78a0x_es2_reg_E1h[] = {
	0xE1,
	0x01, 0x00, 0x01, 0x1B, 0x20, 0x17,
};

static u8 s6d78a0x_es2_reg_E2h[] = {
	0xE2,
	0xED, 0xC7, 0x23,
};

static u8 s6d78a0x_es2_reg_F6h[] = {
	0xF6,
	0x63, 0x23, 0x11, 0x1A, 0x1A, 0x10,
};

static u8 s6d78a0x_es2_reg_35h[] = {0x35, 0x00};

static u8 s6d78a0x_es2_reg_36h[] = {0x36, 0x10};

static u8 s6d78a0x_es2_reg_F7h[] = {
	0xF7,
	0x1F, 0x1F, 0x05, 0x1A, 0x1B,
	0x1B, 0x1A, 0x0B, 0x0A, 0x11,
	0x02, 0x02, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x1F,
	0x1F, 0x04, 0x1A, 0x1B, 0x1B,
	0x1A, 0x09, 0x08, 0x10, 0x02,
	0x02, 0x02, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x02,
};

static u8 s6d78a0x_es2_reg_FAh[] = {
	0xFA,
	0x30, 0x3B, 0x33, 0x37, 0x34,
	0x3C, 0x3C, 0x33, 0x33, 0x2E,
	0x2A, 0x2B, 0x2A, 0x30, 0x3B,
	0x33, 0x37, 0x2C, 0x37, 0x3A,
	0x33, 0x33, 0x2E, 0x2A, 0x2B,
	0x2A, 0x19, 0x3B, 0x31, 0x38,
	0x34, 0x3C, 0x3B, 0x34, 0x33,
	0x2D, 0x26, 0x23, 0x17
};

static u8 s6d78a0x_es2_reg_FBh[] = {
	0xFB,
	0x1C, 0x3F, 0x33, 0x37, 0x34,
	0x3C, 0x3C, 0x33, 0x33, 0x2E,
	0x2A, 0x2B, 0x2A, 0x1C, 0x3F,
	0x33, 0x37, 0x2C, 0x37, 0x3A,
	0x33, 0x33, 0x2E, 0x2A, 0x2B,
	0x2A, 0x05, 0x3F, 0x31, 0x38,
	0x34, 0x3C, 0x3B, 0x34, 0x33,
	0x2D, 0x26, 0x23, 0x17,
};
static struct dsi_cmd_desc s6d78a0x_es2_video_display_init_cmds[] = {
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_es2_batctl), s6d78a0x_es2_batctl},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_B1h), s6d78a0x_es2_reg_B1h},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_D0h), s6d78a0x_es2_reg_D0h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_F4h), s6d78a0x_es2_reg_F4h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_EFh), s6d78a0x_es2_reg_EFh},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_F2h), s6d78a0x_es2_reg_F2h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_E1h), s6d78a0x_es2_reg_E1h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_E2h), s6d78a0x_es2_reg_E2h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_F6h), s6d78a0x_es2_reg_F6h},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_35h), s6d78a0x_es2_reg_35h},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_36h), s6d78a0x_es2_reg_36h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_F7h), s6d78a0x_es2_reg_F7h},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_FAh), s6d78a0x_es2_reg_FAh},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(s6d78a0x_es2_reg_FBh), s6d78a0x_es2_reg_FBh},
};


#ifdef CONFIG_LDI_SUPPORT_MDNIE
enum SCENARIO {
	UI_MODE,
	VIDEO_MODE,
	VIDEO_WARM_MODE,
	VIDEO_COLD_MODE,
	CAMERA_MODE,
	NAVI_MODE,
	GALLERY_MODE,
	VT_MODE,
	SCENARIO_MAX,
};

enum OUTDOOR {
	OUTDOOR_OFF,
	OUTDOOR_ON,
	OUTDOOR_MAX,
};

typedef struct mdnie_config {
	int scenario;
	int negative;
	int outdoor;
};

static char mDNIe_UI_MODE[] = {
	S6D78A0X_REG_MDNIE,
	0x00, 0x33, 0x02, 0x1c, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x02, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x02,
	0x1b, 0x02, 0x1b, 0x02, 0x1b, 0x01, 0x1b, 0x09,
	0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xFF, 0x05,
	0x67, 0x1e, 0xd3, 0x1f, 0xc6, 0x1f, 0x67, 0x04,
	0xd3, 0x1f, 0xc6, 0x1f, 0x67, 0x1e, 0xd3, 0x05,
	0xc6,
};
static char mDNIe_VIDEO_MODE[] = {
	S6D78A0X_REG_MDNIE,
	0x00, 0x33, 0x02, 0x1c, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x06, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x02,
	0x1b, 0x02, 0x1b, 0x02, 0x1b, 0x01, 0x1b, 0x09,
	0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xFF, 0x04,
	0xd7, 0x1f, 0x4c, 0x1f, 0xdd, 0x1f, 0xa4, 0x04,
	0x7f, 0x1f, 0xdd, 0x1f, 0xa4, 0x1f, 0x4c, 0x05,
	0x10,
};
static char mDNIe_VIDEO_WARM_MODE[] = {
	S6D78A0X_REG_MDNIE,
};
static char mDNIe_VIDEO_COLD_MODE[] = {
	S6D78A0X_REG_MDNIE,
};
static char mDNIe_CAMERA_MODE[] = {
	S6D78A0X_REG_MDNIE,
	0x00, 0x33, 0x02, 0x1c, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x02, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x02,
	0x1b, 0x02, 0x1b, 0x02, 0x1b, 0x01, 0x1b, 0x09,
	0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xFF, 0x04,
	0xd7, 0x1f, 0x4c, 0x1f, 0xdd, 0x1f, 0xa4, 0x04,
	0x7f, 0x1f, 0xdd, 0x1f, 0xa4, 0x1f, 0x4c, 0x05,
	0x10,
};
static char mDNIe_NAVI_MODE[] = {
	S6D78A0X_REG_MDNIE,
	0x00
};
static char mDNIe_GALLERY_MODE[] = {
	S6D78A0X_REG_MDNIE,
	0x00, 0x33, 0x02, 0x1c, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff,
	0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x06, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x02,
	0x1b, 0x02, 0x1b, 0x02, 0x1b, 0x01, 0x1b, 0x09,
	0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xFF, 0x04,
	0xd7, 0x1f, 0x4c, 0x1f, 0xdd, 0x1f, 0xa4, 0x04,
	0x7f, 0x1f, 0xdd, 0x1f, 0xa4, 0x1f, 0x4c, 0x05,
	0x10,
};
static char mDNIe_VT_MODE[] = {
	S6D78A0X_REG_MDNIE,
	0x00
};
static char mDNIe_NEGATIVE_MODE[] = {
	S6D78A0X_REG_MDNIE,
	0x00, 0x30, 0x02, 0x1c, 0x03, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x02,
	0x1b, 0x02, 0x1b, 0x02, 0x1b, 0x01, 0x1b, 0x09,
	0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x09, 0xa6, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xFF, 0x04,
	0x2b, 0x1f, 0xdc, 0x1f, 0xf9, 0x1f, 0xee, 0x04,
	0x19, 0x1f, 0xf9, 0x1f, 0xee, 0x1f, 0xdc, 0x04,
	0x36,
};
static char mDNIe_VIDEO_OUTDOOR_MODE[] = {
	S6D78A0X_REG_MDNIE,
};
static char mDNIe_VIDEO_WARM_OUTDOOR_MODE[] = {
	S6D78A0X_REG_MDNIE,
};
static char mDNIe_VIDEO_COLD_OUTDOOR_MODE[] = {
	S6D78A0X_REG_MDNIE,
};
static char mDNIe_CAMERA_OUTDOOR_MODE[] = {
	S6D78A0X_REG_MDNIE,
};

static struct dsi_cmd_desc s6d78a0x_video_display_mDNIe_size[] = {
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_UI_MODE), mDNIe_UI_MODE}
};

static struct dsi_cmd_desc s6d78a0x_video_display_mDNIe_scenario_cmds[] = {
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_UI_MODE), mDNIe_UI_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_VIDEO_MODE), mDNIe_VIDEO_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_VIDEO_WARM_MODE), mDNIe_VIDEO_WARM_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_VIDEO_COLD_MODE), mDNIe_VIDEO_COLD_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_CAMERA_MODE), mDNIe_CAMERA_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_NAVI_MODE), mDNIe_NAVI_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_GALLERY_MODE), mDNIe_GALLERY_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_VT_MODE), mDNIe_VT_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_NEGATIVE_MODE), mDNIe_NEGATIVE_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_VIDEO_OUTDOOR_MODE), mDNIe_VIDEO_OUTDOOR_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_VIDEO_WARM_OUTDOOR_MODE), mDNIe_VIDEO_WARM_OUTDOOR_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_VIDEO_COLD_OUTDOOR_MODE), mDNIe_VIDEO_COLD_OUTDOOR_MODE},
	{DSI_DI_DCS_LWRITE, 0, 0,  sizeof(mDNIe_CAMERA_OUTDOOR_MODE), mDNIe_CAMERA_OUTDOOR_MODE},
};
#endif	/* CONFIG_LDI_SUPPORT_MDNIE */
#endif	/* __S6D78A0X_PARAM_H__ */