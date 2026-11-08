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

// Function: entry_001b8420
// Address: 0x1b8420 - 0x1b8450
void entry_001b8420_0x1b8420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8420_0x1b8420");
#endif

    switch (ctx->pc) {
        case 0x1b8444u: goto label_1b8444;
        case 0x1b844cu: goto label_1b844c;
        default: break;
    }

    ctx->pc = 0x1b8420u;

    // 0x1b8420: 0x2650bff0  addiu       $s0, $s2, -0x4010
    ctx->pc = 0x1b8420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950896));
    // 0x1b8424: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b8428: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1b8428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1b842c: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x1b842cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1b8430: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8430u;
    {
        const bool branch_taken_0x1b8430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8430u;
        // 0x1b8434: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8430) {
            ctx->pc = 0x1B8450u;
            return;
        }
    }
    ctx->pc = 0x1B8438u;
    // 0x1b8438: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b843c: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B843Cu;
    SET_GPR_U32(ctx, 31, 0x1B8444u);
    ctx->pc = 0x1B8440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B843Cu;
    // 0x1b8440: 0x2484ad50  addiu       $a0, $a0, -0x52B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B843Cu, 0x1B8444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8444u;
label_1b8444:
    // 0x1b8444: 0xc06dc84  jal         func_1B7210
    ctx->pc = 0x1B8444u;
    SET_GPR_U32(ctx, 31, 0x1B844Cu);
    ctx->pc = 0x1B8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8444u;
    // 0x1b8448: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7210u, 0x1B8444u, 0x1B844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B844Cu;
label_1b844c:
    // 0x1b844c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b844cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->pc = 0x1b8450u;
}
