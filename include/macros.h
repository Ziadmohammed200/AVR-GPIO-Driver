/*
 * macros.h
 *
 *  Created on: Jul 17, 2025
 *      Author: DELL
 */

#ifndef INCLUDE_MACROS_H_
#define INCLUDE_MACROS_H_

#define SET_BIT(REG,BIT)	(REG) |= ((1)<<(BIT))
#define CLEAR_BIT(REG,BIT)	(REG) &= ~((1)<<(BIT))
#define TOGGLE_BIT(REG,BIT)	(REG) ^= ((1)<<(BIT))
#define CHECK_BIT(REG,BIT)	(((REG)>>(BIT)) & (0x01))



#endif /* INCLUDE_MACROS_H_ */

