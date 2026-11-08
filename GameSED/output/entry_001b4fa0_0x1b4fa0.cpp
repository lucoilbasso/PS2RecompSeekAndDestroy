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

// Function: entry_001b4fa0
// Address: 0x1b4fa0 - 0x1b4fe8
void entry_001b4fa0_0x1b4fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4fa0_0x1b4fa0");
#endif

    switch (ctx->pc) {
        case 0x1b4fc8u: goto label_1b4fc8;
        case 0x1b4fd8u: goto label_1b4fd8;
        case 0x1b4fe0u: goto label_1b4fe0;
        default: break;
    }

    ctx->pc = 0x1b4fa0u;

    // 0x1b4fa0: 0x26c4b180  addiu       $a0, $s6, -0x4E80
    ctx->pc = 0x1b4fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947200));
    // 0x1b4fa4: 0x26a79a80  addiu       $a3, $s5, -0x6580
    ctx->pc = 0x1b4fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941312));
    // 0x1b4fa8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4fac: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1b4facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1b4fb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fb4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1b4fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b4fb8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b4fb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fbc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4fc0: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4FC0u;
    SET_GPR_U32(ctx, 31, 0x1B4FC8u);
    ctx->pc = 0x1B4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FC0u;
    // 0x1b4fc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4FC0u, 0x1B4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FC8u;
label_1b4fc8:
    // 0x1b4fc8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4FC8u;
    {
        const bool branch_taken_0x1b4fc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FC8u;
        // 0x1b4fcc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fc8) {
            ctx->pc = 0x1B4FE8u;
            return;
        }
    }
    ctx->pc = 0x1B4FD0u;
    // 0x1b4fd0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4FD0u;
    SET_GPR_U32(ctx, 31, 0x1B4FD8u);
    ctx->pc = 0x1B4FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FD0u;
    // 0x1b4fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4FD0u, 0x1B4FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FD8u;
label_1b4fd8:
    // 0x1b4fd8: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4FD8u;
    SET_GPR_U32(ctx, 31, 0x1B4FE0u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4FD8u, 0x1B4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FE0u;
label_1b4fe0:
    // 0x1b4fe0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B4FE0u;
    {
        const bool branch_taken_0x1b4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FE0u;
        // 0x1b4fe4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fe0) {
            ctx->pc = 0x1B5038u;
            return;
        }
    }
    ctx->pc = 0x1B4FE8u;
}
