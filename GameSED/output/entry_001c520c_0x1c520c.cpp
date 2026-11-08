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

// Function: entry_001c520c
// Address: 0x1c520c - 0x1c521c
void entry_001c520c_0x1c520c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c520c_0x1c520c");
#endif

    switch (ctx->pc) {
        case 0x1c5214u: goto label_1c5214;
        default: break;
    }

    ctx->pc = 0x1c520cu;

    // 0x1c520c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C520Cu;
    SET_GPR_U32(ctx, 31, 0x1C5214u);
    ctx->pc = 0x1C5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C520Cu;
    // 0x1c5210: 0x8e44ddfc  lw          $a0, -0x2204($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C520Cu, 0x1C5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5214u;
label_1c5214:
    // 0x1c5214: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C5214u;
    {
        const bool branch_taken_0x1c5214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5214u;
        // 0x1c5218: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5214) {
            ctx->pc = 0x1C5294u;
            return;
        }
    }
    ctx->pc = 0x1C521Cu;
}
