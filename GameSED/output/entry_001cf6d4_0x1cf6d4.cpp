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

// Function: entry_001cf6d4
// Address: 0x1cf6d4 - 0x1cf700
void entry_001cf6d4_0x1cf6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf6d4_0x1cf6d4");
#endif

    ctx->pc = 0x1cf6d4u;

    // 0x1cf6d4: 0x27c4e5e8  addiu       $a0, $fp, -0x1A18
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960616));
    // 0x1cf6d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cf6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cf6dc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1cf6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1cf6e0: 0x16300007  bne         $s1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF6E0u;
    {
        const bool branch_taken_0x1cf6e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6E0u;
        // 0x1cf6e4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6e0) {
            ctx->pc = 0x1CF700u;
            return;
        }
    }
    ctx->pc = 0x1CF6E8u;
    // 0x1cf6e8: 0x2532021  addu        $a0, $s2, $s3
    ctx->pc = 0x1cf6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1cf6ec: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x1cf6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1cf6f0: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x1cf6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1cf6f4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1CF6F4u;
    {
        const bool branch_taken_0x1cf6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6F4u;
        // 0x1cf6f8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6f4) {
            ctx->pc = 0x1CF804u;
            return;
        }
    }
    ctx->pc = 0x1CF6FCu;
    // 0x1cf6fc: 0x0  nop
    ctx->pc = 0x1cf6fcu;
    // NOP
    ctx->pc = 0x1cf700u;
}
