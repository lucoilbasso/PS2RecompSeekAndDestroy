#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void DisableDmac_0x1b0010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DisableDmac_0x1b0010");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_syscalls::DisableDmac(rdram, ctx, runtime); 
}
