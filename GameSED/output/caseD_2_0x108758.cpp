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

// Function: caseD_2
// Address: 0x108758 - 0x108784
void caseD_2_0x108758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x108758");
#endif

    switch (ctx->pc) {
        case 0x108760u: goto label_108760;
        default: break;
    }

    ctx->pc = 0x108758u;

    // 0x108758: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x108758u;
    SET_GPR_U32(ctx, 31, 0x108760u);
    ctx->pc = 0x10875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108758u;
    // 0x10875c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x108758u, 0x108760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108760u;
label_108760:
    // 0x108760: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108768: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x108768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x10876c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108770: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108770u;
    {
        const bool branch_taken_0x108770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x108770) {
            ctx->pc = 0x108790u;
            return;
        }
    }
    ctx->pc = 0x108778u;
    // 0x108778: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x108778u;
    {
        const bool branch_taken_0x108778 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108778u;
        // 0x10877c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108778) {
            ctx->pc = 0x108784u;
            return;
        }
    }
    ctx->pc = 0x108780u;
    // 0x108780: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x108780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    ctx->pc = 0x108784u;
}
