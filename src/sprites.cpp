//#include "sprites.hh"

//void Sprite::init(int width, int height, int xpos , int ypos, int image_x, int image_y) {
//    pos_image.x = image_x; pos_image.y = image_y; pos_image.w = width; pos_image.h = height;
//    pos_game.x = xpos; pos_game.y = ypos; pos_game.w = width; pos_game.h = height;
//}

//void Sprite::mover(float xpos, float ypos) {
//   this->pos_game.x = xpos; this->pos_game.y = ypos;
//}

//void Sprite::draw_sprite(GPU_Target* janela, GPU_Image* image) {
//   GPU_Blit(image, &pos_image, janela, pos_game.x, pos_game.y);
//}

//GPU_Rect Sprite::getRect() {
//    return this->pos_image;
//}

//void Sprite::run_animate() {
////     if (is_animate) {
////         frameTime++;
////         if (60 / frameTime == 4) {
////             if (animacao.x < wpos) {
////                 frameTime = 0;
////                 animacao.x += animw;
////             }

////             if (animacao.x >= wpos) {
////                 animacao.x = 0;
////                 animacao.y += animh;
////             }

////             if (animacao.y >= hpos) {
////                 animacao.y = 0;
////             }
////         }
////     }
//}

//void Dot::move( SDL_Rect& wall )
//{
//    //Move the dot left or right
//    mPosX += mVelX;
//    mCollider.x = mPosX;

//    //If the dot collided or went too far to the left or right
//    if( ( mPosX < 0 ) || ( mPosX + DOT_WIDTH > SCREEN_WIDTH ) || checkCollision( mCollider, wall ) ) {
//        //Move back
//        mPosX -= mVelX;
//        mCollider.x = mPosX;
//    }

//    //Move the dot up or down
//    mPosY += mVelY;
//    mCollider.y = mPosY;

//    //If the dot collided or went too far up or down
//    if( ( mPosY < 0 ) || ( mPosY + DOT_HEIGHT > SCREEN_HEIGHT ) || checkCollision( mCollider, wall ) ) {
//        //Move back
//        mPosY -= mVelY;
//        mCollider.y = mPosY;
//    }
//}

//bool checkCollision( SDL_Rect a, SDL_Rect b )
//{
//    //The sides of the rectangles
//    int leftA, leftB;
//    int rightA, rightB;
//    int topA, topB;
//    int bottomA, bottomB;

//    //Calculate the sides of rect A
//    leftA = a.x;
//    rightA = a.x + a.w;
//    topA = a.y;
//    bottomA = a.y + a.h;

//    //Calculate the sides of rect B
//    leftB = b.x;
//    rightB = b.x + b.w;
//    topB = b.y;
//    bottomB = b.y + b.h;

//    if( bottomA <= topB ) return false;

//    if( topA >= bottomB ) return false;

//    if( rightA <= leftB ) return false;

//    if( leftA >= rightB ) return false;

//    //If none of the sides from A are outside B
//    return true;
//}

//SDL_Rect Sprite::getArea() {
//    this->pos_game;
//}

//bool Sprite::collision(Area compare) {

//}

