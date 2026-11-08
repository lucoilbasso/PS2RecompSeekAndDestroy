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

// Function: entry_001a68a4
// Address: 0x1a68a4 - 0x1a68dc
void entry_001a68a4_0x1a68a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a68a4_0x1a68a4");
#endif

    switch (ctx->pc) {
        case 0x1a68d4u: goto label_1a68d4;
        default: break;
    }

    ctx->pc = 0x1a68a4u;

    // 0x1a68a4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a68a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a68a8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a68ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a68b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a68b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a68b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a68b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a68bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a68c0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a68c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a68c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A68C4u;
    {
        const bool branch_taken_0x1a68c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68C4u;
        // 0x1a68c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68c4) {
            ctx->pc = 0x1A68DCu;
            return;
        }
    }
    ctx->pc = 0x1A68CCu;
    // 0x1a68cc: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A68CCu;
    SET_GPR_U32(ctx, 31, 0x1A68D4u);
    ctx->pc = 0x1A68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68CCu;
    // 0x1a68d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A68CCu, 0x1A68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68D4u;
label_1a68d4:
    // 0x1a68d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a68d8: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a68d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->pc = 0x1a68dcu;
}
