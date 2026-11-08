#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0019136c
// Address: 0x19136c - 0x19137c
void entry_0019136c_0x19136c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019136c_0x19136c");
#endif

    ctx->pc = 0x19136cu;

    // 0x19136c: 0x0  nop
    ctx->pc = 0x19136cu;
    // NOP
    // 0x191370: 0x0  nop
    ctx->pc = 0x191370u;
    // NOP
    // 0x191374: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x191374u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x191378: 0xe4810234  swc1        $f1, 0x234($a0)
    ctx->pc = 0x191378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 564), bits); }
    ctx->pc = 0x19137cu;
}
