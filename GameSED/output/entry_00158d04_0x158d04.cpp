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

// Function: entry_00158d04
// Address: 0x158d04 - 0x158d30
void entry_00158d04_0x158d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158d04_0x158d04");
#endif

    ctx->pc = 0x158d04u;

    // 0x158d04: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x158d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x158d08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158d0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d10: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x158D10u;
    {
        const bool branch_taken_0x158d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158d10) {
            ctx->pc = 0x158D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D10u;
            // 0x158d14: 0xc5000400  lwc1        $f0, 0x400($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158D30u;
            return;
        }
    }
    ctx->pc = 0x158D18u;
    // 0x158d18: 0x546000e7  bnel        $v1, $zero, . + 4 + (0xE7 << 2)
    ctx->pc = 0x158D18u;
    {
        const bool branch_taken_0x158d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d18) {
            ctx->pc = 0x158D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D18u;
            // 0x158d1c: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x158D20u;
    // 0x158d20: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158d24: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x158d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x158d28: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158d28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    // 0x158d2c: 0xc5000400  lwc1        $f0, 0x400($t0)
    ctx->pc = 0x158d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x158d30u;
}
