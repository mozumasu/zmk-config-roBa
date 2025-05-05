// JIS配列に対応するZMK標準キーコード定義
// Keymap Editor上で直接使える形式

// 直接入力キー
#undef ZKHK
#define ZKHK   GRAVE       // 半角/全角
/*#undef MINUS
#define MINUS  MINUS       // -*/
#undef CARET
#define CARET  EQUAL       // ^
#undef YEN
#define YEN    INT3        // ¥
#undef AT
#define AT     LBKT        // @
#undef LBKT
#define LBKT   RBKT        // [
#undef SEMI
#define SEMI   SEMI        // ;
#undef COLON
#define COLON  SQT         // :
#undef RBKT
#define RBKT   BSLH        // ]
#undef COMMA
#define COMMA  COMMA       // ,
#undef DOT
#define DOT    DOT         // .
#undef SLASH
#define SLASH  SLASH       // /
#undef BSLH
#define BSLH   INT1        // \ (ろキー)

// IME切替関連
#undef MHEN
#define MHEN   INT5        // 無変換
#undef HENK
#define HENK   INT4        // 変換
#undef KANA
#define KANA   LANG1       // かな
#undef EISU
#define EISU   LANG2       // 英数

// 記号（Shift併用）
#undef EXCL
#define EXCL   LS(N1)      // !
#undef DQT
#define DQT    LS(N2)      // "
#undef HASH
#define HASH   LS(N3)      // #
#undef DLLR
#define DLLR   LS(N4)      // $
#undef PRCNT
#define PRCNT  LS(N5)      // %
#undef AMPS
#define AMPS   LS(N6)      // &
#undef SQT
#define SQT    LS(N7)      // '
#undef LPAR
#define LPAR   LS(N8)      // (
#undef RPAR
#define RPAR   LS(N9)      // )
#undef EQUAL
#define EQUAL  LS(MINUS)   // =
#undef TILDE
#define TILDE  LS(CARET)   // ~
#undef PIPE
#define PIPE   PIPE2       // |
#undef GRAVE
#define GRAVE  LS(AT)      // `
#undef LBRC
#define LBRC   LS(LBKT)    // {
#undef CAPS
#define CAPS   LS(CAPS)    // Caps Lock
#undef PLUS
#define PLUS   LS(SEMI)    // +
#undef ASTRK
#define ASTRK  LS(COLON)   // *
#undef RBRC
#define RBRC   LS(RBKT)    // }
#undef LT
#define LT     LS(COMMA)   // <
#undef RT
#define RT     LS(DOT)     // >
#undef QMARK
#define QMARK  LS(SLASH)   // ?
#undef UNDER
#define UNDER  LS(BSLH)    // _
