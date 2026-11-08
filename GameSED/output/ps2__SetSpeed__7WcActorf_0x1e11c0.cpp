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

// Function: _SetSpeed__7WcActorf
// Address: 0x1e11c0 - 0x1e11d8
void ps2__SetSpeed__7WcActorf_0x1e11c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SetSpeed__7WcActorf_0x1e11c0");
#endif

    ctx->pc = 0x1e11c0u;

    // 0x1e11c0: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1e11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1e11c4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1e11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e11c8: 0xe48c0088  swc1        $f12, 0x88($a0)
    ctx->pc = 0x1e11c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x1e11cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e11ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e11d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E11D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11D0u;
        // 0x1e11d4: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E11D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E11D8u;
}
