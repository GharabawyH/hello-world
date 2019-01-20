#ifndef MTIM1_PRIVATE_H
#define MTIM1_PRIVATE_H

#define SREG	 (*((volatile u8*)0x5F))
#define TCCR1A  (*((volatile u8*)0x4F))
#define TCCR1B  (*((volatile u8*)0x4E))
#define TCNT1	 (*((volatile u16*)0x4C))
#define OCR1A	 (*((volatile u16*)0x4A))
#define OCR1B	 (*((volatile u16*)0x48))
#define ICR	 (*((volatile u16*)0x46))
#define TIMSK	 (*((volatile u8*)0x59))
#define TIFR	 (*((volatile u8*)0x58))


#endif
