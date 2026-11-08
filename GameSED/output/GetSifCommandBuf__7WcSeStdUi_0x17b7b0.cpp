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

// Function: GetSifCommandBuf__7WcSeStdUi
// Address: 0x17b7b0 - 0x17b818
void GetSifCommandBuf__7WcSeStdUi_0x17b7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSifCommandBuf__7WcSeStdUi_0x17b7b0");
#endif

    switch (ctx->pc) {
        case 0x17b7d0u: goto label_17b7d0;
        case 0x17b7e4u: goto label_17b7e4;
        default: break;
    }

    ctx->pc = 0x17b7b0u;

    // 0x17b7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b7b4: 0x24860058  addiu       $a2, $a0, 0x58
    ctx->pc = 0x17b7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x17b7b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b7bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b7c4: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17b7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17b7c8: 0x24830130  addiu       $v1, $a0, 0x130
    ctx->pc = 0x17b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x17b7cc: 0x0  nop
    ctx->pc = 0x17b7ccu;
    // NOP
label_17b7d0:
    // 0x17b7d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b7d4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B7D4u;
    {
        const bool branch_taken_0x17b7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7D4u;
        // 0x17b7d8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7d4) {
            ctx->pc = 0x17B7F0u;
            goto label_17b7f0;
        }
    }
    ctx->pc = 0x17B7DCu;
    // 0x17b7dc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17B7DCu;
    SET_GPR_U32(ctx, 31, 0x17B7E4u);
    ctx->pc = 0x17B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B7DCu;
    // 0x17b7e0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17B7DCu, 0x17B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B7E4u;
label_17b7e4:
    // 0x17b7e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B7E4u;
    {
        const bool branch_taken_0x17b7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7E4u;
        // 0x17b7e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7e4) {
            ctx->pc = 0x17B808u;
            goto label_17b808;
        }
    }
    ctx->pc = 0x17B7ECu;
    // 0x17b7ec: 0x0  nop
    ctx->pc = 0x17b7ecu;
    // NOP
label_17b7f0:
    // 0x17b7f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17b7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17b7f4: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17b7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17b7f8: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x17b7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17b7fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17B7FCu;
    {
        const bool branch_taken_0x17b7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7FCu;
        // 0x17b800: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7fc) {
            ctx->pc = 0x17B7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b7d0;
        }
    }
    ctx->pc = 0x17B804u;
    // 0x17b804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b808:
    // 0x17b808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b80c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b810: 0x3e00008  jr          $ra
    ctx->pc = 0x17B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B810u;
        // 0x17b814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B818u;
}
