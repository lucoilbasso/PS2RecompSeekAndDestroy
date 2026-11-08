#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void DeleteThread_0x1af270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DeleteThread_0x1af270");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_syscalls::DeleteThread(rdram, ctx, runtime); 
}
