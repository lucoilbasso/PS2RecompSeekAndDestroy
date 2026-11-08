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

// Function: entry_001c6548
// Address: 0x1c6548 - 0x1c6558
void entry_001c6548_0x1c6548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6548_0x1c6548");
#endif

    switch (ctx->pc) {
        case 0x1c6550u: goto label_1c6550;
        default: break;
    }

    ctx->pc = 0x1c6548u;

    // 0x1c6548: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C6548u;
    SET_GPR_U32(ctx, 31, 0x1C6550u);
    ctx->pc = 0x1C654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6548u;
    // 0x1c654c: 0x8e24ddfc  lw          $a0, -0x2204($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C6548u, 0x1C6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6550u;
label_1c6550:
    // 0x1c6550: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C6550u;
    {
        const bool branch_taken_0x1c6550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6550u;
        // 0x1c6554: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6550) {
            ctx->pc = 0x1C65C8u;
            return;
        }
    }
    ctx->pc = 0x1C6558u;
}
