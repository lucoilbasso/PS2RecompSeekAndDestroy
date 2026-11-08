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
// Address: 0x18165c - 0x181688
void caseD_1_0x18165c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x18165c");
#endif

    switch (ctx->pc) {
        case 0x181670u: goto label_181670;
        default: break;
    }

    ctx->pc = 0x18165cu;

    // 0x18165c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181664: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181668: 0xc0604f4  jal         func_1813D0
    ctx->pc = 0x181668u;
    SET_GPR_U32(ctx, 31, 0x181670u);
    ctx->pc = 0x18166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181668u;
    // 0x18166c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813D0u, 0x181668u, 0x181670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181670u;
label_181670:
    // 0x181670: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x181670u;
    {
        const bool branch_taken_0x181670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181670u;
        // 0x181674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181670) {
            ctx->pc = 0x181770u;
            return;
        }
    }
    ctx->pc = 0x181678u;
    // 0x181678: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x18167c: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x18167cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x181680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181684: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x181684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x181688u;
}
