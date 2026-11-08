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

// Function: caseD_18
// Address: 0x135970 - 0x135998
void caseD_18_0x135970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x135970");
#endif

    switch (ctx->pc) {
        case 0x135994u: goto label_135994;
        default: break;
    }

    ctx->pc = 0x135970u;

    // 0x135970: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135974: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x135974u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x135978: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x135978u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13597c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13597cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135980: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x135980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135984: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x135984u;
    {
        const bool branch_taken_0x135984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x135988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135984u;
        // 0x135988: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135984) {
            ctx->pc = 0x135998u;
            return;
        }
    }
    ctx->pc = 0x13598Cu;
    // 0x13598c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13598Cu;
    SET_GPR_U32(ctx, 31, 0x135994u);
    ctx->pc = 0x135990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13598Cu;
    // 0x135990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13598Cu, 0x135994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135994u;
label_135994:
    // 0x135994: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x135994u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135998u;
}
