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

// Function: entry_00124a60
// Address: 0x124a60 - 0x124a80
void entry_00124a60_0x124a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124a60_0x124a60");
#endif

    ctx->pc = 0x124a60u;

    // 0x124a60: 0xc69701cc  lwc1        $f23, 0x1CC($s4)
    ctx->pc = 0x124a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x124a64: 0xc69601d0  lwc1        $f22, 0x1D0($s4)
    ctx->pc = 0x124a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x124a68: 0x0  nop
    ctx->pc = 0x124a68u;
    // NOP
    // 0x124a6c: 0x0  nop
    ctx->pc = 0x124a6cu;
    // NOP
    // 0x124a70: 0x46000e03  div.s       $f24, $f1, $f0
    ctx->pc = 0x124a70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x124a74: 0x3812  mflo        $a3
    ctx->pc = 0x124a74u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x124a78: 0xafa70104  sw          $a3, 0x104($sp)
    ctx->pc = 0x124a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 7));
    // 0x124a7c: 0x0  nop
    ctx->pc = 0x124a7cu;
    // NOP
    ctx->pc = 0x124a80u;
}
