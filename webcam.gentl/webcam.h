#pragma once

#include "webcam.gentl.h"

#define ARV_FAKE_CAMERA_MEMORY_SIZE	0x10000

/* To keep in sync with webcam.xml */

/* Image format control */

#define ARV_FAKE_CAMERA_REGISTER_SENSOR_WIDTH		0x11c
#define ARV_FAKE_CAMERA_REGISTER_SENSOR_HEIGHT		0x118
#define ARV_FAKE_CAMERA_REGISTER_WIDTH				0x100
#define ARV_FAKE_CAMERA_REGISTER_HEIGHT				0x104
#define ARV_FAKE_CAMERA_REGISTER_X_OFFSET			0x130
#define ARV_FAKE_CAMERA_REGISTER_Y_OFFSET			0x134
#define ARV_FAKE_CAMERA_REGISTER_BINNING_HORIZONTAL	0x108
#define ARV_FAKE_CAMERA_REGISTER_BINNING_VERTICAL	0x10c
#define ARV_FAKE_CAMERA_REGISTER_PIXEL_FORMAT		0x128
#define ARV_FAKE_CAMERA_REGISTER_TEST				0x1f0

#define ARV_FAKE_CAMERA_SENSOR_WIDTH				2048
#define ARV_FAKE_CAMERA_SENSOR_HEIGHT				2048
#define ARV_FAKE_CAMERA_WIDTH_DEFAULT				512
#define ARV_FAKE_CAMERA_HEIGHT_DEFAULT				512
#define ARV_FAKE_CAMERA_BINNING_HORIZONTAL_DEFAULT	1
#define ARV_FAKE_CAMERA_BINNING_VERTICAL_DEFAULT	1
#define ARV_FAKE_CAMERA_PIXEL_FORMAT_DEFAULT		ARV_PIXEL_FORMAT_MONO_8
#define ARV_FAKE_CAMERA_TEST_REGISTER_DEFAULT		0x12345678

/* Acquisition control */

#define ARV_FAKE_CAMERA_REGISTER_ACQUISITION_MODE	0x12c

#define ARV_FAKE_CAMERA_REGISTER_ACQUISITION_FRAME_PERIOD_US	0x138

#define ARV_FAKE_CAMERA_REGISTER_FRAME_START_OFFSET		0x000
#define ARV_FAKE_CAMERA_REGISTER_ACQUISITION_START_OFFSET	0x020

#define ARV_FAKE_CAMERA_REGISTER_TRIGGER_MODE		0x300
#define ARV_FAKE_CAMERA_REGISTER_TRIGGER_SOURCE		0x304
#define ARV_FAKE_CAMERA_REGISTER_TRIGGER_ACTIVATION	0x308

#define ARV_FAKE_CAMERA_REGISTER_ACQUISITION		0x124
#define ARV_FAKE_CAMERA_REGISTER_EXPOSURE_TIME_US	0x120

#define ARV_FAKE_CAMERA_ACQUISITION_FRAME_RATE_DEFAULT	25.0
#define ARV_FAKE_CAMERA_EXPOSURE_TIME_US_DEFAULT	10000.0

/* Analog control */

#define ARV_FAKE_CAMERA_REGISTER_GAIN_RAW		0x110
#define ARV_FAKE_CAMERA_REGISTER_GAIN_MODE		0x114

/* GVBS Hijacked Stuff */

#define ARV_GVBS_VERSION_OFFSET				0x00000000
#define ARV_GVBS_VERSION_MINOR_MASK			0x0000ffff
#define ARV_GVBS_VERSION_MINOR_POS			0
#define ARV_GVBS_VERSION_MAJOR_MASK			0xffff0000
#define ARV_GVBS_VERSION_MAJOR_POS			16

