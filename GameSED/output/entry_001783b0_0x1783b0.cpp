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

// Function: entry_001783b0
// Address: 0x1783b0 - 0x1783d0
void entry_001783b0_0x1783b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001783b0_0x1783b0");
#endif

    ctx->pc = 0x1783b0u;

    // 0x1783b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1783b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1783b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1783b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783b8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1783b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1783bc: 0x8c621044  lw          $v0, 0x1044($v1)
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4164)));
    // 0x1783c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1783c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1783c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1783C4u;
    {
        const bool branch_taken_0x1783c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1783C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783C4u;
        // 0x1783c8: 0xac621044  sw          $v0, 0x1044($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783c4) {
            ctx->pc = 0x1783D0u;
            return;
        }
    }
    ctx->pc = 0x1783CCu;
    // 0x1783cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1783ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1783d0u;
}
