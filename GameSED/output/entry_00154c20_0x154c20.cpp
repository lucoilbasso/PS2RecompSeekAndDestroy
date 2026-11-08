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

// Function: entry_00154c20
// Address: 0x154c20 - 0x154c58
void entry_00154c20_0x154c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154c20_0x154c20");
#endif

    switch (ctx->pc) {
        case 0x154c50u: goto label_154c50;
        default: break;
    }

    ctx->pc = 0x154c20u;

    // 0x154c20: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x154C20u;
    {
        const bool branch_taken_0x154c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C20u;
        // 0x154c24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c20) {
            ctx->pc = 0x154C68u;
            return;
        }
    }
    ctx->pc = 0x154C28u;
    // 0x154c28: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x154c2c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x154c30: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x154c34: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x154c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x154c38: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x154c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    // 0x154c3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154c40: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154C40u;
    {
        const bool branch_taken_0x154c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x154c40) {
            ctx->pc = 0x154C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154C40u;
            // 0x154c44: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154C58u;
            return;
        }
    }
    ctx->pc = 0x154C48u;
    // 0x154c48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154C48u;
    SET_GPR_U32(ctx, 31, 0x154C50u);
    ctx->pc = 0x154C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C48u;
    // 0x154c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154C48u, 0x154C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C50u;
label_154c50:
    // 0x154c50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x154C50u;
    {
        const bool branch_taken_0x154c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C50u;
        // 0x154c54: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c50) {
            ctx->pc = 0x154C5Cu;
            return;
        }
    }
    ctx->pc = 0x154C58u;
}
