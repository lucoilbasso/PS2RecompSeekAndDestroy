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

// Function: entry_00104018
// Address: 0x104018 - 0x104048
void entry_00104018_0x104018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104018_0x104018");
#endif

    ctx->pc = 0x104018u;

    // 0x104018: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x104018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x10401c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x10401cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x104020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104024: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x104024u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x104028: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x104028u;
    {
        const bool branch_taken_0x104028 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x104028) {
            ctx->pc = 0x10402Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104028u;
            // 0x10402c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10404Cu;
            return;
        }
    }
    ctx->pc = 0x104030u;
    // 0x104030: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104038: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x104038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x10403c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10403cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104040: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104040u;
    SET_GPR_U32(ctx, 31, 0x104048u);
    ctx->pc = 0x104044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104040u;
    // 0x104044: 0x24a51a10  addiu       $a1, $a1, 0x1A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104040u, 0x104048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104048u;
}
