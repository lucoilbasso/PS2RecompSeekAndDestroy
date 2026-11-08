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

// Function: entry_00119868
// Address: 0x119868 - 0x119888
void entry_00119868_0x119868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119868_0x119868");
#endif

    switch (ctx->pc) {
        case 0x119884u: goto label_119884;
        default: break;
    }

    ctx->pc = 0x119868u;

    // 0x119868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11986c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x11986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x119870: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119874: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119874u;
    {
        const bool branch_taken_0x119874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x119878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119874u;
        // 0x119878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119874) {
            ctx->pc = 0x119888u;
            return;
        }
    }
    ctx->pc = 0x11987Cu;
    // 0x11987c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11987Cu;
    SET_GPR_U32(ctx, 31, 0x119884u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11987Cu, 0x119884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119884u;
label_119884:
    // 0x119884: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x119884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119888u;
}
