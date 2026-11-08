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

// Function: EffectTornadoCalc__FP16ST_EffectSpecial
// Address: 0x12c4b0 - 0x12c504
void EffectTornadoCalc__FP16ST_EffectSpecial_0x12c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectTornadoCalc__FP16ST_EffectSpecial_0x12c4b0");
#endif

    switch (ctx->pc) {
        case 0x12c4ccu: goto label_12c4cc;
        default: break;
    }

    ctx->pc = 0x12c4b0u;

    // 0x12c4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c4b4: 0x248501d4  addiu       $a1, $a0, 0x1D4
    ctx->pc = 0x12c4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 468));
    // 0x12c4b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c4bc: 0x249001b0  addiu       $s0, $a0, 0x1B0
    ctx->pc = 0x12c4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x12c4c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c4c4: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C4C4u;
    SET_GPR_U32(ctx, 31, 0x12C4CCu);
    ctx->pc = 0x12C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4C4u;
    // 0x12c4c8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C4C4u, 0x12C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4CCu;
label_12c4cc:
    // 0x12c4cc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x12c4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c4d0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x12c4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c4d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c4d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12c4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12c4dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c4dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c4e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12c4e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c4e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12C4E4u;
    {
        const bool branch_taken_0x12c4e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4E4u;
        // 0x12c4e8: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4e4) {
            ctx->pc = 0x12C4F4u;
            goto label_12c4f4;
        }
    }
    ctx->pc = 0x12C4ECu;
    // 0x12c4ec: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x12c4ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x12c4f0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x12c4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_12c4f4:
    // 0x12c4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c4f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x12C4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4FCu;
        // 0x12c500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C504u;
}
