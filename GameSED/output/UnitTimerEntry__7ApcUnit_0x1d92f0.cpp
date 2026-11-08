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

// Function: UnitTimerEntry__7ApcUnit
// Address: 0x1d92f0 - 0x1d9338
void UnitTimerEntry__7ApcUnit_0x1d92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnitTimerEntry__7ApcUnit_0x1d92f0");
#endif

    switch (ctx->pc) {
        case 0x1d9320u: goto label_1d9320;
        default: break;
    }

    ctx->pc = 0x1d92f0u;

    // 0x1d92f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d92f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d92f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d92f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d92f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d92fc: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x1d92fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x1d9300: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9300u;
    {
        const bool branch_taken_0x1d9300 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9300u;
        // 0x1d9304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9300) {
            ctx->pc = 0x1D932Cu;
            goto label_1d932c;
        }
    }
    ctx->pc = 0x1D9308u;
    // 0x1d9308: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x1d9308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1d930c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D930Cu;
    {
        const bool branch_taken_0x1d930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D930Cu;
        // 0x1d9310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d930c) {
            ctx->pc = 0x1D9328u;
            goto label_1d9328;
        }
    }
    ctx->pc = 0x1D9314u;
    // 0x1d9314: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x1d9314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x1d9318: 0xc041228  jal         func_1048A0
    ctx->pc = 0x1D9318u;
    SET_GPR_U32(ctx, 31, 0x1D9320u);
    ctx->pc = 0x1D931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9318u;
    // 0x1d931c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1D9318u, 0x1D9320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9320u;
label_1d9320:
    // 0x1d9320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9320u;
    {
        const bool branch_taken_0x1d9320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9320u;
        // 0x1d9324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9320) {
            ctx->pc = 0x1D932Cu;
            goto label_1d932c;
        }
    }
    ctx->pc = 0x1D9328u;
label_1d9328:
    // 0x1d9328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d932c:
    // 0x1d932c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d932cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9330: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9330u;
        // 0x1d9334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9338u;
}
