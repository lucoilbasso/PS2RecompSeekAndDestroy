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

// Function: WPadEndOfStatus__Fv
// Address: 0x156e68 - 0x156e94
void WPadEndOfStatus__Fv_0x156e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadEndOfStatus__Fv_0x156e68");
#endif

    ctx->pc = 0x156e68u;

    // 0x156e68: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x156e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x156e6c: 0x248435e0  addiu       $a0, $a0, 0x35E0
    ctx->pc = 0x156e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13792));
    // 0x156e70: 0x90830017  lbu         $v1, 0x17($a0)
    ctx->pc = 0x156e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2635F7u));
    // 0x156e74: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x156E74u;
    {
        const bool branch_taken_0x156e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E74u;
        // 0x156e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e74) {
            ctx->pc = 0x156E8Cu;
            goto label_156e8c;
        }
    }
    ctx->pc = 0x156E7Cu;
    // 0x156e7c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x156e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x156e80: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x156e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x156e84: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x156e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x156e88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x156e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_156e8c:
    // 0x156e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x156E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156E94u;
}
