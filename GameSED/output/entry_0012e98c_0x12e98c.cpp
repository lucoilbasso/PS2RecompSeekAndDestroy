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

// Function: entry_0012e98c
// Address: 0x12e98c - 0x12e9e0
void entry_0012e98c_0x12e98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e98c_0x12e98c");
#endif

    switch (ctx->pc) {
        case 0x12e998u: goto label_12e998;
        case 0x12e9a4u: goto label_12e9a4;
        case 0x12e9b8u: goto label_12e9b8;
        case 0x12e9ccu: goto label_12e9cc;
        default: break;
    }

    ctx->pc = 0x12e98cu;

    // 0x12e98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e990: 0xc04bbf0  jal         func_12EFC0
    ctx->pc = 0x12E990u;
    SET_GPR_U32(ctx, 31, 0x12E998u);
    ctx->pc = 0x12E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E990u;
    // 0x12e994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFC0u, 0x12E990u, 0x12E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E998u;
label_12e998:
    // 0x12e998: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x12e998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x12e99c: 0xc04b49e  jal         func_12D278
    ctx->pc = 0x12E99Cu;
    SET_GPR_U32(ctx, 31, 0x12E9A4u);
    ctx->pc = 0x12E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E99Cu;
    // 0x12e9a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D278u, 0x12E99Cu, 0x12E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9A4u;
label_12e9a4:
    // 0x12e9a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12e9a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x12E9A8u;
    {
        const bool branch_taken_0x12e9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A8u;
        // 0x12e9ac: 0xae23018c  sw          $v1, 0x18C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9a8) {
            ctx->pc = 0x12E9E0u;
            return;
        }
    }
    ctx->pc = 0x12E9B0u;
    // 0x12e9b0: 0xc0488cc  jal         func_122330
    ctx->pc = 0x12E9B0u;
    SET_GPR_U32(ctx, 31, 0x12E9B8u);
    ctx->pc = 0x12E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9B0u;
    // 0x12e9b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122330u, 0x12E9B0u, 0x12E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9B8u;
label_12e9b8:
    // 0x12e9b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12e9b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9bc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E9BCu;
    {
        const bool branch_taken_0x12e9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9BCu;
        // 0x12e9c0: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9bc) {
            ctx->pc = 0x12E9E0u;
            return;
        }
    }
    ctx->pc = 0x12E9C4u;
    // 0x12e9c4: 0xc04af7e  jal         func_12BDF8
    ctx->pc = 0x12E9C4u;
    SET_GPR_U32(ctx, 31, 0x12E9CCu);
    ctx->pc = 0x12E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9C4u;
    // 0x12e9c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BDF8u, 0x12E9C4u, 0x12E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9CCu;
label_12e9cc:
    // 0x12e9cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12e9ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E9D0u;
    {
        const bool branch_taken_0x12e9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9D0u;
        // 0x12e9d4: 0xae230188  sw          $v1, 0x188($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9d0) {
            ctx->pc = 0x12E9E0u;
            return;
        }
    }
    ctx->pc = 0x12E9D8u;
    // 0x12e9d8: 0xaf918a00  sw          $s1, -0x7600($gp)
    ctx->pc = 0x12e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U32(ctx, 17));
    // 0x12e9dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12e9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12e9e0u;
}
