/*
 * Author: andip71, 01.09.2017
 *
 * Version 1.1.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"1.1.0"

#define LIST_WL_DEFAULT				"qcom_rx_wakelock;wlan;wlan_wow_wl;wlan_extscan_wl;netmgr_wl;NETLINK;898000.qcom,qup_uart;IPA_WS;wlan_ipa;wlan_pno_wl;wcnss_filter_lock;hal_bluetooth_lock;13930000.decon_fb;ssp_comm_wake_lock;GPSD;ssp_wake_lock;tsp_wakelock;umts_ipc0;umts_ipc1;mmc0_detect;;qpnp_fg_memaccess;qpnp_fg_update_sram;[timerfd];sensor_ind;PowerManager.SuspendLockout;IPA_RM12"

#define LENGTH_LIST_WL				1024
#define LENGTH_LIST_WL_DEFAULT		114
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5
