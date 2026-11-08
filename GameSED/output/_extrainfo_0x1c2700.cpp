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

// Function: _extrainfo
// Address: 0x1c2700 - 0x1c2748
void _extrainfo_0x1c2700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_extrainfo_0x1c2700");
#endif

    switch (ctx->pc) {
        case 0x1c2718u: goto label_1c2718;
        case 0x1c2720u: goto label_1c2720;
        case 0x1c272cu: goto label_1c272c;
        default: break;
    }

    ctx->pc = 0x1c2700u;

    // 0x1c2700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c270c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C270Cu;
    {
        const bool branch_taken_0x1c270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C270Cu;
        // 0x1c2710: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c270c) {
            ctx->pc = 0x1C2720u;
            goto label_1c2720;
        }
    }
    ctx->pc = 0x1C2714u;
    // 0x1c2714: 0x0  nop
    ctx->pc = 0x1c2714u;
    // NOP
label_1c2718:
    // 0x1c2718: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C2718u;
    SET_GPR_U32(ctx, 31, 0x1C2720u);
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C2718u, 0x1C2720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2720u;
label_1c2720:
    // 0x1c2720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2724: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2724u;
    SET_GPR_U32(ctx, 31, 0x1C272Cu);
    ctx->pc = 0x1C2728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2724u;
    // 0x1c2728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2724u, 0x1C272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C272Cu;
label_1c272c:
    // 0x1c272c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2730: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C2730u;
    {
        const bool branch_taken_0x1c2730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2730u;
        // 0x1c2734: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2730) {
            ctx->pc = 0x1C2718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2718;
        }
    }
    ctx->pc = 0x1C2738u;
    // 0x1c2738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c273c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c273cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2740: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2740u;
        // 0x1c2744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2748u;
}
