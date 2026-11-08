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

// Function: entry_001a66a0
// Address: 0x1a66a0 - 0x1a66f0
void entry_001a66a0_0x1a66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a66a0_0x1a66a0");
#endif

    switch (ctx->pc) {
        case 0x1a66b8u: goto label_1a66b8;
        case 0x1a66ecu: goto label_1a66ec;
        default: break;
    }

    ctx->pc = 0x1a66a0u;

    // 0x1a66a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a66a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a66a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a66a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a66a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a66ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a66acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a66b0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A66B0u;
    SET_GPR_U32(ctx, 31, 0x1A66B8u);
    ctx->pc = 0x1A66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66B0u;
    // 0x1a66b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A66B0u, 0x1A66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66B8u;
label_1a66b8:
    // 0x1a66b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a66b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a66bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a66c4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a66c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a66c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a66cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a66d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a66d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a66d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a66d8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a66d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a66dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A66DCu;
    {
        const bool branch_taken_0x1a66dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66DCu;
        // 0x1a66e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66dc) {
            ctx->pc = 0x1A66F0u;
            return;
        }
    }
    ctx->pc = 0x1A66E4u;
    // 0x1a66e4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A66E4u;
    SET_GPR_U32(ctx, 31, 0x1A66ECu);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A66E4u, 0x1A66ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66ECu;
label_1a66ec:
    // 0x1a66ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a66ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a66f0u;
}
