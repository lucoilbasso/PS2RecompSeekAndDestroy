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

// Function: caseD_1
// Address: 0x134158 - 0x134178
void caseD_1_0x134158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x134158");
#endif

    switch (ctx->pc) {
        case 0x134174u: goto label_134174;
        default: break;
    }

    ctx->pc = 0x134158u;

    // 0x134158: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13415c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13415cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x134160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134164: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134164u;
    {
        const bool branch_taken_0x134164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x134168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134164u;
        // 0x134168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134164) {
            ctx->pc = 0x134178u;
            return;
        }
    }
    ctx->pc = 0x13416Cu;
    // 0x13416c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13416Cu;
    SET_GPR_U32(ctx, 31, 0x134174u);
    ctx->pc = 0x134170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13416Cu;
    // 0x134170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13416Cu, 0x134174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134174u;
label_134174:
    // 0x134174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x134174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134178u;
}
