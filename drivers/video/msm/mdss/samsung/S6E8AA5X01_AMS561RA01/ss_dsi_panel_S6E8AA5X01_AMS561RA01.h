/*
 * =================================================================
 *
 *
 *	Description:  samsung display panel file
 *
 *	Author: jb09.kim
 *	Company:  Samsung Electronics
 *
 * ================================================================
 */
/*
<one line to give the program's name and a brief idea of what it does.>
Copyright (C) 2012, Samsung Electronics. All rights reserved.

*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
*/
#ifndef SAMSUNG_DSI_PANEL_S6E8AA5X01_AMS561RA01_H
#define SAMSUNG_DSI_PANEL_S6E8AA5X01_AMS561RA01_H

#include <linux/completion.h>
#include "../ss_dsi_panel_common.h"

struct smartdim_conf *smart_get_conf_S6E8AA5X01_AMS561RA01(void);
static bool initial_dimming[SUPPORT_PANEL_REVISION] = {
	true, /* REV A */
	true, /* REV B */
	true, /* REV C */
	true, /* REV D */
	true, /* REV E */
	true, /* REV F */
	true, /* REV G */
	true, /* REV H */
	true, /* REV I */
	true, /* REV J */
	true, /* REV K */
	true, /* REV L */
	true, /* REV M */
	true, /* REV N */
	true, /* REV O */
	true, /* REV P */
	true, /* REV Q */
	true, /* REV R */
	true, /* REV S */
	true, /* REV T */
};
#endif
