#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceGifPkTerminate_0x1ae930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGifPkTerminate_0x1ae930");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceGifPkTerminate(rdram, ctx, runtime); 
}
