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

// Function: entry_00154758
// Address: 0x154758 - 0x154790
void entry_00154758_0x154758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154758_0x154758");
#endif

    switch (ctx->pc) {
        case 0x154760u: goto label_154760;
        default: break;
    }

    ctx->pc = 0x154758u;

label_154758:
    // 0x154758: 0xc06a26e  jal         func_1A89B8
label_15475c:
    if (ctx->pc == 0x15475Cu) {
        ctx->pc = 0x15475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154758u;
        // 0x15475c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154760u;
        goto label_154760;
    }
    ctx->pc = 0x154758u;
    SET_GPR_U32(ctx, 31, 0x154760u);
    ctx->pc = 0x15475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154758u;
    // 0x15475c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154758u, 0x154760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154760u;
label_154760:
    // 0x154760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154764:
    // 0x154764: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x154764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_154768:
    // 0x154768: 0x2c83001d  sltiu       $v1, $a0, 0x1D
    ctx->pc = 0x154768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
label_15476c:
    // 0x15476c: 0x106002eb  beqz        $v1, . + 4 + (0x2EB << 2)
label_154770:
    if (ctx->pc == 0x154770u) {
        ctx->pc = 0x154770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15476Cu;
        // 0x154770: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154774u;
        goto label_154774;
    }
    ctx->pc = 0x15476Cu;
    {
        const bool branch_taken_0x15476c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15476Cu;
        // 0x154770: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15476c) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154774u;
label_154774:
    // 0x154774: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x154774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_154778:
    // 0x154778: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x154778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15477c:
    // 0x15477c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15477cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_154780:
    // 0x154780: 0x8c636d70  lw          $v1, 0x6D70($v1)
    ctx->pc = 0x154780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28016)));
label_154784:
    // 0x154784: 0x600008  jr          $v1
label_154788:
    if (ctx->pc == 0x154788u) {
        ctx->pc = 0x15478Cu;
        goto label_15478c;
    }
    ctx->pc = 0x154784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154784u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15478Cu;
label_15478c:
    // 0x15478c: 0x0  nop
    ctx->pc = 0x15478cu;
    // NOP
    ctx->pc = 0x154790u;
}
