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

// Function: entry_001ad1d4
// Address: 0x1ad1d4 - 0x1ad1fc
void entry_001ad1d4_0x1ad1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad1d4_0x1ad1d4");
#endif

    ctx->pc = 0x1ad1d4u;

label_1ad1d4:
    // 0x1ad1d4: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x1ad1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ad1d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD1D8u;
    {
        const bool branch_taken_0x1ad1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1D8u;
        // 0x1ad1dc: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1d8) {
            ctx->pc = 0x1AD1FCu;
            return;
        }
    }
    ctx->pc = 0x1AD1E0u;
    // 0x1ad1e0: 0x24e67c58  addiu       $a2, $a3, 0x7C58
    ctx->pc = 0x1ad1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31832));
    // 0x1ad1e4: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x1ad1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ad1e8: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ad1ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ad1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ad1f0: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AD1F0u;
    {
        const bool branch_taken_0x1ad1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad1f0) {
            ctx->pc = 0x1AD1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD1F0u;
            // 0x1ad1f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad1d4;
        }
    }
    ctx->pc = 0x1AD1F8u;
    // 0x1ad1f8: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x1ad1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->pc = 0x1ad1fcu;
}
