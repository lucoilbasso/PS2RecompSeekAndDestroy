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

// Function: ResetFogStart__6WcViewf
// Address: 0x1dd760 - 0x1dd780
void ResetFogStart__6WcViewf_0x1dd760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetFogStart__6WcViewf_0x1dd760");
#endif

    ctx->pc = 0x1dd760u;

    // 0x1dd760: 0xc480017c  lwc1        $f0, 0x17C($a0)
    ctx->pc = 0x1dd760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd764: 0x3c01437e  lui         $at, 0x437E
    ctx->pc = 0x1dd764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17278 << 16));
    // 0x1dd768: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dd768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd76c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1dd76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1dd770: 0xe48c0170  swc1        $f12, 0x170($a0)
    ctx->pc = 0x1dd770u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
    // 0x1dd774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1dd774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dd778: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD778u;
        // 0x1dd77c: 0xe4800180  swc1        $f0, 0x180($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD780u;
}
