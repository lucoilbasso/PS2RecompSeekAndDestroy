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

// Function: entry_001c1c18
// Address: 0x1c1c18 - 0x1c1c30
void entry_001c1c18_0x1c1c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1c18_0x1c1c18");
#endif

    switch (ctx->pc) {
        case 0x1c1c2cu: goto label_1c1c2c;
        default: break;
    }

    ctx->pc = 0x1c1c18u;

    // 0x1c1c18: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1c1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1C1Cu;
    {
        const bool branch_taken_0x1c1c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C1Cu;
        // 0x1c1c20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c1c) {
            ctx->pc = 0x1C1C30u;
            return;
        }
    }
    ctx->pc = 0x1C1C24u;
    // 0x1c1c24: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1C24u;
    SET_GPR_U32(ctx, 31, 0x1C1C2Cu);
    ctx->pc = 0x1C1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C24u;
    // 0x1c1c28: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1C24u, 0x1C1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C2Cu;
label_1c1c2c:
    // 0x1c1c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c1c30u;
}
