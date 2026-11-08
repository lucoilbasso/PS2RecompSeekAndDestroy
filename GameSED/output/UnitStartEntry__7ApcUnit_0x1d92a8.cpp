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

// Function: UnitStartEntry__7ApcUnit
// Address: 0x1d92a8 - 0x1d92f0
void UnitStartEntry__7ApcUnit_0x1d92a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnitStartEntry__7ApcUnit_0x1d92a8");
#endif

    switch (ctx->pc) {
        case 0x1d92d8u: goto label_1d92d8;
        default: break;
    }

    ctx->pc = 0x1d92a8u;

    // 0x1d92a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d92a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d92ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d92acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d92b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d92b4: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x1d92b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x1d92b8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D92B8u;
    {
        const bool branch_taken_0x1d92b8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92B8u;
        // 0x1d92bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92b8) {
            ctx->pc = 0x1D92E4u;
            goto label_1d92e4;
        }
    }
    ctx->pc = 0x1D92C0u;
    // 0x1d92c0: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x1d92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1d92c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D92C4u;
    {
        const bool branch_taken_0x1d92c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92C4u;
        // 0x1d92c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92c4) {
            ctx->pc = 0x1D92E0u;
            goto label_1d92e0;
        }
    }
    ctx->pc = 0x1D92CCu;
    // 0x1d92cc: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x1d92ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x1d92d0: 0xc041228  jal         func_1048A0
    ctx->pc = 0x1D92D0u;
    SET_GPR_U32(ctx, 31, 0x1D92D8u);
    ctx->pc = 0x1D92D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92D0u;
    // 0x1d92d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1D92D0u, 0x1D92D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92D8u;
label_1d92d8:
    // 0x1d92d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D92D8u;
    {
        const bool branch_taken_0x1d92d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92D8u;
        // 0x1d92dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92d8) {
            ctx->pc = 0x1D92E4u;
            goto label_1d92e4;
        }
    }
    ctx->pc = 0x1D92E0u;
label_1d92e0:
    // 0x1d92e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d92e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d92e4:
    // 0x1d92e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d92e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d92e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D92E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92E8u;
        // 0x1d92ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D92E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D92F0u;
}
