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

// Function: FileWriteCheck__8ApcMCard
// Address: 0x11ca28 - 0x11ca50
void FileWriteCheck__8ApcMCard_0x11ca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FileWriteCheck__8ApcMCard_0x11ca28");
#endif

    ctx->pc = 0x11ca28u;

    // 0x11ca28: 0x24854040  addiu       $a1, $a0, 0x4040
    ctx->pc = 0x11ca28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x11ca2c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x11ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11ca30: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x11ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x11ca34: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CA34u;
    {
        const bool branch_taken_0x11ca34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA34u;
        // 0x11ca38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca34) {
            ctx->pc = 0x11CA48u;
            goto label_11ca48;
        }
    }
    ctx->pc = 0x11CA3Cu;
    // 0x11ca3c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x11ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x11ca40: 0x284200b7  slti        $v0, $v0, 0xB7
    ctx->pc = 0x11ca40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)183) ? 1 : 0);
    // 0x11ca44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11ca44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_11ca48:
    // 0x11ca48: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CA50u;
}
