#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceSifSendCmd_0x1b7df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceSifSendCmd_0x1b7df8");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_syscalls::sceSifSendCmd(rdram, ctx, runtime); 
}
