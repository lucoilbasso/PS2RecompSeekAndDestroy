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

// Function: entry_001c6304
// Address: 0x1c6304 - 0x1c6334
void entry_001c6304_0x1c6304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6304_0x1c6304");
#endif

    switch (ctx->pc) {
        case 0x1c6310u: goto label_1c6310;
        default: break;
    }

    ctx->pc = 0x1c6304u;

    // 0x1c6304: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1c6304u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1c6308: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C6308u;
    SET_GPR_U32(ctx, 31, 0x1C6310u);
    ctx->pc = 0x1C630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6308u;
    // 0x1c630c: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C6308u, 0x1C6310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6310u;
label_1c6310:
    // 0x1c6310: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C6310u;
    {
        const bool branch_taken_0x1c6310 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6310u;
        // 0x1c6314: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6310) {
            ctx->pc = 0x1C63E8u;
            return;
        }
    }
    ctx->pc = 0x1C6318u;
    // 0x1c6318: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6318u;
    {
        const bool branch_taken_0x1c6318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6318) {
            ctx->pc = 0x1C6334u;
            return;
        }
    }
    ctx->pc = 0x1C6320u;
    // 0x1c6320: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c6320u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6324: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6324u;
    {
        const bool branch_taken_0x1c6324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6324) {
            ctx->pc = 0x1C6334u;
            return;
        }
    }
    ctx->pc = 0x1C632Cu;
    // 0x1c632c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C632Cu;
    {
        const bool branch_taken_0x1c632c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C632Cu;
        // 0x1c6330: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c632c) {
            ctx->pc = 0x1C6344u;
            return;
        }
    }
    ctx->pc = 0x1C6334u;
}
