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

// Function: entry_001036d8
// Address: 0x1036d8 - 0x103700
void entry_001036d8_0x1036d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001036d8_0x1036d8");
#endif

    switch (ctx->pc) {
        case 0x1036f4u: goto label_1036f4;
        default: break;
    }

    ctx->pc = 0x1036d8u;

    // 0x1036d8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1036D8u;
    {
        const bool branch_taken_0x1036d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036D8u;
        // 0x1036dc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036d8) {
            ctx->pc = 0x103700u;
            return;
        }
    }
    ctx->pc = 0x1036E0u;
    // 0x1036e0: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1036e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1036e4: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x1036e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    // 0x1036e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1036e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1036ec: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1036ECu;
    SET_GPR_U32(ctx, 31, 0x1036F4u);
    ctx->pc = 0x1036F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1036ECu;
    // 0x1036f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1036ECu, 0x1036F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1036F4u;
label_1036f4:
    // 0x1036f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1036F4u;
    {
        const bool branch_taken_0x1036f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036F4u;
        // 0x1036f8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036f4) {
            ctx->pc = 0x103714u;
            return;
        }
    }
    ctx->pc = 0x1036FCu;
    // 0x1036fc: 0x0  nop
    ctx->pc = 0x1036fcu;
    // NOP
    ctx->pc = 0x103700u;
}
