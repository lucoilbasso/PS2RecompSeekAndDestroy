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

// Function: entry_001120c4
// Address: 0x1120c4 - 0x1120e0
void entry_001120c4_0x1120c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001120c4_0x1120c4");
#endif

    switch (ctx->pc) {
        case 0x1120ccu: goto label_1120cc;
        default: break;
    }

    ctx->pc = 0x1120c4u;

    // 0x1120c4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1120C4u;
    SET_GPR_U32(ctx, 31, 0x1120CCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1120C4u, 0x1120CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1120CCu;
label_1120cc:
    // 0x1120cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1120ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1120d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1120d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1120d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1120D4u;
    {
        const bool branch_taken_0x1120d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120D4u;
        // 0x1120d8: 0x8c533630  lw          $s3, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120d4) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x1120DCu;
    // 0x1120dc: 0x0  nop
    ctx->pc = 0x1120dcu;
    // NOP
    ctx->pc = 0x1120e0u;
}
