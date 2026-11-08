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

// Function: entry_001a6aa0
// Address: 0x1a6aa0 - 0x1a6af0
void entry_001a6aa0_0x1a6aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6aa0_0x1a6aa0");
#endif

    switch (ctx->pc) {
        case 0x1a6ac0u: goto label_1a6ac0;
        case 0x1a6aecu: goto label_1a6aec;
        default: break;
    }

    ctx->pc = 0x1a6aa0u;

    // 0x1a6aa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6aa4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a6aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a6aa8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a6aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a6aac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6ab0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6ab4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6ab8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6AB8u;
    SET_GPR_U32(ctx, 31, 0x1A6AC0u);
    ctx->pc = 0x1A6ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6AB8u;
    // 0x1a6abc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6AB8u, 0x1A6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AC0u;
label_1a6ac0:
    // 0x1a6ac0: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6ac4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a6ac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6acc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6ad0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6ad4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6ad8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6adc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6ADCu;
    {
        const bool branch_taken_0x1a6adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6ADCu;
        // 0x1a6ae0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6adc) {
            ctx->pc = 0x1A6AF0u;
            return;
        }
    }
    ctx->pc = 0x1A6AE4u;
    // 0x1a6ae4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6AE4u;
    SET_GPR_U32(ctx, 31, 0x1A6AECu);
    ctx->pc = 0x1A6AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6AE4u;
    // 0x1a6ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6AE4u, 0x1A6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AECu;
label_1a6aec:
    // 0x1a6aec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a6af0u;
}
