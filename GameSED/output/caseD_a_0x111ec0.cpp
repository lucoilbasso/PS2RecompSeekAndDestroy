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

// Function: caseD_a
// Address: 0x111ec0 - 0x111ee0
void caseD_a_0x111ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x111ec0");
#endif

    switch (ctx->pc) {
        case 0x111eccu: goto label_111ecc;
        default: break;
    }

    ctx->pc = 0x111ec0u;

    // 0x111ec0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ec4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111EC4u;
    SET_GPR_U32(ctx, 31, 0x111ECCu);
    ctx->pc = 0x111EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EC4u;
    // 0x111ec8: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111EC4u, 0x111ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111ECCu;
label_111ecc:
    // 0x111ecc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111ed0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x111ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x111ed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111ED4u;
    {
        const bool branch_taken_0x111ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111ED4u;
        // 0x111ed8: 0x8c533630  lw          $s3, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ed4) {
            ctx->pc = 0x111EF8u;
            return;
        }
    }
    ctx->pc = 0x111EDCu;
    // 0x111edc: 0x0  nop
    ctx->pc = 0x111edcu;
    // NOP
    ctx->pc = 0x111ee0u;
}
