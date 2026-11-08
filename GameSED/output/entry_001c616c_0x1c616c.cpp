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

// Function: entry_001c616c
// Address: 0x1c616c - 0x1c617c
void entry_001c616c_0x1c616c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c616c_0x1c616c");
#endif

    switch (ctx->pc) {
        case 0x1c6174u: goto label_1c6174;
        default: break;
    }

    ctx->pc = 0x1c616cu;

    // 0x1c616c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C616Cu;
    SET_GPR_U32(ctx, 31, 0x1C6174u);
    ctx->pc = 0x1C6170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C616Cu;
    // 0x1c6170: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C616Cu, 0x1C6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6174u;
label_1c6174:
    // 0x1c6174: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1C6174u;
    {
        const bool branch_taken_0x1c6174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6174u;
        // 0x1c6178: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6174) {
            ctx->pc = 0x1C628Cu;
            return;
        }
    }
    ctx->pc = 0x1C617Cu;
}
