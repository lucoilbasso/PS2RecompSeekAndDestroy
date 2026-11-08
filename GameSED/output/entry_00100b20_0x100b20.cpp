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

// Function: entry_00100b20
// Address: 0x100b20 - 0x100b3c
void entry_00100b20_0x100b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b20_0x100b20");
#endif

    switch (ctx->pc) {
        case 0x100b28u: goto label_100b28;
        default: break;
    }

    ctx->pc = 0x100b20u;

    // 0x100b20: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x100B20u;
    SET_GPR_U32(ctx, 31, 0x100B28u);
    ctx->pc = 0x100B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B20u;
    // 0x100b24: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100B20u, 0x100B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B28u;
label_100b28:
    // 0x100b28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b2c: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x100b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x100b30: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x100B30u;
    {
        const bool branch_taken_0x100b30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B30u;
        // 0x100b34: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b30) {
            ctx->pc = 0x100B3Cu;
            return;
        }
    }
    ctx->pc = 0x100B38u;
    // 0x100b38: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x100b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x100b3cu;
}
