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

// Function: entry_001c5e88
// Address: 0x1c5e88 - 0x1c5ea4
void entry_001c5e88_0x1c5e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5e88_0x1c5e88");
#endif

    switch (ctx->pc) {
        case 0x1c5e94u: goto label_1c5e94;
        default: break;
    }

    ctx->pc = 0x1c5e88u;

    // 0x1c5e88: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x1c5e88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x1c5e8c: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C5E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E94u);
    ctx->pc = 0x1C5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E8Cu;
    // 0x1c5e90: 0x8e64ddfc  lw          $a0, -0x2204($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C5E8Cu, 0x1C5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E94u;
label_1c5e94:
    // 0x1c5e94: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5E94u;
    {
        const bool branch_taken_0x1c5e94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E94u;
        // 0x1c5e98: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e94) {
            ctx->pc = 0x1C5EA4u;
            return;
        }
    }
    ctx->pc = 0x1C5E9Cu;
    // 0x1c5e9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C5E9Cu;
    {
        const bool branch_taken_0x1c5e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E9Cu;
        // 0x1c5ea0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e9c) {
            ctx->pc = 0x1C5F00u;
            return;
        }
    }
    ctx->pc = 0x1C5EA4u;
}
