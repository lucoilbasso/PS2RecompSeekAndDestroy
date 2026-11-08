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

// Function: entry_0013e6d0
// Address: 0x13e6d0 - 0x13e720
void entry_0013e6d0_0x13e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e6d0_0x13e6d0");
#endif

    switch (ctx->pc) {
        case 0x13e6e4u: goto label_13e6e4;
        case 0x13e70cu: goto label_13e70c;
        case 0x13e714u: goto label_13e714;
        default: break;
    }

    ctx->pc = 0x13e6d0u;

    // 0x13e6d0: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x13e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x13e6d4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13E6D4u;
    {
        const bool branch_taken_0x13e6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6D4u;
        // 0x13e6d8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6d4) {
            ctx->pc = 0x13E720u;
            return;
        }
    }
    ctx->pc = 0x13E6DCu;
    // 0x13e6dc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E6DCu;
    SET_GPR_U32(ctx, 31, 0x13E6E4u);
    ctx->pc = 0x13E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6DCu;
    // 0x13e6e0: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E6DCu, 0x13E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E6E4u;
label_13e6e4:
    // 0x13e6e4: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x13e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13e6e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13e6ec: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x13e6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13e6f0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x13e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x13e6f4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13e6f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13e6f8: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13e6fc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13e6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13e700: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x13e700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x13e704: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E704u;
    SET_GPR_U32(ctx, 31, 0x13E70Cu);
    ctx->pc = 0x13E708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E704u;
    // 0x13e708: 0xae70008c  sw          $s0, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E704u, 0x13E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E70Cu;
label_13e70c:
    // 0x13e70c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E70Cu;
    SET_GPR_U32(ctx, 31, 0x13E714u);
    ctx->pc = 0x13E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E70Cu;
    // 0x13e710: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E70Cu, 0x13E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E714u;
label_13e714:
    // 0x13e714: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13E714u;
    {
        const bool branch_taken_0x13e714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E714u;
        // 0x13e718: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e714) {
            ctx->pc = 0x13E748u;
            return;
        }
    }
    ctx->pc = 0x13E71Cu;
    // 0x13e71c: 0x0  nop
    ctx->pc = 0x13e71cu;
    // NOP
    ctx->pc = 0x13e720u;
}
