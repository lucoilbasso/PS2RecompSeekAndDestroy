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

// Function: entry_001c1070
// Address: 0x1c1070 - 0x1c1098
void entry_001c1070_0x1c1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1070_0x1c1070");
#endif

    switch (ctx->pc) {
        case 0x1c1088u: goto label_1c1088;
        default: break;
    }

    ctx->pc = 0x1c1070u;

    // 0x1c1070: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1c1070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c1074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1078: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1c1078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c107c: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1c107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1c1080: 0xc070248  jal         func_1C0920
    ctx->pc = 0x1C1080u;
    SET_GPR_U32(ctx, 31, 0x1C1088u);
    ctx->pc = 0x1C1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1080u;
    // 0x1c1084: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0920u, 0x1C1080u, 0x1C1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1088u;
label_1c1088:
    // 0x1c1088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1088u;
    {
        const bool branch_taken_0x1c1088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1088u;
        // 0x1c108c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1088) {
            ctx->pc = 0x1C1098u;
            return;
        }
    }
    ctx->pc = 0x1C1090u;
    // 0x1c1090: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1C1090u;
    {
        const bool branch_taken_0x1c1090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1090u;
        // 0x1c1094: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1090) {
            ctx->pc = 0x1C11E4u;
            return;
        }
    }
    ctx->pc = 0x1C1098u;
}
