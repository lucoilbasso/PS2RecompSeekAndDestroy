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

// Function: entry_0011e5c8
// Address: 0x11e5c8 - 0x11e5fc
void entry_0011e5c8_0x11e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e5c8_0x11e5c8");
#endif

    ctx->pc = 0x11e5c8u;

label_11e5c8:
    // 0x11e5c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5cc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e5d0: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e5d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e5d4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E5D4u;
    {
        const bool branch_taken_0x11e5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D4u;
        // 0x11e5d8: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d4) {
            ctx->pc = 0x11E600u;
            return;
        }
    }
    ctx->pc = 0x11E5DCu;
    // 0x11e5dc: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E5DCu;
    {
        const bool branch_taken_0x11e5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5DCu;
        // 0x11e5e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5dc) {
            ctx->pc = 0x11E600u;
            return;
        }
    }
    ctx->pc = 0x11E5E4u;
    // 0x11e5e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e5e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e5ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e5f0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e5f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e5f4: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E5F4u;
    {
        const bool branch_taken_0x11e5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e5f4) {
            ctx->pc = 0x11E5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5F4u;
            // 0x11e5f8: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e5c8;
        }
    }
    ctx->pc = 0x11E5FCu;
}
