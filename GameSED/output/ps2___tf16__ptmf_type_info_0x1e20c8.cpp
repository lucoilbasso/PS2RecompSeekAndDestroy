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

// Function: __tf16__ptmf_type_info
// Address: 0x1e20c8 - 0x1e2118
void ps2___tf16__ptmf_type_info_0x1e20c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf16__ptmf_type_info_0x1e20c8");
#endif

    switch (ctx->pc) {
        case 0x1e20ecu: goto label_1e20ec;
        case 0x1e2104u: goto label_1e2104;
        default: break;
    }

    ctx->pc = 0x1e20c8u;

    // 0x1e20c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e20c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e20cc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e20d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e20d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e20d4: 0x24502150  addiu       $s0, $v0, 0x2150
    ctx->pc = 0x1e20d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8528));
    // 0x1e20d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x412150u));
    // 0x1e20dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E20DCu;
    {
        const bool branch_taken_0x1e20dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20DCu;
        // 0x1e20e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20dc) {
            ctx->pc = 0x1E2104u;
            goto label_1e2104;
        }
    }
    ctx->pc = 0x1E20E4u;
    // 0x1e20e4: 0xc0785e0  jal         func_1E1780
    ctx->pc = 0x1E20E4u;
    SET_GPR_U32(ctx, 31, 0x1E20ECu);
    ctx->pc = 0x1E1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1780u, 0x1E20E4u, 0x1E20ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E20ECu;
label_1e20ec:
    // 0x1e20ec: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e20ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e20f0: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1e20f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1e20f4: 0x24a5c260  addiu       $a1, $a1, -0x3DA0
    ctx->pc = 0x1e20f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951520));
    // 0x1e20f8: 0x24c6da30  addiu       $a2, $a2, -0x25D0
    ctx->pc = 0x1e20f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957616));
    // 0x1e20fc: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E20FCu;
    SET_GPR_U32(ctx, 31, 0x1E2104u);
    ctx->pc = 0x1E2100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E20FCu;
    // 0x1e2100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E20FCu, 0x1E2104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2104u;
label_1e2104:
    // 0x1e2104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e210c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e210cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2110: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2110u;
        // 0x1e2114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2118u;
}
