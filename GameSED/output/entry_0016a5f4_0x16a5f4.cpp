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

// Function: entry_0016a5f4
// Address: 0x16a5f4 - 0x16a608
void entry_0016a5f4_0x16a5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a5f4_0x16a5f4");
#endif

    switch (ctx->pc) {
        case 0x16a600u: goto label_16a600;
        default: break;
    }

    ctx->pc = 0x16a5f4u;

    // 0x16a5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a5f8: 0xc05a900  jal         func_16A400
    ctx->pc = 0x16A5F8u;
    SET_GPR_U32(ctx, 31, 0x16A600u);
    ctx->pc = 0x16A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5F8u;
    // 0x16a5fc: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A5F8u, 0x16A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A600u;
label_16a600:
    // 0x16a600: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x16A600u;
    {
        const bool branch_taken_0x16a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A600u;
        // 0x16a604: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a600) {
            ctx->pc = 0x16A820u;
            return;
        }
    }
    ctx->pc = 0x16A608u;
}
