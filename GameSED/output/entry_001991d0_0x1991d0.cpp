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

// Function: entry_001991d0
// Address: 0x1991d0 - 0x199210
void entry_001991d0_0x1991d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001991d0_0x1991d0");
#endif

    switch (ctx->pc) {
        case 0x1991d8u: goto label_1991d8;
        case 0x1991e0u: goto label_1991e0;
        case 0x1991ecu: goto label_1991ec;
        default: break;
    }

    ctx->pc = 0x1991d0u;

    // 0x1991d0: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x1991D0u;
    SET_GPR_U32(ctx, 31, 0x1991D8u);
    ctx->pc = 0x1991D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991D0u;
    // 0x1991d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x1991D0u, 0x1991D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991D8u;
label_1991d8:
    // 0x1991d8: 0xc05dcd6  jal         func_177358
    ctx->pc = 0x1991D8u;
    SET_GPR_U32(ctx, 31, 0x1991E0u);
    ctx->pc = 0x1991DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991D8u;
    // 0x1991dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177358u, 0x1991D8u, 0x1991E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991E0u;
label_1991e0:
    // 0x1991e0: 0xaed7d640  sw          $s7, -0x29C0($s6)
    ctx->pc = 0x1991e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294956608), GPR_U32(ctx, 23));
    // 0x1991e4: 0xc05df26  jal         func_177C98
    ctx->pc = 0x1991E4u;
    SET_GPR_U32(ctx, 31, 0x1991ECu);
    ctx->pc = 0x1991E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991E4u;
    // 0x1991e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x1991E4u, 0x1991ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991ECu;
label_1991ec:
    // 0x1991ec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1991ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1991f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1991F0u;
    {
        const bool branch_taken_0x1991f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1991f0) {
            ctx->pc = 0x1991F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1991F0u;
            // 0x1991f4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199224u;
            return;
        }
    }
    ctx->pc = 0x1991F8u;
    // 0x1991f8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1991F8u;
    {
        const bool branch_taken_0x1991f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1991FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991F8u;
        // 0x1991fc: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991f8) {
            ctx->pc = 0x199210u;
            return;
        }
    }
    ctx->pc = 0x199200u;
    // 0x199200: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x199204: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x199204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x199208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199208u;
    {
        const bool branch_taken_0x199208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199208u;
        // 0x19920c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199208) {
            ctx->pc = 0x19921Cu;
            return;
        }
    }
    ctx->pc = 0x199210u;
}
