#include <allegro5/allegro_primitives.h>

#include <settings.hpp>
#include <lib/include/ball.hpp>
#include <lib/include/hitbox.hpp>

Ball::Ball(float x, float y)
{

}

HitBox Ball::build_hitbox() const
{

}

void Ball::update(float dt)
{

}

void Ball::render() const
{

}

void Ball::set_velocity(float vx, float vy)
{

}

void Ball::solve_collisions(const HitBox& player1_hb, const HitBox& player2_hb)
{
    HitBox hb = this->build_hitbox();

    // Solve collisions with table 

    // Solve collision with players
}