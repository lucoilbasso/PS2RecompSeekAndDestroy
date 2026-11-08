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

// Function: entry_00102314
// Address: 0x102314 - 0x102348
void entry_00102314_0x102314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102314_0x102314");
#endif

    switch (ctx->pc) {
        case 0x102344u: goto label_102344;
        default: break;
    }

    ctx->pc = 0x102314u;

    // 0x102314: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x102314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x102318: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x102318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x10231c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102320: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x102320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102324: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102324u;
    {
        const bool branch_taken_0x102324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x102328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102324u;
        // 0x102328: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102324) {
            ctx->pc = 0x102348u;
            return;
        }
    }
    ctx->pc = 0x10232Cu;
    // 0x10232c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10232cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102334: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x102334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x102338: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x102338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x10233c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10233Cu;
    SET_GPR_U32(ctx, 31, 0x102344u);
    ctx->pc = 0x102340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10233Cu;
    // 0x102340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10233Cu, 0x102344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102344u;
label_102344:
    // 0x102344: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x102344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102348u;
}