#define ARV_GVBS_DEVICE_MODE_OFFSET			0x00000004
#define ARV_GVBS_DEVICE_MODE_BIG_ENDIAN			1 << 31
#define ARV_GVBS_DEVICE_MODE_CHARACTER_SET_MASK		0x0000ffff
#define ARV_GVBS_DEVICE_MODE_CHARACTER_SET_POS		0

#define ARV_GVBS_DEVICE_MAC_ADDRESS_HIGH_OFFSET		0x00000008
#define ARV_GVBS_DEVICE_MAC_ADDRESS_LOW_OFFSET		0x0000000c

#define ARV_GVBS_SUPPORTED_IP_CONFIGURATION_OFFSET	0x00000010
#define ARV_GVBS_CURRENT_IP_CONFIGURATION_OFFSET	0x00000014
#define ARV_GVBS_IP_CONFIGURATION_PERSISTENT		1 << 0
#define ARV_GVBS_IP_CONFIGURATION_DHCP			1 << 1
#define ARV_GVBS_IP_CONFIGURATION_LLA			1 << 2

#define ARV_GVBS_CURRENT_IP_ADDRESS_OFFSET		0x00000024
#define ARV_GVBS_CURRENT_SUBNET_MASK_OFFSET		0x00000034
#define ARV_GVBS_CURRENT_GATEWAY_OFFSET			0x00000044

#define ARV_GVBS_MANUFACTURER_NAME_OFFSET		0x00000048
#define ARV_GVBS_MANUFACTURER_NAME_SIZE			32

#define ARV_GVBS_MODEL_NAME_OFFSET			0x00000068
#define ARV_GVBS_MODEL_NAME_SIZE			32

#define ARV_GVBS_DEVICE_VERSION_OFFSET			0x00000088
#define ARV_GVBS_DEVICE_VERSION_SIZE			32

#define ARV_GVBS_MANUFACTURER_INFORMATIONS_OFFSET	0x000000a8
#define ARV_GVBS_MANUFACTURER_INFORMATIONS_SIZE		48

#define ARV_GVBS_SERIAL_NUMBER_OFFSET			0x000000d8
#define ARV_GVBS_SERIAL_NUMBER_SIZE			16

#define ARV_GVBS_USER_DEFINED_NAME_OFFSET		0x000000e8
#define ARV_GVBS_USER_DEFINED_NAME_SIZE			16

#define ARV_GVBS_DISCOVERY_DATA_SIZE			0xf8

#define ARV_GVBS_XML_URL_0_OFFSET			0x00000200
#define ARV_GVBS_XML_URL_1_OFFSET			0x00000400
#define ARV_GVBS_XML_URL_SIZE				512

#define ARV_GVBS_N_NETWORK_INTERFACES_OFFSET		0x00000600

#define	ARV_GVBS_PERSISTENT_IP_ADDRESS_0_OFFSET		0x0000064c
#define	ARV_GVBS_PERSISTENT_SUBNET_MASK_0_OFFSET	0x0000065c
#define	ARV_GVBS_PERSISTENT_GATEWAY_0_OFFSET		0x0000066c

#define ARV_GVBS_N_MESSAGE_CHANNELS_OFFSET		0x00000900
#define ARV_GVBS_N_STREAM_CHANNELS_OFFSET		0x00000904

