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

// Function: SequenceCtrlSetMode__10WcSequencei
// Address: 0x1e0a10 - 0x1e0a2c
void SequenceCtrlSetMode__10WcSequencei_0x1e0a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SequenceCtrlSetMode__10WcSequencei_0x1e0a10");
#endif

    ctx->pc = 0x1e0a10u;

    // 0x1e0a10: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1e0a14: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1e0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1e0a18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e0a1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e0a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e0a20: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e0a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e0a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A24u;
        // 0x1e0a28: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0A2Cu;
}
