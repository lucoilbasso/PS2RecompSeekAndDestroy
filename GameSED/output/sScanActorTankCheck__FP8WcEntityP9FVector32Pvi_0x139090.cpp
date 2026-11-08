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

// Function: sScanActorTankCheck__FP8WcEntityP9FVector32Pvi
// Address: 0x139090 - 0x13910c
void sScanActorTankCheck__FP8WcEntityP9FVector32Pvi_0x139090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sScanActorTankCheck__FP8WcEntityP9FVector32Pvi_0x139090");
#endif

    ctx->pc = 0x139090u;

    // 0x139090: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x139090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139094: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x139094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139098: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x139098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13909c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x13909Cu;
    {
        const bool branch_taken_0x13909c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1390A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13909Cu;
        // 0x1390a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13909c) {
            ctx->pc = 0x139104u;
            goto label_139104;
        }
    }
    ctx->pc = 0x1390A4u;
    // 0x1390a4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1390a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1390a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1390a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1390ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1390acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1390b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1390B0u;
    {
        const bool branch_taken_0x1390b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1390b0) {
            ctx->pc = 0x1390B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1390B0u;
            // 0x1390b4: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1390C8u;
            goto label_1390c8;
        }
    }
    ctx->pc = 0x1390B8u;
    // 0x1390b8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1390b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1390bc: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1390BCu;
    {
        const bool branch_taken_0x1390bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1390bc) {
            ctx->pc = 0x139104u;
            goto label_139104;
        }
    }
    ctx->pc = 0x1390C4u;
    // 0x1390c4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1390c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1390c8:
    // 0x1390c8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1390c8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1390cc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1390ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1390d0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1390d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1390d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1390d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1390d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1390d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1390dc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1390DCu;
    {
        const bool branch_taken_0x1390dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1390E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390DCu;
        // 0x1390e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390dc) {
            ctx->pc = 0x139104u;
            goto label_139104;
        }
    }
    ctx->pc = 0x1390E4u;
    // 0x1390e4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1390e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1390e8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1390e8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1390ec: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x1390ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1390f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1390f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1390f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1390f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1390f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1390F8u;
    {
        const bool branch_taken_0x1390f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1390FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390F8u;
        // 0x1390fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390f8) {
            ctx->pc = 0x139104u;
            goto label_139104;
        }
    }
    ctx->pc = 0x139100u;
    // 0x139100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139104:
    // 0x139104: 0x3e00008  jr          $ra
    ctx->pc = 0x139104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13910Cu;
}
