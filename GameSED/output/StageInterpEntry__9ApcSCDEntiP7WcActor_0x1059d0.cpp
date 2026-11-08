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

// Function: StageInterpEntry__9ApcSCDEntiP7WcActor
// Address: 0x1059d0 - 0x105a04
void StageInterpEntry__9ApcSCDEntiP7WcActor_0x1059d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StageInterpEntry__9ApcSCDEntiP7WcActor_0x1059d0");
#endif

    switch (ctx->pc) {
        case 0x1059f8u: goto label_1059f8;
        default: break;
    }

    ctx->pc = 0x1059d0u;

    // 0x1059d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1059d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1059d4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1059d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1059d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1059d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1059dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1059dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1059e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1059e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059e8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1059ec: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x1059ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1059f0: 0xc041228  jal         func_1048A0
    ctx->pc = 0x1059F0u;
    SET_GPR_U32(ctx, 31, 0x1059F8u);
    ctx->pc = 0x1059F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1059F0u;
    // 0x1059f4: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1059F0u, 0x1059F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059F8u;
label_1059f8:
    // 0x1059f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1059f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1059fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1059FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059FCu;
        // 0x105a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1059FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A04u;
}
