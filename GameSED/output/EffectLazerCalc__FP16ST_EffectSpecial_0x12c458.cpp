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

// Function: EffectLazerCalc__FP16ST_EffectSpecial
// Address: 0x12c458 - 0x12c4a8
void EffectLazerCalc__FP16ST_EffectSpecial_0x12c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectLazerCalc__FP16ST_EffectSpecial_0x12c458");
#endif

    switch (ctx->pc) {
        case 0x12c474u: goto label_12c474;
        default: break;
    }

    ctx->pc = 0x12c458u;

    // 0x12c458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c45c: 0x248501bc  addiu       $a1, $a0, 0x1BC
    ctx->pc = 0x12c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x12c460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c464: 0x249001b0  addiu       $s0, $a0, 0x1B0
    ctx->pc = 0x12c464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x12c468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c46c: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C46Cu;
    SET_GPR_U32(ctx, 31, 0x12C474u);
    ctx->pc = 0x12C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C46Cu;
    // 0x12c470: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C46Cu, 0x12C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C474u;
label_12c474:
    // 0x12c474: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x12c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c478: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x12c478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c47c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c480: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12c480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12c484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12c484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12c488: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12c488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c48c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12C48Cu;
    {
        const bool branch_taken_0x12c48c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C48Cu;
        // 0x12c490: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c48c) {
            ctx->pc = 0x12C498u;
            goto label_12c498;
        }
    }
    ctx->pc = 0x12C494u;
    // 0x12c494: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x12c494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_12c498:
    // 0x12c498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c49c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x12C4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4A0u;
        // 0x12c4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C4A8u;
}
