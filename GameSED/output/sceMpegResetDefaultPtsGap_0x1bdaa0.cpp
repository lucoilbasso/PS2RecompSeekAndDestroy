#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceMpegResetDefaultPtsGap_0x1bdaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceMpegResetDefaultPtsGap_0x1bdaa0");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceMpegResetDefaultPtsGap(rdram, ctx, runtime); 
}
