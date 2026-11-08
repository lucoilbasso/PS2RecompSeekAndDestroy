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

// Function: entry_001c1cb8
// Address: 0x1c1cb8 - 0x1c1cd4
void entry_001c1cb8_0x1c1cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1cb8_0x1c1cb8");
#endif

    switch (ctx->pc) {
        case 0x1c1cd0u: goto label_1c1cd0;
        default: break;
    }

    ctx->pc = 0x1c1cb8u;

    // 0x1c1cb8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1c1cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cbc: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1cc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1CC0u;
    {
        const bool branch_taken_0x1c1cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC0u;
        // 0x1c1cc4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cc0) {
            ctx->pc = 0x1C1CD4u;
            return;
        }
    }
    ctx->pc = 0x1C1CC8u;
    // 0x1c1cc8: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1CC8u;
    SET_GPR_U32(ctx, 31, 0x1C1CD0u);
    ctx->pc = 0x1C1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CC8u;
    // 0x1c1ccc: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1CC8u, 0x1C1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CD0u;
label_1c1cd0:
    // 0x1c1cd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c1cd4u;
}
