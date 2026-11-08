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

// Function: entry_001abae8
// Address: 0x1abae8 - 0x1abb04
void entry_001abae8_0x1abae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abae8_0x1abae8");
#endif

    ctx->pc = 0x1abae8u;

label_1abae8:
    // 0x1abae8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1abae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1abaec: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x1ABAECu;
    {
        const bool branch_taken_0x1abaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAECu;
        // 0x1abaf0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abaec) {
            ctx->pc = 0x1AB8F8u;
            return;
        }
    }
    ctx->pc = 0x1ABAF4u;
    // 0x1abaf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1abaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abaf8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1abaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1abafc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ABAFCu;
    {
        const bool branch_taken_0x1abafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAFCu;
        // 0x1abb00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abafc) {
            ctx->pc = 0x1ABAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abae8;
        }
    }
    ctx->pc = 0x1ABB04u;
}
