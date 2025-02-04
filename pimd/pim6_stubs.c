/*
 * PIMv6 temporary stubs
 * Copyright (C) 2022  David Lamparter for NetDEF, Inc.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; see the file COPYING; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <zebra.h>

#include "pimd.h"
#include "pim_nht.h"
#include "pim_zlookup.h"
#include "pim_pim.h"
#include "pim_register.h"
#include "pim_cmd.h"

/*
 * NH lookup / NHT
 */
void pim_sendmsg_zebra_rnh(struct pim_instance *pim, struct zclient *zclient,
			   struct pim_nexthop_cache *pnc, int command)
{
}

int pim_ecmp_nexthop_lookup(struct pim_instance *pim,
			    struct pim_nexthop *nexthop, struct prefix *src,
			    struct prefix *grp, int neighbor_needed)
{
	return 0;
}

int pim_find_or_track_nexthop(struct pim_instance *pim, struct prefix *addr,
			      struct pim_upstream *up, struct rp_info *rp,
			      struct pim_nexthop_cache *out_pnc)
{
	return 0;
}

void pim_delete_tracked_nexthop(struct pim_instance *pim, struct prefix *addr,
				struct pim_upstream *up, struct rp_info *rp)
{
}

struct pim_nexthop_cache *pim_nexthop_cache_find(struct pim_instance *pim,
						 struct pim_rpf *rpf)
{
	return NULL;
}

void pim_rp_nexthop_del(struct rp_info *rp_info)
{
}

void pim_nht_bsr_add(struct pim_instance *pim, struct in_addr addr)
{
}

void pim_nht_bsr_del(struct pim_instance *pim, struct in_addr addr)
{
}

int zclient_lookup_nexthop(struct pim_instance *pim,
			   struct pim_zlookup_nexthop nexthop_tab[],
			   const int tab_size, pim_addr addr,
			   int max_lookup)
{
	return -1;
}

void zclient_lookup_new(void)
{
}

void zclient_lookup_free(void)
{
}

/*
 * packet handling
 */
int pim_msg_send(int fd, pim_addr src, pim_addr dst, uint8_t *pim_msg,
		 int pim_msg_size, const char *ifname)
{
	return 0;
}

int pim_hello_send(struct interface *ifp, uint16_t holdtime)
{
	return -1;
}

void pim_hello_restart_now(struct interface *ifp)
{
}

void pim_hello_restart_triggered(struct interface *ifp)
{
}

int pim_sock_add(struct interface *ifp)
{
	return -1;
}

void pim_sock_delete(struct interface *ifp, const char *delete_message)
{
}

/*
 * PIM register
 */
void pim_register_join(struct pim_upstream *up)
{
}

void pim_null_register_send(struct pim_upstream *up)
{
}

void pim_reg_del_on_couldreg_fail(struct interface *ifp)
{
}

