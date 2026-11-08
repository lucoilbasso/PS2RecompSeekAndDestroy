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

// Function: entry_0018c7a0
// Address: 0x18c7a0 - 0x18c7b8
void entry_0018c7a0_0x18c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c7a0_0x18c7a0");
#endif

    switch (ctx->pc) {
        case 0x18c7b0u: goto label_18c7b0;
        default: break;
    }

    ctx->pc = 0x18c7a0u;

    // 0x18c7a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18c7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7a8: 0xc063a64  jal         func_18E990
    ctx->pc = 0x18C7A8u;
    SET_GPR_U32(ctx, 31, 0x18C7B0u);
    ctx->pc = 0x18C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7A8u;
    // 0x18c7ac: 0x3247ffff  andi        $a3, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E990u, 0x18C7A8u, 0x18C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7B0u;
label_18c7b0:
    // 0x18c7b0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x18C7B0u;
    {
        const bool branch_taken_0x18c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7B0u;
        // 0x18c7b4: 0x8e030238  lw          $v1, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7b0) {
            ctx->pc = 0x18C910u;
            return;
        }
    }
    ctx->pc = 0x18C7B8u;
}
