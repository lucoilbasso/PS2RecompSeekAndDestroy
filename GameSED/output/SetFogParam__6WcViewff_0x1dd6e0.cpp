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

// Function: SetFogParam__6WcViewff
// Address: 0x1dd6e0 - 0x1dd75c
void SetFogParam__6WcViewff_0x1dd6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFogParam__6WcViewff_0x1dd6e0");
#endif

    ctx->pc = 0x1dd6e0u;

    // 0x1dd6e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd6e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd6e8: 0x46006b68  max.s       $f13, $f13, $f0
    ctx->pc = 0x1dd6e8u;
    ctx->f[13] = std::max(ctx->f[13], ctx->f[0]);
    // 0x1dd6ec: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1dd6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1dd6f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dd6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd6f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd6f8: 0x0  nop
    ctx->pc = 0x1dd6f8u;
    // NOP
    // 0x1dd6fc: 0x0  nop
    ctx->pc = 0x1dd6fcu;
    // NOP
    // 0x1dd700: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x1dd700u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[13]); }
    // 0x1dd704: 0xe48c0170  swc1        $f12, 0x170($a0)
    ctx->pc = 0x1dd704u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
    // 0x1dd708: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1dd708u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd70c: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x1dd70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x1dd710: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dd710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd714: 0xe48d0174  swc1        $f13, 0x174($a0)
    ctx->pc = 0x1dd714u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 372), bits); }
    // 0x1dd718: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1dd718u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1dd71c: 0xe481017c  swc1        $f1, 0x17C($a0)
    ctx->pc = 0x1dd71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 380), bits); }
    // 0x1dd720: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x1dd720u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x1dd724: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD724u;
    {
        const bool branch_taken_0x1dd724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD724u;
        // 0x1dd728: 0xe48c0180  swc1        $f12, 0x180($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd724) {
            ctx->pc = 0x1DD740u;
            goto label_1dd740;
        }
    }
    ctx->pc = 0x1DD72Cu;
    // 0x1dd72c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1dd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1dd730: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1dd730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1dd734: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD734u;
        // 0x1dd738: 0xac820150  sw          $v0, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD73Cu;
    // 0x1dd73c: 0x0  nop
    ctx->pc = 0x1dd73cu;
    // NOP
label_1dd740:
    // 0x1dd740: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1dd740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1dd744: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1dd744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1dd748: 0xe480017c  swc1        $f0, 0x17C($a0)
    ctx->pc = 0x1dd748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 380), bits); }
    // 0x1dd74c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1dd74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dd750: 0xe4820180  swc1        $f2, 0x180($a0)
    ctx->pc = 0x1dd750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x1dd754: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD754u;
        // 0x1dd758: 0xac830150  sw          $v1, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD75Cu;
}