#define ARV_GVBS_GVCP_CAPABILITY_OFFSET			0x00000934
#define ARV_GVBS_GVCP_CAPABILITY_CONCATENATION			1 << 0
#define ARV_GVBS_GVCP_CAPABILITY_WRITE_MEMORY			1 << 1
#define ARV_GVBS_GVCP_CAPABILITY_PACKET_RESEND			1 << 2
#define ARV_GVBS_GVCP_CAPABILITY_EVENT				1 << 3
#define ARV_GVBS_GVCP_CAPABILITY_EVENT_DATA			1 << 4
#define ARV_GVBS_GVCP_CAPABILITY_PENDING_ACK			1 << 5
#define ARV_GVBS_GVCP_CAPABILITY_ACTION				1 << 6
#define ARV_GVBS_GVCP_CAPABILITY_PRIMARY_APPLICATION_SWITCHOVER 1 << 21
#define ARV_GVBS_GVCP_CAPABILITY_EXTENDED_STATUS_CODES		1 << 22
#define ARV_GVBS_GVCP_CAPABILITY_DISCOVERY_ACK_DELAY_WRITABLE	1 << 23
#define ARV_GVBS_GVCP_CAPABILITY_DISCOVERY_ACK_DELAY		1 << 24
#define ARV_GVBS_GVCP_CAPABILITY_TEST_DATA			1 << 25
#define ARV_GVBS_GVCP_CAPABILITY_MANIFEST_TABLE			1 << 26
#define ARV_GVBS_GVCP_CAPABILITY_CCP_APPLICATION_SOCKET 	1 << 27
#define ARV_GVBS_GVCP_CAPABILITY_LINK_SPEED			1 << 28
#define ARV_GVBS_GVCP_CAPABILITY_HEARTBEAT_DISABLE		1 << 29
#define ARV_GVBS_GVCP_CAPABILITY_SERIAL_NUMBER			1 << 30
#define ARV_GVBS_GVCP_CAPABILITY_NAME_REGISTER			1 << 31

#define ARV_GVBS_HEARTBEAT_TIMEOUT_OFFSET		0x00000938
#define ARV_GVBS_TIMESTAMP_TICK_FREQUENCY_HIGH_OFFSET	0x0000093c
#define ARV_GVBS_TIMESTAMP_TICK_FREQUENCY_LOW_OFFSET	0x00000940
#define ARV_GVBS_TIMESTAMP_CONTROL_OFFSET		0x00000944
#define ARV_GVBS_TIMESTAMP_LATCHED_VALUE_HIGH_OFFSET	0x00000948
#define ARV_GVBS_TIMESTAMP_LATCHED_VALUE_LOW_OFFSET	0x0000094c

#define ARV_GVBS_CONTROL_CHANNEL_PRIVILEGE_OFFSET	0x00000a00
#define ARV_GVBS_CONTROL_CHANNEL_PRIVILEGE_CONTROL	1 << 1
#define ARV_GVBS_CONTROL_CHANNEL_PRIVILEGE_EXCLUSIVE	1 << 0

#define ARV_GVBS_STREAM_CHANNEL_0_PORT_OFFSET		0x00000d00

#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_SIZE_OFFSET		0x00000d04
#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_SIZE_MASK		0x0000ffff
#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_SIZE_POS		0
#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_BIG_ENDIAN		1 << 29
#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_DO_NOT_FRAGMENT	1 << 30
#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_SIZE_FIRE_TEST		1 << 31

#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_DELAY_OFFSET		0x00000d08

#define ARV_GVBS_STREAM_CHANNEL_0_IP_ADDRESS_OFFSET		0x00000d18

#define ARV_GVBS_DEVICE_LINK_SPEED_0_OFFSET			0x0000b000

