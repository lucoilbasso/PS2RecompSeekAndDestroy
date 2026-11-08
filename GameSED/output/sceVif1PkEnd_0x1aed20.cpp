#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceVif1PkEnd_0x1aed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceVif1PkEnd_0x1aed20");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceVif1PkEnd(rdram, ctx, runtime); 
}
