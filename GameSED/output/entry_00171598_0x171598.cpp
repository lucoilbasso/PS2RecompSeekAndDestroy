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

// Function: entry_00171598
// Address: 0x171598 - 0x1715c8
void entry_00171598_0x171598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171598_0x171598");
#endif

    switch (ctx->pc) {
        case 0x1715b8u: goto label_1715b8;
        case 0x1715c4u: goto label_1715c4;
        default: break;
    }

    ctx->pc = 0x171598u;

    // 0x171598: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x171598u;
    {
        const bool branch_taken_0x171598 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x17159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171598u;
        // 0x17159c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171598) {
            ctx->pc = 0x1715D8u;
            return;
        }
    }
    ctx->pc = 0x1715A0u;
    // 0x1715a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1715a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715a4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1715a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1715a8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1715a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1715ac: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1715acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1715b0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1715B0u;
    SET_GPR_U32(ctx, 31, 0x1715B8u);
    ctx->pc = 0x1715B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715B0u;
    // 0x1715b4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1715B0u, 0x1715B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715B8u;
label_1715b8:
    // 0x1715b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1715b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715bc: 0xc06be08  jal         func_1AF820
    ctx->pc = 0x1715BCu;
    SET_GPR_U32(ctx, 31, 0x1715C4u);
    ctx->pc = 0x1715C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715BCu;
    // 0x1715c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF820u, 0x1715BCu, 0x1715C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715C4u;
label_1715c4:
    // 0x1715c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1715c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1715c8u;
}
