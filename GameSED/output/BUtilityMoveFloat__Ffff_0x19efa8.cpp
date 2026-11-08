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

// Function: BUtilityMoveFloat__Ffff
// Address: 0x19efa8 - 0x19f024
void BUtilityMoveFloat__Ffff_0x19efa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMoveFloat__Ffff_0x19efa8");
#endif

    ctx->pc = 0x19efa8u;

    // 0x19efa8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19efa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19efac: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x19efacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19efb0: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x19EFB0u;
    {
        const bool branch_taken_0x19efb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFB0u;
        // 0x19efb4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efb0) {
            ctx->pc = 0x19F01Cu;
            goto label_19f01c;
        }
    }
    ctx->pc = 0x19EFB8u;
    // 0x19efb8: 0x46017032  c.eq.s      $f14, $f1
    ctx->pc = 0x19efb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19efbc: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x19EFBCu;
    {
        const bool branch_taken_0x19efbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19efbc) {
            ctx->pc = 0x19EFFCu;
            goto label_19effc;
        }
    }
    ctx->pc = 0x19EFC4u;
    // 0x19efc4: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x19efc4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x19efc8: 0xc780863c  lwc1        $f0, -0x79C4($gp)
    ctx->pc = 0x19efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19efcc: 0x460e1302  mul.s       $f12, $f2, $f14
    ctx->pc = 0x19efccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x19efd0: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x19efd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19efd4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19EFD4u;
    {
        const bool branch_taken_0x19efd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19efd4) {
            ctx->pc = 0x19EFECu;
            goto label_19efec;
        }
    }
    ctx->pc = 0x19EFDCu;
    // 0x19efdc: 0xc7808640  lwc1        $f0, -0x79C0($gp)
    ctx->pc = 0x19efdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19efe0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19efe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19efe4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19EFE4u;
    {
        const bool branch_taken_0x19efe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19efe4) {
            ctx->pc = 0x19EFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFE4u;
            // 0x19efe8: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EFECu;
            goto label_19efec;
        }
    }
    ctx->pc = 0x19EFECu;
label_19efec:
    // 0x19efec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19efecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eff0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19eff0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eff4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x19EFF4u;
    {
        const bool branch_taken_0x19eff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eff4) {
            ctx->pc = 0x19EFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFF4u;
            // 0x19eff8: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F000u;
            goto label_19f000;
        }
    }
    ctx->pc = 0x19EFFCu;
label_19effc:
    // 0x19effc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19effcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f000:
    // 0x19f000: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x19f000u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f004: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x19F004u;
    {
        const bool branch_taken_0x19f004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f004) {
            ctx->pc = 0x19F008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F004u;
            // 0x19f008: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F01Cu;
            goto label_19f01c;
        }
    }
    ctx->pc = 0x19F00Cu;
    // 0x19f00c: 0x460d6329  min.s       $f12, $f12, $f13
    ctx->pc = 0x19f00cu;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[13]);
    // 0x19f010: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x19f010u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x19f014: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x19f014u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    // 0x19f018: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x19f018u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_19f01c:
    // 0x19f01c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F024u;
}
