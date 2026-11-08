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

// Function: entry_00189d28
// Address: 0x189d28 - 0x189d78
void entry_00189d28_0x189d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189d28_0x189d28");
#endif

    switch (ctx->pc) {
        case 0x189d3cu: goto label_189d3c;
        case 0x189d64u: goto label_189d64;
        case 0x189d6cu: goto label_189d6c;
        default: break;
    }

    ctx->pc = 0x189d28u;

    // 0x189d28: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x189d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x189d2c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x189D2Cu;
    {
        const bool branch_taken_0x189d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D2Cu;
        // 0x189d30: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d2c) {
            ctx->pc = 0x189D78u;
            return;
        }
    }
    ctx->pc = 0x189D34u;
    // 0x189d34: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189D34u;
    SET_GPR_U32(ctx, 31, 0x189D3Cu);
    ctx->pc = 0x189D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D34u;
    // 0x189d38: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189D34u, 0x189D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D3Cu;
label_189d3c:
    // 0x189d3c: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x189d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x189d40: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x189d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x189d44: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x189d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x189d48: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x189d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x189d4c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x189d4cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x189d50: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x189d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x189d54: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x189d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x189d58: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x189d58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x189d5c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189D5Cu;
    SET_GPR_U32(ctx, 31, 0x189D64u);
    ctx->pc = 0x189D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D5Cu;
    // 0x189d60: 0xae71008c  sw          $s1, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189D5Cu, 0x189D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D64u;
label_189d64:
    // 0x189d64: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189D64u;
    SET_GPR_U32(ctx, 31, 0x189D6Cu);
    ctx->pc = 0x189D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D64u;
    // 0x189d68: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189D64u, 0x189D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D6Cu;
label_189d6c:
    // 0x189d6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x189D6Cu;
    {
        const bool branch_taken_0x189d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D6Cu;
        // 0x189d70: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d6c) {
            ctx->pc = 0x189DA0u;
            return;
        }
    }
    ctx->pc = 0x189D74u;
    // 0x189d74: 0x0  nop
    ctx->pc = 0x189d74u;
    // NOP
    ctx->pc = 0x189d78u;
}
