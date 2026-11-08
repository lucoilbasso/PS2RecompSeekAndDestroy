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

// Function: entry_001ba8b8
// Address: 0x1ba8b8 - 0x1ba8d0
void entry_001ba8b8_0x1ba8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba8b8_0x1ba8b8");
#endif

    switch (ctx->pc) {
        case 0x1ba8c0u: goto label_1ba8c0;
        default: break;
    }

    ctx->pc = 0x1ba8b8u;

    // 0x1ba8b8: 0xc06c694  jal         func_1B1A50
    ctx->pc = 0x1BA8B8u;
    SET_GPR_U32(ctx, 31, 0x1BA8C0u);
    ctx->pc = 0x1BA8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8B8u;
    // 0x1ba8bc: 0x2604dac8  addiu       $a0, $s0, -0x2538 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A50u, 0x1BA8B8u, 0x1BA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8C0u;
label_1ba8c0:
    // 0x1ba8c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BA8C0u;
    {
        const bool branch_taken_0x1ba8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8C0u;
        // 0x1ba8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8c0) {
            ctx->pc = 0x1BA8B0u;
            return;
        }
    }
    ctx->pc = 0x1BA8C8u;
    // 0x1ba8c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA8C8u;
    {
        const bool branch_taken_0x1ba8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8C8u;
        // 0x1ba8cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8c8) {
            ctx->pc = 0x1BA8E0u;
            return;
        }
    }
    ctx->pc = 0x1BA8D0u;
}
