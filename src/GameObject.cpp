//#include "GameObject.hh"

//void GameObject::init(uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint16_t xframes, uint16_t yframes, uint16_t image_x, uint16_t image_y, std::string descr) {
//    animacao.w = width; animacao.h = height; animacao.x = image_x; animacao.y = image_y;
//    posicao.x = x; posicao.y = y; posicao.w = width; posicao.h = height;
//    atual = 0; angle = 0; rotation.x=0; rotation.y=0;
//    add_animate(width, height, xframes, yframes, image_x, image_y, descr);
//}

//void GameObject::add_animate(uint16_t width, uint16_t height,  uint16_t xframes, uint16_t yframes, uint16_t image_x, uint16_t image_y, std::string descr) {
//    RigidBody temp(posicao.x, posicao.y, width, height);
//    animates.push_back(std::make_pair(temp, descr));
//}

////void GameObject::swap_animate(std::string descr) {
////	int count{0};
////	for (auto vetor : animates) {
////		if (vetor.second == descr) {
////			vetor.first->is_visible = true;
////			this->atual = vetor.first;
////		} else {
////			count++;
////			vetor.first->is_visible = false;
////		}
////	}
////    if(count == animates.size()) return;
////}


////void GameObject::run_animate(){

////}


//void GameObject::setPosition(int x, int y) {
//    this->posicao.x += x;
//    this->posicao.y += y;
//}

//void GameObject::set_visible(bool visivel) {
//    this->visible = visivel;
//}

//void GameObject::set_flipped(bool flipped) {
//    flip = (flipped) ? SDL_FLIP_VERTICAL : SDL_FLIP_NONE;
//}

//SDL_RendererFlip GameObject::is_flipped() {
//    return this->flip;
//}

//bool GameObject::is_visible(){
//    return this->visible;
//}

//GPU_Rect* GameObject::getPosition(){
//    return &this->posicao;
//}

//void GameObject::loop() {

//}

//double GameObject::getAngle() {
//    return this->angle;
//}

//void GameObject::loop(std::string acao) {
//    for (auto it : listerner) {
//        if (it.first == acao) it.second();
//    }
//}

//GPU_Rect* GameObject::getRect() {
//    return &this->animacao;
//}

//RigidBody GameObject::getBody() {
//    return this->animates[atual].first;
//}

//GameObject::~GameObject() {
//   animates.clear();
//}
