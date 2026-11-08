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

// Function: _SetWeight__7WcActorf
// Address: 0x1e1230 - 0x1e1248
void ps2__SetWeight__7WcActorf_0x1e1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SetWeight__7WcActorf_0x1e1230");
#endif

    ctx->pc = 0x1e1230u;

    // 0x1e1230: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1e1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1e1234: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1e1234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1e1238: 0xe48c008c  swc1        $f12, 0x8C($a0)
    ctx->pc = 0x1e1238u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1e123c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e1240: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1240u;
        // 0x1e1244: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1248u;
}
