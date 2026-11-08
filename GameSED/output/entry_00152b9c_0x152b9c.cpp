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

// Function: entry_00152b9c
// Address: 0x152b9c - 0x152bd4
void entry_00152b9c_0x152b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152b9c_0x152b9c");
#endif

    switch (ctx->pc) {
        case 0x152bacu: goto label_152bac;
        case 0x152bd0u: goto label_152bd0;
        default: break;
    }

    ctx->pc = 0x152b9cu;

    // 0x152b9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x152b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ba0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x152ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ba4: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x152BA4u;
    SET_GPR_U32(ctx, 31, 0x152BACu);
    ctx->pc = 0x152BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BA4u;
    // 0x152ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x152BA4u, 0x152BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BACu;
label_152bac:
    // 0x152bac: 0x8e250178  lw          $a1, 0x178($s1)
    ctx->pc = 0x152bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x152bb0: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x152BB0u;
    {
        const bool branch_taken_0x152bb0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x152BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BB0u;
        // 0x152bb4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bb0) {
            ctx->pc = 0x152BD4u;
            return;
        }
    }
    ctx->pc = 0x152BB8u;
    // 0x152bb8: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x152bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x152bbc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152BBCu;
    {
        const bool branch_taken_0x152bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BBCu;
        // 0x152bc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bbc) {
            ctx->pc = 0x152BD4u;
            return;
        }
    }
    ctx->pc = 0x152BC4u;
    // 0x152bc4: 0x8e2801b4  lw          $t0, 0x1B4($s1)
    ctx->pc = 0x152bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x152bc8: 0xc041228  jal         func_1048A0
    ctx->pc = 0x152BC8u;
    SET_GPR_U32(ctx, 31, 0x152BD0u);
    ctx->pc = 0x152BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BC8u;
    // 0x152bcc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x152BC8u, 0x152BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BD0u;
label_152bd0:
    // 0x152bd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x152bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x152bd4u;
}
