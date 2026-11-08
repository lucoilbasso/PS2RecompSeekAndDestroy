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

// Function: entry_0016a7bc
// Address: 0x16a7bc - 0x16a7d0
void entry_0016a7bc_0x16a7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a7bc_0x16a7bc");
#endif

    switch (ctx->pc) {
        case 0x16a7c4u: goto label_16a7c4;
        default: break;
    }

    ctx->pc = 0x16a7bcu;

    // 0x16a7bc: 0xc05a900  jal         func_16A400
    ctx->pc = 0x16A7BCu;
    SET_GPR_U32(ctx, 31, 0x16A7C4u);
    ctx->pc = 0x16A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7BCu;
    // 0x16a7c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A7BCu, 0x16A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7C4u;
label_16a7c4:
    // 0x16a7c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16A7C4u;
    {
        const bool branch_taken_0x16a7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7C4u;
        // 0x16a7c8: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7c4) {
            ctx->pc = 0x16A820u;
            return;
        }
    }
    ctx->pc = 0x16A7CCu;
    // 0x16a7cc: 0x0  nop
    ctx->pc = 0x16a7ccu;
    // NOP
    ctx->pc = 0x16a7d0u;
}
