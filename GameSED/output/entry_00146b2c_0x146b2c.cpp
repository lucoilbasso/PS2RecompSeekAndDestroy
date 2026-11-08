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

// Function: entry_00146b2c
// Address: 0x146b2c - 0x146b4c
void entry_00146b2c_0x146b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146b2c_0x146b2c");
#endif

    ctx->pc = 0x146b2cu;

    // 0x146b2c: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x146b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x146B30u;
    {
        const bool branch_taken_0x146b30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146b30) {
            ctx->pc = 0x146B4Cu;
            return;
        }
    }
    ctx->pc = 0x146B38u;
    // 0x146b38: 0x46066001  sub.s       $f0, $f12, $f6
    ctx->pc = 0x146b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x146b3c: 0x460060c6  mov.s       $f3, $f12
    ctx->pc = 0x146b3cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[12]);
    // 0x146b40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x146b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x146b44: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x146b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x146b48: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x146b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->pc = 0x146b4cu;
}
