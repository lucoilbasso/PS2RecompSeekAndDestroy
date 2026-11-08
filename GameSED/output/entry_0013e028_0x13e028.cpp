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

// Function: entry_0013e028
// Address: 0x13e028 - 0x13e078
void entry_0013e028_0x13e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e028_0x13e028");
#endif

    switch (ctx->pc) {
        case 0x13e03cu: goto label_13e03c;
        case 0x13e064u: goto label_13e064;
        case 0x13e06cu: goto label_13e06c;
        default: break;
    }

    ctx->pc = 0x13e028u;

    // 0x13e028: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x13e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x13e02c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13E02Cu;
    {
        const bool branch_taken_0x13e02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E02Cu;
        // 0x13e030: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e02c) {
            ctx->pc = 0x13E078u;
            return;
        }
    }
    ctx->pc = 0x13E034u;
    // 0x13e034: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E034u;
    SET_GPR_U32(ctx, 31, 0x13E03Cu);
    ctx->pc = 0x13E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E034u;
    // 0x13e038: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E034u, 0x13E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E03Cu;
label_13e03c:
    // 0x13e03c: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x13e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13e040: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13e040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13e044: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x13e044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13e048: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x13e048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x13e04c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13e04cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13e050: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13e050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13e054: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13e054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13e058: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x13e058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x13e05c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E05Cu;
    SET_GPR_U32(ctx, 31, 0x13E064u);
    ctx->pc = 0x13E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E05Cu;
    // 0x13e060: 0xae70008c  sw          $s0, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E05Cu, 0x13E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E064u;
label_13e064:
    // 0x13e064: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E064u;
    SET_GPR_U32(ctx, 31, 0x13E06Cu);
    ctx->pc = 0x13E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E064u;
    // 0x13e068: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E064u, 0x13E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E06Cu;
label_13e06c:
    // 0x13e06c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13E06Cu;
    {
        const bool branch_taken_0x13e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E06Cu;
        // 0x13e070: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e06c) {
            ctx->pc = 0x13E0A0u;
            return;
        }
    }
    ctx->pc = 0x13E074u;
    // 0x13e074: 0x0  nop
    ctx->pc = 0x13e074u;
    // NOP
    ctx->pc = 0x13e078u;
}
