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

// Function: entry_001a6450
// Address: 0x1a6450 - 0x1a64a0
void entry_001a6450_0x1a6450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6450_0x1a6450");
#endif

    switch (ctx->pc) {
        case 0x1a6468u: goto label_1a6468;
        case 0x1a649cu: goto label_1a649c;
        default: break;
    }

    ctx->pc = 0x1a6450u;

    // 0x1a6450: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6454: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6458: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a645c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6460: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6460u;
    SET_GPR_U32(ctx, 31, 0x1A6468u);
    ctx->pc = 0x1A6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6460u;
    // 0x1a6464: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6460u, 0x1A6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6468u;
label_1a6468:
    // 0x1a6468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a646c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a646cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6470: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6474: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6478: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a647c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6480: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6484: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6488: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a648c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A648Cu;
    {
        const bool branch_taken_0x1a648c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A648Cu;
        // 0x1a6490: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a648c) {
            ctx->pc = 0x1A64A0u;
            return;
        }
    }
    ctx->pc = 0x1A6494u;
    // 0x1a6494: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6494u;
    SET_GPR_U32(ctx, 31, 0x1A649Cu);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6494u, 0x1A649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A649Cu;
label_1a649c:
    // 0x1a649c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a64a0u;
}
