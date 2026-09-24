#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Screens

enum ScreensEnum {
    _SCREEN_ID_FIRST = 1,
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_PAGE_MEDICION = 2,
    SCREEN_ID_PAGE_CONFIGURACION = 3,
    SCREEN_ID_PAGE_HISTORIAL = 4,
    _SCREEN_ID_LAST = 4
};

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *page_medicion;
    lv_obj_t *page_configuracion;
    lv_obj_t *page_historial;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *btn_inicio;
    lv_obj_t *obj2;
    lv_obj_t *obj3;
    lv_obj_t *btn_celsius;
    lv_obj_t *obj4;
    lv_obj_t *btn_fahrenheit;
    lv_obj_t *obj5;
    lv_obj_t *btn_config;
    lv_obj_t *label_estado;
    lv_obj_t *label_temp_corporal;
    lv_obj_t *label_aviso;
    lv_obj_t *label_temp_ambiente;
    lv_obj_t *label_emisividad;
    lv_obj_t *btn_tomar_lectura;
    lv_obj_t *btn_historial;
    lv_obj_t *obj6;
    lv_obj_t *btn_volver_config;
    lv_obj_t *obj7;
    lv_obj_t *switch_buzzer;
    lv_obj_t *label_val_emisividad;
    lv_obj_t *spinbox_umbral;
    lv_obj_t *slider_emisividad;
    lv_obj_t *btn_umbral_down;
    lv_obj_t *btn_umbral_up;
    lv_obj_t *obj8;
    lv_obj_t *obj9;
    lv_obj_t *btn_volver_medicion;
    lv_obj_t *list_historial;
    lv_obj_t *btn_borrar_historial;
} objects_t;

extern objects_t objects;

void create_screen_main();
void tick_screen_main();

void create_screen_page_medicion();
void tick_screen_page_medicion();

void create_screen_page_configuracion();
void tick_screen_page_configuracion();

void create_screen_page_historial();
void tick_screen_page_historial();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/