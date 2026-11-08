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

// Function: entry_0010209c
// Address: 0x10209c - 0x1020c8
void entry_0010209c_0x10209c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010209c_0x10209c");
#endif

    switch (ctx->pc) {
        case 0x1020a4u: goto label_1020a4;
        case 0x1020bcu: goto label_1020bc;
        default: break;
    }

    ctx->pc = 0x10209cu;

    // 0x10209c: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x10209Cu;
    SET_GPR_U32(ctx, 31, 0x1020A4u);
    ctx->pc = 0x1020A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10209Cu;
    // 0x1020a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x10209Cu, 0x1020A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020A4u;
label_1020a4:
    // 0x1020a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1020a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1020a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1020acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1020b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020b4: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x1020B4u;
    SET_GPR_U32(ctx, 31, 0x1020BCu);
    ctx->pc = 0x1020B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020B4u;
    // 0x1020b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1020B4u, 0x1020BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020BCu;
label_1020bc:
    // 0x1020bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1020BCu;
    {
        const bool branch_taken_0x1020bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020BCu;
        // 0x1020c0: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020bc) {
            ctx->pc = 0x1020F0u;
            return;
        }
    }
    ctx->pc = 0x1020C4u;
    // 0x1020c4: 0x0  nop
    ctx->pc = 0x1020c4u;
    // NOP
    ctx->pc = 0x1020c8u;
}
