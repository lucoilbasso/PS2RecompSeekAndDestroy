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

// Function: entry_001762c8
// Address: 0x1762c8 - 0x1762dc
void entry_001762c8_0x1762c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001762c8_0x1762c8");
#endif

    switch (ctx->pc) {
        case 0x1762d0u: goto label_1762d0;
        default: break;
    }

    ctx->pc = 0x1762c8u;

    // 0x1762c8: 0xc06bd38  jal         func_1AF4E0
    ctx->pc = 0x1762C8u;
    SET_GPR_U32(ctx, 31, 0x1762D0u);
    ctx->pc = 0x1762CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762C8u;
    // 0x1762cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4E0u, 0x1762C8u, 0x1762D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762D0u;
label_1762d0:
    // 0x1762d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1762d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1762d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1762D4u;
    {
        const bool branch_taken_0x1762d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1762d4) {
            ctx->pc = 0x1762E4u;
            return;
        }
    }
    ctx->pc = 0x1762DCu;
}
