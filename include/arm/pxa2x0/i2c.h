/*
 * $Id$
 *
 * XScale PXA250/PXA210 I2C Registers
 * Copyright (C) 2002 ETC s.r.o.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the ETC s.r.o. nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Written by Marcel Telka <marcel@telka.sk>, 2002.
 *
 * Documentation:
 * [1] Intel Corporation, "Intel PXA250 and PXA210 Application Processors
 *     Developer's Manual", February 2002, Order Number: 278522-001
 *
 */

#ifndef	PXA2X0_I2C_H
#define	PXA2X0_I2C_H

#ifndef uint32_t
typedef	unsigned int	uint32_t;
#endif

/* I2C Registers */

#define	I2C_BASE	0x40300000

typedef volatile struct I2C_registers {
	uint32_t __reserved1[1440];
	uint32_t ibmr;
	uint32_t __reserved2;
	uint32_t idbr;
	uint32_t __reserved3;
	uint32_t icr;
	uint32_t __reserved4;
	uint32_t isr;
	uint32_t __reserved5;
	uint32_t isar;
} I2C_registers;

#ifndef I2C_pointer
#define	I2C_pointer	((I2C_registers*) I2C_BASE)
#endif

#define	IBMR		I2C_pointer->ibmr
#define	IDBR		I2C_pointer->idbr
#define	ICR		I2C_pointer->icr
#define	ISR		I2C_pointer->isr
#define	ISAR		I2C_pointer->isar

#endif	/* PXA2X0_I2C_H */
