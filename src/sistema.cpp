//#include "sistema.hh"

//SDL_Renderer* Systema::renderer = nullptr;

//Systema::Systema(const char* titulo, int width, int height, bool fullscreen) : frameStart(0), fps(1000/60), frameTime(0) {
//	if (fullscreen){ flags = SDL_WINDOW_FULLSCREEN; } else { flags = SDL_WINDOW_RESIZABLE;}

//	if (SDL_Init(SDL_INIT_EVERYTHING) == 0){
//		if(!(IMG_Init(IMG_INIT_PNG)))
//			std::cerr << "Falha ao carregar IMG PNG. erro: " << SDL_GetError() << std::endl;

//		if(!(TTF_Init()))
//			std::cerr << "Falha ao carregar TTF. ";

//		// if (!(IMG_Init(IMG_INIT_JPG)))
//		// 	std::cerr << "Falha ao carregar IMG JPG. erro: " << SDL_GetError() << std::endl;

//		janela = SDL_CreateWindow(titulo, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
//		if (janela == nullptr)
//			std::cerr << "Falha ao abrir a janela. erro: " << SDL_GetError() << std::endl;

//		Systema::renderer = SDL_CreateRenderer(janela, -1, 0);
//		SDL_SetRenderDrawColor(Systema::renderer, 0, 0, 0, 255);
//		if (Systema::renderer == nullptr)
//			std::cerr << "Falha ao abrir o renderer. erro: " << SDL_GetError() << std::endl;

//		isRunning = true;
//	}
//	else
//	{
//		std::cerr << "Erro ao iniciar o SDL2. Erro: " << SDL_GetError() << std::endl;
//	}

//    tela.init()
//}

//void Systema::update() {
//	SDL_RenderPresent(Systema::renderer);
//	frameStart = SDL_GetTicks();
//	frameTime = SDL_GetTicks() - frameStart;
//	if (fps > frameTime)
//		SDL_Delay(fps - frameTime);
//}

//void Systema::renderizar(){
//	SDL_RenderClear(Systema::renderer);
//}

//void Systema::stopGame(){
//	this->isRunning = false;
//}

//bool Systema::running(){
//	return this->isRunning;
//}

//SDL_Renderer* Systema::get_renderer(){
//	return Systema::renderer;
//}

//Systema::~Systema(){
//	SDL_DestroyWindow(janela);
//	SDL_DestroyRenderer(Systema::renderer);
//	TTF_Quit();
//	SDL_Quit();
//}
