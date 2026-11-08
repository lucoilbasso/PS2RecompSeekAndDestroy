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

// Function: caseD_c
// Address: 0x110e20 - 0x110e48
void caseD_c_0x110e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x110e20");
#endif

    switch (ctx->pc) {
        case 0x110e28u: goto label_110e28;
        case 0x110e3cu: goto label_110e3c;
        default: break;
    }

    ctx->pc = 0x110e20u;

    // 0x110e20: 0xc0533f0  jal         func_14CFC0
    ctx->pc = 0x110E20u;
    SET_GPR_U32(ctx, 31, 0x110E28u);
    ctx->pc = 0x110E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E20u;
    // 0x110e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CFC0u, 0x110E20u, 0x110E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E28u;
label_110e28:
    // 0x110e28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x110E28u;
    {
        const bool branch_taken_0x110e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E28u;
        // 0x110e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e28) {
            ctx->pc = 0x110E70u;
            return;
        }
    }
    ctx->pc = 0x110E30u;
    // 0x110e30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e34: 0xc0668ca  jal         func_19A328
    ctx->pc = 0x110E34u;
    SET_GPR_U32(ctx, 31, 0x110E3Cu);
    ctx->pc = 0x110E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E34u;
    // 0x110e38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A328u, 0x110E34u, 0x110E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E3Cu;
label_110e3c:
    // 0x110e3c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x110E3Cu;
    {
        const bool branch_taken_0x110e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E3Cu;
        // 0x110e40: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e3c) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110E44u;
    // 0x110e44: 0x0  nop
    ctx->pc = 0x110e44u;
    // NOP
    ctx->pc = 0x110e48u;
}
