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

// Function: entry_001173e0
// Address: 0x1173e0 - 0x117408
void entry_001173e0_0x1173e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001173e0_0x1173e0");
#endif

    ctx->pc = 0x1173e0u;

    // 0x1173e0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1173e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1173e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1173E4u;
    {
        const bool branch_taken_0x1173e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1173e4) {
            ctx->pc = 0x1173E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1173E4u;
            // 0x1173e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117408u;
            return;
        }
    }
    ctx->pc = 0x1173ECu;
    // 0x1173ec: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1173ECu;
    {
        const bool branch_taken_0x1173ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1173F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173ECu;
        // 0x1173f0: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173ec) {
            ctx->pc = 0x117424u;
            return;
        }
    }
    ctx->pc = 0x1173F4u;
    // 0x1173f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1173f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1173f8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1173f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1173fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1173FCu;
    {
        const bool branch_taken_0x1173fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173FCu;
        // 0x117400: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173fc) {
            ctx->pc = 0x117424u;
            return;
        }
    }
    ctx->pc = 0x117404u;
    // 0x117404: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x117404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x117408u;
}
