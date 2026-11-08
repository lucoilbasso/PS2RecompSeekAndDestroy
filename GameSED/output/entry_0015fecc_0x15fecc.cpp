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

// Function: entry_0015fecc
// Address: 0x15fecc - 0x15ff04
void entry_0015fecc_0x15fecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fecc_0x15fecc");
#endif

    switch (ctx->pc) {
        case 0x15ff00u: goto label_15ff00;
        default: break;
    }

    ctx->pc = 0x15feccu;

    // 0x15fecc: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x15FECCu;
    {
        const bool branch_taken_0x15fecc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fecc) {
            ctx->pc = 0x15FED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FECCu;
            // 0x15fed0: 0x8e630f24  lw          $v1, 0xF24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF04u;
            return;
        }
    }
    ctx->pc = 0x15FED4u;
    // 0x15fed4: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x15fed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x15fed8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15fed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x15fedc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15FEDCu;
    {
        const bool branch_taken_0x15fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fedc) {
            ctx->pc = 0x15FEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FEDCu;
            // 0x15fee0: 0x8e630f24  lw          $v1, 0xF24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF04u;
            return;
        }
    }
    ctx->pc = 0x15FEE4u;
    // 0x15fee4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x15fee8: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x15fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x15feec: 0x24061999  addiu       $a2, $zero, 0x1999
    ctx->pc = 0x15feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6553));
    // 0x15fef0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15fef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15fef4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x15fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15fef8: 0xc0477ba  jal         func_11DEE8
    ctx->pc = 0x15FEF8u;
    SET_GPR_U32(ctx, 31, 0x15FF00u);
    ctx->pc = 0x15FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FEF8u;
    // 0x15fefc: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEE8u, 0x15FEF8u, 0x15FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF00u;
label_15ff00:
    // 0x15ff00: 0x8e630f24  lw          $v1, 0xF24($s3)
    ctx->pc = 0x15ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3876)));
    ctx->pc = 0x15ff04u;
}
