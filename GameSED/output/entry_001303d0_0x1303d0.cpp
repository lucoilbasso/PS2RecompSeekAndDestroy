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

// Function: entry_001303d0
// Address: 0x1303d0 - 0x1303fc
void entry_001303d0_0x1303d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001303d0_0x1303d0");
#endif

    switch (ctx->pc) {
        case 0x1303f4u: goto label_1303f4;
        default: break;
    }

    ctx->pc = 0x1303d0u;

    // 0x1303d0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1303d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1303d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1303d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1303d8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1303D8u;
    {
        const bool branch_taken_0x1303d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303D8u;
        // 0x1303dc: 0xae020134  sw          $v0, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303d8) {
            ctx->pc = 0x130404u;
            return;
        }
    }
    ctx->pc = 0x1303E0u;
    // 0x1303e0: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1303e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1303e4: 0x58800008  blezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1303E4u;
    {
        const bool branch_taken_0x1303e4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1303e4) {
            ctx->pc = 0x1303E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1303E4u;
            // 0x1303e8: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130408u;
            return;
        }
    }
    ctx->pc = 0x1303ECu;
    // 0x1303ec: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1303ECu;
    SET_GPR_U32(ctx, 31, 0x1303F4u);
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1303ECu, 0x1303F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303F4u;
label_1303f4:
    // 0x1303f4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1303f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1303f8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1303f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->pc = 0x1303fcu;
}
