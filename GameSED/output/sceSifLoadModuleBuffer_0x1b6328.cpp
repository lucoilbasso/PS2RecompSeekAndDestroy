#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceSifLoadModuleBuffer_0x1b6328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceSifLoadModuleBuffer_0x1b6328");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_syscalls::sceSifLoadModuleBuffer(rdram, ctx, runtime); 
}
