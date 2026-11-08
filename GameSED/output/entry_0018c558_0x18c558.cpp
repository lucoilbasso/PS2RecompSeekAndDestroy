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

// Function: entry_0018c558
// Address: 0x18c558 - 0x18c578
void entry_0018c558_0x18c558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c558_0x18c558");
#endif

    switch (ctx->pc) {
        case 0x18c560u: goto label_18c560;
        default: break;
    }

    ctx->pc = 0x18c558u;

    // 0x18c558: 0xc063af8  jal         func_18EBE0
    ctx->pc = 0x18C558u;
    SET_GPR_U32(ctx, 31, 0x18C560u);
    ctx->pc = 0x18C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C558u;
    // 0x18c55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EBE0u, 0x18C558u, 0x18C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C560u;
label_18c560:
    // 0x18c560: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C560u;
    {
        const bool branch_taken_0x18c560 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c560) {
            ctx->pc = 0x18C564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C560u;
            // 0x18c564: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C578u;
            return;
        }
    }
    ctx->pc = 0x18C568u;
    // 0x18c568: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x18c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18c56c: 0x26230230  addiu       $v1, $s1, 0x230
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x18c570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C570u;
    {
        const bool branch_taken_0x18c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C570u;
        // 0x18c574: 0x8e240208  lw          $a0, 0x208($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c570) {
            ctx->pc = 0x18C580u;
            return;
        }
    }
    ctx->pc = 0x18C578u;
}
