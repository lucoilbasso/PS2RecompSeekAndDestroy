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

// Function: entry_001c68b0
// Address: 0x1c68b0 - 0x1c68e8
void entry_001c68b0_0x1c68b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c68b0_0x1c68b0");
#endif

    switch (ctx->pc) {
        case 0x1c68b8u: goto label_1c68b8;
        case 0x1c68ccu: goto label_1c68cc;
        case 0x1c68dcu: goto label_1c68dc;
        default: break;
    }

    ctx->pc = 0x1c68b0u;

    // 0x1c68b0: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C68B0u;
    SET_GPR_U32(ctx, 31, 0x1C68B8u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C68B0u, 0x1C68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68B8u;
label_1c68b8:
    // 0x1c68b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c68b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68bc: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c68bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c68c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c68c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68c4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C68C4u;
    SET_GPR_U32(ctx, 31, 0x1C68CCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C68C4u, 0x1C68CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68CCu;
label_1c68cc:
    // 0x1c68cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c68ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c68d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68d4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C68D4u;
    SET_GPR_U32(ctx, 31, 0x1C68DCu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C68D4u, 0x1C68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68DCu;
label_1c68dc:
    // 0x1c68dc: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1c68dcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1c68e0: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1C68E0u;
    {
        const bool branch_taken_0x1c68e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68E0u;
        // 0x1c68e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68e0) {
            ctx->pc = 0x1C6CA8u;
            return;
        }
    }
    ctx->pc = 0x1C68E8u;
}
