/*
** EPITECH PROJECT, 2018
** hunter.h
** File description:
** hunter.h
*/

#ifndef HUNTER_H_
#define HUNTER_H_

#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Time.h>
#include <SFML/System/Export.h>
#include <SFML/System/Types.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

typedef struct s_move {
    sfEvent event;
    sfVector2f move;
    sfVector2i mouse;
    sfVector2f duck;
    sfVector2f respawn;
    sfVector2f pos_cursor2;
    sfVector2i pos_cursor;
    sfClock *clock;
    sfTime time;
    float seconds;
    int i;
    int count_respawn;
    int count_shoot;
} move_t;

typedef struct s_text {
    sfTexture *tback;
    sfTexture *tduck;
    sfTexture *tover;
    sfTexture *tlife;
    sfTexture *tlife2;
    sfTexture *tlife3;
    sfTexture *tcursor;
    sfSprite *sback;
    sfSprite *sduck;
    sfSprite *sover;
    sfSprite *slife;
    sfSprite *slife2;
    sfSprite *slife3;
    sfSprite *scursor;
} text_t;

typedef struct s_score {
    sfText *score_text;
    sfVector2f pos;
    sfVector2f pos_life;
    sfVector2f pos_life2;
    sfVector2f pos_life3;
    sfFont *font;
    int miss;
} score_t;

typedef struct s_menu {
    unsigned int end_menu;
    sfTexture *tmenu;
    sfSprite *smenu;
} menu_t;

typedef struct s_music {
    sfMusic *shoot_snd;
    sfMusic *menu_snd;
    sfMusic *g_over_snd;
    sfMusic *theme_snd;
    sfMusic *perfect_snd;
} music_t;

typedef struct s_all {
    struct s_move *move;
    struct s_text *text;
    struct s_score *score;
    struct s_menu *menu;
    struct s_music *music;
    sfIntRect rect;
    sfRenderWindow *window;
    int flag;
} all_t;

void my_putchar(char);
void my_putstr(char *);

all_t *launch_menu(struct s_all *);
all_t init_menu(struct s_all *);
void end_menu(struct s_all *);

all_t *malloc_struct(struct s_all *);

void event_mouse(struct s_all *);
void event_shoot(struct s_all *);

void show_life(struct s_all *);

void set_and_draw(struct s_all *);
void set_texture(struct s_all *);
void draw_sprite(struct s_all *);
void set_sprite_pos_and_text(struct s_all *);

void set_cursor(struct s_all *);

all_t init_rect(struct s_all *);
all_t init_var(struct s_all *);

all_t respawn_data(struct s_all *);
all_t rm_life(struct s_all *);
void check_wall(struct s_all *);
all_t death_data(struct s_all *);

all_t create_window(struct s_all *);
all_t create_img(struct s_all *);

all_t window_open(struct s_all *);

void destroy_it(struct s_all *);
void free_it(struct s_all *);
void destroy_and_free(struct s_all *);
void destroy_menu(struct s_all *);

int help(char **);
void help_header(void);
void help_usage(void);
void help_controls(void);
void help_credits(void);

int neg(int);
int divi(int);
int mult(int);
char *stos(int);

#endif
