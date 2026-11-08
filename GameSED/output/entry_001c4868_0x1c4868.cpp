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

// Function: entry_001c4868
// Address: 0x1c4868 - 0x1c489c
void entry_001c4868_0x1c4868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4868_0x1c4868");
#endif

    switch (ctx->pc) {
        case 0x1c4898u: goto label_1c4898;
        default: break;
    }

    ctx->pc = 0x1c4868u;

label_1c4868:
    // 0x1c4868: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c486c: 0x0  nop
    ctx->pc = 0x1c486cu;
    // NOP
    // 0x1c4870: 0x0  nop
    ctx->pc = 0x1c4870u;
    // NOP
    // 0x1c4874: 0x0  nop
    ctx->pc = 0x1c4874u;
    // NOP
    // 0x1c4878: 0x0  nop
    ctx->pc = 0x1c4878u;
    // NOP
    // 0x1c487c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C487Cu;
    {
        const bool branch_taken_0x1c487c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c487c) {
            ctx->pc = 0x1C4868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4868;
        }
    }
    ctx->pc = 0x1C4884u;
    // 0x1c4884: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1c4884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1c4888: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C4888u;
    {
        const bool branch_taken_0x1c4888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4888) {
            ctx->pc = 0x1C4838u;
            return;
        }
    }
    ctx->pc = 0x1C4890u;
    // 0x1c4890: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1C4890u;
    SET_GPR_U32(ctx, 31, 0x1C4898u);
    ctx->pc = 0x1C4894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4890u;
    // 0x1c4894: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1C4890u, 0x1C4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4898u;
label_1c4898:
    // 0x1c4898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c489cu;
}
