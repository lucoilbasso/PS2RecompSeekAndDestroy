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

// Function: entry_00102150
// Address: 0x102150 - 0x10217c
void entry_00102150_0x102150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102150_0x102150");
#endif

    ctx->pc = 0x102150u;

    // 0x102150: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x102150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x102154: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x102154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x102158: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x102158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10215c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102160: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102160u;
    {
        const bool branch_taken_0x102160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x102164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102160u;
        // 0x102164: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102160) {
            ctx->pc = 0x10217Cu;
            return;
        }
    }
    ctx->pc = 0x102168u;
    // 0x102168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10216c: 0x24a51ab0  addiu       $a1, $a1, 0x1AB0
    ctx->pc = 0x10216cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6832));
    // 0x102170: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x102170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x102174: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102174u;
    SET_GPR_U32(ctx, 31, 0x10217Cu);
    ctx->pc = 0x102178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102174u;
    // 0x102178: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102174u, 0x10217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10217Cu;
}
