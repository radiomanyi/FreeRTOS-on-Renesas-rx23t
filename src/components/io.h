/*
 * io.h
 *
 *  Created on: 2017年7月27日
 *      Author: Cotyledon
 */

#ifndef COMPONENTS_IO_H_
#define COMPONENTS_IO_H_

#define IO_TASK_PRI     1

typedef enum {
    MISSION_SELECT_PAGE = 0,
    MISSION_SETTING_PAGE = 1,
}page_name_e;

typedef enum {
    KEY_UP = 2,
    KEY_DOWN = 10,
    KEY_LEFT = 5,
    KEY_RIGHT = 7,
    KEY_ENTER = 15,
    KEY_BACK = 13,
    KEY_COMPELETE = 16,
}key_name_e;

typedef enum {
    SELECT = 0,
    INPUT = 1,
}course_state_e;

typedef enum {
    IDLE = 0,
    INTEGER = 1,
    DECIMAL_1 = 2,
    DECIMAL_2 = 3,
    END = 4,
    CANCEL = 5,
}input_state_e;

extern void io_init(void);
extern void io_input(void);

#endif /* COMPONENTS_IO_H_ */
