#ifndef EEZ_LVGL_UI_EVENTS_H
#define EEZ_LVGL_UI_EVENTS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void action_ir_a_medicion(lv_event_t * e);
extern void action_cambiar_a_celsius(lv_event_t * e);
extern void action_cambiar_a_fahrenheit(lv_event_t * e);
extern void action_ir_a_configuracion(lv_event_t * e);
extern void action_ir_a_historial(lv_event_t * e);
extern void action_borrar_historial(lv_event_t * e);
extern void action_incrementar_umbral(lv_event_t * e);
extern void action_disminuir_umbral(lv_event_t * e);

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_EVENTS_H*/