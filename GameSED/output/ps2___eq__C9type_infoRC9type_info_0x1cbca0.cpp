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

// Function: __eq__C9type_infoRC9type_info
// Address: 0x1cbca0 - 0x1cbce0
void ps2___eq__C9type_infoRC9type_info_0x1cbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eq__C9type_infoRC9type_info_0x1cbca0");
#endif

    switch (ctx->pc) {
        case 0x1cbcc0u: goto label_1cbcc0;
        default: break;
    }

    ctx->pc = 0x1cbca0u;

    // 0x1cbca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cbca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cbca8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cbca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbcac: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBCACu;
    {
        const bool branch_taken_0x1cbcac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCACu;
        // 0x1cbcb0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcac) {
            ctx->pc = 0x1CBCC8u;
            goto label_1cbcc8;
        }
    }
    ctx->pc = 0x1CBCB4u;
    // 0x1cbcb4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbcb8: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1CBCB8u;
    SET_GPR_U32(ctx, 31, 0x1CBCC0u);
    ctx->pc = 0x1CBCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBCB8u;
    // 0x1cbcbc: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1CBCB8u, 0x1CBCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBCC0u;
label_1cbcc0:
    // 0x1cbcc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBCC0u;
    {
        const bool branch_taken_0x1cbcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCC0u;
        // 0x1cbcc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcc0) {
            ctx->pc = 0x1CBCD0u;
            goto label_1cbcd0;
        }
    }
    ctx->pc = 0x1CBCC8u;
label_1cbcc8:
    // 0x1cbcc8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cbcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbccc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cbcccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbcd0:
    // 0x1cbcd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbcd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbcd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cbcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cbcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD8u;
        // 0x1cbcdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBCE0u;
}
