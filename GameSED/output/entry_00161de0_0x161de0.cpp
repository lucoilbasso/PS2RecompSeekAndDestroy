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

// Function: entry_00161de0
// Address: 0x161de0 - 0x161e0c
void entry_00161de0_0x161de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161de0_0x161de0");
#endif

    ctx->pc = 0x161de0u;

    // 0x161de0: 0x46042832  c.eq.s      $f5, $f4
    ctx->pc = 0x161de0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161de4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x161de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x161de8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x161DE8u;
    {
        const bool branch_taken_0x161de8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DE8u;
        // 0x161dec: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161de8) {
            ctx->pc = 0x161E28u;
            return;
        }
    }
    ctx->pc = 0x161DF0u;
    // 0x161df0: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x161df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161df4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161DF4u;
    {
        const bool branch_taken_0x161df4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161df4) {
            ctx->pc = 0x161E0Cu;
            return;
        }
    }
    ctx->pc = 0x161DFCu;
    // 0x161dfc: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x161dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e00: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x161e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161e04: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x161E04u;
    {
        const bool branch_taken_0x161e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161e04) {
            ctx->pc = 0x161E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161E04u;
            // 0x161e08: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161E70u;
            return;
        }
    }
    ctx->pc = 0x161E0Cu;
}
