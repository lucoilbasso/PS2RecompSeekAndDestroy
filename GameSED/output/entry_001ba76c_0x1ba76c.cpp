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

// Function: entry_001ba76c
// Address: 0x1ba76c - 0x1ba7b8
void entry_001ba76c_0x1ba76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba76c_0x1ba76c");
#endif

    switch (ctx->pc) {
        case 0x1ba79cu: goto label_1ba79c;
        case 0x1ba7b0u: goto label_1ba7b0;
        default: break;
    }

    ctx->pc = 0x1ba76cu;

    // 0x1ba76c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1ba76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1ba770: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x1ba770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x1ba774: 0x2484d250  addiu       $a0, $a0, -0x2DB0
    ctx->pc = 0x1ba774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955600));
    // 0x1ba778: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ba778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ba77c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ba77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ba780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ba784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba788: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ba788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba78c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ba78cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba790: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ba790u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ba794: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BA794u;
    SET_GPR_U32(ctx, 31, 0x1BA79Cu);
    ctx->pc = 0x1BA798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA794u;
    // 0x1ba798: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BA794u, 0x1BA79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA79Cu;
label_1ba79c:
    // 0x1ba79c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA79Cu;
    {
        const bool branch_taken_0x1ba79c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA79Cu;
        // 0x1ba7a0: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba79c) {
            ctx->pc = 0x1BA7B8u;
            return;
        }
    }
    ctx->pc = 0x1BA7A4u;
    // 0x1ba7a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba7a8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA7A8u;
    SET_GPR_U32(ctx, 31, 0x1BA7B0u);
    ctx->pc = 0x1BA7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7A8u;
    // 0x1ba7ac: 0x8c44c0a8  lw          $a0, -0x3F58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA7A8u, 0x1BA7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA7B0u;
label_1ba7b0:
    // 0x1ba7b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA7B0u;
    {
        const bool branch_taken_0x1ba7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7B0u;
        // 0x1ba7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7b0) {
            ctx->pc = 0x1BA7D0u;
            return;
        }
    }
    ctx->pc = 0x1BA7B8u;
}
