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

// Function: entry_001040fc
// Address: 0x1040fc - 0x10411c
void entry_001040fc_0x1040fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001040fc_0x1040fc");
#endif

    ctx->pc = 0x1040fcu;

    // 0x1040fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1040fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104100: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x104100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x104104: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104104u;
    {
        const bool branch_taken_0x104104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104104u;
        // 0x104108: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104104) {
            ctx->pc = 0x10411Cu;
            return;
        }
    }
    ctx->pc = 0x10410Cu;
    // 0x10410c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10410cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104114: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104114u;
    SET_GPR_U32(ctx, 31, 0x10411Cu);
    ctx->pc = 0x104118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104114u;
    // 0x104118: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104114u, 0x10411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10411Cu;
}
