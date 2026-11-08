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

// Function: entry_0013c774
// Address: 0x13c774 - 0x13c79c
void entry_0013c774_0x13c774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c774_0x13c774");
#endif

    switch (ctx->pc) {
        case 0x13c784u: goto label_13c784;
        default: break;
    }

    ctx->pc = 0x13c774u;

    // 0x13c774: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13c774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13c778: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13c778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13c77c: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x13C77Cu;
    SET_GPR_U32(ctx, 31, 0x13C784u);
    ctx->pc = 0x13C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C77Cu;
    // 0x13c780: 0x8e1301e4  lw          $s3, 0x1E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x13C77Cu, 0x13C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C784u;
label_13c784:
    // 0x13c784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C784u;
    {
        const bool branch_taken_0x13c784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C784u;
        // 0x13c788: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c784) {
            ctx->pc = 0x13C79Cu;
            return;
        }
    }
    ctx->pc = 0x13C78Cu;
    // 0x13c78c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13c790: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13c790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x13c794: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C794u;
    {
        const bool branch_taken_0x13c794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C794u;
        // 0x13c798: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c794) {
            ctx->pc = 0x13C7A8u;
            return;
        }
    }
    ctx->pc = 0x13C79Cu;
}
