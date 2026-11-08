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

// Function: __tf16__user_type_info
// Address: 0x1e1998 - 0x1e19e8
void ps2___tf16__user_type_info_0x1e1998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf16__user_type_info_0x1e1998");
#endif

    switch (ctx->pc) {
        case 0x1e19bcu: goto label_1e19bc;
        case 0x1e19d4u: goto label_1e19d4;
        default: break;
    }

    ctx->pc = 0x1e1998u;

    // 0x1e1998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e199c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e199cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e19a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e19a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e19a4: 0x245020f0  addiu       $s0, $v0, 0x20F0
    ctx->pc = 0x1e19a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8432));
    // 0x1e19a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4120F0u));
    // 0x1e19ac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E19ACu;
    {
        const bool branch_taken_0x1e19ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19ACu;
        // 0x1e19b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19ac) {
            ctx->pc = 0x1E19D4u;
            goto label_1e19d4;
        }
    }
    ctx->pc = 0x1E19B4u;
    // 0x1e19b4: 0xc0785e0  jal         func_1E1780
    ctx->pc = 0x1E19B4u;
    SET_GPR_U32(ctx, 31, 0x1E19BCu);
    ctx->pc = 0x1E1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1780u, 0x1E19B4u, 0x1E19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19BCu;
label_1e19bc:
    // 0x1e19bc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e19bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e19c0: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1e19c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1e19c4: 0x24a5c100  addiu       $a1, $a1, -0x3F00
    ctx->pc = 0x1e19c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951168));
    // 0x1e19c8: 0x24c6da30  addiu       $a2, $a2, -0x25D0
    ctx->pc = 0x1e19c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957616));
    // 0x1e19cc: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E19CCu;
    SET_GPR_U32(ctx, 31, 0x1E19D4u);
    ctx->pc = 0x1E19D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19CCu;
    // 0x1e19d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E19CCu, 0x1E19D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19D4u;
label_1e19d4:
    // 0x1e19d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e19d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e19d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e19dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e19dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e19e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E19E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19E0u;
        // 0x1e19e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E19E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E19E8u;
}
