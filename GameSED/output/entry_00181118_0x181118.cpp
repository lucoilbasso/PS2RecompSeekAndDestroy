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

// Function: entry_00181118
// Address: 0x181118 - 0x1811a8
void entry_00181118_0x181118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181118_0x181118");
#endif

    ctx->pc = 0x181118u;

    // 0x181118: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x181118u;
    {
        const bool branch_taken_0x181118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181118u;
        // 0x18111c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181118) {
            ctx->pc = 0x1811A8u;
            return;
        }
    }
    ctx->pc = 0x181120u;
    // 0x181120: 0xc5650008  lwc1        $f5, 0x8($t3)
    ctx->pc = 0x181120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x181124: 0xc5610010  lwc1        $f1, 0x10($t3)
    ctx->pc = 0x181124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181128: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x181128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18112c: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x18112cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x181130: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x181130u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x181134: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x181134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181138: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x181138u;
    {
        const bool branch_taken_0x181138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181138) {
            ctx->pc = 0x1811A8u;
            return;
        }
    }
    ctx->pc = 0x181140u;
    // 0x181140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x181144: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x181144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x181148: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x181148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x18114c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18114cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181150: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x181150u;
    {
        const bool branch_taken_0x181150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181150) {
            ctx->pc = 0x1811A8u;
            return;
        }
    }
    ctx->pc = 0x181158u;
    // 0x181158: 0xc5610014  lwc1        $f1, 0x14($t3)
    ctx->pc = 0x181158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18115c: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x18115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x181160: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x181160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x181164: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x181164u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x181168: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x181168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18116c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x18116Cu;
    {
        const bool branch_taken_0x18116c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18116c) {
            ctx->pc = 0x1811A8u;
            return;
        }
    }
    ctx->pc = 0x181174u;
    // 0x181174: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x181174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x181178: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x181178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18117c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18117Cu;
    {
        const bool branch_taken_0x18117c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18117c) {
            ctx->pc = 0x1811A8u;
            return;
        }
    }
    ctx->pc = 0x181184u;
    // 0x181184: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x181184u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x181188: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x181188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x18118c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18118cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181190: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x181190u;
    {
        const bool branch_taken_0x181190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181190) {
            ctx->pc = 0x1811A8u;
            return;
        }
    }
    ctx->pc = 0x181198u;
    // 0x181198: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x181198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18119c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18119Cu;
    {
        const bool branch_taken_0x18119c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1811A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18119Cu;
        // 0x1811a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18119c) {
            ctx->pc = 0x1811A8u;
            return;
        }
    }
    ctx->pc = 0x1811A4u;
    // 0x1811a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1811a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1811a8u;
}
