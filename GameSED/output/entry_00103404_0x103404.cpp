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

// Function: entry_00103404
// Address: 0x103404 - 0x103468
void entry_00103404_0x103404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103404_0x103404");
#endif

    switch (ctx->pc) {
        case 0x103438u: goto label_103438;
        case 0x103460u: goto label_103460;
        default: break;
    }

    ctx->pc = 0x103404u;

label_103404:
    // 0x103404: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x103404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_103408:
    // 0x103408: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x103408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10340c:
    // 0x10340c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x10340cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_103410:
    // 0x103410: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x103410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_103414:
    // 0x103414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103418:
    // 0x103418: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x103418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_10341c:
    // 0x10341c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10341cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_103420:
    // 0x103420: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x103420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_103424:
    // 0x103424: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x103424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_103428:
    // 0x103428: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x103428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_10342c:
    // 0x10342c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103430:
    // 0x103430: 0xc0684ee  jal         func_1A13B8
label_103434:
    if (ctx->pc == 0x103434u) {
        ctx->pc = 0x103434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103430u;
        // 0x103434: 0xae300144  sw          $s0, 0x144($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103438u;
        goto label_103438;
    }
    ctx->pc = 0x103430u;
    SET_GPR_U32(ctx, 31, 0x103438u);
    ctx->pc = 0x103434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103430u;
    // 0x103434: 0xae300144  sw          $s0, 0x144($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13B8u, 0x103430u, 0x103438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103438u;
label_103438:
    // 0x103438: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_10343c:
    if (ctx->pc == 0x10343Cu) {
        ctx->pc = 0x10343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103438u;
        // 0x10343c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103440u;
        goto label_103440;
    }
    ctx->pc = 0x103438u;
    {
        const bool branch_taken_0x103438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103438u;
        // 0x10343c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103438) {
            ctx->pc = 0x103500u;
            return;
        }
    }
    ctx->pc = 0x103440u;
label_103440:
    // 0x103440: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x103440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_103444:
    // 0x103444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103448:
    // 0x103448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x103448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10344c:
    // 0x10344c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x10344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_103450:
    // 0x103450: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x103450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_103454:
    // 0x103454: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x103454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_103458:
    // 0x103458: 0x60f809  jalr        $v1
label_10345c:
    if (ctx->pc == 0x10345Cu) {
        ctx->pc = 0x10345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103458u;
        // 0x10345c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103460u;
        goto label_103460;
    }
    ctx->pc = 0x103458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x103460u);
        ctx->pc = 0x10345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103458u;
        // 0x10345c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103458u, 0x103460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103460u;
label_103460:
    // 0x103460: 0x10000027  b           . + 4 + (0x27 << 2)
label_103464:
    if (ctx->pc == 0x103464u) {
        ctx->pc = 0x103464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103460u;
        // 0x103464: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103468u;
        goto label_fallthrough_0x103460;
    }
    ctx->pc = 0x103460u;
    {
        const bool branch_taken_0x103460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103460u;
        // 0x103464: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103460) {
            ctx->pc = 0x103500u;
            return;
        }
    }
label_fallthrough_0x103460:
    ctx->pc = 0x103468u;
}
