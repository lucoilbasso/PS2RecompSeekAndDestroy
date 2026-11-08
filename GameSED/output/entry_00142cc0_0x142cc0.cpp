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

// Function: entry_00142cc0
// Address: 0x142cc0 - 0x142cd4
void entry_00142cc0_0x142cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142cc0_0x142cc0");
#endif

    switch (ctx->pc) {
        case 0x142cd0u: goto label_142cd0;
        default: break;
    }

    ctx->pc = 0x142cc0u;

    // 0x142cc0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x142CC0u;
    {
        const bool branch_taken_0x142cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cc0) {
            ctx->pc = 0x142CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142CC0u;
            // 0x142cc4: 0x8e240324  lw          $a0, 0x324($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142CD4u;
            return;
        }
    }
    ctx->pc = 0x142CC8u;
    // 0x142cc8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x142CC8u;
    SET_GPR_U32(ctx, 31, 0x142CD0u);
    ctx->pc = 0x142CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CC8u;
    // 0x142ccc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x142CC8u, 0x142CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CD0u;
label_142cd0:
    // 0x142cd0: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x142cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    ctx->pc = 0x142cd4u;
}
