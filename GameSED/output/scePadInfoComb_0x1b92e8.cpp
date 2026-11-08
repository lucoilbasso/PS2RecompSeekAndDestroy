#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void scePadInfoComb_0x1b92e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scePadInfoComb_0x1b92e8");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::scePadInfoComb(rdram, ctx, runtime); 
}
