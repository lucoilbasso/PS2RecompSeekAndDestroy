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

// Function: entry_001ad148
// Address: 0x1ad148 - 0x1ad16c
void entry_001ad148_0x1ad148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad148_0x1ad148");
#endif

    ctx->pc = 0x1ad148u;

label_1ad148:
    // 0x1ad148: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ad148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ad14c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ad14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ad150: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x1ad150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1ad154: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1ad154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ad158: 0x0  nop
    ctx->pc = 0x1ad158u;
    // NOP
    // 0x1ad15c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AD15Cu;
    {
        const bool branch_taken_0x1ad15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad15c) {
            ctx->pc = 0x1AD148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad148;
        }
    }
    ctx->pc = 0x1AD164u;
    // 0x1ad164: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD16Cu;
}
