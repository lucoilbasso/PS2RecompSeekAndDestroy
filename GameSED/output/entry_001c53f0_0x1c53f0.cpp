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

// Function: entry_001c53f0
// Address: 0x1c53f0 - 0x1c540c
void entry_001c53f0_0x1c53f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c53f0_0x1c53f0");
#endif

    switch (ctx->pc) {
        case 0x1c53fcu: goto label_1c53fc;
        default: break;
    }

    ctx->pc = 0x1c53f0u;

    // 0x1c53f0: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x1c53f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x1c53f4: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C53F4u;
    SET_GPR_U32(ctx, 31, 0x1C53FCu);
    ctx->pc = 0x1C53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53F4u;
    // 0x1c53f8: 0x8e84ddfc  lw          $a0, -0x2204($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C53F4u, 0x1C53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C53FCu;
label_1c53fc:
    // 0x1c53fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C53FCu;
    {
        const bool branch_taken_0x1c53fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53FCu;
        // 0x1c5400: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53fc) {
            ctx->pc = 0x1C540Cu;
            return;
        }
    }
    ctx->pc = 0x1C5404u;
    // 0x1c5404: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C5404u;
    {
        const bool branch_taken_0x1c5404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5404u;
        // 0x1c5408: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5404) {
            ctx->pc = 0x1C5468u;
            return;
        }
    }
    ctx->pc = 0x1C540Cu;
}
