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

// Function: caseD_a
// Address: 0x14e9a8 - 0x14e9d0
void caseD_a_0x14e9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x14e9a8");
#endif

    switch (ctx->pc) {
        case 0x14e9c0u: goto label_14e9c0;
        case 0x14e9ccu: goto label_14e9cc;
        default: break;
    }

    ctx->pc = 0x14e9a8u;

    // 0x14e9a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e9ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14e9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9b0: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E9B0u;
    {
        const bool branch_taken_0x14e9b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9B0u;
        // 0x14e9b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9b0) {
            ctx->pc = 0x14E9D0u;
            return;
        }
    }
    ctx->pc = 0x14E9B8u;
    // 0x14e9b8: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14E9B8u;
    SET_GPR_U32(ctx, 31, 0x14E9C0u);
    ctx->pc = 0x14E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9B8u;
    // 0x14e9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E9B8u, 0x14E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9C0u;
label_14e9c0:
    // 0x14e9c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9c4: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14E9C4u;
    SET_GPR_U32(ctx, 31, 0x14E9CCu);
    ctx->pc = 0x14E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9C4u;
    // 0x14e9c8: 0x8c500058  lw          $s0, 0x58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E9C4u, 0x14E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9CCu;
label_14e9cc:
    // 0x14e9cc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x14e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->pc = 0x14e9d0u;
}
