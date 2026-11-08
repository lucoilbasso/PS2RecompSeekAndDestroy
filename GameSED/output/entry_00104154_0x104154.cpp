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

// Function: entry_00104154
// Address: 0x104154 - 0x104180
void entry_00104154_0x104154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104154_0x104154");
#endif

    ctx->pc = 0x104154u;

    // 0x104154: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x104154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x104158: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x104158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x10415c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x10415cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104160: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x104160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104164: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104164u;
    {
        const bool branch_taken_0x104164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x104168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104164u;
        // 0x104168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104164) {
            ctx->pc = 0x104180u;
            return;
        }
    }
    ctx->pc = 0x10416Cu;
    // 0x10416c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10416cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104170: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x104170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x104174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104178: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104178u;
    SET_GPR_U32(ctx, 31, 0x104180u);
    ctx->pc = 0x10417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104178u;
    // 0x10417c: 0x24a51ab0  addiu       $a1, $a1, 0x1AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104178u, 0x104180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104180u;
}
