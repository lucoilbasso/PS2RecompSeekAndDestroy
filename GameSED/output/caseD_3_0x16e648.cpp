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

// Function: caseD_3
// Address: 0x16e648 - 0x16e680
void caseD_3_0x16e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x16e648");
#endif

    ctx->pc = 0x16e648u;

    // 0x16e648: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x16e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x16e64c: 0x8c500074  lw          $s0, 0x74($v0)
    ctx->pc = 0x16e64cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x16e650: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x16E650u;
    {
        const bool branch_taken_0x16e650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e650) {
            ctx->pc = 0x16E654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E650u;
            // 0x16e654: 0xae2001e0  sw          $zero, 0x1E0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E6FCu;
            return;
        }
    }
    ctx->pc = 0x16E658u;
    // 0x16e658: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16e65c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16e65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16e660: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e664: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x16e664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16e668: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x16e668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16e66c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16e670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E670u;
    {
        const bool branch_taken_0x16e670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E670u;
        // 0x16e674: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e670) {
            ctx->pc = 0x16E680u;
            return;
        }
    }
    ctx->pc = 0x16E678u;
    // 0x16e678: 0xc061920  jal         func_186480
    ctx->pc = 0x16E678u;
    SET_GPR_U32(ctx, 31, 0x16E680u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16E678u, 0x16E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E680u;
}
