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

// Function: entry_001c6144
// Address: 0x1c6144 - 0x1c616c
void entry_001c6144_0x1c6144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6144_0x1c6144");
#endif

    switch (ctx->pc) {
        case 0x1c6150u: goto label_1c6150;
        default: break;
    }

    ctx->pc = 0x1c6144u;

    // 0x1c6144: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1c6144u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1c6148: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C6148u;
    SET_GPR_U32(ctx, 31, 0x1C6150u);
    ctx->pc = 0x1C614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6148u;
    // 0x1c614c: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C6148u, 0x1C6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6150u;
label_1c6150:
    // 0x1c6150: 0x440004e  bltz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C6150u;
    {
        const bool branch_taken_0x1c6150 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6150u;
        // 0x1c6154: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6150) {
            ctx->pc = 0x1C628Cu;
            return;
        }
    }
    ctx->pc = 0x1C6158u;
    // 0x1c6158: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6158u;
    {
        const bool branch_taken_0x1c6158 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6158) {
            ctx->pc = 0x1C616Cu;
            return;
        }
    }
    ctx->pc = 0x1C6160u;
    // 0x1c6160: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1c6160u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6164: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6164u;
    {
        const bool branch_taken_0x1c6164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6164u;
        // 0x1c6168: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6164) {
            ctx->pc = 0x1C617Cu;
            return;
        }
    }
    ctx->pc = 0x1C616Cu;
}
