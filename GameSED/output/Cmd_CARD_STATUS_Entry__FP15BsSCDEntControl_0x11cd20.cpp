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

// Function: Cmd_CARD_STATUS_Entry__FP15BsSCDEntControl
// Address: 0x11cd20 - 0x11cd5c
void Cmd_CARD_STATUS_Entry__FP15BsSCDEntControl_0x11cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_STATUS_Entry__FP15BsSCDEntControl_0x11cd20");
#endif

    switch (ctx->pc) {
        case 0x11cd34u: goto label_11cd34;
        default: break;
    }

    ctx->pc = 0x11cd20u;

    // 0x11cd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cd24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cd28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11cd2c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11CD2Cu;
    SET_GPR_U32(ctx, 31, 0x11CD34u);
    ctx->pc = 0x11CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD2Cu;
    // 0x11cd30: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CD2Cu, 0x11CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD34u;
label_11cd34:
    // 0x11cd34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11cd38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11cd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cd3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11cd40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cd44: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11cd48: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x11cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x11cd4c: 0x8c624040  lw          $v0, 0x4040($v1)
    ctx->pc = 0x11cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16448)));
    // 0x11cd50: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x11cd50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x11cd54: 0x3e00008  jr          $ra
    ctx->pc = 0x11CD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD54u;
        // 0x11cd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CD5Cu;
}
