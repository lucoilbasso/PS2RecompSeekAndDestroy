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

// Function: UnPostedSuper__8ApcFieldP8WcEntity
// Address: 0x13e8b8 - 0x13e908
void UnPostedSuper__8ApcFieldP8WcEntity_0x13e8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnPostedSuper__8ApcFieldP8WcEntity_0x13e8b8");
#endif

    switch (ctx->pc) {
        case 0x13e8e8u: goto label_13e8e8;
        case 0x13e8f4u: goto label_13e8f4;
        default: break;
    }

    ctx->pc = 0x13e8b8u;

    // 0x13e8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e8bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13e8cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13e8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e8d4: 0x8e020204  lw          $v0, 0x204($s0)
    ctx->pc = 0x13e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x13e8d8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E8D8u;
    {
        const bool branch_taken_0x13e8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8D8u;
        // 0x13e8dc: 0x26040204  addiu       $a0, $s0, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8d8) {
            ctx->pc = 0x13E8E8u;
            goto label_13e8e8;
        }
    }
    ctx->pc = 0x13E8E0u;
    // 0x13e8e0: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x13E8E0u;
    SET_GPR_U32(ctx, 31, 0x13E8E8u);
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x13E8E0u, 0x13E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8E8u;
label_13e8e8:
    // 0x13e8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e8ec: 0xc0621fc  jal         func_1887F0
    ctx->pc = 0x13E8ECu;
    SET_GPR_U32(ctx, 31, 0x13E8F4u);
    ctx->pc = 0x13E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E8ECu;
    // 0x13e8f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887F0u, 0x13E8ECu, 0x13E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8F4u;
label_13e8f4:
    // 0x13e8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e8f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e8fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e900: 0x3e00008  jr          $ra
    ctx->pc = 0x13E900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E900u;
        // 0x13e904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E908u;
}
