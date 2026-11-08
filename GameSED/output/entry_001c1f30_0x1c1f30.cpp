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

// Function: entry_001c1f30
// Address: 0x1c1f30 - 0x1c1f4c
void entry_001c1f30_0x1c1f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1f30_0x1c1f30");
#endif

    switch (ctx->pc) {
        case 0x1c1f48u: goto label_1c1f48;
        default: break;
    }

    ctx->pc = 0x1c1f30u;

    // 0x1c1f30: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1c1f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1f34: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1f38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1F38u;
    {
        const bool branch_taken_0x1c1f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F38u;
        // 0x1c1f3c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f38) {
            ctx->pc = 0x1C1F4Cu;
            return;
        }
    }
    ctx->pc = 0x1C1F40u;
    // 0x1c1f40: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1F40u;
    SET_GPR_U32(ctx, 31, 0x1C1F48u);
    ctx->pc = 0x1C1F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F40u;
    // 0x1c1f44: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1F40u, 0x1C1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F48u;
label_1c1f48:
    // 0x1c1f48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c1f4cu;
}
