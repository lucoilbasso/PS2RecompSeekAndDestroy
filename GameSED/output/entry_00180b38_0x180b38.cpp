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

// Function: entry_00180b38
// Address: 0x180b38 - 0x180bc8
void entry_00180b38_0x180b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180b38_0x180b38");
#endif

    ctx->pc = 0x180b38u;

    // 0x180b38: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x180B38u;
    {
        const bool branch_taken_0x180b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B38u;
        // 0x180b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b38) {
            ctx->pc = 0x180BC8u;
            return;
        }
    }
    ctx->pc = 0x180B40u;
    // 0x180b40: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x180b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x180b44: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x180b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b48: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x180b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x180b4c: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x180b4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x180b50: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x180b50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x180b54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x180b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b58: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x180B58u;
    {
        const bool branch_taken_0x180b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180b58) {
            ctx->pc = 0x180BC8u;
            return;
        }
    }
    ctx->pc = 0x180B60u;
    // 0x180b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x180b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x180b64: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x180b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x180b68: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x180b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x180b6c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x180b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b70: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x180B70u;
    {
        const bool branch_taken_0x180b70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180b70) {
            ctx->pc = 0x180BC8u;
            return;
        }
    }
    ctx->pc = 0x180B78u;
    // 0x180b78: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x180b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b7c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x180b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180b80: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x180b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x180b84: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x180b84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x180b88: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x180b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b8c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x180B8Cu;
    {
        const bool branch_taken_0x180b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180b8c) {
            ctx->pc = 0x180BC8u;
            return;
        }
    }
    ctx->pc = 0x180B94u;
    // 0x180b94: 0x46060800  add.s       $f0, $f1, $f6
    ctx->pc = 0x180b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x180b98: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x180b98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b9c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x180B9Cu;
    {
        const bool branch_taken_0x180b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180b9c) {
            ctx->pc = 0x180BC8u;
            return;
        }
    }
    ctx->pc = 0x180BA4u;
    // 0x180ba4: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x180ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x180ba8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x180ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x180bac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x180bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180bb0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x180BB0u;
    {
        const bool branch_taken_0x180bb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180bb0) {
            ctx->pc = 0x180BC8u;
            return;
        }
    }
    ctx->pc = 0x180BB8u;
    // 0x180bb8: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x180bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180bbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x180BBCu;
    {
        const bool branch_taken_0x180bbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BBCu;
        // 0x180bc0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bbc) {
            ctx->pc = 0x180BC8u;
            return;
        }
    }
    ctx->pc = 0x180BC4u;
    // 0x180bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180bc8u;
}
