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

// Function: entry_001b3038
// Address: 0x1b3038 - 0x1b3054
void entry_001b3038_0x1b3038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3038_0x1b3038");
#endif

    switch (ctx->pc) {
        case 0x1b3050u: goto label_1b3050;
        default: break;
    }

    ctx->pc = 0x1b3038u;

    // 0x1b3038: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x1b3038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x1b303c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B303Cu;
    {
        const bool branch_taken_0x1b303c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B303Cu;
        // 0x1b3040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b303c) {
            ctx->pc = 0x1B3054u;
            return;
        }
    }
    ctx->pc = 0x1B3044u;
    // 0x1b3044: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b3044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3048: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B3048u;
    SET_GPR_U32(ctx, 31, 0x1B3050u);
    ctx->pc = 0x1B304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3048u;
    // 0x1b304c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B3048u, 0x1B3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3050u;
label_1b3050:
    // 0x1b3050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b3054u;
}
