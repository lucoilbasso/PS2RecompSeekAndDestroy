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

// Function: GetSifCommandBuf__8WcSndStdUi
// Address: 0x17acb0 - 0x17ad18
void GetSifCommandBuf__8WcSndStdUi_0x17acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSifCommandBuf__8WcSndStdUi_0x17acb0");
#endif

    switch (ctx->pc) {
        case 0x17acd0u: goto label_17acd0;
        case 0x17ace4u: goto label_17ace4;
        default: break;
    }

    ctx->pc = 0x17acb0u;

    // 0x17acb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17acb4: 0x24860058  addiu       $a2, $a0, 0x58
    ctx->pc = 0x17acb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x17acb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17acbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17acbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17acc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17acc4: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17acc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17acc8: 0x24830250  addiu       $v1, $a0, 0x250
    ctx->pc = 0x17acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17accc: 0x0  nop
    ctx->pc = 0x17acccu;
    // NOP
label_17acd0:
    // 0x17acd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17acd4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17ACD4u;
    {
        const bool branch_taken_0x17acd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACD4u;
        // 0x17acd8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acd4) {
            ctx->pc = 0x17ACF0u;
            goto label_17acf0;
        }
    }
    ctx->pc = 0x17ACDCu;
    // 0x17acdc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17ACDCu;
    SET_GPR_U32(ctx, 31, 0x17ACE4u);
    ctx->pc = 0x17ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACDCu;
    // 0x17ace0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17ACDCu, 0x17ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACE4u;
label_17ace4:
    // 0x17ace4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17ACE4u;
    {
        const bool branch_taken_0x17ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACE4u;
        // 0x17ace8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ace4) {
            ctx->pc = 0x17AD08u;
            goto label_17ad08;
        }
    }
    ctx->pc = 0x17ACECu;
    // 0x17acec: 0x0  nop
    ctx->pc = 0x17acecu;
    // NOP
label_17acf0:
    // 0x17acf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17acf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17acf4: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17acf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17acf8: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x17acf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17acfc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17ACFCu;
    {
        const bool branch_taken_0x17acfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACFCu;
        // 0x17ad00: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acfc) {
            ctx->pc = 0x17ACD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17acd0;
        }
    }
    ctx->pc = 0x17AD04u;
    // 0x17ad04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ad04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ad08:
    // 0x17ad08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ad08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ad0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ad0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ad10: 0x3e00008  jr          $ra
    ctx->pc = 0x17AD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD10u;
        // 0x17ad14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AD18u;
}
