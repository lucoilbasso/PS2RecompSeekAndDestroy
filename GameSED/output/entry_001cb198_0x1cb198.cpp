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

// Function: entry_001cb198
// Address: 0x1cb198 - 0x1cb1b0
void entry_001cb198_0x1cb198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb198_0x1cb198");
#endif

    switch (ctx->pc) {
        case 0x1cb1a8u: goto label_1cb1a8;
        default: break;
    }

    ctx->pc = 0x1cb198u;

    // 0x1cb198: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB198u;
    {
        const bool branch_taken_0x1cb198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB198u;
        // 0x1cb19c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb198) {
            ctx->pc = 0x1CB1B0u;
            return;
        }
    }
    ctx->pc = 0x1CB1A0u;
    // 0x1cb1a0: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CB1A0u;
    SET_GPR_U32(ctx, 31, 0x1CB1A8u);
    ctx->pc = 0x1CB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1A0u;
    // 0x1cb1a4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CB1A0u, 0x1CB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1A8u;
label_1cb1a8:
    // 0x1cb1a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB1A8u;
    {
        const bool branch_taken_0x1cb1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1A8u;
        // 0x1cb1ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1a8) {
            ctx->pc = 0x1CB1B8u;
            return;
        }
    }
    ctx->pc = 0x1CB1B0u;
}
