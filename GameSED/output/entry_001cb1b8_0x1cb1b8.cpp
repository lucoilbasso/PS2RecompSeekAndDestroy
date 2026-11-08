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

// Function: entry_001cb1b8
// Address: 0x1cb1b8 - 0x1cb1cc
void entry_001cb1b8_0x1cb1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb1b8_0x1cb1b8");
#endif

    switch (ctx->pc) {
        case 0x1cb1c8u: goto label_1cb1c8;
        default: break;
    }

    ctx->pc = 0x1cb1b8u;

    // 0x1cb1b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB1B8u;
    {
        const bool branch_taken_0x1cb1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1B8u;
        // 0x1cb1bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1b8) {
            ctx->pc = 0x1CB1CCu;
            return;
        }
    }
    ctx->pc = 0x1CB1C0u;
    // 0x1cb1c0: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CB1C0u;
    SET_GPR_U32(ctx, 31, 0x1CB1C8u);
    ctx->pc = 0x1CB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1C0u;
    // 0x1cb1c4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CB1C0u, 0x1CB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1C8u;
label_1cb1c8:
    // 0x1cb1c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cb1c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cb1ccu;
}
