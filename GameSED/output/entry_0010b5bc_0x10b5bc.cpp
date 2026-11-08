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

// Function: entry_0010b5bc
// Address: 0x10b5bc - 0x10b5e8
void entry_0010b5bc_0x10b5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b5bc_0x10b5bc");
#endif

    switch (ctx->pc) {
        case 0x10b5c4u: goto label_10b5c4;
        default: break;
    }

    ctx->pc = 0x10b5bcu;

    // 0x10b5bc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B5BCu;
    SET_GPR_U32(ctx, 31, 0x10B5C4u);
    ctx->pc = 0x10B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5BCu;
    // 0x10b5c0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B5BCu, 0x10B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5C4u;
label_10b5c4:
    // 0x10b5c4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b5c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B5D4u;
    {
        const bool branch_taken_0x10b5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5D4u;
        // 0x10b5d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5d4) {
            ctx->pc = 0x10B5E8u;
            return;
        }
    }
    ctx->pc = 0x10B5DCu;
    // 0x10b5dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10B5DCu;
    {
        const bool branch_taken_0x10b5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5DCu;
        // 0x10b5e0: 0x8f9188ec  lw          $s1, -0x7714($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5dc) {
            ctx->pc = 0x10B5F0u;
            return;
        }
    }
    ctx->pc = 0x10B5E4u;
    // 0x10b5e4: 0x0  nop
    ctx->pc = 0x10b5e4u;
    // NOP
    ctx->pc = 0x10b5e8u;
}
