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
// Address: 0x1363d0 - 0x1363fc
void caseD_1_0x1363d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1363d0");
#endif

    switch (ctx->pc) {
        case 0x1363f8u: goto label_1363f8;
        default: break;
    }

    ctx->pc = 0x1363d0u;

    // 0x1363d0: 0x8e900024  lw          $s0, 0x24($s4)
    ctx->pc = 0x1363d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1363d4: 0x3c130080  lui         $s3, 0x80
    ctx->pc = 0x1363d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)128 << 16));
    // 0x1363d8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1363d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1363dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1363DCu;
    {
        const bool branch_taken_0x1363dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363DCu;
        // 0x1363e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363dc) {
            ctx->pc = 0x1363FCu;
            return;
        }
    }
    ctx->pc = 0x1363E4u;
    // 0x1363e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1363e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1363e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1363e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363ec: 0x24a563b8  addiu       $a1, $a1, 0x63B8
    ctx->pc = 0x1363ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25528));
    // 0x1363f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1363F0u;
    SET_GPR_U32(ctx, 31, 0x1363F8u);
    ctx->pc = 0x1363F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363F0u;
    // 0x1363f4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1363F0u, 0x1363F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363F8u;
label_1363f8:
    // 0x1363f8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1363f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1363fcu;
}
