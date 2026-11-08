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

// Function: entry_001345d4
// Address: 0x1345d4 - 0x1345f8
void entry_001345d4_0x1345d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001345d4_0x1345d4");
#endif

    switch (ctx->pc) {
        case 0x1345ecu: goto label_1345ec;
        default: break;
    }

    ctx->pc = 0x1345d4u;

    // 0x1345d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1345d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1345d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1345d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1345dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345e0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1345e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1345e4: 0xc04e0ba  jal         func_1382E8
    ctx->pc = 0x1345E4u;
    SET_GPR_U32(ctx, 31, 0x1345ECu);
    ctx->pc = 0x1345E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345E4u;
    // 0x1345e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1382E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1382E8u, 0x1345E4u, 0x1345ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345ECu;
label_1345ec:
    // 0x1345ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1345ECu;
    {
        const bool branch_taken_0x1345ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345ECu;
        // 0x1345f0: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345ec) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x1345F4u;
    // 0x1345f4: 0x0  nop
    ctx->pc = 0x1345f4u;
    // NOP
    ctx->pc = 0x1345f8u;
}
