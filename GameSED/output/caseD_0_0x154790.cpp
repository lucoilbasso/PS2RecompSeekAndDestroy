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

// Function: caseD_0
// Address: 0x154790 - 0x1547b8
void caseD_0_0x154790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x154790");
#endif

    switch (ctx->pc) {
        case 0x15479cu: goto label_15479c;
        default: break;
    }

    ctx->pc = 0x154790u;

    // 0x154790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154794: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154794u;
    SET_GPR_U32(ctx, 31, 0x15479Cu);
    ctx->pc = 0x154798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154794u;
    // 0x154798: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154794u, 0x15479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15479Cu;
label_15479c:
    // 0x15479c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15479cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547a0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1547A0u;
    {
        const bool branch_taken_0x1547a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547A0u;
        // 0x1547a4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547a0) {
            ctx->pc = 0x1547B8u;
            return;
        }
    }
    ctx->pc = 0x1547A8u;
    // 0x1547a8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1547a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1547ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1547acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1547b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1547B0u;
    {
        const bool branch_taken_0x1547b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547B0u;
        // 0x1547b4: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547b0) {
            ctx->pc = 0x1547CCu;
            return;
        }
    }
    ctx->pc = 0x1547B8u;
}
