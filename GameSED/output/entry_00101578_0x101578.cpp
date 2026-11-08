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

// Function: entry_00101578
// Address: 0x101578 - 0x1015a0
void entry_00101578_0x101578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101578_0x101578");
#endif

    switch (ctx->pc) {
        case 0x101580u: goto label_101580;
        case 0x101598u: goto label_101598;
        default: break;
    }

    ctx->pc = 0x101578u;

    // 0x101578: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x101578u;
    SET_GPR_U32(ctx, 31, 0x101580u);
    ctx->pc = 0x10157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101578u;
    // 0x10157c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x101578u, 0x101580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101580u;
label_101580:
    // 0x101580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x101588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10158c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10158cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101590: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x101590u;
    SET_GPR_U32(ctx, 31, 0x101598u);
    ctx->pc = 0x101594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101590u;
    // 0x101594: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x101590u, 0x101598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101598u;
label_101598:
    // 0x101598: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x101598u;
    {
        const bool branch_taken_0x101598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101598u;
        // 0x10159c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101598) {
            ctx->pc = 0x1015C8u;
            return;
        }
    }
    ctx->pc = 0x1015A0u;
}
