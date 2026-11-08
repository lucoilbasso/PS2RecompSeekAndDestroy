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

// Function: entry_00171ac8
// Address: 0x171ac8 - 0x171ae0
void entry_00171ac8_0x171ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171ac8_0x171ac8");
#endif

    switch (ctx->pc) {
        case 0x171adcu: goto label_171adc;
        default: break;
    }

    ctx->pc = 0x171ac8u;

    // 0x171ac8: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171AC8u;
    {
        const bool branch_taken_0x171ac8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x171ac8) {
            ctx->pc = 0x171ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171AC8u;
            // 0x171acc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171AE0u;
            return;
        }
    }
    ctx->pc = 0x171AD0u;
    // 0x171ad0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x171ad4: 0xc05c246  jal         func_170918
    ctx->pc = 0x171AD4u;
    SET_GPR_U32(ctx, 31, 0x171ADCu);
    ctx->pc = 0x171AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AD4u;
    // 0x171ad8: 0x248476f0  addiu       $a0, $a0, 0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170918u, 0x171AD4u, 0x171ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ADCu;
label_171adc:
    // 0x171adc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x171adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x171ae0u;
}
