#include "skinize.h"
#include <QString>

QString Skinize()
{
    return "QDialog { background: #0a0a0b; border: 0; }"
           "QStackedWidget { background: #0a0a0b; border: 0 }"
           "QScrollArea { background: #0a0a0b; border: 0 }"
            "#scrollAreaWidgetContents { background: #0a0a0b }"
           "#BG1_1 { background: #464a4f; border-radius: 2px; }"
           "#BG1_2 { background: #464a4f; border-radius: 2px; }"
           "#BG1_3 { background: #464a4f; border-radius: 2px; border: 0px solid}"
           "#SendCoinsEntry { background: #464a4f; border-radius: 2px; border: 0px solid}"
           "#frameFee { background: #464a4f; border-radius: 2px; }"
           "#frame { background: #464a4f; border-radius: 2px; }"
           "#frame2 { background: #464a4f; border-radius: 2px; }"
           "#frameCoinControl { background: #464a4f; border-radius: 2px; }"
           "#noNavtechLabel { background: #f4eb99; padding: 5px; border-radius: 5px}"
           "#frameReceivingAddress { background: #464a4f; border-radius: 2px; }"
           "QPushButton {  background: rgba(255,255,255,0.23); border: 1px solid #a9adc4; border-radius: 3px; padding: 6px; margin: 3px; text-transform: uppercase; color: #616998; font-size: 11px; font-weight: bold }"
           "QPushButton:hover {  background: rgba(255,255,255,0.5); border: 1px solid #a9adc4; border-radius: 3px; padding: 6px; margin: 3px; text-transform: uppercase; color: #616998; font-size: 11px; font-weight: bold }"
           "QPushButton:pressed {  background: rgba(255,255,255,0.9); border: 1px solid #a9adc4; border-radius: 3px; padding: 6px; margin: 3px; text-transform: uppercase; color: #616998; font-size: 11px; font-weight: bold }"
           "QLineEdit { background: #fff; border-radius: 4px; border: 1px solid #7d7d7d; padding:5px }"
           "#unlockStakingButton { border-image: url(:/icons/lock_closed)  0 0 0 0 stretch stretch; border: 0px; }"
           "QLabel { color: #616998 }"
           "QCheckBox { color: #616998 }";
}
