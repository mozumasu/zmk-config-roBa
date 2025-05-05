// JIS配列に対応するZMK標準キーコード定義
// Keymap Editor上で直接使える形式
// 直接入力キー
#define ZKHK   GRAVE       // 半角/全角
#define MINUS  MINUS       // -
#define CARET  EQUAL       // ^
#define YEN    INT3        // ¥
#define AT     LBKT        // @
#define LBKT   RBKT        // [
#define SEMI   SEMI        // ;
#define COLON  SQT         // :
#define RBKT   BSLH        // ]
#define COMMA  COMMA       // ,
#define DOT    DOT         // .
#define SLASH  SLASH       // /
#define BSLH   INT1        // \ (ろキー)

// IME切替関連
#define MHEN   INT5        // 無変換
#define HENK   INT4        // 変換
#define KANA   LANG1       // かな
#define EISU   LANG2       // 英数

// 記号（Shift併用）
#define EXCL   LS(N1)      // !
#define DQT    LS(N2)      // "
#define HASH   LS(N3)      // #
#define DLLR   LS(N4)      // $
#define PRCNT  LS(N5)      // %
#define AMPS   LS(N6)      // &
#define SQT    LS(N7)      // '
#define LPAR   LS(N8)      // (
#define RPAR   LS(N9)      // )
#define EQUAL  LS(MINUS)   // =
#define TILDE  LS(CARET)   // ~
#define PIPE   PIPE2       // |
#define GRAVE  LS(AT)      // `
#define LBRC   LS(LBKT)    // {
#define CAPS   LS(CAPS)    // Caps Lock
#define PLUS   LS(SEMI)    // +
#define ASTRK  LS(COLON)   // *
#define RBRC   LS(RBKT)    // }
#define LT     LS(COMMA)   // <
#define RT     LS(DOT)     // >
#define QMARK  LS(SLASH)   // ?
#define UNDER  LS(BSLH)    // _
