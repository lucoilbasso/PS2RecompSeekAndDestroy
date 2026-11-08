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

// Function: SetLightPower__7WcLightif
// Address: 0x1ddf58 - 0x1ddf90
void SetLightPower__7WcLightif_0x1ddf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLightPower__7WcLightif_0x1ddf58");
#endif

    ctx->pc = 0x1ddf58u;

    // 0x1ddf58: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x1ddf58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1ddf5c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1ddf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddf60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ddf60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddf64: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1ddf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1ddf68: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ddf68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ddf6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ddf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ddf70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ddf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ddf74: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1ddf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ddf78: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1ddf78u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1ddf7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ddf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ddf80: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ddf80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1ddf84: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x1ddf84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1ddf88: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF88u;
        // 0x1ddf8c: 0xe4ac00dc  swc1        $f12, 0xDC($a1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF90u;
}
