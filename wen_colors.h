///////////////////////////////////////////////////////////////////////////////////
//  Color names and codes from https://www.rapidtables.com/web/color/RGB_Color.html
///////////////////////////////////////////////////////////////////////////////////

#ifndef wen_colors_h
#define wen_colors_h

typedef struct wen_color {
    float r, g, b, a;
} wen_color;

#ifndef WENCOLOE
#define WENCOLOR static const wen_color
#endif

#ifndef CLAMP
#define CLAMP(X, Min, Max) (X < Min ? Min : X > Max ? Max : X)
#endif

//  Returns color struct with ensured value ranges from 0 to 1
static wen_color wen_color_new(float r, float g, float b, float a) {
    r = CLAMP(r, 0, 1);
    g = CLAMP(g, 0, 1);
    b = CLAMP(b, 0, 1);
    a = CLAMP(a, 0, 1);
    wen_color out = {r, g, b, a};
    return out;
}
///////////////////////////////////////////////////////////////////////////////////
//  BASIC COLORS

WENCOLOR COLOR_BLACK                        = {0, 0, 0, 1};
WENCOLOR COLOR_WHITE                        = {1, 1, 1, 1};
WENCOLOR COLOR_RED                          = {1, 0, 0, 1};
WENCOLOR COLOR_LIME                         = {0, 1, 0, 1};
WENCOLOR COLOR_BLUE                         = {0, 0, 1, 1};
WENCOLOR COLOE_YELLOW                       = {1, 1, 0, 1};
WENCOLOR COLOR_CYAN                         = {0, 1, 1, 1};
WENCOLOR COLOR_MAGENTA                      = {1, 0, 1, 1};
WENCOLOR COLOR_SILVER                       = {.753f, .753f, .753f, 1};
WENCOLOR COLOR_GRAY                         = {.502f, .502f, .502f, 1};
WENCOLOR COLOR_MAROON                       = {.502f, 0, 0, 1};
WENCOLOR COLOR_OLIVE                        = {.502f, .502f, 0, 1};
WENCOLOR COLOR_GREEN                        = {0, .502f, 0, 1};
WENCOLOR COLOR_PURPLE                       = {.502f, 0, .502f, 1};
WENCOLOR COLOR_TEAL                         = {0, .502f, .502f, 1};
WENCOLOR COLOR_NAVY                         = {0, 0, .502f, 1};
///////////////////////////////////////////////////////////////////////////////////
//  COLORS

