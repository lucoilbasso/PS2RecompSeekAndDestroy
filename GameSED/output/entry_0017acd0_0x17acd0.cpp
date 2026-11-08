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

// Function: entry_0017acd0
// Address: 0x17acd0 - 0x17acf0
void entry_0017acd0_0x17acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017acd0_0x17acd0");
#endif

    switch (ctx->pc) {
        case 0x17ace4u: goto label_17ace4;
        default: break;
    }

    ctx->pc = 0x17acd0u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x17ACECu;
    // 0x17acec: 0x0  nop
    ctx->pc = 0x17acecu;
    // NOP
    ctx->pc = 0x17acf0u;
}
