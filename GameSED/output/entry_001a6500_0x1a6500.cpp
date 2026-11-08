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

// Function: entry_001a6500
// Address: 0x1a6500 - 0x1a6550
void entry_001a6500_0x1a6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6500_0x1a6500");
#endif

    switch (ctx->pc) {
        case 0x1a6518u: goto label_1a6518;
        case 0x1a654cu: goto label_1a654c;
        default: break;
    }

    ctx->pc = 0x1a6500u;

    // 0x1a6500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6504: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6508: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a650c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6510: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6510u;
    SET_GPR_U32(ctx, 31, 0x1A6518u);
    ctx->pc = 0x1A6514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6510u;
    // 0x1a6514: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6510u, 0x1A6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6518u;
label_1a6518:
    // 0x1a6518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a651c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a651cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6520: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6524: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6528: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a652c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6534: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6538: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a653c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A653Cu;
    {
        const bool branch_taken_0x1a653c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A653Cu;
        // 0x1a6540: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a653c) {
            ctx->pc = 0x1A6550u;
            return;
        }
    }
    ctx->pc = 0x1A6544u;
    // 0x1a6544: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6544u;
    SET_GPR_U32(ctx, 31, 0x1A654Cu);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6544u, 0x1A654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A654Cu;
label_1a654c:
    // 0x1a654c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a654cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a6550u;
}
