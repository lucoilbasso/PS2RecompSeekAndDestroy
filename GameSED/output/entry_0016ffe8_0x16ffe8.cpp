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

// Function: entry_0016ffe8
// Address: 0x16ffe8 - 0x170008
void entry_0016ffe8_0x16ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ffe8_0x16ffe8");
#endif

    switch (ctx->pc) {
        case 0x16fff4u: goto label_16fff4;
        default: break;
    }

    ctx->pc = 0x16ffe8u;

    // 0x16ffe8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ffec: 0xc074266  jal         func_1D0998
    ctx->pc = 0x16FFECu;
    SET_GPR_U32(ctx, 31, 0x16FFF4u);
    ctx->pc = 0x16FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFECu;
    // 0x16fff0: 0x26a57668  addiu       $a1, $s5, 0x7668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 30312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x16FFECu, 0x16FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FFF4u;
label_16fff4:
    // 0x16fff4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FFF4u;
    {
        const bool branch_taken_0x16fff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fff4) {
            ctx->pc = 0x16FFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FFF4u;
            // 0x16fff8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170008u;
            return;
        }
    }
    ctx->pc = 0x16FFFCu;
    // 0x16fffc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16FFFCu;
    {
        const bool branch_taken_0x16fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFFCu;
        // 0x170000: 0xaf808bd8  sw          $zero, -0x7428($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fffc) {
            ctx->pc = 0x170018u;
            return;
        }
    }
    ctx->pc = 0x170004u;
    // 0x170004: 0x0  nop
    ctx->pc = 0x170004u;
    // NOP
    ctx->pc = 0x170008u;
}
