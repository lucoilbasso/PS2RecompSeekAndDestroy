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

// Function: entry_001c7818
// Address: 0x1c7818 - 0x1c7838
void entry_001c7818_0x1c7818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7818_0x1c7818");
#endif

    switch (ctx->pc) {
        case 0x1c782cu: goto label_1c782c;
        default: break;
    }

    ctx->pc = 0x1c7818u;

label_1c7818:
    // 0x1c7818: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c7818u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c781c: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1c781cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1c7820: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7824: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7824u;
    SET_GPR_U32(ctx, 31, 0x1C782Cu);
    ctx->pc = 0x1C7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7824u;
    // 0x1c7828: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7824u, 0x1C782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C782Cu;
label_1c782c:
    // 0x1c782c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c782cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7830: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C7830u;
    {
        const bool branch_taken_0x1c7830 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1c7830) {
            ctx->pc = 0x1C7818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7818;
        }
    }
    ctx->pc = 0x1C7838u;
}
