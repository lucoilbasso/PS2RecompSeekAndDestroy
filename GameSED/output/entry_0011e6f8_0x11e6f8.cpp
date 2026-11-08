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

// Function: entry_0011e6f8
// Address: 0x11e6f8 - 0x11e72c
void entry_0011e6f8_0x11e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e6f8_0x11e6f8");
#endif

    ctx->pc = 0x11e6f8u;

label_11e6f8:
    // 0x11e6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6fc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e700: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e700u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e704: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E704u;
    {
        const bool branch_taken_0x11e704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E704u;
        // 0x11e708: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e704) {
            ctx->pc = 0x11E730u;
            return;
        }
    }
    ctx->pc = 0x11E70Cu;
    // 0x11e70c: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E70Cu;
    {
        const bool branch_taken_0x11e70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E70Cu;
        // 0x11e710: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e70c) {
            ctx->pc = 0x11E730u;
            return;
        }
    }
    ctx->pc = 0x11E714u;
    // 0x11e714: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e718: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e71c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e720: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e724: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E724u;
    {
        const bool branch_taken_0x11e724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e724) {
            ctx->pc = 0x11E728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E724u;
            // 0x11e728: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e6f8;
        }
    }
    ctx->pc = 0x11E72Cu;
}
