#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void scePadGetFrameCount_0x1b8f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scePadGetFrameCount_0x1b8f58");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::scePadGetFrameCount(rdram, ctx, runtime); 
}
