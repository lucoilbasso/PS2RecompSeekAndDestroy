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

// Function: BUtilityMovePosition__FPffff
// Address: 0x19f028 - 0x19f0c8
void BUtilityMovePosition__FPffff_0x19f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMovePosition__FPffff_0x19f028");
#endif

    ctx->pc = 0x19f028u;

    // 0x19f028: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x19f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f02c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19f02cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f030: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x19f030u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x19f034: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x19f034u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f038: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x19F038u;
    {
        const bool branch_taken_0x19f038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F038u;
        // 0x19f03c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f038) {
            ctx->pc = 0x19F0A4u;
            goto label_19f0a4;
        }
    }
    ctx->pc = 0x19F040u;
    // 0x19f040: 0x46017032  c.eq.s      $f14, $f1
    ctx->pc = 0x19f040u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f044: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x19F044u;
    {
        const bool branch_taken_0x19f044 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F044u;
        // 0x19f048: 0x46006086  mov.s       $f2, $f12 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f044) {
            ctx->pc = 0x19F080u;
            goto label_19f080;
        }
    }
    ctx->pc = 0x19F04Cu;
    // 0x19f04c: 0xc7808644  lwc1        $f0, -0x79BC($gp)
    ctx->pc = 0x19f04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f050: 0x460e1302  mul.s       $f12, $f2, $f14
    ctx->pc = 0x19f050u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x19f054: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x19f054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f058: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F058u;
    {
        const bool branch_taken_0x19f058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f058) {
            ctx->pc = 0x19F070u;
            goto label_19f070;
        }
    }
    ctx->pc = 0x19F060u;
    // 0x19f060: 0xc7808648  lwc1        $f0, -0x79B8($gp)
    ctx->pc = 0x19f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f064: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19f064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f068: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19F068u;
    {
        const bool branch_taken_0x19f068 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f068) {
            ctx->pc = 0x19F06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F068u;
            // 0x19f06c: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F070u;
            goto label_19f070;
        }
    }
    ctx->pc = 0x19F070u;
label_19f070:
    // 0x19f070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f074: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19f074u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f078: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x19F078u;
    {
        const bool branch_taken_0x19f078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f078) {
            ctx->pc = 0x19F07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F078u;
            // 0x19f07c: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F084u;
            goto label_19f084;
        }
    }
    ctx->pc = 0x19F080u;
label_19f080:
    // 0x19f080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f084:
    // 0x19f084: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x19f084u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f088: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F088u;
    {
        const bool branch_taken_0x19f088 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F088u;
        // 0x19f08c: 0x46006086  mov.s       $f2, $f12 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f088) {
            ctx->pc = 0x19F0A0u;
            goto label_19f0a0;
        }
    }
    ctx->pc = 0x19F090u;
    // 0x19f090: 0x460d6329  min.s       $f12, $f12, $f13
    ctx->pc = 0x19f090u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[13]);
    // 0x19f094: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x19f094u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x19f098: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x19f098u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
    // 0x19f09c: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x19f09cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
label_19f0a0:
    // 0x19f0a0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x19f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f0a4:
    // 0x19f0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f0a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19f0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f0ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19f0acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x19f0b0: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x19f0b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f0b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19F0B4u;
    {
        const bool branch_taken_0x19f0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0B4u;
        // 0x19f0b8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0b4) {
            ctx->pc = 0x19F0C0u;
            goto label_19f0c0;
        }
    }
    ctx->pc = 0x19F0BCu;
    // 0x19f0bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f0c0:
    // 0x19f0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F0C8u;
}
