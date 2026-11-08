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

// Function: entry_00111718
// Address: 0x111718 - 0x111730
void entry_00111718_0x111718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111718_0x111718");
#endif

    switch (ctx->pc) {
        case 0x111728u: goto label_111728;
        default: break;
    }

    ctx->pc = 0x111718u;

    // 0x111718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11171c: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0
    ctx->pc = 0x11171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    // 0x111720: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111720u;
    SET_GPR_U32(ctx, 31, 0x111728u);
    ctx->pc = 0x111724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111720u;
    // 0x111724: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111720u, 0x111728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111728u;
label_111728:
    // 0x111728: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x111728u;
    {
        const bool branch_taken_0x111728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111728u;
        // 0x11172c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111728) {
            ctx->pc = 0x111608u;
            return;
        }
    }
    ctx->pc = 0x111730u;
}
