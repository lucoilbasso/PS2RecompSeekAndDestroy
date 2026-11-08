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

// Function: entry_001abbd8
// Address: 0x1abbd8 - 0x1abbf8
void entry_001abbd8_0x1abbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abbd8_0x1abbd8");
#endif

    switch (ctx->pc) {
        case 0x1abbe8u: goto label_1abbe8;
        case 0x1abbf4u: goto label_1abbf4;
        default: break;
    }

    ctx->pc = 0x1abbd8u;

    // 0x1abbd8: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABBD8u;
    {
        const bool branch_taken_0x1abbd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abbd8) {
            ctx->pc = 0x1ABBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABBD8u;
            // 0x1abbdc: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABBF8u;
            return;
        }
    }
    ctx->pc = 0x1ABBE0u;
    // 0x1abbe0: 0xc06bfd0  jal         func_1AFF40
    ctx->pc = 0x1ABBE0u;
    SET_GPR_U32(ctx, 31, 0x1ABBE8u);
    ctx->pc = 0x1ABBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBE0u;
    // 0x1abbe4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF40u, 0x1ABBE0u, 0x1ABBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBE8u;
label_1abbe8:
    // 0x1abbe8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1abbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1abbec: 0xc06bc58  jal         func_1AF160
    ctx->pc = 0x1ABBECu;
    SET_GPR_U32(ctx, 31, 0x1ABBF4u);
    ctx->pc = 0x1ABBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBECu;
    // 0x1abbf0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF160u, 0x1ABBECu, 0x1ABBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBF4u;
label_1abbf4:
    // 0x1abbf4: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1abbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    ctx->pc = 0x1abbf8u;
}
