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

// Function: entry_001c78f0
// Address: 0x1c78f0 - 0x1c7910
void entry_001c78f0_0x1c78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c78f0_0x1c78f0");
#endif

    switch (ctx->pc) {
        case 0x1c7904u: goto label_1c7904;
        default: break;
    }

    ctx->pc = 0x1c78f0u;

label_1c78f0:
    // 0x1c78f0: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c78f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c78f4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1c78f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c78f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c78f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78fc: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C78FCu;
    SET_GPR_U32(ctx, 31, 0x1C7904u);
    ctx->pc = 0x1C7900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78FCu;
    // 0x1c7900: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C78FCu, 0x1C7904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7904u;
label_1c7904:
    // 0x1c7904: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7908: 0x1640fff9  bnez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C7908u;
    {
        const bool branch_taken_0x1c7908 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7908u;
        // 0x1c790c: 0x8fa60234  lw          $a2, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7908) {
            ctx->pc = 0x1C78F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c78f0;
        }
    }
    ctx->pc = 0x1C7910u;
}
