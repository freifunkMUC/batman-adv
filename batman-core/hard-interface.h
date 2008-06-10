/*
 * Copyright (C) 2007-2008 B.A.T.M.A.N. contributors:
 * Marek Lindner
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 *
 */



#define IF_INACTIVE 0
#define IF_ACTIVE 1
#define IF_TO_BE_DEACTIVATED 2



void hardif_remove_interfaces(void);
int hardif_add_interface(char *dev, int if_num);
void hardif_deactivate_interface(struct batman_if *batman_if);
void hardif_check_inactive_interfaces(struct work_struct *work);
char hardif_get_active_if_num(void);
void hardif_check_interfaces_status(struct work_struct *work);
void start_hardif_check_timer(void);
void destroy_hardif_check_timer(void);