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

// Function: entry_001652a0
// Address: 0x1652a0 - 0x1652d0
void entry_001652a0_0x1652a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001652a0_0x1652a0");
#endif

    switch (ctx->pc) {
        case 0x1652a8u: goto label_1652a8;
        case 0x1652bcu: goto label_1652bc;
        default: break;
    }

    ctx->pc = 0x1652a0u;

    // 0x1652a0: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x1652A0u;
    SET_GPR_U32(ctx, 31, 0x1652A8u);
    ctx->pc = 0x1652A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652A0u;
    // 0x1652a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x1652A0u, 0x1652A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652A8u;
label_1652a8:
    // 0x1652a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1652a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652ac: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1652acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1652b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1652b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652b4: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x1652B4u;
    SET_GPR_U32(ctx, 31, 0x1652BCu);
    ctx->pc = 0x1652B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652B4u;
    // 0x1652b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1652B4u, 0x1652BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652BCu;
label_1652bc:
    // 0x1652bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1652bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652c0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1652C0u;
    {
        const bool branch_taken_0x1652c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652C0u;
        // 0x1652c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652c0) {
            ctx->pc = 0x1652ECu;
            return;
        }
    }
    ctx->pc = 0x1652C8u;
    // 0x1652c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1652c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1652cc: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x1652ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x1652d0u;
}
