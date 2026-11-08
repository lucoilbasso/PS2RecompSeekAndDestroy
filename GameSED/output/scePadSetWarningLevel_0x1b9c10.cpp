#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void scePadSetWarningLevel_0x1b9c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scePadSetWarningLevel_0x1b9c10");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::scePadSetWarningLevel(rdram, ctx, runtime); 
}
