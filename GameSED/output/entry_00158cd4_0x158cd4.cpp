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

// Function: entry_00158cd4
// Address: 0x158cd4 - 0x158d04
void entry_00158cd4_0x158cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158cd4_0x158cd4");
#endif

    ctx->pc = 0x158cd4u;

    // 0x158cd4: 0xc5000404  lwc1        $f0, 0x404($t0)
    ctx->pc = 0x158cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158cd8: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x158cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158cdc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x158cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158ce0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158ce4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x158CE4u;
    {
        const bool branch_taken_0x158ce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158ce4) {
            ctx->pc = 0x158CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158CE4u;
            // 0x158ce8: 0xc5000408  lwc1        $f0, 0x408($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158D04u;
            return;
        }
    }
    ctx->pc = 0x158CECu;
    // 0x158cec: 0x546000f2  bnel        $v1, $zero, . + 4 + (0xF2 << 2)
    ctx->pc = 0x158CECu;
    {
        const bool branch_taken_0x158cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158cec) {
            ctx->pc = 0x158CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158CECu;
            // 0x158cf0: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x158CF4u;
    // 0x158cf4: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158cf8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x158cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x158cfc: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    // 0x158d00: 0xc5000408  lwc1        $f0, 0x408($t0)
    ctx->pc = 0x158d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x158d04u;
}
