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

// Function: entry_0011e7f8
// Address: 0x11e7f8 - 0x11e830
void entry_0011e7f8_0x11e7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e7f8_0x11e7f8");
#endif

    ctx->pc = 0x11e7f8u;

label_11e7f8:
    // 0x11e7f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11e7f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7fc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e800: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e804: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11E804u;
    {
        const bool branch_taken_0x11e804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E804u;
        // 0x11e808: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e804) {
            ctx->pc = 0x11E834u;
            return;
        }
    }
    ctx->pc = 0x11E80Cu;
    // 0x11e80c: 0x10880009  beq         $a0, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E80Cu;
    {
        const bool branch_taken_0x11e80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E80Cu;
        // 0x11e810: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e80c) {
            ctx->pc = 0x11E834u;
            return;
        }
    }
    ctx->pc = 0x11E814u;
    // 0x11e814: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e818: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e81c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e820: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e824: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e828: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E828u;
    {
        const bool branch_taken_0x11e828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E828u;
        // 0x11e82c: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e828) {
            ctx->pc = 0x11E7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e7f8;
        }
    }
    ctx->pc = 0x11E830u;
}
