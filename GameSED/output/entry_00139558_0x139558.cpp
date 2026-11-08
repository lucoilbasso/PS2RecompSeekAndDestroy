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

// Function: entry_00139558
// Address: 0x139558 - 0x139570
void entry_00139558_0x139558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139558_0x139558");
#endif

    switch (ctx->pc) {
        case 0x13956cu: goto label_13956c;
        default: break;
    }

    ctx->pc = 0x139558u;

    // 0x139558: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x139558u;
    {
        const bool branch_taken_0x139558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139558) {
            ctx->pc = 0x13955Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139558u;
            // 0x13955c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139570u;
            return;
        }
    }
    ctx->pc = 0x139560u;
    // 0x139560: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x139560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x139564: 0xc061a00  jal         func_186800
    ctx->pc = 0x139564u;
    SET_GPR_U32(ctx, 31, 0x13956Cu);
    ctx->pc = 0x139568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139564u;
    // 0x139568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186800u, 0x139564u, 0x13956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13956Cu;
label_13956c:
    // 0x13956c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13956cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x139570u;
}
