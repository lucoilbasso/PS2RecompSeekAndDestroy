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

// Function: UnitMessageEntry__7ApcUnit
// Address: 0x1d93c8 - 0x1d9410
void UnitMessageEntry__7ApcUnit_0x1d93c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnitMessageEntry__7ApcUnit_0x1d93c8");
#endif

    switch (ctx->pc) {
        case 0x1d93f8u: goto label_1d93f8;
        default: break;
    }

    ctx->pc = 0x1d93c8u;

    // 0x1d93c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d93c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d93cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d93ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d93d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d93d4: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x1d93d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x1d93d8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D93D8u;
    {
        const bool branch_taken_0x1d93d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93D8u;
        // 0x1d93dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93d8) {
            ctx->pc = 0x1D9404u;
            goto label_1d9404;
        }
    }
    ctx->pc = 0x1D93E0u;
    // 0x1d93e0: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x1d93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1d93e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D93E4u;
    {
        const bool branch_taken_0x1d93e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93E4u;
        // 0x1d93e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93e4) {
            ctx->pc = 0x1D9400u;
            goto label_1d9400;
        }
    }
    ctx->pc = 0x1D93ECu;
    // 0x1d93ec: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x1d93ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x1d93f0: 0xc041228  jal         func_1048A0
    ctx->pc = 0x1D93F0u;
    SET_GPR_U32(ctx, 31, 0x1D93F8u);
    ctx->pc = 0x1D93F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93F0u;
    // 0x1d93f4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1D93F0u, 0x1D93F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93F8u;
label_1d93f8:
    // 0x1d93f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D93F8u;
    {
        const bool branch_taken_0x1d93f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93F8u;
        // 0x1d93fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93f8) {
            ctx->pc = 0x1D9404u;
            goto label_1d9404;
        }
    }
    ctx->pc = 0x1D9400u;
label_1d9400:
    // 0x1d9400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9404:
    // 0x1d9404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9408: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9408u;
        // 0x1d940c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9410u;
}
