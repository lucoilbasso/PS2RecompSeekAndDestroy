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

// Function: __tf9type_info
// Address: 0x1e1780 - 0x1e17c0
void ps2___tf9type_info_0x1e1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9type_info_0x1e1780");
#endif

    switch (ctx->pc) {
        case 0x1e17acu: goto label_1e17ac;
        default: break;
    }

    ctx->pc = 0x1e1780u;

    // 0x1e1780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1784: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1e1784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1e1788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e178c: 0x2450da30  addiu       $s0, $v0, -0x25D0
    ctx->pc = 0x1e178cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957616));
    // 0x1e1790: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1790u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25DA30u));
    // 0x1e1794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1798: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1798u;
    {
        const bool branch_taken_0x1e1798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1798u;
        // 0x1e179c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1798) {
            ctx->pc = 0x1E17ACu;
            goto label_1e17ac;
        }
    }
    ctx->pc = 0x1E17A0u;
    // 0x1e17a0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e17a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e17a4: 0xc072f4a  jal         func_1CBD28
    ctx->pc = 0x1E17A4u;
    SET_GPR_U32(ctx, 31, 0x1E17ACu);
    ctx->pc = 0x1E17A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17A4u;
    // 0x1e17a8: 0x24a5c0d0  addiu       $a1, $a1, -0x3F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD28u, 0x1E17A4u, 0x1E17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17ACu;
label_1e17ac:
    // 0x1e17ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e17acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e17b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e17b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e17b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e17b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E17B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17B8u;
        // 0x1e17bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E17B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E17C0u;
}
