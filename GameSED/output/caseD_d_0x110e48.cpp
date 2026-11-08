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

// Function: caseD_d
// Address: 0x110e48 - 0x110e70
void caseD_d_0x110e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x110e48");
#endif

    switch (ctx->pc) {
        case 0x110e50u: goto label_110e50;
        case 0x110e64u: goto label_110e64;
        default: break;
    }

    ctx->pc = 0x110e48u;

    // 0x110e48: 0xc0533f0  jal         func_14CFC0
    ctx->pc = 0x110E48u;
    SET_GPR_U32(ctx, 31, 0x110E50u);
    ctx->pc = 0x110E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E48u;
    // 0x110e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CFC0u, 0x110E48u, 0x110E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E50u;
label_110e50:
    // 0x110e50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110E50u;
    {
        const bool branch_taken_0x110e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E50u;
        // 0x110e54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e50) {
            ctx->pc = 0x110E70u;
            return;
        }
    }
    ctx->pc = 0x110E58u;
    // 0x110e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e5c: 0xc066a3a  jal         func_19A8E8
    ctx->pc = 0x110E5Cu;
    SET_GPR_U32(ctx, 31, 0x110E64u);
    ctx->pc = 0x110E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E5Cu;
    // 0x110e60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A8E8u, 0x110E5Cu, 0x110E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E64u;
label_110e64:
    // 0x110e64: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x110E64u;
    {
        const bool branch_taken_0x110e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E64u;
        // 0x110e68: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e64) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110E6Cu;
    // 0x110e6c: 0x0  nop
    ctx->pc = 0x110e6cu;
    // NOP
    ctx->pc = 0x110e70u;
}
