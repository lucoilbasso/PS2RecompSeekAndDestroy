#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void memset_0x1d00d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("memset_0x1d00d4");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::memset(rdram, ctx, runtime); 
}
