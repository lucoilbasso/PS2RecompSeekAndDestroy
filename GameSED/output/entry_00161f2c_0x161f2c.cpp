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

// Function: entry_00161f2c
// Address: 0x161f2c - 0x161f48
void entry_00161f2c_0x161f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161f2c_0x161f2c");
#endif

    ctx->pc = 0x161f2cu;

    // 0x161f2c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x161f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f30: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161F30u;
    {
        const bool branch_taken_0x161f30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f30) {
            ctx->pc = 0x161F48u;
            return;
        }
    }
    ctx->pc = 0x161F38u;
    // 0x161f38: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x161f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161f3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f40: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x161F40u;
    {
        const bool branch_taken_0x161f40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f40) {
            ctx->pc = 0x161F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161F40u;
            // 0x161f44: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161F9Cu;
            return;
        }
    }
    ctx->pc = 0x161F48u;
}
