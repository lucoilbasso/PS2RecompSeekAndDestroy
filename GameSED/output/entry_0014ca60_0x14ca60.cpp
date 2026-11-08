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

// Function: entry_0014ca60
// Address: 0x14ca60 - 0x14ca80
void entry_0014ca60_0x14ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ca60_0x14ca60");
#endif

    ctx->pc = 0x14ca60u;

    // 0x14ca60: 0x920201aa  lbu         $v0, 0x1AA($s0)
    ctx->pc = 0x14ca60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 426)));
    // 0x14ca64: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14ca64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ca68: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CA68u;
    {
        const bool branch_taken_0x14ca68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ca68) {
            ctx->pc = 0x14CA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CA68u;
            // 0x14ca6c: 0x8e0301b8  lw          $v1, 0x1B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CA84u;
            return;
        }
    }
    ctx->pc = 0x14CA70u;
    // 0x14ca70: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14ca70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14ca74: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x14ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x14ca78: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CA78u;
    SET_GPR_U32(ctx, 31, 0x14CA80u);
    ctx->pc = 0x14CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA78u;
    // 0x14ca7c: 0x24a56bc0  addiu       $a1, $a1, 0x6BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CA78u, 0x14CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA80u;
}
