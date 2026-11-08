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

// Function: entry_00116418
// Address: 0x116418 - 0x116458
void entry_00116418_0x116418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116418_0x116418");
#endif

    switch (ctx->pc) {
        case 0x116424u: goto label_116424;
        case 0x116434u: goto label_116434;
        default: break;
    }

    ctx->pc = 0x116418u;

    // 0x116418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11641c: 0xc041882  jal         func_106208
    ctx->pc = 0x11641Cu;
    SET_GPR_U32(ctx, 31, 0x116424u);
    ctx->pc = 0x116420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11641Cu;
    // 0x116420: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11641Cu, 0x116424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116424u;
label_116424:
    // 0x116424: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116428: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11642c: 0xc041882  jal         func_106208
    ctx->pc = 0x11642Cu;
    SET_GPR_U32(ctx, 31, 0x116434u);
    ctx->pc = 0x116430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11642Cu;
    // 0x116430: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11642Cu, 0x116434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116434u;
label_116434:
    // 0x116434: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x116434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x116438: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x116438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11643c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116440: 0x24a54390  addiu       $a1, $a1, 0x4390
    ctx->pc = 0x116440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    // 0x116444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116448: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116448u;
    {
        const bool branch_taken_0x116448 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116448u;
        // 0x11644c: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116448) {
            ctx->pc = 0x116458u;
            return;
        }
    }
    ctx->pc = 0x116450u;
    // 0x116450: 0xc068186  jal         func_1A0618
    ctx->pc = 0x116450u;
    SET_GPR_U32(ctx, 31, 0x116458u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x116450u, 0x116458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116458u;
}
