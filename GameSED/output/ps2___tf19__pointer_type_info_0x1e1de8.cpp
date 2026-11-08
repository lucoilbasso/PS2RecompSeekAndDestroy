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

// Function: __tf19__pointer_type_info
// Address: 0x1e1de8 - 0x1e1e38
void ps2___tf19__pointer_type_info_0x1e1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf19__pointer_type_info_0x1e1de8");
#endif

    switch (ctx->pc) {
        case 0x1e1e0cu: goto label_1e1e0c;
        case 0x1e1e24u: goto label_1e1e24;
        default: break;
    }

    ctx->pc = 0x1e1de8u;

    // 0x1e1de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1dec: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e1decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e1df0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1df4: 0x24502170  addiu       $s0, $v0, 0x2170
    ctx->pc = 0x1e1df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8560));
    // 0x1e1df8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x412170u));
    // 0x1e1dfc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1DFCu;
    {
        const bool branch_taken_0x1e1dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DFCu;
        // 0x1e1e00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dfc) {
            ctx->pc = 0x1E1E24u;
            goto label_1e1e24;
        }
    }
    ctx->pc = 0x1E1E04u;
    // 0x1e1e04: 0xc0785e0  jal         func_1E1780
    ctx->pc = 0x1E1E04u;
    SET_GPR_U32(ctx, 31, 0x1E1E0Cu);
    ctx->pc = 0x1E1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1780u, 0x1E1E04u, 0x1E1E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E0Cu;
label_1e1e0c:
    // 0x1e1e0c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e1e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e1e10: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1e1e10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1e1e14: 0x24a5c200  addiu       $a1, $a1, -0x3E00
    ctx->pc = 0x1e1e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951424));
    // 0x1e1e18: 0x24c6da30  addiu       $a2, $a2, -0x25D0
    ctx->pc = 0x1e1e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957616));
    // 0x1e1e1c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1E1E24u);
    ctx->pc = 0x1E1E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E1Cu;
    // 0x1e1e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E1E1Cu, 0x1E1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E24u;
label_1e1e24:
    // 0x1e1e24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1e2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E30u;
        // 0x1e1e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1E38u;
}
