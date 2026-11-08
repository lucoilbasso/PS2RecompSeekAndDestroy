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

// Function: entry_0013e0a0
// Address: 0x13e0a0 - 0x13e0f0
void entry_0013e0a0_0x13e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e0a0_0x13e0a0");
#endif

    switch (ctx->pc) {
        case 0x13e0b0u: goto label_13e0b0;
        case 0x13e0e0u: goto label_13e0e0;
        case 0x13e0e8u: goto label_13e0e8;
        default: break;
    }

    ctx->pc = 0x13e0a0u;

    // 0x13e0a0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13E0A0u;
    {
        const bool branch_taken_0x13e0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e0a0) {
            ctx->pc = 0x13E0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E0A0u;
            // 0x13e0a4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E0F0u;
            return;
        }
    }
    ctx->pc = 0x13E0A8u;
    // 0x13e0a8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E0A8u;
    SET_GPR_U32(ctx, 31, 0x13E0B0u);
    ctx->pc = 0x13E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0A8u;
    // 0x13e0ac: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E0A8u, 0x13E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0B0u;
label_13e0b0:
    // 0x13e0b0: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13e0b4: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x13e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x13e0b8: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x13e0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13e0bc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x13e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x13e0c0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x13e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x13e0c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13e0c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13e0c8: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13e0cc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13e0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13e0d0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x13e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x13e0d4: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x13e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x13e0d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E0D8u;
    SET_GPR_U32(ctx, 31, 0x13E0E0u);
    ctx->pc = 0x13E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0D8u;
    // 0x13e0dc: 0xae62008c  sw          $v0, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E0D8u, 0x13E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0E0u;
label_13e0e0:
    // 0x13e0e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E0E0u;
    SET_GPR_U32(ctx, 31, 0x13E0E8u);
    ctx->pc = 0x13E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0E0u;
    // 0x13e0e4: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E0E0u, 0x13E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0E8u;
label_13e0e8:
    // 0x13e0e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13E0E8u;
    {
        const bool branch_taken_0x13e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0E8u;
        // 0x13e0ec: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0e8) {
            ctx->pc = 0x13E114u;
            return;
        }
    }
    ctx->pc = 0x13E0F0u;
}
