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

// Function: entry_001c7a30
// Address: 0x1c7a30 - 0x1c7a54
void entry_001c7a30_0x1c7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7a30_0x1c7a30");
#endif

    switch (ctx->pc) {
        case 0x1c7a44u: goto label_1c7a44;
        default: break;
    }

    ctx->pc = 0x1c7a30u;

label_1c7a30:
    // 0x1c7a30: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c7a30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7a34: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1c7a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1c7a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a3c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A44u);
    ctx->pc = 0x1C7A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A3Cu;
    // 0x1c7a40: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7A3Cu, 0x1C7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A44u;
label_1c7a44:
    // 0x1c7a44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a48: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1c7a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c7a4c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C7A4Cu;
    {
        const bool branch_taken_0x1c7a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a4c) {
            ctx->pc = 0x1C7A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7a30;
        }
    }
    ctx->pc = 0x1C7A54u;
}
