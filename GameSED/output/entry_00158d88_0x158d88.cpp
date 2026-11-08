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

// Function: entry_00158d88
// Address: 0x158d88 - 0x158db0
void entry_00158d88_0x158d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158d88_0x158d88");
#endif

    ctx->pc = 0x158d88u;

    // 0x158d88: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x158d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d8c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x158d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x158d90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158d90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x158D94u;
    {
        const bool branch_taken_0x158d94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158d94) {
            ctx->pc = 0x158DB0u;
            return;
        }
    }
    ctx->pc = 0x158D9Cu;
    // 0x158d9c: 0x546000c6  bnel        $v1, $zero, . + 4 + (0xC6 << 2)
    ctx->pc = 0x158D9Cu;
    {
        const bool branch_taken_0x158d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d9c) {
            ctx->pc = 0x158DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D9Cu;
            // 0x158da0: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x158DA4u;
    // 0x158da4: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158da8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x158da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x158dac: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158dacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    ctx->pc = 0x158db0u;
}
