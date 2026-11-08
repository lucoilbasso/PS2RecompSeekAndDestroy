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

// Function: entry_00193b34
// Address: 0x193b34 - 0x193b58
void entry_00193b34_0x193b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193b34_0x193b34");
#endif

    ctx->pc = 0x193b34u;

    // 0x193b34: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x193B34u;
    {
        const bool branch_taken_0x193b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B34u;
        // 0x193b38: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b34) {
            ctx->pc = 0x193BD8u;
            return;
        }
    }
    ctx->pc = 0x193B3Cu;
    // 0x193b3c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x193b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x193b40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x193b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x193b44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193B44u;
    {
        const bool branch_taken_0x193b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B44u;
        // 0x193b48: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b44) {
            ctx->pc = 0x193B58u;
            return;
        }
    }
    ctx->pc = 0x193B4Cu;
    // 0x193b4c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193b50: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193B50u;
    SET_GPR_U32(ctx, 31, 0x193B58u);
    ctx->pc = 0x193B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B50u;
    // 0x193b54: 0x24a58208  addiu       $a1, $a1, -0x7DF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193B50u, 0x193B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B58u;
}
