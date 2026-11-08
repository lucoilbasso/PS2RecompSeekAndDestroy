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

// Function: _ApDaemonInqSCDLib__FP8ApcRsc3Di
// Address: 0x138d18 - 0x138d50
void ps2__ApDaemonInqSCDLib__FP8ApcRsc3Di_0x138d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ApDaemonInqSCDLib__FP8ApcRsc3Di_0x138d18");
#endif

    ctx->pc = 0x138d18u;

    // 0x138d18: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138D18u;
    {
        const bool branch_taken_0x138d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D18u;
        // 0x138d1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d18) {
            ctx->pc = 0x138D38u;
            goto label_138d38;
        }
    }
    ctx->pc = 0x138D20u;
    // 0x138d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138d24: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138D24u;
    {
        const bool branch_taken_0x138d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x138d24) {
            ctx->pc = 0x138D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138D24u;
            // 0x138d28: 0x8c830020  lw          $v1, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138D44u;
            goto label_138d44;
        }
    }
    ctx->pc = 0x138D2Cu;
    // 0x138d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x138D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D2Cu;
        // 0x138d30: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138D34u;
    // 0x138d34: 0x0  nop
    ctx->pc = 0x138d34u;
    // NOP
label_138d38:
    // 0x138d38: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x138d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x138d3c: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x138d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x138d40: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x138d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_138d44:
    // 0x138d44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x138d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d48: 0x3e00008  jr          $ra
    ctx->pc = 0x138D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138D50u;
}
