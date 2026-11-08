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

// Function: entry_001023f8
// Address: 0x1023f8 - 0x10242c
void entry_001023f8_0x1023f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001023f8_0x1023f8");
#endif

    switch (ctx->pc) {
        case 0x102428u: goto label_102428;
        default: break;
    }

    ctx->pc = 0x1023f8u;

    // 0x1023f8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1023f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1023fc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1023fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x102400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102404: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x102404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102408: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x102408u;
    {
        const bool branch_taken_0x102408 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102408u;
        // 0x10240c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102408) {
            ctx->pc = 0x10242Cu;
            return;
        }
    }
    ctx->pc = 0x102410u;
    // 0x102410: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102418: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x102418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x10241c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x10241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x102420: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102420u;
    SET_GPR_U32(ctx, 31, 0x102428u);
    ctx->pc = 0x102424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102420u;
    // 0x102424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102420u, 0x102428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102428u;
label_102428:
    // 0x102428: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x102428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10242cu;
}
