#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void CreateThread_0x1af260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateThread_0x1af260");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_syscalls::CreateThread(rdram, ctx, runtime); 
}
