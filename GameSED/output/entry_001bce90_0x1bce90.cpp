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

// Function: entry_001bce90
// Address: 0x1bce90 - 0x1bcea8
void entry_001bce90_0x1bce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bce90_0x1bce90");
#endif

    switch (ctx->pc) {
        case 0x1bce98u: goto label_1bce98;
        default: break;
    }

    ctx->pc = 0x1bce90u;

label_1bce90:
    // 0x1bce90: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCE90u;
    SET_GPR_U32(ctx, 31, 0x1BCE98u);
    ctx->pc = 0x1BCE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE90u;
    // 0x1bce94: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCE90u, 0x1BCE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE98u;
label_1bce98:
    // 0x1bce98: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bce98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bce9c: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x1bce9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1bcea0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BCEA0u;
    {
        const bool branch_taken_0x1bcea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEA0u;
        // 0x1bcea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcea0) {
            ctx->pc = 0x1BCE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bce90;
        }
    }
    ctx->pc = 0x1BCEA8u;
}
