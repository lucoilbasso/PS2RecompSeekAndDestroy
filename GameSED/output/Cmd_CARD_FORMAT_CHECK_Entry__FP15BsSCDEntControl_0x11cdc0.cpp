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

// Function: Cmd_CARD_FORMAT_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x11cdc0 - 0x11ce00
void Cmd_CARD_FORMAT_CHECK_Entry__FP15BsSCDEntControl_0x11cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_FORMAT_CHECK_Entry__FP15BsSCDEntControl_0x11cdc0");
#endif

    switch (ctx->pc) {
        case 0x11cdd4u: goto label_11cdd4;
        default: break;
    }

    ctx->pc = 0x11cdc0u;

    // 0x11cdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cdc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cdc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11cdcc: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11CDCCu;
    SET_GPR_U32(ctx, 31, 0x11CDD4u);
    ctx->pc = 0x11CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDCCu;
    // 0x11cdd0: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CDCCu, 0x11CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDD4u;
label_11cdd4:
    // 0x11cdd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cdd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11cdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cddc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11cde0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cde0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cde4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11cde8: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x11cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x11cdec: 0x8c624060  lw          $v0, 0x4060($v1)
    ctx->pc = 0x11cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16480)));
    // 0x11cdf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11cdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11cdf4: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x11cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x11cdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x11CDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDF8u;
        // 0x11cdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CE00u;
}
