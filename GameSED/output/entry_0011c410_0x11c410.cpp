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

// Function: entry_0011c410
// Address: 0x11c410 - 0x11c478
void entry_0011c410_0x11c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c410_0x11c410");
#endif

    switch (ctx->pc) {
        case 0x11c42cu: goto label_11c42c;
        case 0x11c438u: goto label_11c438;
        case 0x11c448u: goto label_11c448;
        default: break;
    }

    ctx->pc = 0x11c410u;

    // 0x11c410: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x11c410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11c414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c418: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11c41c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c420: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x11c420u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11c424: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x11C424u;
    SET_GPR_U32(ctx, 31, 0x11C42Cu);
    ctx->pc = 0x11C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C424u;
    // 0x11c428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x11C424u, 0x11C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C42Cu;
label_11c42c:
    // 0x11c42c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c430: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x11C430u;
    SET_GPR_U32(ctx, 31, 0x11C438u);
    ctx->pc = 0x11C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C430u;
    // 0x11c434: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x11C430u, 0x11C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C438u;
label_11c438:
    // 0x11c438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c440: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x11C440u;
    SET_GPR_U32(ctx, 31, 0x11C448u);
    ctx->pc = 0x11C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C440u;
    // 0x11c444: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x11C440u, 0x11C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C448u;
label_11c448:
    // 0x11c448: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x11c448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x11c44c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11c450: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x11c450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x11c454: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x11c454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x11c458: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11c458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11c45c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x11c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11c460: 0x24a54818  addiu       $a1, $a1, 0x4818
    ctx->pc = 0x11c460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18456));
    // 0x11c464: 0x24504e00  addiu       $s0, $v0, 0x4E00
    ctx->pc = 0x11c464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x11c468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c46c: 0x8e060c2c  lw          $a2, 0xC2C($s0)
    ctx->pc = 0x11c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3116)));
    // 0x11c470: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11C470u;
    {
        const bool branch_taken_0x11c470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c470) {
            ctx->pc = 0x11C474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C470u;
            // 0x11c474: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C478u;
            return;
        }
    }
    ctx->pc = 0x11C478u;
}
