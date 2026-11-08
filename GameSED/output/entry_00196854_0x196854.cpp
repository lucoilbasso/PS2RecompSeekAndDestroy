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

// Function: entry_00196854
// Address: 0x196854 - 0x196870
void entry_00196854_0x196854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196854_0x196854");
#endif

    switch (ctx->pc) {
        case 0x196860u: goto label_196860;
        default: break;
    }

    ctx->pc = 0x196854u;

    // 0x196854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196858: 0xc061422  jal         func_185088
    ctx->pc = 0x196858u;
    SET_GPR_U32(ctx, 31, 0x196860u);
    ctx->pc = 0x19685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196858u;
    // 0x19685c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x196858u, 0x196860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196860u;
label_196860:
    // 0x196860: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x196860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x196864: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x196864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196868: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x196868u;
    {
        const bool branch_taken_0x196868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196868) {
            ctx->pc = 0x19686Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196868u;
            // 0x19686c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196838u;
            return;
        }
    }
    ctx->pc = 0x196870u;
}
