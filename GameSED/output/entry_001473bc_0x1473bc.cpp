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

// Function: entry_001473bc
// Address: 0x1473bc - 0x1473e0
void entry_001473bc_0x1473bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001473bc_0x1473bc");
#endif

    switch (ctx->pc) {
        case 0x1473d8u: goto label_1473d8;
        default: break;
    }

    ctx->pc = 0x1473bcu;

    // 0x1473bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1473bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1473c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1473c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1473c4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1473c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1473c8: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1473C8u;
    {
        const bool branch_taken_0x1473c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1473CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473C8u;
        // 0x1473cc: 0x245026c0  addiu       $s0, $v0, 0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473c8) {
            ctx->pc = 0x147428u;
            return;
        }
    }
    ctx->pc = 0x1473D0u;
    // 0x1473d0: 0xc051a02  jal         func_146808
    ctx->pc = 0x1473D0u;
    SET_GPR_U32(ctx, 31, 0x1473D8u);
    ctx->pc = 0x1473D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473D0u;
    // 0x1473d4: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146808u, 0x1473D0u, 0x1473D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473D8u;
label_1473d8:
    // 0x1473d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1473d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473dc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1473dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1473e0u;
}
