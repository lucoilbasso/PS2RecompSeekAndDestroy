#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void malloc_extend_top_0x1cf610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("malloc_extend_top_0x1cf610");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::malloc_extend_top(rdram, ctx, runtime); 
}
