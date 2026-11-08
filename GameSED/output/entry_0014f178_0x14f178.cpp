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

// Function: entry_0014f178
// Address: 0x14f178 - 0x14f198
void entry_0014f178_0x14f178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f178_0x14f178");
#endif

    switch (ctx->pc) {
        case 0x14f190u: goto label_14f190;
        default: break;
    }

    ctx->pc = 0x14f178u;

    // 0x14f178: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f17c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F17Cu;
    {
        const bool branch_taken_0x14f17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f17c) {
            ctx->pc = 0x14F180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F17Cu;
            // 0x14f180: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F198u;
            return;
        }
    }
    ctx->pc = 0x14F184u;
    // 0x14f184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f188: 0xc053ec8  jal         func_14FB20
    ctx->pc = 0x14F188u;
    SET_GPR_U32(ctx, 31, 0x14F190u);
    ctx->pc = 0x14F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F188u;
    // 0x14f18c: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB20u, 0x14F188u, 0x14F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F190u;
label_14f190:
    // 0x14f190: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x14F190u;
    {
        const bool branch_taken_0x14f190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F190u;
        // 0x14f194: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f190) {
            ctx->pc = 0x14F2B8u;
            return;
        }
    }
    ctx->pc = 0x14F198u;
}
