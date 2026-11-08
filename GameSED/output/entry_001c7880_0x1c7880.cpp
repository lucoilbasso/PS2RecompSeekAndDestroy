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

// Function: entry_001c7880
// Address: 0x1c7880 - 0x1c78a0
void entry_001c7880_0x1c7880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7880_0x1c7880");
#endif

    switch (ctx->pc) {
        case 0x1c7894u: goto label_1c7894;
        default: break;
    }

    ctx->pc = 0x1c7880u;

label_1c7880:
    // 0x1c7880: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x1c7880u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7884: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1c7884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1c7888: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c788c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C788Cu;
    SET_GPR_U32(ctx, 31, 0x1C7894u);
    ctx->pc = 0x1C7890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C788Cu;
    // 0x1c7890: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C788Cu, 0x1C7894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7894u;
label_1c7894:
    // 0x1c7894: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7898: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C7898u;
    {
        const bool branch_taken_0x1c7898 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1c7898) {
            ctx->pc = 0x1C7880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7880;
        }
    }
    ctx->pc = 0x1C78A0u;
}
