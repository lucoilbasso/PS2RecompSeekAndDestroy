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

// Function: entry_00187030
// Address: 0x187030 - 0x187068
void entry_00187030_0x187030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187030_0x187030");
#endif

    switch (ctx->pc) {
        case 0x187038u: goto label_187038;
        default: break;
    }

    ctx->pc = 0x187030u;

label_187030:
    // 0x187030: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x187030u;
    SET_GPR_U32(ctx, 31, 0x187038u);
    ctx->pc = 0x187034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187030u;
    // 0x187034: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x187030u, 0x187038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187038u;
label_187038:
    // 0x187038: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x187038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x18703c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x18703Cu;
    {
        const bool branch_taken_0x18703c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x187040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18703Cu;
        // 0x187040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18703c) {
            ctx->pc = 0x187030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187030;
        }
    }
    ctx->pc = 0x187044u;
    // 0x187044: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x187044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187048: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x187048u;
    {
        const bool branch_taken_0x187048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187048u;
        // 0x18704c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187048) {
            ctx->pc = 0x187068u;
            return;
        }
    }
    ctx->pc = 0x187050u;
    // 0x187050: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x187054: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x187054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x187058: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18705c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x18705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x187060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187060u;
    {
        const bool branch_taken_0x187060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187060u;
        // 0x187064: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187060) {
            ctx->pc = 0x187070u;
            return;
        }
    }
    ctx->pc = 0x187068u;
}
