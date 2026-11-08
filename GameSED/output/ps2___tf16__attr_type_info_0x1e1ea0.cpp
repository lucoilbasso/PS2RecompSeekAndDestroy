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

// Function: __tf16__attr_type_info
// Address: 0x1e1ea0 - 0x1e1ef0
void ps2___tf16__attr_type_info_0x1e1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf16__attr_type_info_0x1e1ea0");
#endif

    switch (ctx->pc) {
        case 0x1e1ec4u: goto label_1e1ec4;
        case 0x1e1edcu: goto label_1e1edc;
        default: break;
    }

    ctx->pc = 0x1e1ea0u;

    // 0x1e1ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1ea4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e1ea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1eac: 0x24502140  addiu       $s0, $v0, 0x2140
    ctx->pc = 0x1e1eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8512));
    // 0x1e1eb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x412140u));
    // 0x1e1eb4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1EB4u;
    {
        const bool branch_taken_0x1e1eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EB4u;
        // 0x1e1eb8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1eb4) {
            ctx->pc = 0x1E1EDCu;
            goto label_1e1edc;
        }
    }
    ctx->pc = 0x1E1EBCu;
    // 0x1e1ebc: 0xc0785e0  jal         func_1E1780
    ctx->pc = 0x1E1EBCu;
    SET_GPR_U32(ctx, 31, 0x1E1EC4u);
    ctx->pc = 0x1E1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1780u, 0x1E1EBCu, 0x1E1EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EC4u;
label_1e1ec4:
    // 0x1e1ec4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e1ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e1ec8: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1e1ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1e1ecc: 0x24a5c218  addiu       $a1, $a1, -0x3DE8
    ctx->pc = 0x1e1eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951448));
    // 0x1e1ed0: 0x24c6da30  addiu       $a2, $a2, -0x25D0
    ctx->pc = 0x1e1ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957616));
    // 0x1e1ed4: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E1ED4u;
    SET_GPR_U32(ctx, 31, 0x1E1EDCu);
    ctx->pc = 0x1E1ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1ED4u;
    // 0x1e1ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E1ED4u, 0x1E1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EDCu;
label_1e1edc:
    // 0x1e1edc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1ee4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e1ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EE8u;
        // 0x1e1eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1EF0u;
}
