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

// Function: entry_001a6988
// Address: 0x1a6988 - 0x1a69d4
void entry_001a6988_0x1a6988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6988_0x1a6988");
#endif

    switch (ctx->pc) {
        case 0x1a69a4u: goto label_1a69a4;
        case 0x1a69d0u: goto label_1a69d0;
        default: break;
    }

    ctx->pc = 0x1a6988u;

    // 0x1a6988: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a698c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6990: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6994: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6998: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a699c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A699Cu;
    SET_GPR_U32(ctx, 31, 0x1A69A4u);
    ctx->pc = 0x1A69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A699Cu;
    // 0x1a69a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A699Cu, 0x1A69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69A4u;
label_1a69a4:
    // 0x1a69a4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a69a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a69a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a69acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a69b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a69b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a69b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a69b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a69b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a69bc: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a69bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a69c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A69C0u;
    {
        const bool branch_taken_0x1a69c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C0u;
        // 0x1a69c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69c0) {
            ctx->pc = 0x1A69D4u;
            return;
        }
    }
    ctx->pc = 0x1A69C8u;
    // 0x1a69c8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A69C8u;
    SET_GPR_U32(ctx, 31, 0x1A69D0u);
    ctx->pc = 0x1A69CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69C8u;
    // 0x1a69cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A69C8u, 0x1A69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69D0u;
label_1a69d0:
    // 0x1a69d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a69d4u;
}
