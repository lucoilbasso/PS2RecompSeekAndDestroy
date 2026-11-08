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

// Function: entry_00161098
// Address: 0x161098 - 0x1610ac
void entry_00161098_0x161098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161098_0x161098");
#endif

    switch (ctx->pc) {
        case 0x1610a8u: goto label_1610a8;
        default: break;
    }

    ctx->pc = 0x161098u;

    // 0x161098: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161098u;
    {
        const bool branch_taken_0x161098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161098u;
        // 0x16109c: 0x262211b0  addiu       $v0, $s1, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161098) {
            ctx->pc = 0x1610ACu;
            return;
        }
    }
    ctx->pc = 0x1610A0u;
    // 0x1610a0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1610A0u;
    SET_GPR_U32(ctx, 31, 0x1610A8u);
    ctx->pc = 0x1610A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1610A0u;
    // 0x1610a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1610A0u, 0x1610A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610A8u;
label_1610a8:
    // 0x1610a8: 0x262211b0  addiu       $v0, $s1, 0x11B0
    ctx->pc = 0x1610a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4528));
    ctx->pc = 0x1610acu;
}
