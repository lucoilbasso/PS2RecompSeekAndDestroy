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

// Function: save_Screen_Auto__Fv
// Address: 0x106cf8 - 0x106d38
void save_Screen_Auto__Fv_0x106cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("save_Screen_Auto__Fv_0x106cf8");
#endif

    switch (ctx->pc) {
        case 0x106d24u: goto label_106d24;
        case 0x106d2cu: goto label_106d2c;
        default: break;
    }

    ctx->pc = 0x106cf8u;

    // 0x106cf8: 0x278388c4  addiu       $v1, $gp, -0x773C
    ctx->pc = 0x106cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936772));
    // 0x106cfc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x106cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x106d00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106d04: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x106d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x106d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d0c: 0x24a538e8  addiu       $a1, $a1, 0x38E8
    ctx->pc = 0x106d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14568));
    // 0x106d10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x106d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x106d18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x106d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x106d1c: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x106D1Cu;
    SET_GPR_U32(ctx, 31, 0x106D24u);
    ctx->pc = 0x106D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D1Cu;
    // 0x106d20: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x106D1Cu, 0x106D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D24u;
label_106d24:
    // 0x106d24: 0xc041434  jal         func_1050D0
    ctx->pc = 0x106D24u;
    SET_GPR_U32(ctx, 31, 0x106D2Cu);
    ctx->pc = 0x106D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D24u;
    // 0x106d28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1050D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1050D0u, 0x106D24u, 0x106D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D2Cu;
label_106d2c:
    // 0x106d2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x106d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106d30: 0x3e00008  jr          $ra
    ctx->pc = 0x106D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D30u;
        // 0x106d34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106D38u;
}
