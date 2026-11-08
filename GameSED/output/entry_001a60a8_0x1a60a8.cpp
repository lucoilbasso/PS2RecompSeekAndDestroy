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

// Function: entry_001a60a8
// Address: 0x1a60a8 - 0x1a60d0
void entry_001a60a8_0x1a60a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a60a8_0x1a60a8");
#endif

    switch (ctx->pc) {
        case 0x1a60ccu: goto label_1a60cc;
        default: break;
    }

    ctx->pc = 0x1a60a8u;

    // 0x1a60a8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a60ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a60acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a60b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a60b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a60b8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a60b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a60bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A60BCu;
    {
        const bool branch_taken_0x1a60bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60BCu;
        // 0x1a60c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60bc) {
            ctx->pc = 0x1A60D0u;
            return;
        }
    }
    ctx->pc = 0x1A60C4u;
    // 0x1a60c4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A60C4u;
    SET_GPR_U32(ctx, 31, 0x1A60CCu);
    ctx->pc = 0x1A60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60C4u;
    // 0x1a60c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A60C4u, 0x1A60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60CCu;
label_1a60cc:
    // 0x1a60cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a60ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a60d0u;
}
