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

// Function: entry_001c5104
// Address: 0x1c5104 - 0x1c5120
void entry_001c5104_0x1c5104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5104_0x1c5104");
#endif

    switch (ctx->pc) {
        case 0x1c5110u: goto label_1c5110;
        default: break;
    }

    ctx->pc = 0x1c5104u;

    // 0x1c5104: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1c5104u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1c5108: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C5108u;
    SET_GPR_U32(ctx, 31, 0x1C5110u);
    ctx->pc = 0x1C510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5108u;
    // 0x1c510c: 0x8e24ddfc  lw          $a0, -0x2204($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C5108u, 0x1C5110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5110u;
label_1c5110:
    // 0x1c5110: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5110u;
    {
        const bool branch_taken_0x1c5110 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5110u;
        // 0x1c5114: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5110) {
            ctx->pc = 0x1C5120u;
            return;
        }
    }
    ctx->pc = 0x1C5118u;
    // 0x1c5118: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C5118u;
    {
        const bool branch_taken_0x1c5118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5118u;
        // 0x1c511c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5118) {
            ctx->pc = 0x1C5178u;
            return;
        }
    }
    ctx->pc = 0x1C5120u;
}
