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

// Function: entry_001c6334
// Address: 0x1c6334 - 0x1c6344
void entry_001c6334_0x1c6334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6334_0x1c6334");
#endif

    switch (ctx->pc) {
        case 0x1c633cu: goto label_1c633c;
        default: break;
    }

    ctx->pc = 0x1c6334u;

    // 0x1c6334: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C6334u;
    SET_GPR_U32(ctx, 31, 0x1C633Cu);
    ctx->pc = 0x1C6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6334u;
    // 0x1c6338: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C6334u, 0x1C633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C633Cu;
label_1c633c:
    // 0x1c633c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C633Cu;
    {
        const bool branch_taken_0x1c633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C633Cu;
        // 0x1c6340: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c633c) {
            ctx->pc = 0x1C63E8u;
            return;
        }
    }
    ctx->pc = 0x1C6344u;
}
