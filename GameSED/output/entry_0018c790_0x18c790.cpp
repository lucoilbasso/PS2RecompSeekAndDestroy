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

// Function: entry_0018c790
// Address: 0x18c790 - 0x18c7a0
void entry_0018c790_0x18c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c790_0x18c790");
#endif

    switch (ctx->pc) {
        case 0x18c798u: goto label_18c798;
        default: break;
    }

    ctx->pc = 0x18c790u;

    // 0x18c790: 0xc063a56  jal         func_18E958
    ctx->pc = 0x18C790u;
    SET_GPR_U32(ctx, 31, 0x18C798u);
    ctx->pc = 0x18C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C790u;
    // 0x18c794: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E958u, 0x18C790u, 0x18C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C798u;
label_18c798:
    // 0x18c798: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x18C798u;
    {
        const bool branch_taken_0x18c798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C798u;
        // 0x18c79c: 0x8e030238  lw          $v1, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c798) {
            ctx->pc = 0x18C910u;
            return;
        }
    }
    ctx->pc = 0x18C7A0u;
}
