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

// Function: entry_001c1b70
// Address: 0x1c1b70 - 0x1c1b88
void entry_001c1b70_0x1c1b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b70_0x1c1b70");
#endif

    switch (ctx->pc) {
        case 0x1c1b84u: goto label_1c1b84;
        default: break;
    }

    ctx->pc = 0x1c1b70u;

    // 0x1c1b70: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1b74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1B74u;
    {
        const bool branch_taken_0x1c1b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B74u;
        // 0x1c1b78: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b74) {
            ctx->pc = 0x1C1B88u;
            return;
        }
    }
    ctx->pc = 0x1C1B7Cu;
    // 0x1c1b7c: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B84u);
    ctx->pc = 0x1C1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B7Cu;
    // 0x1c1b80: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1B7Cu, 0x1C1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B84u;
label_1c1b84:
    // 0x1c1b84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c1b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c1b88u;
}
