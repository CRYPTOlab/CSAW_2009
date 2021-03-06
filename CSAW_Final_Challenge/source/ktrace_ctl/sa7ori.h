#ifndef __SA7ORI_H__
#define __SA7ORI_H__

// driver IOCTLs
#define SA7ORICDE		0xc0d30011
#define IOCTL_GET_VERSION		CTL_CODE(SA7ORICDE, 0x01, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_TAUNT		CTL_CODE(SA7ORICDE, 0x11, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_SAYHI		CTL_CODE(SA7ORICDE, 0x10, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_WRONG		CTL_CODE(SA7ORICDE, 0x77, METHOD_BUFFERED, FILE_READ_ACCESS)

#endif
