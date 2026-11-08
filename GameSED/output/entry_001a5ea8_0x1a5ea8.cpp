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

// Function: entry_001a5ea8
// Address: 0x1a5ea8 - 0x1a5ef0
void entry_001a5ea8_0x1a5ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5ea8_0x1a5ea8");
#endif

    switch (ctx->pc) {
        case 0x1a5ec0u: goto label_1a5ec0;
        case 0x1a5eecu: goto label_1a5eec;
        default: break;
    }

    ctx->pc = 0x1a5ea8u;

    // 0x1a5ea8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a5ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a5eac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5eb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5eb4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5eb8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5EB8u;
    SET_GPR_U32(ctx, 31, 0x1A5EC0u);
    ctx->pc = 0x1A5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EB8u;
    // 0x1a5ebc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5EB8u, 0x1A5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EC0u;
label_1a5ec0:
    // 0x1a5ec0: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a5ec4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ec8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5ecc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a5eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a5ed0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5ed4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5ed8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a5ed8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a5edc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5EDCu;
    {
        const bool branch_taken_0x1a5edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EDCu;
        // 0x1a5ee0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5edc) {
            ctx->pc = 0x1A5EF0u;
            return;
        }
    }
    ctx->pc = 0x1A5EE4u;
    // 0x1a5ee4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5EE4u;
    SET_GPR_U32(ctx, 31, 0x1A5EECu);
    ctx->pc = 0x1A5EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EE4u;
    // 0x1a5ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5EE4u, 0x1A5EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EECu;
label_1a5eec:
    // 0x1a5eec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a5ef0u;
}
