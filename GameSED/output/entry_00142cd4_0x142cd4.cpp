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

// Function: entry_00142cd4
// Address: 0x142cd4 - 0x142ce8
void entry_00142cd4_0x142cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142cd4_0x142cd4");
#endif

    switch (ctx->pc) {
        case 0x142ce4u: goto label_142ce4;
        default: break;
    }

    ctx->pc = 0x142cd4u;

    // 0x142cd4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x142CD4u;
    {
        const bool branch_taken_0x142cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cd4) {
            ctx->pc = 0x142CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142CD4u;
            // 0x142cd8: 0x8e240328  lw          $a0, 0x328($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142CE8u;
            return;
        }
    }
    ctx->pc = 0x142CDCu;
    // 0x142cdc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x142CDCu;
    SET_GPR_U32(ctx, 31, 0x142CE4u);
    ctx->pc = 0x142CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CDCu;
    // 0x142ce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x142CDCu, 0x142CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CE4u;
label_142ce4:
    // 0x142ce4: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x142ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    ctx->pc = 0x142ce8u;
}
