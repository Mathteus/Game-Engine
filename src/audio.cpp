//#include "audio.hh"

//Audio::Audio() {
//    if(!(Mix_Init(MIX_INIT_FLAC | MIX_INIT_MID | MIX_INIT_MOD | MIX_INIT_OPUS | MIX_INIT_MP3))) {
//        std::cerr << "Falha ao carregar Audio. erro: " << SDL_GetError() << std::endl;
//    }
//}

//bool Audio::init(const char* path) {
//    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
//    self = Mix_LoadWAV(path);
//    return (self == nullptr) ? true : false;
//}

//void Audio::play(int vezes) {
//    Mix_PlayChannel(1, self, vezes);
//}

//void Audio::pause() {
//    Mix_Pause(1);
//}

//Audio::~Audio() {
//    Mix_CloseAudio();
//    Mix_FreeChunk(self);
//    Mix_Quit();
//}
