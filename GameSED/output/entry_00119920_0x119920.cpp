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

// Function: entry_00119920
// Address: 0x119920 - 0x11994c
void entry_00119920_0x119920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119920_0x119920");
#endif

    switch (ctx->pc) {
        case 0x119940u: goto label_119940;
        default: break;
    }

    ctx->pc = 0x119920u;

    // 0x119920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119928: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x119928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11992c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119930: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x119930u;
    {
        const bool branch_taken_0x119930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x119934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119930u;
        // 0x119934: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119930) {
            ctx->pc = 0x11994Cu;
            return;
        }
    }
    ctx->pc = 0x119938u;
    // 0x119938: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119938u;
    SET_GPR_U32(ctx, 31, 0x119940u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119938u, 0x119940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119940u;
label_119940:
    // 0x119940: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119944: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x119944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x119948: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x119948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x11994cu;
}
