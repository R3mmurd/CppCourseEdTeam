#include <allegro5/allegro_primitives.h>

#include <settings.hpp>
#include <lib/include/pong_table.hpp>
#include <lib/include/hitbox.hpp>

PongTable::PongTable()
{
    this->player1 = std::make_unique<Paddle>(
        Settings::PADDLE_X_OFFSET, Settings::PADDLE_Y_OFFSET
    );

    this->player2 = std::make_unique<Paddle>(
        Settings::TABLE_WIDTH - Settings::PADDLE_WIDTH - Settings::PADDLE_X_OFFSET,
        Settings::TABLE_HEIGHT - Settings::PADDLE_HEIGHT - Settings::PADDLE_Y_OFFSET
    );

    this->ball = std::make_unique<Ball>(
        Settings::TABLE_WIDTH / 2 - Settings::BALL_SIZE / 2,
        Settings::TABLE_HEIGHT / 2 - Settings::BALL_SIZE / 2
    );

    this->player1_score = 0;
    this->player2_score = 0;
    this->serving_player = 0;
    this->winning_player = 0;
    
    srand(time(nullptr));
}

void PongTable::handle_input(const ALLEGRO_KEYBOARD_STATE& kb_state)
{
    
}

void PongTable::update(float dt)
{
    this->player1->update(dt);
    this->player2->update(dt);
    this->ball->update(dt);
}

void PongTable::render() const
{
    this->player1->render();
    this->player2->render();
    this->ball->render();

    al_draw_text(
        Settings::fonts["text"],
        al_map_rgb(255, 255, 255),
        Settings::TABLE_WIDTH / 2,
        Settings::TABLE_HEIGHT / 2,
        ALLEGRO_ALIGN_CENTER,
        "Hello, Pong!"
    );
}