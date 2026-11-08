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

// Function: caseD_9
// Address: 0x111ea0 - 0x111ec0
void caseD_9_0x111ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x111ea0");
#endif

    switch (ctx->pc) {
        case 0x111eacu: goto label_111eac;
        default: break;
    }

    ctx->pc = 0x111ea0u;

    // 0x111ea0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ea4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111EA4u;
    SET_GPR_U32(ctx, 31, 0x111EACu);
    ctx->pc = 0x111EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EA4u;
    // 0x111ea8: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111EA4u, 0x111EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EACu;
label_111eac:
    // 0x111eac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111eb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x111eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x111eb4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x111EB4u;
    {
        const bool branch_taken_0x111eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EB4u;
        // 0x111eb8: 0x8c573630  lw          $s7, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111eb4) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111EBCu;
    // 0x111ebc: 0x0  nop
    ctx->pc = 0x111ebcu;
    // NOP
    ctx->pc = 0x111ec0u;
}
