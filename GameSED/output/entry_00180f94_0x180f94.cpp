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

// Function: entry_00180f94
// Address: 0x180f94 - 0x181024
void entry_00180f94_0x180f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180f94_0x180f94");
#endif

    ctx->pc = 0x180f94u;

    // 0x180f94: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x180F94u;
    {
        const bool branch_taken_0x180f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F94u;
        // 0x180f98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f94) {
            ctx->pc = 0x181024u;
            return;
        }
    }
    ctx->pc = 0x180F9Cu;
    // 0x180f9c: 0xc5650008  lwc1        $f5, 0x8($t3)
    ctx->pc = 0x180f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x180fa0: 0xc5610010  lwc1        $f1, 0x10($t3)
    ctx->pc = 0x180fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180fa4: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x180fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x180fa8: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x180fa8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x180fac: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x180facu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x180fb0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x180fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180fb4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x180FB4u;
    {
        const bool branch_taken_0x180fb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180fb4) {
            ctx->pc = 0x181024u;
            return;
        }
    }
    ctx->pc = 0x180FBCu;
    // 0x180fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x180fc0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x180fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x180fc4: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x180fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x180fc8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x180fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180fcc: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x180FCCu;
    {
        const bool branch_taken_0x180fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180fcc) {
            ctx->pc = 0x181024u;
            return;
        }
    }
    ctx->pc = 0x180FD4u;
    // 0x180fd4: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x180fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180fd8: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x180fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180fdc: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x180fdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x180fe0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x180fe0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x180fe4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x180fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180fe8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x180FE8u;
    {
        const bool branch_taken_0x180fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180fe8) {
            ctx->pc = 0x181024u;
            return;
        }
    }
    ctx->pc = 0x180FF0u;
    // 0x180ff0: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x180ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x180ff4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x180ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180ff8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x180FF8u;
    {
        const bool branch_taken_0x180ff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180ff8) {
            ctx->pc = 0x181024u;
            return;
        }
    }
    ctx->pc = 0x181000u;
    // 0x181000: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x181000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x181004: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x181004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x181008: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18100c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18100Cu;
    {
        const bool branch_taken_0x18100c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18100c) {
            ctx->pc = 0x181024u;
            return;
        }
    }
    ctx->pc = 0x181014u;
    // 0x181014: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x181014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181018: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x181018u;
    {
        const bool branch_taken_0x181018 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181018u;
        // 0x18101c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181018) {
            ctx->pc = 0x181024u;
            return;
        }
    }
    ctx->pc = 0x181020u;
    // 0x181020: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x181020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181024u;
}
