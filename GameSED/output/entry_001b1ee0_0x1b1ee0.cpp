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

// Function: entry_001b1ee0
// Address: 0x1b1ee0 - 0x1b1ef8
void entry_001b1ee0_0x1b1ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1ee0_0x1b1ee0");
#endif

    switch (ctx->pc) {
        case 0x1b1ee8u: goto label_1b1ee8;
        default: break;
    }

    ctx->pc = 0x1b1ee0u;

    // 0x1b1ee0: 0xc06be08  jal         func_1AF820
    ctx->pc = 0x1B1EE0u;
    SET_GPR_U32(ctx, 31, 0x1B1EE8u);
    ctx->pc = 0x1B1EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EE0u;
    // 0x1b1ee4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF820u, 0x1B1EE0u, 0x1B1EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EE8u;
label_1b1ee8:
    // 0x1b1ee8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1EE8u;
    {
        const bool branch_taken_0x1b1ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EE8u;
        // 0x1b1eec: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ee8) {
            ctx->pc = 0x1B1F20u;
            return;
        }
    }
    ctx->pc = 0x1B1EF0u;
    // 0x1b1ef0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1b1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1b1ef4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b1ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1b1ef8u;
}
