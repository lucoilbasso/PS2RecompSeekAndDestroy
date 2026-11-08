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

// Function: sScanActorForwardCheck__FP8WcEntityP9FVector32Pvi
// Address: 0x138f98 - 0x139014
void sScanActorForwardCheck__FP8WcEntityP9FVector32Pvi_0x138f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sScanActorForwardCheck__FP8WcEntityP9FVector32Pvi_0x138f98");
#endif

    ctx->pc = 0x138f98u;

    // 0x138f98: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x138f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138f9c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x138f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138fa0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x138fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138fa4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x138FA4u;
    {
        const bool branch_taken_0x138fa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x138FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FA4u;
        // 0x138fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fa4) {
            ctx->pc = 0x13900Cu;
            goto label_13900c;
        }
    }
    ctx->pc = 0x138FACu;
    // 0x138fac: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x138facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138fb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138fb4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x138fb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138fb8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x138FB8u;
    {
        const bool branch_taken_0x138fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138fb8) {
            ctx->pc = 0x138FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138FB8u;
            // 0x138fbc: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x138FD0u;
            goto label_138fd0;
        }
    }
    ctx->pc = 0x138FC0u;
    // 0x138fc0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x138fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138fc4: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x138FC4u;
    {
        const bool branch_taken_0x138fc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138fc4) {
            ctx->pc = 0x13900Cu;
            goto label_13900c;
        }
    }
    ctx->pc = 0x138FCCu;
    // 0x138fcc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x138fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138fd0:
    // 0x138fd0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x138fd0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x138fd4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x138fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138fd8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x138fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138fdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x138fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x138fe0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x138fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138fe4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x138FE4u;
    {
        const bool branch_taken_0x138fe4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x138FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FE4u;
        // 0x138fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fe4) {
            ctx->pc = 0x13900Cu;
            goto label_13900c;
        }
    }
    ctx->pc = 0x138FECu;
    // 0x138fec: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x138fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138ff0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x138ff0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x138ff4: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x138ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138ff8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x138ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x138ffc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x138ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139000: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x139000u;
    {
        const bool branch_taken_0x139000 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139000u;
        // 0x139004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139000) {
            ctx->pc = 0x13900Cu;
            goto label_13900c;
        }
    }
    ctx->pc = 0x139008u;
    // 0x139008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13900c:
    // 0x13900c: 0x3e00008  jr          $ra
    ctx->pc = 0x13900Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13900Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139014u;
}
