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

// Function: entry_001a19e4
// Address: 0x1a19e4 - 0x1a1a08
void entry_001a19e4_0x1a19e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a19e4_0x1a19e4");
#endif

    switch (ctx->pc) {
        case 0x1a19ecu: goto label_1a19ec;
        default: break;
    }

    ctx->pc = 0x1a19e4u;

    // 0x1a19e4: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1A19E4u;
    SET_GPR_U32(ctx, 31, 0x1A19ECu);
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1A19E4u, 0x1A19ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19ECu;
label_1a19ec:
    // 0x1a19ec: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A19ECu;
    {
        const bool branch_taken_0x1a19ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a19ec) {
            ctx->pc = 0x1A1A28u;
            return;
        }
    }
    ctx->pc = 0x1A19F4u;
    // 0x1a19f4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a19f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A19F8u;
    {
        const bool branch_taken_0x1a19f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a19f8) {
            ctx->pc = 0x1A1A08u;
            return;
        }
    }
    ctx->pc = 0x1A1A00u;
    // 0x1a1a00: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A1A00u;
    SET_GPR_U32(ctx, 31, 0x1A1A08u);
    ctx->pc = 0x1A1A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A00u;
    // 0x1a1a04: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A1A00u, 0x1A1A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A08u;
}
