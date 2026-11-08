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

// Function: entry_001c59a4
// Address: 0x1c59a4 - 0x1c59c0
void entry_001c59a4_0x1c59a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c59a4_0x1c59a4");
#endif

    switch (ctx->pc) {
        case 0x1c59b0u: goto label_1c59b0;
        default: break;
    }

    ctx->pc = 0x1c59a4u;

    // 0x1c59a4: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x1c59a4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    // 0x1c59a8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C59A8u;
    SET_GPR_U32(ctx, 31, 0x1C59B0u);
    ctx->pc = 0x1C59ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C59A8u;
    // 0x1c59ac: 0x8ee4ddfc  lw          $a0, -0x2204($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C59A8u, 0x1C59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59B0u;
label_1c59b0:
    // 0x1c59b0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C59B0u;
    {
        const bool branch_taken_0x1c59b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59B0u;
        // 0x1c59b4: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59b0) {
            ctx->pc = 0x1C59C0u;
            return;
        }
    }
    ctx->pc = 0x1C59B8u;
    // 0x1c59b8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C59B8u;
    {
        const bool branch_taken_0x1c59b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59B8u;
        // 0x1c59bc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59b8) {
            ctx->pc = 0x1C5AA0u;
            return;
        }
    }
    ctx->pc = 0x1C59C0u;
}