#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_SIZE_MIN_OFFSET		0x0000c000
#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_SIZE_MAX_OFFSET		0x0000c004
#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_DELAY_MIN_OFFSET		0x0000c008
#define ARV_GVBS_STREAM_CHANNEL_0_PACKET_DELAY_MAX_OFFSET		0x0000c00c
#define ARV_GVBS_STREAM_CHANNEL_0_FRAME_TRANSMISSION_DELAY_OFFSET	0x0000c010
#define ARV_GVBS_STREAM_CHANNEL_0_FRAME_TRANSMISSION_DELAY_MIN_OFFSET	0x0000c014
#define ARV_GVBS_STREAM_CHANNEL_0_FRAME_TRANSMISSION_DELAY_MAX_OFFSET	0x0000c018
#define ARV_GVBS_STREAM_CHANNEL_0_BANDWITDH_RESERVE_OFFSET		0x0000c01c
#define ARV_GVBS_STREAM_CHANNEL_0_BANDWITDH_RESERVE_MIN_OFFSET		0x0000c020
#define ARV_GVBS_STREAM_CHANNEL_0_BANDWITDH_RESERVE_MAX_OFFSET		0x0000c024
#define ARV_GVBS_STREAM_CHANNEL_0_BANDWITDH_RESERVE_ACCUMULATION_OFFSET	0x0000c028
#define ARV_GVBS_STREAM_CHANNEL_0_BANDWITDH_RESERVE_ACCUMULATION_MIN_OFFSET	0x0000c02c
#define ARV_GVBS_STREAM_CHANNEL_0_BANDWITDH_RESERVE_ACCUMULATION_MAX_OFFSET	0x0000c030
#define ARV_GVBS_STREAM_CHANNEL_0_THROUGHPUT_MAX_OFFSET			0x0000c100
#define ARV_GVBS_STREAM_CHANNEL_0_CURRENT_THOURGHPUT_OFFSET		0x0000c104
#define ARV_GVBS_STREAM_CHANNEL_0_ASSIGNED_BANDWIDTH_OFFSET		0x0000c108
#define ARV_GVBS_STREAM_CHANNEL_0_FRAME_JITTER_MAX_OFFSET		0x0000c10c

#define ARV_GVCP_DATA_SIZE_MAX				512
#define BUFFER_SIZE 512 * 512

typedef enum {
	ARV_BUFFER_STATUS_UNKNOWN = -1,
	ARV_BUFFER_STATUS_SUCCESS = 0,
	ARV_BUFFER_STATUS_CLEARED,
	ARV_BUFFER_STATUS_TIMEOUT,
	ARV_BUFFER_STATUS_MISSING_PACKETS,
	ARV_BUFFER_STATUS_WRONG_PACKET_ID,
	ARV_BUFFER_STATUS_SIZE_MISMATCH,
	ARV_BUFFER_STATUS_FILLING,
	ARV_BUFFER_STATUS_ABORTED
} ArvBufferStatus;

typedef uint32_t ArvPixelFormat;

typedef struct _ArvBuffer {
	size_t size;
	uint8_t is_preallocated;
	void *data;

	void *user_data;

	ArvBufferStatus status;

	uint32_t frame_id;
	uint64_t timestamp_ns;

	uint32_t x_offset;
	uint32_t y_offset;
	uint32_t width;
	uint32_t height;

	ArvPixelFormat pixel_format;
} ArvBuffer;

/* Webcam specifics */
#define	ARV_PIXEL_FORMAT_MONO_8			0x01080001
extern void* registry;
extern char* genicam_xml;
extern size_t genicam_xml_size;
extern int32_t device_access_status;
extern ArvBuffer buffer;
extern char* consumer_buffer;
extern EVENT_NEW_BUFFER_DATA nbd;

typedef void (*webcam_fill_pattern)(void* buffer, void* fill_pattern_data,
	uint32_t exposure_time_us, uint32_t gain, ArvPixelFormat pixel_format);

int32_t CopyString(void* pBuffer, char* string, size_t* piSize);

char* get_webcam_genicam_xml(size_t *size);
void webcam_init();
uint8_t webcam_read_memory(uint32_t address, uint32_t size, void *buffer);
uint8_t webcam_write_memory(uint32_t address, uint32_t size, const void *buffer);
uint8_t webcam_read_register(uint32_t address, uint32_t *value);
uint8_t webcam_write_register(uint32_t address, uint32_t value);
static void webcam_diagonal_ramp(ArvBuffer *buffer, void *fill_pattern_data,
	uint32_t exposure_time_us, uint32_t gain, ArvPixelFormat pixel_format);
void webcam_set_fill_pattern(
	webcam_fill_pattern new_fill_pattern_callback,
	void *new_fill_pattern_data);
void webcam_fill_buffer();
size_t webcam_get_payload();
void webcam_finalize();
