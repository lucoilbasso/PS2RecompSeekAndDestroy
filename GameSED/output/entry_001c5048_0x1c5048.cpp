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

// Function: entry_001c5048
// Address: 0x1c5048 - 0x1c5064
void entry_001c5048_0x1c5048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5048_0x1c5048");
#endif

    switch (ctx->pc) {
        case 0x1c5054u: goto label_1c5054;
        default: break;
    }

    ctx->pc = 0x1c5048u;

    // 0x1c5048: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x1c5048u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    // 0x1c504c: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C504Cu;
    SET_GPR_U32(ctx, 31, 0x1C5054u);
    ctx->pc = 0x1C5050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C504Cu;
    // 0x1c5050: 0x8e44ddfc  lw          $a0, -0x2204($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C504Cu, 0x1C5054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5054u;
label_1c5054:
    // 0x1c5054: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5054u;
    {
        const bool branch_taken_0x1c5054 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5054u;
        // 0x1c5058: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5054) {
            ctx->pc = 0x1C5064u;
            return;
        }
    }
    ctx->pc = 0x1C505Cu;
    // 0x1c505c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C505Cu;
    {
        const bool branch_taken_0x1c505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C505Cu;
        // 0x1c5060: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c505c) {
            ctx->pc = 0x1C50B8u;
            return;
        }
    }
    ctx->pc = 0x1C5064u;
}
