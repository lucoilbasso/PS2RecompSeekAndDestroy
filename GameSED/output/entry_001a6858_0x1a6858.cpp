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

// Function: entry_001a6858
// Address: 0x1a6858 - 0x1a68a4
void entry_001a6858_0x1a6858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6858_0x1a6858");
#endif

    switch (ctx->pc) {
        case 0x1a6874u: goto label_1a6874;
        case 0x1a68a0u: goto label_1a68a0;
        default: break;
    }

    ctx->pc = 0x1a6858u;

    // 0x1a6858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a685c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6860: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6864: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6868: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a686c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A686Cu;
    SET_GPR_U32(ctx, 31, 0x1A6874u);
    ctx->pc = 0x1A6870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A686Cu;
    // 0x1a6870: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A686Cu, 0x1A6874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6874u;
label_1a6874:
    // 0x1a6874: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6878: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a687c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6880: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6884: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6888: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a688c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a688cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6890: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6890u;
    {
        const bool branch_taken_0x1a6890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6890u;
        // 0x1a6894: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6890) {
            ctx->pc = 0x1A68A4u;
            return;
        }
    }
    ctx->pc = 0x1A6898u;
    // 0x1a6898: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6898u;
    SET_GPR_U32(ctx, 31, 0x1A68A0u);
    ctx->pc = 0x1A689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6898u;
    // 0x1a689c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6898u, 0x1A68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68A0u;
label_1a68a0:
    // 0x1a68a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a68a4u;
}
