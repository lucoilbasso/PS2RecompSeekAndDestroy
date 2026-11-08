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

// Function: EffectSibukiCalc__FP16ST_EffectSpecial
// Address: 0x12c300 - 0x12c35c
void EffectSibukiCalc__FP16ST_EffectSpecial_0x12c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSibukiCalc__FP16ST_EffectSpecial_0x12c300");
#endif

    switch (ctx->pc) {
        case 0x12c31cu: goto label_12c31c;
        default: break;
    }

    ctx->pc = 0x12c300u;

    // 0x12c300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c304: 0x248501bc  addiu       $a1, $a0, 0x1BC
    ctx->pc = 0x12c304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x12c308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c30c: 0x249001b0  addiu       $s0, $a0, 0x1B0
    ctx->pc = 0x12c30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x12c310: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c314: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C314u;
    SET_GPR_U32(ctx, 31, 0x12C31Cu);
    ctx->pc = 0x12C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C314u;
    // 0x12c318: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C314u, 0x12C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C31Cu;
label_12c31c:
    // 0x12c31c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x12c31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12c320: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x12c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c324: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12c324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12c328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12c328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12c32c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12c32cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12c330: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x12c330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c334: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x12C334u;
    {
        const bool branch_taken_0x12c334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C334u;
        // 0x12c338: 0xe6020014  swc1        $f2, 0x14($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c334) {
            ctx->pc = 0x12C34Cu;
            goto label_12c34c;
        }
    }
    ctx->pc = 0x12C33Cu;
    // 0x12c33c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c344: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x12c344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12c348: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x12c348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_12c34c:
    // 0x12c34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c350: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c354: 0x3e00008  jr          $ra
    ctx->pc = 0x12C354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C354u;
        // 0x12c358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C35Cu;
}
