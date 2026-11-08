#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void iReleaseAlarm_0x1af250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iReleaseAlarm_0x1af250");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_syscalls::iReleaseAlarm(rdram, ctx, runtime); 
}
