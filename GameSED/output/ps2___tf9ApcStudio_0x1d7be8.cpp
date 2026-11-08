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

// Function: __tf9ApcStudio
// Address: 0x1d7be8 - 0x1d7c38
void ps2___tf9ApcStudio_0x1d7be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcStudio_0x1d7be8");
#endif

    switch (ctx->pc) {
        case 0x1d7c0cu: goto label_1d7c0c;
        case 0x1d7c24u: goto label_1d7c24;
        default: break;
    }

    ctx->pc = 0x1d7be8u;

    // 0x1d7be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7bec: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d7becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d7bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7bf4: 0x24500740  addiu       $s0, $v0, 0x740
    ctx->pc = 0x1d7bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x1d7bf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410740u));
    // 0x1d7bfc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7BFCu;
    {
        const bool branch_taken_0x1d7bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BFCu;
        // 0x1d7c00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7bfc) {
            ctx->pc = 0x1D7C24u;
            goto label_1d7c24;
        }
    }
    ctx->pc = 0x1D7C04u;
    // 0x1d7c04: 0xc0770dc  jal         func_1DC370
    ctx->pc = 0x1D7C04u;
    SET_GPR_U32(ctx, 31, 0x1D7C0Cu);
    ctx->pc = 0x1DC370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC370u, 0x1D7C04u, 0x1D7C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C0Cu;
label_1d7c0c:
    // 0x1d7c0c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7c10: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d7c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d7c14: 0x24a542a8  addiu       $a1, $a1, 0x42A8
    ctx->pc = 0x1d7c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17064));
    // 0x1d7c18: 0x24c614b0  addiu       $a2, $a2, 0x14B0
    ctx->pc = 0x1d7c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5296));
    // 0x1d7c1c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D7C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C24u);
    ctx->pc = 0x1D7C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C1Cu;
    // 0x1d7c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D7C1Cu, 0x1D7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C24u;
label_1d7c24:
    // 0x1d7c24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7c2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C30u;
        // 0x1d7c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7C38u;
}
