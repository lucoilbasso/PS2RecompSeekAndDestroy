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

// Function: entry_00158d5c
// Address: 0x158d5c - 0x158d88
void entry_00158d5c_0x158d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158d5c_0x158d5c");
#endif

    ctx->pc = 0x158d5cu;

    // 0x158d5c: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x158d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d60: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x158d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x158d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d68: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x158D68u;
    {
        const bool branch_taken_0x158d68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158d68) {
            ctx->pc = 0x158D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D68u;
            // 0x158d6c: 0xc5000408  lwc1        $f0, 0x408($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158D88u;
            return;
        }
    }
    ctx->pc = 0x158D70u;
    // 0x158d70: 0x546000d1  bnel        $v1, $zero, . + 4 + (0xD1 << 2)
    ctx->pc = 0x158D70u;
    {
        const bool branch_taken_0x158d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d70) {
            ctx->pc = 0x158D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D70u;
            // 0x158d74: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x158D78u;
    // 0x158d78: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158d7c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x158d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x158d80: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158d80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    // 0x158d84: 0xc5000408  lwc1        $f0, 0x408($t0)
    ctx->pc = 0x158d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x158d88u;
}
