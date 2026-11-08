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

// Function: entry_00106228
// Address: 0x106228 - 0x106258
void entry_00106228_0x106228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106228_0x106228");
#endif

    ctx->pc = 0x106228u;

    // 0x106228: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x106228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10622c: 0x8c70038c  lw          $s0, 0x38C($v1)
    ctx->pc = 0x10622cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 908)));
    // 0x106230: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x106230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x106234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106238: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x106238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10623c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x10623cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x106240: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106240u;
    {
        const bool branch_taken_0x106240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106240u;
        // 0x106244: 0x668821  addu        $s1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106240) {
            ctx->pc = 0x106258u;
            return;
        }
    }
    ctx->pc = 0x106248u;
    // 0x106248: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x106248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10624c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x10624cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x106250: 0xc068186  jal         func_1A0618
    ctx->pc = 0x106250u;
    SET_GPR_U32(ctx, 31, 0x106258u);
    ctx->pc = 0x106254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106250u;
    // 0x106254: 0x24a53858  addiu       $a1, $a1, 0x3858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x106250u, 0x106258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106258u;
}
