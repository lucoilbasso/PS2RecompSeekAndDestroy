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

// Function: entry_0014f150
// Address: 0x14f150 - 0x14f178
void entry_0014f150_0x14f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f150_0x14f150");
#endif

    switch (ctx->pc) {
        case 0x14f16cu: goto label_14f16c;
        default: break;
    }

    ctx->pc = 0x14f150u;

    // 0x14f150: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14f154: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f158: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F158u;
    {
        const bool branch_taken_0x14f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f158) {
            ctx->pc = 0x14F15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F158u;
            // 0x14f15c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F178u;
            return;
        }
    }
    ctx->pc = 0x14F160u;
    // 0x14f160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f164: 0xc053ec8  jal         func_14FB20
    ctx->pc = 0x14F164u;
    SET_GPR_U32(ctx, 31, 0x14F16Cu);
    ctx->pc = 0x14F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F164u;
    // 0x14f168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB20u, 0x14F164u, 0x14F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F16Cu;
label_14f16c:
    // 0x14f16c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x14F16Cu;
    {
        const bool branch_taken_0x14f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F16Cu;
        // 0x14f170: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f16c) {
            ctx->pc = 0x14F2B8u;
            return;
        }
    }
    ctx->pc = 0x14F174u;
    // 0x14f174: 0x0  nop
    ctx->pc = 0x14f174u;
    // NOP
    ctx->pc = 0x14f178u;
}
