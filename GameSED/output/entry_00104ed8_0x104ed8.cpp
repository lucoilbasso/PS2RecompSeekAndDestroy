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

// Function: entry_00104ed8
// Address: 0x104ed8 - 0x104efc
void entry_00104ed8_0x104ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ed8_0x104ed8");
#endif

    switch (ctx->pc) {
        case 0x104ef8u: goto label_104ef8;
        default: break;
    }

    ctx->pc = 0x104ed8u;

    // 0x104ed8: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x104ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x104edc: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x104EDCu;
    {
        const bool branch_taken_0x104edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EDCu;
        // 0x104ee0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104edc) {
            ctx->pc = 0x104E40u;
            return;
        }
    }
    ctx->pc = 0x104EE4u;
    // 0x104ee4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x104ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x104ee8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104eec: 0x24a538a8  addiu       $a1, $a1, 0x38A8
    ctx->pc = 0x104eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14504));
    // 0x104ef0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x104EF0u;
    SET_GPR_U32(ctx, 31, 0x104EF8u);
    ctx->pc = 0x104EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EF0u;
    // 0x104ef4: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x104EF0u, 0x104EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104EF8u;
label_104ef8:
    // 0x104ef8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x104efcu;
}
