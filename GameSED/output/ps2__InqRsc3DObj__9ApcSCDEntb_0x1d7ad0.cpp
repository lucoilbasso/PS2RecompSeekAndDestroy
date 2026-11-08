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

// Function: _InqRsc3DObj__9ApcSCDEntb
// Address: 0x1d7ad0 - 0x1d7b14
void ps2__InqRsc3DObj__9ApcSCDEntb_0x1d7ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqRsc3DObj__9ApcSCDEntb_0x1d7ad0");
#endif

    switch (ctx->pc) {
        case 0x1d7b00u: goto label_1d7b00;
        default: break;
    }

    ctx->pc = 0x1d7ad0u;

    // 0x1d7ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7adc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7ADCu;
    {
        const bool branch_taken_0x1d7adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7ADCu;
        // 0x1d7ae0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7adc) {
            ctx->pc = 0x1D7B00u;
            goto label_1d7b00;
        }
    }
    ctx->pc = 0x1D7AE4u;
    // 0x1d7ae4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1d7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1d7ae8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7AE8u;
    {
        const bool branch_taken_0x1d7ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ae8) {
            ctx->pc = 0x1D7AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7AE8u;
            // 0x1d7aec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7B08u;
            goto label_1d7b08;
        }
    }
    ctx->pc = 0x1D7AF0u;
    // 0x1d7af0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7af4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d7af8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D7AF8u;
    SET_GPR_U32(ctx, 31, 0x1D7B00u);
    ctx->pc = 0x1D7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AF8u;
    // 0x1d7afc: 0x24a538f8  addiu       $a1, $a1, 0x38F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D7AF8u, 0x1D7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B00u;
label_1d7b00:
    // 0x1d7b00: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1d7b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7b08:
    // 0x1d7b08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B0Cu;
        // 0x1d7b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7B14u;
}
