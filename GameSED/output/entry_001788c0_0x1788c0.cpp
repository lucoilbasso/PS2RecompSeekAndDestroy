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

// Function: entry_001788c0
// Address: 0x1788c0 - 0x1788d8
void entry_001788c0_0x1788c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001788c0_0x1788c0");
#endif

    switch (ctx->pc) {
        case 0x1788c8u: goto label_1788c8;
        default: break;
    }

    ctx->pc = 0x1788c0u;

    // 0x1788c0: 0xc06ec78  jal         func_1BB1E0
    ctx->pc = 0x1788C0u;
    SET_GPR_U32(ctx, 31, 0x1788C8u);
    ctx->pc = 0x1788C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788C0u;
    // 0x1788c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1E0u, 0x1788C0u, 0x1788C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788C8u;
label_1788c8:
    // 0x1788c8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1788C8u;
    {
        const bool branch_taken_0x1788c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1788c8) {
            ctx->pc = 0x1788B8u;
            return;
        }
    }
    ctx->pc = 0x1788D0u;
    // 0x1788d0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1788D0u;
    SET_GPR_U32(ctx, 31, 0x1788D8u);
    ctx->pc = 0x1788D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788D0u;
    // 0x1788d4: 0x8e041014  lw          $a0, 0x1014($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1788D0u, 0x1788D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788D8u;
}
