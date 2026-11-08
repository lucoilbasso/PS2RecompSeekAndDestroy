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

// Function: entry_00162e30
// Address: 0x162e30 - 0x162e48
void entry_00162e30_0x162e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162e30_0x162e30");
#endif

    switch (ctx->pc) {
        case 0x162e44u: goto label_162e44;
        default: break;
    }

    ctx->pc = 0x162e30u;

    // 0x162e30: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x162e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x162e34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162E34u;
    {
        const bool branch_taken_0x162e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E34u;
        // 0x162e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e34) {
            ctx->pc = 0x162E48u;
            return;
        }
    }
    ctx->pc = 0x162E3Cu;
    // 0x162e3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162E3Cu;
    SET_GPR_U32(ctx, 31, 0x162E44u);
    ctx->pc = 0x162E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E3Cu;
    // 0x162e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162E3Cu, 0x162E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E44u;
label_162e44:
    // 0x162e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162e48u;
}
