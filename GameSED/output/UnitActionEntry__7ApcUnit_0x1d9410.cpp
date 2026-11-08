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

// Function: UnitActionEntry__7ApcUnit
// Address: 0x1d9410 - 0x1d9458
void UnitActionEntry__7ApcUnit_0x1d9410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnitActionEntry__7ApcUnit_0x1d9410");
#endif

    switch (ctx->pc) {
        case 0x1d9440u: goto label_1d9440;
        default: break;
    }

    ctx->pc = 0x1d9410u;

    // 0x1d9410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9414: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d9414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d941c: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x1d941cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x1d9420: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9420u;
    {
        const bool branch_taken_0x1d9420 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9420u;
        // 0x1d9424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9420) {
            ctx->pc = 0x1D944Cu;
            goto label_1d944c;
        }
    }
    ctx->pc = 0x1D9428u;
    // 0x1d9428: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x1d9428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1d942c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D942Cu;
    {
        const bool branch_taken_0x1d942c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D942Cu;
        // 0x1d9430: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d942c) {
            ctx->pc = 0x1D9448u;
            goto label_1d9448;
        }
    }
    ctx->pc = 0x1D9434u;
    // 0x1d9434: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x1d9434u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x1d9438: 0xc041228  jal         func_1048A0
    ctx->pc = 0x1D9438u;
    SET_GPR_U32(ctx, 31, 0x1D9440u);
    ctx->pc = 0x1D943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9438u;
    // 0x1d943c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1D9438u, 0x1D9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9440u;
label_1d9440:
    // 0x1d9440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9440u;
    {
        const bool branch_taken_0x1d9440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9440u;
        // 0x1d9444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9440) {
            ctx->pc = 0x1D944Cu;
            goto label_1d944c;
        }
    }
    ctx->pc = 0x1D9448u;
label_1d9448:
    // 0x1d9448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d944c:
    // 0x1d944c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9450: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9450u;
        // 0x1d9454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9458u;
}