//WENCOLOR COLOR_MAROON
WENCOLOR COLOR_DARK_RED                     = {.545f, 0, 0, 1};
WENCOLOR COLOR_BROWN                        = {.647f, .164f, .164f, 1};
WENCOLOR COLOR_FIREBRICK                    = {.698f, .133f, .133f, 1};
WENCOLOR COLOR_CRIMSON                      = {.863f, .078f, .235f, 1};
//WENCOLOR  COLOR_RED               
WENCOLOR COLOR_TOMATO                       = {1, .388f, .278f, 1};
WENCOLOR COLOR_CORAL                        = {1, .498f, .313f, 1};
WENCOLOR COLOR_INDIAN_RED                   = {.804f, .36f, .36f, 1};
WENCOLOR COLOR_LIGHT_CORAL                  = {.941f, .502f, .502f, 1};
WENCOLOR COLOR_DARK_SALMON                  = {.913f, .588f, .478f, 1};
WENCOLOR COLOR_SALMON                       = {.98f, .502f, .447f, 1};
WENCOLOR COLOR_LIGHT_SALMON                 = {1, .627f, .478f, 1};
WENCOLOR COLOR_ORANGE_RED                   = {1, .27f, 0, 1};
WENCOLOR COLOR_DARK_ORANGE                  = {1, .549f, 0, 1};
WENCOLOR COLOR_ORANGE                       = {1, .647f, 0, 1};
WENCOLOR COLOR_GOLD                         = {1, .843f, 0, 1};
WENCOLOR COLOR_DARK_GOLDEN_ROD              = {.721f, .525f, .043f, 1};
WENCOLOR COLOR_GOLDEN_ROD                   = {.854f, .647f, .125f, 1};
WENCOLOR COLOR_PALE_GOLDEN_ROD              = {.933f, .91f, .667f, 1};
WENCOLOR COLOR_DARK_KHAKI                   = {.741f, .717f, .419f, 1};
WENCOLOR COLOR_KHAKI                        = {.941f, .901f, .549f, 1};
//WENCOLOR  COLOR_OLIVE
WENCOLOR COLOR_YELLOW                       = {1, 1, 0, 1};
WENCOLOR COLOR_YELLOW_GREEN                 = {.603f, .803f, .196f, 1};
WENCOLOR COLOR_DARK_OLIVE_GREEN             = {.333f, .419f, .184f, 1};
WENCOLOR COLOR_OLIVE_DRAB                   = {.419f, .557f, .137f, 1};
WENCOLOR COLOR_LAWN_GREEN                   = {.486f, .988f, 0, 1};
WENCOLOR COLOR_CHARTREUSE                   = {.498f, 1, 0, 1};
WENCOLOR COLOR_GREEN_YELLOW                 = {.678f, 1, .184f, 1};
WENCOLOR COLOR_DARK_GREEN                   = {0, .392f, 0, 1};
//WENCOLOR  COLOR_GREEN         
WENCOLOR COLOR_FOREST_GREEN                 = {.133f, .545f, .133f, 1};
//WENCOLOR  COLOR_LIME          
WENCOLOR COLOR_LIME_GREEN                   = {.196f, .804f, .196f, 1};
WENCOLOR COLOR_LIGHT_GREEN                  = {.564f, .933f, .564f, 1};
WENCOLOR COLOR_PALE_GREEN                   = {.596f, .984f, .596f, 1};
WENCOLOR COLOR_DARK_SEA_GREEN               = {.56f, .737f, .56f, 1};
WENCOLOR COLOR_MEDIUM_SPRING_GREEN          = {0, .98f, .604f, 1};
WENCOLOR COLOR_SPRING_GREEN                 = {0, 1, .498f, 1};
WENCOLOR COLOR_SEA_GREEN                    = {.18f, .545f, .341f, 1};
WENCOLOR COLOR_MEDIUM_AQUA_MARINE           = {.4f, .804f, .667f, 1};
WENCOLOR COLOR_MEDIUM_SEA_GREEN             = {.235f, .702f, .443f, 1};
WENCOLOR COLOR_LIGHT_SEA_GREEN              = {.125f, .698f, .667f, 1};
WENCOLOR COLOR_DARK_SLATE_GRAY              = {.184f, .309f, .309f, 1};
//WENCOLOR  COLOR_TEAL      
WENCOLOR COLOR_DARK_CYAN                    = {0, .545f, .545f, 1};
WENCOLOR COLOR_AQUA                         = {0, 1, 1, 1};
//WENCOLOR  COLOR_CYAN      
WENCOLOR COLOR_LIGHT_CYAN                   = {.878f, 1, 1, 1};
WENCOLOR COLOR_DARK_TURQUOISE               = {0, .807f, .819f, 1};
WENCOLOR COLOR_TURQUOISE                    = {.25f, .878f, .815f, 1};
WENCOLOR COLOR_MEDIUM_TURQUOISE             = {.282f, .819f, .8f, 1};
WENCOLOR COLOR_PALE_TURQUOISE               = {.686f, .933f, .933f, 1};
WENCOLOR COLOR_AQUA_MARINE                  = {.498f, 1, .831f, 1};
WENCOLOR COLOR_POWDER_BLUE                  = {.69f, .878f, .901f, 1};
WENCOLOR COLOR_CADET_BLUE                   = {.372f, .619f, .627f, 1};
WENCOLOR COLOR_STEEL_BLUE                   = {.274f, .509f, .705f, 1};
WENCOLOR COLOR_CORN_FLOWER_BLUE             = {.392f, .584f, .929f, 1};
WENCOLOR COLOR_DEEP_SKY_BLUE                = {0, .749f, 1, 1};
WENCOLOR COLOR_DODGER_BLUE                  = {.117f, .564f, 1, 1};
WENCOLOR COLOR_LIGHT_BLUE                   = {.678f, .847f, .901f, 1};
WENCOLOR COLOR_SKY_BLUE                     = {.529f, .807f, .921f, 1};
WENCOLOR COLOR_LIGHT_SKY_BLUE               = {.529f, .807f, .98f, 1};
WENCOLOR COLOR_MIDNIGHT_BLUE                = {.098f, .098f, .439f, 1};
//WENCOLOR  COLOR_NAVY      
WENCOLOR COLOR_DARK_BLUE                    = {0, 0, .545f, 1};
WENCOLOR COLOR_MEDIUM_BLUR                  = {0, 0, .804f, 1};
//WENCOLOR  COLOR_BLUE      
WENCOLOR COLOR_ROYAL_BLUE                   = {.255f, .411f, .882f, 1};
WENCOLOR COLOR_BLUE_VIOLET                  = {.541f, .168f, .886f, 1};
WENCOLOR COLOR_INDIGO                       = {.294f, 0, .509f, 1};
WENCOLOR COLOR_DARK_SLATE_BLUE              = {.282f, .239f, .545f, 1};
WENCOLOR COLOR_SLATE_BLUE                   = {.415f, .353f, .804f, 1};
WENCOLOR COLOR_MEDIUM_SLATE_BLUE            = {.482f, .407f, .933f, 1};
WENCOLOR COLOR_MEDIUM_PURPLE                = {.576f, .439f, .858f, 1};
WENCOLOR COLOR_DARK_MAGENTA                 = {.545f, 0, .545f, 1};
WENCOLOR COLOR_DARK_VIOLET                  = {.58f, 0, .827f, 1};
WENCOLOR COLOR_DARK_ORCHID                  = {.6f, .196f, .8f, 1};
WENCOLOR COLOR_MEDIUM_ORCHID                = {.729f, .333f, .827f, 1};
//WENCOLOR  COLOR_PURPLE        
WENCOLOR COLOR_THISTLE                      = {.847f, .749f, .847f, 1};
WENCOLOR COLOR_PLUM                         = {.866f, .627f, .866f, 1};
WENCOLOR COLOR_VIOLET                       = {.933f, .509f, .933f, 1};
//WENCOLOR  COLOR_MAGENTA
WENCOLOR COLOR_FUCHSIA                      = {1, 0, 1, 1};
WENCOLOR COLOR_ORCHID                       = {.854f, .439f, .839f, 1};
WENCOLOR COLOR_MEDIUM_VIOLET_RED            = {.78f, .082f, .521f, 1};
WENCOLOR COLOR_PALE_VIOLET_RED              = {.858f, .439f, .576f, 1};
WENCOLOR COLOR_DEEP_PINK                    = {1, .078f, .576f, 1};
WENCOLOR COLOR_HOT_PINK                     = {1, .411f, .705f, 1};
WENCOLOR COLOR_LIGHT_PINK                   = {1, .713f, .756f, 1};
WENCOLOR COLOR_PINK                         = {1, .753f, .796f, 1};
WENCOLOR COLOR_ANTIQUE_WHITE                = {.98f, .921f, .843f, 1};
WENCOLOR COLOR_BEIGE                        = {.96f, .96f, .862f, 1};
WENCOLOR COLOR_BISQUE                       = {1, .894f, .768f, 1};
WENCOLOR COLOR_BLANCHED_ALMOND              = {1, .921f, .804f, 1};
WENCOLOR COLOR_WHEAT                        = {.96f, .87f, .702f, 1};
WENCOLOR COLOR_CORN_SILK                    = {1, .972f, .862f, 1};
WENCOLOR COLOR_LEMON_CHIFFON                = {1, .98f, .804f, 1};
WENCOLOR COLOR_LIGHT_GOLDEN_ROD_YELLOW      = {.98f, .98f, .823f, 1};
WENCOLOR COLOR_LIGHT_YELLOW                 = {1, 1, .878f, 1};
WENCOLOR COLOR_SADDLE_BROWN                 = {.545f, .27f, .074f, 1};
WENCOLOR COLOR_SIENNA                       = {.627f, .321f, .176f, 1};
WENCOLOR COLOR_CHOCOLATE                    = {.823f, .411f, .117f, 1};
WENCOLOR COLOR_PERU                         = {.804f, .521f, .247f, 1};
WENCOLOR COLOR_SANDY_BROWN                  = {.957f, .643f, .376f, 1};
WENCOLOR COLOR_BURLY_WOOD                   = {.87f, .721f, .05f, 1};
WENCOLOR COLOR_TAN                          = {.823f, .706f, .549f, 1};
WENCOLOR COLOR_ROSY_BROWN                   = {.737f, .56f, .56f, 1};
WENCOLOR COLOR_MOCCASIN                     = {1, .894f, .71f, 1};
WENCOLOR COLOR_NAVAJO_WHITE                 = {1, .87f, .678f, 1};
WENCOLOR COLOR_PEACH_PUFF                   = {1, .855f, .725f, 1};
WENCOLOR COLOR_MISTY_ROSE                   = {1, .894f, .882f, 1};
WENCOLOR COLOR_LAVENDER_BLUSH               = {1, .941f, .96f, 1};
WENCOLOR COLOR_LINEN                        = {.98f, .941f, .901f, 1};
WENCOLOR COLOR_OLD_LACE                     = {.992f, .96f, .901f, 1};
WENCOLOR COLOR_PAPAYA_WHIP                  = {1, .937f, .835f, 1};
WENCOLOR COLOR_SEA_SHELL                    = {1, .96f, .933f, 1};
WENCOLOR COLOR_MINT_CREAM                   = {.96f, 1, .98f, 1};
WENCOLOR COLOR_SLATE_GRAY                   = {.439f, .501f, .564f, 1};
WENCOLOR COLOR_LIGHT_SLATE_GRAY             = {.466f, .533f, .6f, 1};
WENCOLOR COLOR_LIGHT_STEEL_BLUE             = {.69f, .768f, .87f, 1};
WENCOLOR COLOR_LAVENDER                     = {.901f, .901f, .98f, 1};
WENCOLOR COLOR_FLORAL_WHITE                 = {1, .98f, .941f, 1};
WENCOLOR COLOR_ALICE_BLUE                   = {.941f, .972f, 1, 1};
WENCOLOR COLOR_GHOST_WHITE                  = {.972f, .972f, 1, 1};
WENCOLOR COLOR_HONEYDEW                     = {.941f, 1, .941f, 1};
WENCOLOR COLOR_IVORY                        = {1, 1, .941f, 1};
WENCOLOR COLOR_AZURE                        = {.941f, 1, 1, 1};
WENCOLOR COLOR_SNOW                         = {1, .98f, .98f, 1};
//WENCOLOR  COLOR_BLACK 
WENCOLOR COLOR_DIM_GRAY                     = {.411f, .411f, .411f, 1};
//WENCOLOR  COLOR_GRAY  
WENCOLOR COLOR_DARK_GRAY                    = {.662f, .662f, .662f, 1};
// WENCOLOR COLOR_SILVER    
WENCOLOR COLOR_LIGHT_GRAY                   = {.827f, .827f, .827f, 1};
WENCOLOR COLOR_GAINSBORO                    = {.863f, .863f, .863f, 1};
WENCOLOR COLOR_WHITE_SMOKE                  = {.96f, .96f, .96f, 1};
//WENCOLOR  COLOR_WHITE


#endif
