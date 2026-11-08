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
// Address: 0x1362d8 - 0x136304
void caseD_0_0x1362d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1362d8");
#endif

    switch (ctx->pc) {
        case 0x136300u: goto label_136300;
        default: break;
    }

    ctx->pc = 0x1362d8u;

    // 0x1362d8: 0x8e900024  lw          $s0, 0x24($s4)
    ctx->pc = 0x1362d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1362dc: 0x3c130080  lui         $s3, 0x80
    ctx->pc = 0x1362dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)128 << 16));
    // 0x1362e0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1362e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1362e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1362E4u;
    {
        const bool branch_taken_0x1362e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1362E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362E4u;
        // 0x1362e8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362e4) {
            ctx->pc = 0x136304u;
            return;
        }
    }
    ctx->pc = 0x1362ECu;
    // 0x1362ec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1362ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1362f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1362f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362f4: 0x24a563b8  addiu       $a1, $a1, 0x63B8
    ctx->pc = 0x1362f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25528));
    // 0x1362f8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1362F8u;
    SET_GPR_U32(ctx, 31, 0x136300u);
    ctx->pc = 0x1362FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362F8u;
    // 0x1362fc: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1362F8u, 0x136300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136300u;
label_136300:
    // 0x136300: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x136300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x136304u;
}
