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

// Function: entry_0014f1d4
// Address: 0x14f1d4 - 0x14f1f0
void entry_0014f1d4_0x14f1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f1d4_0x14f1d4");
#endif

    switch (ctx->pc) {
        case 0x14f1e4u: goto label_14f1e4;
        default: break;
    }

    ctx->pc = 0x14f1d4u;

    // 0x14f1d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1d8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f1dc: 0xc0585d0  jal         func_161740
    ctx->pc = 0x14F1DCu;
    SET_GPR_U32(ctx, 31, 0x14F1E4u);
    ctx->pc = 0x14F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1DCu;
    // 0x14f1e0: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x14F1DCu, 0x14F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1E4u;
label_14f1e4:
    // 0x14f1e4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x14F1E4u;
    {
        const bool branch_taken_0x14f1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1E4u;
        // 0x14f1e8: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1e4) {
            ctx->pc = 0x14F2B8u;
            return;
        }
    }
    ctx->pc = 0x14F1ECu;
    // 0x14f1ec: 0x0  nop
    ctx->pc = 0x14f1ecu;
    // NOP
    ctx->pc = 0x14f1f0u;
}
