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

// Function: entry_0019a6d8
// Address: 0x19a6d8 - 0x19a6f0
void entry_0019a6d8_0x19a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a6d8_0x19a6d8");
#endif

    switch (ctx->pc) {
        case 0x19a6e0u: goto label_19a6e0;
        default: break;
    }

    ctx->pc = 0x19a6d8u;

    // 0x19a6d8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19A6D8u;
    SET_GPR_U32(ctx, 31, 0x19A6E0u);
    ctx->pc = 0x19A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6D8u;
    // 0x19a6dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19A6D8u, 0x19A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6E0u;
label_19a6e0:
    // 0x19a6e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a6e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A6E4u;
    {
        const bool branch_taken_0x19a6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6E4u;
        // 0x19a6e8: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6e4) {
            ctx->pc = 0x19A700u;
            return;
        }
    }
    ctx->pc = 0x19A6ECu;
    // 0x19a6ec: 0x90800a  movz        $s0, $a0, $s0
    ctx->pc = 0x19a6ecu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    ctx->pc = 0x19a6f0u;
}
