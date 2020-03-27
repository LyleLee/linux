/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __KERN_LEVELS_H__
#define __KERN_LEVELS_H__

#define KERN_SOH	"\001"		/* ASCII Start Of Header */
#define KERN_SOH_ASCII	'\001'

//紧急消息，常常是那些崩溃前的消息
#define KERN_EMERG	KERN_SOH "0"	/* system is unusable */
//需要立即采取动作的情形
#define KERN_ALERT	KERN_SOH "1"	/* action must be taken immediately */
//严重情况，常常与严重的硬件或者软件失效有关
#define KERN_CRIT	KERN_SOH "2"	/* critical conditions */
//用来报告错误情况，设备驱动常常使用来报告硬件故障
#define KERN_ERR	KERN_SOH "3"	/* error conditions */
//有问题的情况的警告，这些情况自己不会引起系统的严重问题
#define KERN_WARNING	KERN_SOH "4"	/* warning conditions */
//正常情况，但是仍然值得注意。在这个级别一些安全相关的情况会报告。
#define KERN_NOTICE	KERN_SOH "5"	/* normal but significant condition */
//信息型消息，在这个级别，很多驱动在启动时打印它们发现的硬件的信息
#define KERN_INFO	KERN_SOH "6"	/* informational */
//调试消息
#define KERN_DEBUG	KERN_SOH "7"	/* debug-level messages */

#define KERN_DEFAULT	""		/* the default kernel loglevel */

/*
 * Annotation for a "continued" line of log printout (only done after a
 * line that had no enclosing \n). Only to be used by core/arch code
 * during early bootup (a continued line is not SMP-safe otherwise).
 */
#define KERN_CONT	KERN_SOH "c"

/* integer equivalents of KERN_<LEVEL> */
#define LOGLEVEL_SCHED		-2	/* Deferred messages from sched code
					 * are set to this special level */
//可以通过过/proc/sys/kernel/printk修改日志打打印级别
#define LOGLEVEL_DEFAULT	-1	/* default (or last) loglevel */
#define LOGLEVEL_EMERG		0	/* system is unusable */
#define LOGLEVEL_ALERT		1	/* action must be taken immediately */
#define LOGLEVEL_CRIT		2	/* critical conditions */
#define LOGLEVEL_ERR		3	/* error conditions */
#define LOGLEVEL_WARNING	4	/* warning conditions */
#define LOGLEVEL_NOTICE		5	/* normal but significant condition */
#define LOGLEVEL_INFO		6	/* informational */
#define LOGLEVEL_DEBUG		7	/* debug-level messages */

#endif
