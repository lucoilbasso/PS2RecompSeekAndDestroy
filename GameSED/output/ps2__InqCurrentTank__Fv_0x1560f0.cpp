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

// Function: _InqCurrentTank__Fv
// Address: 0x1560f0 - 0x156140
void ps2__InqCurrentTank__Fv_0x1560f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqCurrentTank__Fv_0x1560f0");
#endif

    switch (ctx->pc) {
        case 0x15612cu: goto label_15612c;
        default: break;
    }

    ctx->pc = 0x1560f0u;

    // 0x1560f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1560f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1560f4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1560f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1560f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1560f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1560fc: 0x24061118  addiu       $a2, $zero, 0x1118
    ctx->pc = 0x1560fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x156100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x156100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x156104: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x156104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x156108: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x156108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15610c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x15610cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x156110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156114: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x156114u;
    {
        const bool branch_taken_0x156114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x156118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156114u;
        // 0x156118: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156114) {
            ctx->pc = 0x15612Cu;
            goto label_15612c;
        }
    }
    ctx->pc = 0x15611Cu;
    // 0x15611c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15611cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x156120: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x156120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x156124: 0xc068186  jal         func_1A0618
    ctx->pc = 0x156124u;
    SET_GPR_U32(ctx, 31, 0x15612Cu);
    ctx->pc = 0x156128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156124u;
    // 0x156128: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x156124u, 0x15612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15612Cu;
label_15612c:
    // 0x15612c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15612cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156134: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x156134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156138: 0x3e00008  jr          $ra
    ctx->pc = 0x156138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156138u;
        // 0x15613c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156140u;
}
