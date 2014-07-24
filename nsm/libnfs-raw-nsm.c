/*
Copyright (c) 2014, Ronnie Sahlberg
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer. 
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies, 
either expressed or implied, of the FreeBSD Project.
*/

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "libnfs-zdr.h"
#include "libnfs-raw-nsm.h"

uint32_t
zdr_nsmstat1 (ZDR *zdrs, nsmstat1 *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_enum (zdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_nsm_my_id (ZDR *zdrs, nsm_my_id *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_string (zdrs, &objp->my_name, NSM_MAXSTRLEN))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->my_prog))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->my_vers))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->my_proc))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_nsm_mon_id (ZDR *zdrs, nsm_mon_id *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_string (zdrs, &objp->mon_name, NSM_MAXSTRLEN))
		 return FALSE;
	 if (!zdr_nsm_my_id (zdrs, &objp->my_id))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_NSM1_STATres (ZDR *zdrs, NSM1_STATres *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_nsmstat1 (zdrs, &objp->res))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->state))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_NSM1_STATargs (ZDR *zdrs, NSM1_STATargs *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_string (zdrs, &objp->mon_name, NSM_MAXSTRLEN))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_NSM1_MONres (ZDR *zdrs, NSM1_MONres *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_nsmstat1 (zdrs, &objp->res))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->state))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_NSM1_MONargs (ZDR *zdrs, NSM1_MONargs *objp)
{
	register int32_t *buf;
	buf = NULL;

	int i;
	 if (!zdr_nsm_mon_id (zdrs, &objp->mon_id))
		 return FALSE;
	 if (!zdr_opaque (zdrs, objp->priv, 16))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_NSM1_UNMONres (ZDR *zdrs, NSM1_UNMONres *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_int (zdrs, &objp->state))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_NSM1_UNMONargs (ZDR *zdrs, NSM1_UNMONargs *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_nsm_mon_id (zdrs, &objp->mon_id))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_NSM1_UNMONALLres (ZDR *zdrs, NSM1_UNMONALLres *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_int (zdrs, &objp->state))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_NSM1_UNMONALLargs (ZDR *zdrs, NSM1_UNMONALLargs *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_nsm_my_id (zdrs, &objp->my_id))
		 return FALSE;
	return TRUE;
}

uint32_t
zdr_NSM1_NOTIFYargs (ZDR *zdrs, NSM1_NOTIFYargs *objp)
{
	register int32_t *buf;
	buf = NULL;

	 if (!zdr_string (zdrs, &objp->mon_name, NSM_MAXSTRLEN))
		 return FALSE;
	 if (!zdr_int (zdrs, &objp->state))
		 return FALSE;
	return TRUE;
}
