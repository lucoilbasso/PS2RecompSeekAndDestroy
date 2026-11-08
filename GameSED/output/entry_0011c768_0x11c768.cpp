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

// Function: entry_0011c768
// Address: 0x11c768 - 0x11c7a0
void entry_0011c768_0x11c768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c768_0x11c768");
#endif

    switch (ctx->pc) {
        case 0x11c778u: goto label_11c778;
        default: break;
    }

    ctx->pc = 0x11c768u;

    // 0x11c768: 0x240503c0  addiu       $a1, $zero, 0x3C0
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x11c76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c770: 0xc045352  jal         func_114D48
    ctx->pc = 0x11C770u;
    SET_GPR_U32(ctx, 31, 0x11C778u);
    ctx->pc = 0x11C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C770u;
    // 0x11c774: 0x3c100024  lui         $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D48u, 0x11C770u, 0x11C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C778u;
label_11c778:
    // 0x11c778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c77c: 0x2610fcb0  addiu       $s0, $s0, -0x350
    ctx->pc = 0x11c77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966448));
    // 0x11c780: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11c780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11c784: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x11C784u;
    {
        const bool branch_taken_0x11c784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C784u;
        // 0x11c788: 0xae020400  sw          $v0, 0x400($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c784) {
            ctx->pc = 0x11C7C0u;
            return;
        }
    }
    ctx->pc = 0x11C78Cu;
    // 0x11c78c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c790: 0x26514e00  addiu       $s1, $s2, 0x4E00
    ctx->pc = 0x11c790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 19968));
    // 0x11c794: 0x26504604  addiu       $s0, $s2, 0x4604
    ctx->pc = 0x11c794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 17924));
    // 0x11c798: 0xc046104  jal         func_118410
    ctx->pc = 0x11C798u;
    SET_GPR_U32(ctx, 31, 0x11C7A0u);
    ctx->pc = 0x11C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C798u;
    // 0x11c79c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x11C798u, 0x11C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7A0u;
}
