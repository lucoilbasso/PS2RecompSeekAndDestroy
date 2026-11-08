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

// Function: entry_001554f0
// Address: 0x1554f0 - 0x155530
void entry_001554f0_0x1554f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001554f0_0x1554f0");
#endif

    switch (ctx->pc) {
        case 0x155508u: goto label_155508;
        case 0x155514u: goto label_155514;
        default: break;
    }

    ctx->pc = 0x1554f0u;

    // 0x1554f0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1554f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1554f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1554f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1554f8: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1554F8u;
    {
        const bool branch_taken_0x1554f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1554FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554F8u;
        // 0x1554fc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554f8) {
            ctx->pc = 0x155590u;
            return;
        }
    }
    ctx->pc = 0x155500u;
    // 0x155500: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x155500u;
    SET_GPR_U32(ctx, 31, 0x155508u);
    ctx->pc = 0x155504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155500u;
    // 0x155504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155500u, 0x155508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155508u;
label_155508:
    // 0x155508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15550c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x15550Cu;
    SET_GPR_U32(ctx, 31, 0x155514u);
    ctx->pc = 0x155510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15550Cu;
    // 0x155510: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x15550Cu, 0x155514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155514u;
label_155514:
    // 0x155514: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x155514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155518: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155518u;
    {
        const bool branch_taken_0x155518 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155518u;
        // 0x15551c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155518) {
            ctx->pc = 0x155530u;
            return;
        }
    }
    ctx->pc = 0x155520u;
    // 0x155520: 0x8e420898  lw          $v0, 0x898($s2)
    ctx->pc = 0x155520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x155524: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x155524u;
    {
        const bool branch_taken_0x155524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155524u;
        // 0x155528: 0xae4208a0  sw          $v0, 0x8A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155524) {
            ctx->pc = 0x155574u;
            return;
        }
    }
    ctx->pc = 0x15552Cu;
    // 0x15552c: 0x0  nop
    ctx->pc = 0x15552cu;
    // NOP
    ctx->pc = 0x155530u;
}
