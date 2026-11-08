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

// Function: entry_0017dd50
// Address: 0x17dd50 - 0x17dd7c
void entry_0017dd50_0x17dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dd50_0x17dd50");
#endif

    switch (ctx->pc) {
        case 0x17dd58u: goto label_17dd58;
        default: break;
    }

    ctx->pc = 0x17dd50u;

    // 0x17dd50: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17DD50u;
    SET_GPR_U32(ctx, 31, 0x17DD58u);
    ctx->pc = 0x17DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD50u;
    // 0x17dd54: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17DD50u, 0x17DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD58u;
label_17dd58:
    // 0x17dd58: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x17dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17dd5c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17dd60: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17dd64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17dd68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dd6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dd70: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17dd74: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DD74u;
    {
        const bool branch_taken_0x17dd74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x17DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD74u;
        // 0x17dd78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd74) {
            ctx->pc = 0x17DD84u;
            return;
        }
    }
    ctx->pc = 0x17DD7Cu;
}
