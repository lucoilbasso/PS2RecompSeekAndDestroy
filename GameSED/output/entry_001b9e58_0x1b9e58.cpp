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

// Function: entry_001b9e58
// Address: 0x1b9e58 - 0x1b9e88
void entry_001b9e58_0x1b9e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9e58_0x1b9e58");
#endif

    switch (ctx->pc) {
        case 0x1b9e60u: goto label_1b9e60;
        case 0x1b9e84u: goto label_1b9e84;
        default: break;
    }

    ctx->pc = 0x1b9e58u;

    // 0x1b9e58: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B9E58u;
    SET_GPR_U32(ctx, 31, 0x1B9E60u);
    ctx->pc = 0x1B9E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E58u;
    // 0x1b9e5c: 0x8fc4c0a0  lw          $a0, -0x3F60($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294951072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B9E58u, 0x1B9E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E60u;
label_1b9e60:
    // 0x1b9e60: 0x8e63c0d4  lw          $v1, -0x3F2C($s3)
    ctx->pc = 0x1b9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951124)));
    // 0x1b9e64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9e68: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9E68u;
    {
        const bool branch_taken_0x1b9e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E68u;
        // 0x1b9e6c: 0x8ea2c090  lw          $v0, -0x3F70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e68) {
            ctx->pc = 0x1B9E88u;
            return;
        }
    }
    ctx->pc = 0x1B9E70u;
    // 0x1b9e70: 0xae40c0b0  sw          $zero, -0x3F50($s2)
    ctx->pc = 0x1b9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951088), GPR_U32(ctx, 0));
    // 0x1b9e74: 0xae60c0d4  sw          $zero, -0x3F2C($s3)
    ctx->pc = 0x1b9e74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294951124), GPR_U32(ctx, 0));
    // 0x1b9e78: 0xaee0c094  sw          $zero, -0x3F6C($s7)
    ctx->pc = 0x1b9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294951060), GPR_U32(ctx, 0));
    // 0x1b9e7c: 0xc06bca8  jal         func_1AF2A0
    ctx->pc = 0x1B9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E84u);
    ctx->pc = 0x1B9E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E7Cu;
    // 0x1b9e80: 0xaec0d68c  sw          $zero, -0x2974($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294956684), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2A0u, 0x1B9E7Cu, 0x1B9E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E84u;
label_1b9e84:
    // 0x1b9e84: 0x8ea2c090  lw          $v0, -0x3F70($s5)
    ctx->pc = 0x1b9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951056)));
    ctx->pc = 0x1b9e88u;
}
