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

// Function: entry_001b9904
// Address: 0x1b9904 - 0x1b9948
void entry_001b9904_0x1b9904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9904_0x1b9904");
#endif

    switch (ctx->pc) {
        case 0x1b9938u: goto label_1b9938;
        default: break;
    }

    ctx->pc = 0x1b9904u;

    // 0x1b9904: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1b9904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b9908: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1b9908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b990c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b990cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9910: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b9910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b9914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9918: 0x2442d410  addiu       $v0, $v0, -0x2BF0
    ctx->pc = 0x1b9918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956048));
    // 0x1b991c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b9920: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b9920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b9924: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1b9924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b9928: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9928u;
    {
        const bool branch_taken_0x1b9928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9928u;
        // 0x1b992c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9928) {
            ctx->pc = 0x1B9948u;
            return;
        }
    }
    ctx->pc = 0x1B9930u;
    // 0x1b9930: 0xc06e5e4  jal         func_1B9790
    ctx->pc = 0x1B9930u;
    SET_GPR_U32(ctx, 31, 0x1B9938u);
    ctx->pc = 0x1B9934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9930u;
    // 0x1b9934: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9790u, 0x1B9930u, 0x1B9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9938u;
label_1b9938:
    // 0x1b9938: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1b9938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1b993c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b993cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b9940: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b9940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b9944: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b9948u;
}
