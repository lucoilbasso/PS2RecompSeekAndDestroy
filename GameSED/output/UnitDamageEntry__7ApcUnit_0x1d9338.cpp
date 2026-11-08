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

// Function: UnitDamageEntry__7ApcUnit
// Address: 0x1d9338 - 0x1d9380
void UnitDamageEntry__7ApcUnit_0x1d9338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnitDamageEntry__7ApcUnit_0x1d9338");
#endif

    switch (ctx->pc) {
        case 0x1d9368u: goto label_1d9368;
        default: break;
    }

    ctx->pc = 0x1d9338u;

    // 0x1d9338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d933c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d933cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9344: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x1d9344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x1d9348: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9348u;
    {
        const bool branch_taken_0x1d9348 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9348u;
        // 0x1d934c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9348) {
            ctx->pc = 0x1D9374u;
            goto label_1d9374;
        }
    }
    ctx->pc = 0x1D9350u;
    // 0x1d9350: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x1d9350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1d9354: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9354u;
    {
        const bool branch_taken_0x1d9354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9354u;
        // 0x1d9358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9354) {
            ctx->pc = 0x1D9370u;
            goto label_1d9370;
        }
    }
    ctx->pc = 0x1D935Cu;
    // 0x1d935c: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x1d935cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x1d9360: 0xc041228  jal         func_1048A0
    ctx->pc = 0x1D9360u;
    SET_GPR_U32(ctx, 31, 0x1D9368u);
    ctx->pc = 0x1D9364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9360u;
    // 0x1d9364: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1D9360u, 0x1D9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9368u;
label_1d9368:
    // 0x1d9368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9368u;
    {
        const bool branch_taken_0x1d9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9368u;
        // 0x1d936c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9368) {
            ctx->pc = 0x1D9374u;
            goto label_1d9374;
        }
    }
    ctx->pc = 0x1D9370u;
label_1d9370:
    // 0x1d9370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9374:
    // 0x1d9374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9378: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9378u;
        // 0x1d937c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9380u;
}
