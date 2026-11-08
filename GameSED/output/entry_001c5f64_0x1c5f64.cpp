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

// Function: entry_001c5f64
// Address: 0x1c5f64 - 0x1c5f8c
void entry_001c5f64_0x1c5f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f64_0x1c5f64");
#endif

    switch (ctx->pc) {
        case 0x1c5f70u: goto label_1c5f70;
        default: break;
    }

    ctx->pc = 0x1c5f64u;

    // 0x1c5f64: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x1c5f64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    // 0x1c5f68: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C5F68u;
    SET_GPR_U32(ctx, 31, 0x1C5F70u);
    ctx->pc = 0x1C5F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F68u;
    // 0x1c5f6c: 0x8e44ddfc  lw          $a0, -0x2204($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C5F68u, 0x1C5F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F70u;
label_1c5f70:
    // 0x1c5f70: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C5F70u;
    {
        const bool branch_taken_0x1c5f70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F70u;
        // 0x1c5f74: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f70) {
            ctx->pc = 0x1C6014u;
            return;
        }
    }
    ctx->pc = 0x1C5F78u;
    // 0x1c5f78: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5F78u;
    {
        const bool branch_taken_0x1c5f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f78) {
            ctx->pc = 0x1C5F8Cu;
            return;
        }
    }
    ctx->pc = 0x1C5F80u;
    // 0x1c5f80: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1c5f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c5f84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5F84u;
    {
        const bool branch_taken_0x1c5f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F84u;
        // 0x1c5f88: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f84) {
            ctx->pc = 0x1C5F9Cu;
            return;
        }
    }
    ctx->pc = 0x1C5F8Cu;
}
