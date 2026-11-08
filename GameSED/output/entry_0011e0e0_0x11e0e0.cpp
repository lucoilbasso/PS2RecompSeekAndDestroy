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

// Function: entry_0011e0e0
// Address: 0x11e0e0 - 0x11e114
void entry_0011e0e0_0x11e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e0e0_0x11e0e0");
#endif

    ctx->pc = 0x11e0e0u;

label_11e0e0:
    // 0x11e0e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11e0e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11e0e8: 0x2ca30045  sltiu       $v1, $a1, 0x45
    ctx->pc = 0x11e0e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e0ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E0ECu;
    {
        const bool branch_taken_0x11e0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0ECu;
        // 0x11e0f0: 0x4b1021  addu        $v0, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0ec) {
            ctx->pc = 0x11E118u;
            return;
        }
    }
    ctx->pc = 0x11E0F4u;
    // 0x11e0f4: 0x10aa0008  beq         $a1, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E0F4u;
    {
        const bool branch_taken_0x11e0f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        ctx->pc = 0x11E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0F4u;
        // 0x11e0f8: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0f4) {
            ctx->pc = 0x11E118u;
            return;
        }
    }
    ctx->pc = 0x11E0FCu;
    // 0x11e0fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e104: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x11e104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x11e108: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x11e108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11e10c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E10Cu;
    {
        const bool branch_taken_0x11e10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e10c) {
            ctx->pc = 0x11E110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E10Cu;
            // 0x11e110: 0x95050000  lhu         $a1, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e0e0;
        }
    }
    ctx->pc = 0x11E114u;
}
