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

// Function: entry_00101160
// Address: 0x101160 - 0x101194
void entry_00101160_0x101160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101160_0x101160");
#endif

    switch (ctx->pc) {
        case 0x101190u: goto label_101190;
        default: break;
    }

    ctx->pc = 0x101160u;

    // 0x101160: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x101160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x101164: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x101164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x101168: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x101168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10116c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x10116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x101170: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x101170u;
    {
        const bool branch_taken_0x101170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x101170) {
            ctx->pc = 0x101174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101170u;
            // 0x101174: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101194u;
            return;
        }
    }
    ctx->pc = 0x101178u;
    // 0x101178: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10117c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101180: 0x24a519f8  addiu       $a1, $a1, 0x19F8
    ctx->pc = 0x101180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6648));
    // 0x101184: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x101184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x101188: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101188u;
    SET_GPR_U32(ctx, 31, 0x101190u);
    ctx->pc = 0x10118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101188u;
    // 0x10118c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101188u, 0x101190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101190u;
label_101190:
    // 0x101190: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x101190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x101194u;
}
