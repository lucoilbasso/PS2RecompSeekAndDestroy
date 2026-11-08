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

// Function: entry_0011e058
// Address: 0x11e058 - 0x11e08c
void entry_0011e058_0x11e058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e058_0x11e058");
#endif

    ctx->pc = 0x11e058u;

label_11e058:
    // 0x11e058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11e058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e05c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11e060: 0x2ca30045  sltiu       $v1, $a1, 0x45
    ctx->pc = 0x11e060u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e064: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E064u;
    {
        const bool branch_taken_0x11e064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E064u;
        // 0x11e068: 0x481021  addu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e064) {
            ctx->pc = 0x11E090u;
            return;
        }
    }
    ctx->pc = 0x11E06Cu;
    // 0x11e06c: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E06Cu;
    {
        const bool branch_taken_0x11e06c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x11E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E06Cu;
        // 0x11e070: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e06c) {
            ctx->pc = 0x11E090u;
            return;
        }
    }
    ctx->pc = 0x11E074u;
    // 0x11e074: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e07c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e080: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x11e080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e084: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E084u;
    {
        const bool branch_taken_0x11e084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e084) {
            ctx->pc = 0x11E088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E084u;
            // 0x11e088: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e058;
        }
    }
    ctx->pc = 0x11E08Cu;
}
