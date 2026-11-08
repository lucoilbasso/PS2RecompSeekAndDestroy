#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceMpegSetDefaultPtsGap_0x1bda88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceMpegSetDefaultPtsGap_0x1bda88");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceMpegSetDefaultPtsGap(rdram, ctx, runtime); 
}
