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

// Function: entry_001b2e08
// Address: 0x1b2e08 - 0x1b2e50
void entry_001b2e08_0x1b2e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2e08_0x1b2e08");
#endif

    switch (ctx->pc) {
        case 0x1b2e30u: goto label_1b2e30;
        case 0x1b2e40u: goto label_1b2e40;
        case 0x1b2e48u: goto label_1b2e48;
        default: break;
    }

    ctx->pc = 0x1b2e08u;

    // 0x1b2e08: 0x26c4b180  addiu       $a0, $s6, -0x4E80
    ctx->pc = 0x1b2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947200));
    // 0x1b2e0c: 0x26a79a80  addiu       $a3, $s5, -0x6580
    ctx->pc = 0x1b2e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941312));
    // 0x1b2e10: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b2e14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b2e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e1c: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x1b2e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b2e20: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b2e20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e24: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2e28: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B2E28u;
    SET_GPR_U32(ctx, 31, 0x1B2E30u);
    ctx->pc = 0x1B2E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E28u;
    // 0x1b2e2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B2E28u, 0x1B2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E30u;
label_1b2e30:
    // 0x1b2e30: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2E30u;
    {
        const bool branch_taken_0x1b2e30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E30u;
        // 0x1b2e34: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e30) {
            ctx->pc = 0x1B2E50u;
            return;
        }
    }
    ctx->pc = 0x1B2E38u;
    // 0x1b2e38: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2E38u;
    SET_GPR_U32(ctx, 31, 0x1B2E40u);
    ctx->pc = 0x1B2E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E38u;
    // 0x1b2e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2E38u, 0x1B2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E40u;
label_1b2e40:
    // 0x1b2e40: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2E40u;
    SET_GPR_U32(ctx, 31, 0x1B2E48u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2E40u, 0x1B2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E48u;
label_1b2e48:
    // 0x1b2e48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2E48u;
    {
        const bool branch_taken_0x1b2e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E48u;
        // 0x1b2e4c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e48) {
            ctx->pc = 0x1B2EA0u;
            return;
        }
    }
    ctx->pc = 0x1B2E50u;
}
