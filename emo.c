#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

const char *emoticons[] = {
	"⊂(◉‿◉)つ",
	"☜(⌒▽⌒)☞",
	"⤜(ⱺ ʖ̯ⱺ)⤏",
	"/|\\ ^._.^ /|\\",
	"ʕっ•ᴥ•ʔっ",
	"┌( ͝° ͜ʖ͡°)=ε/̵͇̿̿/’̿’̿ ̿",
	"( •͡˘ _•͡˘)ノð",
	"( ͡° ᴥ ͡°)",
	"(͡ ° ͜ʖ ͡ °)",
	"(⌐■_■)",
	"ԅ(≖‿≖ԅ)",
	"(｡◕‿‿◕｡)",
	"☉ ‿ ⚆",
	"(̿▀̿ ̿Ĺ̯̿̿▀̿ ̿)̄",
	"¯\\(°_o)/¯",
	"(-(-_-(-_(-_(-_-)_-)-_-)_-)_-)-)",
	"(҂◡_◡) ᕤ",
	"(ง •̀_•́)ง",
	"(✿◠‿◠)",
	"─=≡Σ((( つ◕ل͜◕)つ",
	"(*・‿・)ノ⌒*:･ﾟ✧",
	"٩(^‿^)۶",
	"\\(°Ω°)/",
	"(づ ￣ ³￣)づ",
	"ʕ♥ᴥ♥ʔ",
	"╰( ͡° ͜ʖ ͡° )つ──☆*:・ﾟ   ᕦ(òᴥó)ᕥ",
	"(ʘ‿ʘ)╯",
	"( ͡° ʖ̯ ͡°)",
	"(ง •̀_•́)ง         ─=≡Σ((( つ◕ﻝ͜◕)つ"
};

int main(){
	size_t emoticon_count = sizeof(emoticons)/sizeof(char *);

	struct timespec t;
	clock_gettime(CLOCK_MONOTONIC, &t);
	srand(t.tv_nsec);

	printf("%s\n", emoticons[rand() % emoticon_count]);

	return 0;
}
