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

// Function: CometHistoryInit__7WcBoard
// Address: 0x191428 - 0x19148c
void CometHistoryInit__7WcBoard_0x191428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CometHistoryInit__7WcBoard_0x191428");
#endif

    switch (ctx->pc) {
        case 0x191440u: goto label_191440;
        case 0x191450u: goto label_191450;
        default: break;
    }

    ctx->pc = 0x191428u;

    // 0x191428: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x191428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x19142c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19142cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191430: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x191430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x191434: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x191434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191438: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x191438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19143c: 0x0  nop
    ctx->pc = 0x19143cu;
    // NOP
label_191440:
    // 0x191440: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x191440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x191444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191448: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x191448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x19144c: 0x0  nop
    ctx->pc = 0x19144cu;
    // NOP
label_191450:
    // 0x191450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x191450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x191454: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x191454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x191458: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x191458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19145c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x19145cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x191460: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x191460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x191464: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x191464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x191468: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x191468u;
    {
        const bool branch_taken_0x191468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191468u;
        // 0x19146c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191468) {
            ctx->pc = 0x191450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191450;
        }
    }
    ctx->pc = 0x191470u;
    // 0x191470: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x191474: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x191474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x191478: 0x2ce20007  sltiu       $v0, $a3, 0x7
    ctx->pc = 0x191478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x19147c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19147Cu;
    {
        const bool branch_taken_0x19147c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19147Cu;
        // 0x191480: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19147c) {
            ctx->pc = 0x191440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191440;
        }
    }
    ctx->pc = 0x191484u;
    // 0x191484: 0x3e00008  jr          $ra
    ctx->pc = 0x191484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19148Cu;
}
