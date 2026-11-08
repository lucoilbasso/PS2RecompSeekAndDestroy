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

// Function: entry_001142c8
// Address: 0x1142c8 - 0x1142f0
void entry_001142c8_0x1142c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001142c8_0x1142c8");
#endif

    switch (ctx->pc) {
        case 0x1142d0u: goto label_1142d0;
        default: break;
    }

    ctx->pc = 0x1142c8u;

label_1142c8:
    // 0x1142c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1142C8u;
    SET_GPR_U32(ctx, 31, 0x1142D0u);
    ctx->pc = 0x1142CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1142C8u;
    // 0x1142cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1142C8u, 0x1142D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142D0u;
label_1142d0:
    // 0x1142d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1142d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1142d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1142d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1142d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1142d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1142dc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1142dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1142e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1142e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1142e4: 0x14b4fff8  bne         $a1, $s4, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1142E4u;
    {
        const bool branch_taken_0x1142e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x1142E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E4u;
        // 0x1142e8: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142e4) {
            ctx->pc = 0x1142C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1142c8;
        }
    }
    ctx->pc = 0x1142ECu;
    // 0x1142ec: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1142ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x1142f0u;
}
