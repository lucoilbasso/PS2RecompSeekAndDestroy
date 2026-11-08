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

// Function: entry_001c5d60
// Address: 0x1c5d60 - 0x1c5d88
void entry_001c5d60_0x1c5d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5d60_0x1c5d60");
#endif

    switch (ctx->pc) {
        case 0x1c5d6cu: goto label_1c5d6c;
        default: break;
    }

    ctx->pc = 0x1c5d60u;

    // 0x1c5d60: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1c5d60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1c5d64: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C5D64u;
    SET_GPR_U32(ctx, 31, 0x1C5D6Cu);
    ctx->pc = 0x1C5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D64u;
    // 0x1c5d68: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C5D64u, 0x1C5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D6Cu;
label_1c5d6c:
    // 0x1c5d6c: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C5D6Cu;
    {
        const bool branch_taken_0x1c5d6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D6Cu;
        // 0x1c5d70: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d6c) {
            ctx->pc = 0x1C5E24u;
            return;
        }
    }
    ctx->pc = 0x1C5D74u;
    // 0x1c5d74: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5D74u;
    {
        const bool branch_taken_0x1c5d74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d74) {
            ctx->pc = 0x1C5D88u;
            return;
        }
    }
    ctx->pc = 0x1C5D7Cu;
    // 0x1c5d7c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1c5d7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c5d80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5D80u;
    {
        const bool branch_taken_0x1c5d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D80u;
        // 0x1c5d84: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d80) {
            ctx->pc = 0x1C5D98u;
            return;
        }
    }
    ctx->pc = 0x1C5D88u;
}
