#ifndef MIDI_FMTRULE
#define MIDI_FMTRULE

#ifdef USE_PPMDU_CONTENT_TYPE_ANALYSER
    #include <types/content_type_analyser.hpp>
    namespace filetypes
    {
        extern const ContentTy CnTy_MIDI; //Content ID db handle 
    };
#endif

#endif