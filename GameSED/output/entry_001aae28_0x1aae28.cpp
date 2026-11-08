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

// Function: entry_001aae28
// Address: 0x1aae28 - 0x1aae50
void entry_001aae28_0x1aae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aae28_0x1aae28");
#endif

    switch (ctx->pc) {
        case 0x1aae30u: goto label_1aae30;
        default: break;
    }

    ctx->pc = 0x1aae28u;

    // 0x1aae28: 0xc06be60  jal         func_1AF980
    ctx->pc = 0x1AAE28u;
    SET_GPR_U32(ctx, 31, 0x1AAE30u);
    ctx->pc = 0x1AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF980u, 0x1AAE28u, 0x1AAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE30u;
label_1aae30:
    // 0x1aae30: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x1aae30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x1aae34: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1aae34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aae38: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1aae38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aae3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aae40: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAE40u;
    {
        const bool branch_taken_0x1aae40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE40u;
        // 0x1aae44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae40) {
            ctx->pc = 0x1AAE50u;
            return;
        }
    }
    ctx->pc = 0x1AAE48u;
    // 0x1aae48: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1aae48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1aae4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1aae4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1aae50u;
}
