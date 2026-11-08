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

// Function: entry_0017ae70
// Address: 0x17ae70 - 0x17ae84
void entry_0017ae70_0x17ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ae70_0x17ae70");
#endif

    ctx->pc = 0x17ae70u;

    // 0x17ae70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17ae74: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17ae74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17ae78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AE78u;
    {
        const bool branch_taken_0x17ae78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE78u;
        // 0x17ae7c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae78) {
            ctx->pc = 0x17AE50u;
            return;
        }
    }
    ctx->pc = 0x17AE80u;
    // 0x17ae80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17ae80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ae84u;
}
