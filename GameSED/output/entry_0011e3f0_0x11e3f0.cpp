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

// Function: entry_0011e3f0
// Address: 0x11e3f0 - 0x11e424
void entry_0011e3f0_0x11e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e3f0_0x11e3f0");
#endif

    ctx->pc = 0x11e3f0u;

label_11e3f0:
    // 0x11e3f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3f4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e3f8: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e3f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e3fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E3FCu;
    {
        const bool branch_taken_0x11e3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3FCu;
        // 0x11e400: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3fc) {
            ctx->pc = 0x11E428u;
            return;
        }
    }
    ctx->pc = 0x11E404u;
    // 0x11e404: 0x10880008  beq         $a0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E404u;
    {
        const bool branch_taken_0x11e404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x11E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E404u;
        // 0x11e408: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e404) {
            ctx->pc = 0x11E428u;
            return;
        }
    }
    ctx->pc = 0x11E40Cu;
    // 0x11e40c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e414: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e418: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x11e418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e41c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E41Cu;
    {
        const bool branch_taken_0x11e41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e41c) {
            ctx->pc = 0x11E420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E41Cu;
            // 0x11e420: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e3f0;
        }
    }
    ctx->pc = 0x11E424u;
}
