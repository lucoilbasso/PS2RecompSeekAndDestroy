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

// Function: entry_00153838
// Address: 0x153838 - 0x153850
void entry_00153838_0x153838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153838_0x153838");
#endif

    switch (ctx->pc) {
        case 0x15384cu: goto label_15384c;
        default: break;
    }

    ctx->pc = 0x153838u;

    // 0x153838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x153838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15383c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15383Cu;
    {
        const bool branch_taken_0x15383c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15383c) {
            ctx->pc = 0x153840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15383Cu;
            // 0x153840: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153850u;
            return;
        }
    }
    ctx->pc = 0x153844u;
    // 0x153844: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x153844u;
    SET_GPR_U32(ctx, 31, 0x15384Cu);
    ctx->pc = 0x153848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153844u;
    // 0x153848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x153844u, 0x15384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15384Cu;
label_15384c:
    // 0x15384c: 0x8e42037c  lw          $v0, 0x37C($s2)
    ctx->pc = 0x15384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
    ctx->pc = 0x153850u;
}
