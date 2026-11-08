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

// Function: entry_00158c88
// Address: 0x158c88 - 0x158cd4
void entry_00158c88_0x158c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158c88_0x158c88");
#endif

    ctx->pc = 0x158c88u;

    // 0x158c88: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x158c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158c8c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x158c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x158c90: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x158c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158c94: 0xc5000400  lwc1        $f0, 0x400($t0)
    ctx->pc = 0x158c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158c98: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x158c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158c9c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x158c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158ca0: 0x8d04047c  lw          $a0, 0x47C($t0)
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158ca4: 0x244a0110  addiu       $t2, $v0, 0x110
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x158ca8: 0x24490120  addiu       $t1, $v0, 0x120
    ctx->pc = 0x158ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x158cac: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x158cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158cb0: 0x41203  sra         $v0, $a0, 8
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
    // 0x158cb4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x158cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x158cb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158cbc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x158CBCu;
    {
        const bool branch_taken_0x158cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CBCu;
        // 0x158cc0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cbc) {
            ctx->pc = 0x158CD4u;
            return;
        }
    }
    ctx->pc = 0x158CC4u;
    // 0x158cc4: 0x546000fc  bnel        $v1, $zero, . + 4 + (0xFC << 2)
    ctx->pc = 0x158CC4u;
    {
        const bool branch_taken_0x158cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158cc4) {
            ctx->pc = 0x158CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158CC4u;
            // 0x158cc8: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x158CCCu;
    // 0x158ccc: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x158cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x158cd0: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    ctx->pc = 0x158cd4u;
}
