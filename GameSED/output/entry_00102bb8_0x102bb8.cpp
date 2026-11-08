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

// Function: entry_00102bb8
// Address: 0x102bb8 - 0x102bf0
void entry_00102bb8_0x102bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102bb8_0x102bb8");
#endif

    switch (ctx->pc) {
        case 0x102bc0u: goto label_102bc0;
        case 0x102bc8u: goto label_102bc8;
        case 0x102bdcu: goto label_102bdc;
        default: break;
    }

    ctx->pc = 0x102bb8u;

label_102bb8:
    // 0x102bb8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x102BB8u;
    SET_GPR_U32(ctx, 31, 0x102BC0u);
    ctx->pc = 0x102BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BB8u;
    // 0x102bbc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x102BB8u, 0x102BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BC0u;
label_102bc0:
    // 0x102bc0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x102BC0u;
    SET_GPR_U32(ctx, 31, 0x102BC8u);
    ctx->pc = 0x102BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BC0u;
    // 0x102bc4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x102BC0u, 0x102BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BC8u;
label_102bc8:
    // 0x102bc8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x102bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x102bcc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x102bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x102bd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x102bd4: 0xc05fec2  jal         func_17FB08
    ctx->pc = 0x102BD4u;
    SET_GPR_U32(ctx, 31, 0x102BDCu);
    ctx->pc = 0x102BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BD4u;
    // 0x102bd8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB08u, 0x102BD4u, 0x102BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BDCu;
label_102bdc:
    // 0x102bdc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x102bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x102be0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x102be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x102be4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x102BE4u;
    {
        const bool branch_taken_0x102be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x102be4) {
            ctx->pc = 0x102BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102bb8;
        }
    }
    ctx->pc = 0x102BECu;
    // 0x102bec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x102becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x102bf0u;
}
