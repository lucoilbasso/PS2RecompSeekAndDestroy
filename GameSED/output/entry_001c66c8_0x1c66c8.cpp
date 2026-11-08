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

// Function: entry_001c66c8
// Address: 0x1c66c8 - 0x1c66f0
void entry_001c66c8_0x1c66c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c66c8_0x1c66c8");
#endif

    switch (ctx->pc) {
        case 0x1c66d8u: goto label_1c66d8;
        case 0x1c66e8u: goto label_1c66e8;
        default: break;
    }

    ctx->pc = 0x1c66c8u;

    // 0x1c66c8: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x1c66c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c66cc: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x1c66ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c66d0: 0xc071ec0  jal         func_1C7B00
    ctx->pc = 0x1C66D0u;
    SET_GPR_U32(ctx, 31, 0x1C66D8u);
    ctx->pc = 0x1C66D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66D0u;
    // 0x1c66d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7B00u, 0x1C66D0u, 0x1C66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66D8u;
label_1c66d8:
    // 0x1c66d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c66d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c66dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66e0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C66E0u;
    SET_GPR_U32(ctx, 31, 0x1C66E8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C66E0u, 0x1C66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66E8u;
label_1c66e8:
    // 0x1c66e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C66E8u;
    {
        const bool branch_taken_0x1c66e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66E8u;
        // 0x1c66ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66e8) {
            ctx->pc = 0x1C6714u;
            return;
        }
    }
    ctx->pc = 0x1C66F0u;
}
