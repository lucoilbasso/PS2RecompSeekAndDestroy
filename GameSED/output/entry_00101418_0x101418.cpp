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

// Function: entry_00101418
// Address: 0x101418 - 0x101438
void entry_00101418_0x101418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101418_0x101418");
#endif

    ctx->pc = 0x101418u;

    // 0x101418: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x101418u;
    {
        const bool branch_taken_0x101418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101418u;
        // 0x10141c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101418) {
            ctx->pc = 0x10143Cu;
            return;
        }
    }
    ctx->pc = 0x101420u;
    // 0x101420: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x101420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x101424: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x101424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x101428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10142c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x10142cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x101430: 0xc04171a  jal         func_105C68
    ctx->pc = 0x101430u;
    SET_GPR_U32(ctx, 31, 0x101438u);
    ctx->pc = 0x101434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101430u;
    // 0x101434: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x101430u, 0x101438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101438u;
}
