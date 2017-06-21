//
// Created by JGMR on 17/06/2017.
//

#ifndef CONTROLLER_BUTTON_H
#define CONTROLLER_BUTTON_H

#include <stdio.h>
#include <wiringPi.h>

#define NUM_BTN_COLUMNS (4)
#define NUM_BTN_ROWS (1)

#define BTN_PIN (29)

#define MAX_DEBOUNCE (3)

static int32_t next_btn_scan;

static uint8_t btn_index;

static const uint8_t btnSelectionPins[4] = {12, 16, 18, 22};

static int8_t debounce_count[NUM_BTN_COLUMNS][NUM_BTN_ROWS] = {0};

/**
 * Sets everything to start the Button thread
 * @method setupButtonThread
 * @return void
 */
void setupButtonThread();

/**
 * Set all button pins
 * @method setupPins
 * @return void
 */
static void setupPins();

/**
 * Scans all Buttons to check their status
 * @method scan
 * @return void
 */
static void scan();

/**
 * Sends a message to notify system when a button is pressed
 * @method sendButtonPressedEvent
 * @param int8_t btnId
 * @return void
 */
static void sendButtonPressedEvent(int8_t btnId);

#endif //CONTROLLER_BUTTON_H
