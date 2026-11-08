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

// Function: entry_001228a0
// Address: 0x1228a0 - 0x1228c8
void entry_001228a0_0x1228a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001228a0_0x1228a0");
#endif

    ctx->pc = 0x1228a0u;

    // 0x1228a0: 0x144d000f  bne         $v0, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x1228A0u;
    {
        const bool branch_taken_0x1228a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x1228a0) {
            ctx->pc = 0x1228E0u;
            return;
        }
    }
    ctx->pc = 0x1228A8u;
    // 0x1228a8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1228a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1228ac: 0x4c2021  addu        $a0, $v0, $t4
    ctx->pc = 0x1228acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1228b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1228b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1228b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1228B4u;
    {
        const bool branch_taken_0x1228b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1228B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228B4u;
        // 0x1228b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228b4) {
            ctx->pc = 0x1228C8u;
            return;
        }
    }
    ctx->pc = 0x1228BCu;
    // 0x1228bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1228BCu;
    {
        const bool branch_taken_0x1228bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228BCu;
        // 0x1228c0: 0xac920000  sw          $s2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228bc) {
            ctx->pc = 0x1228D0u;
            return;
        }
    }
    ctx->pc = 0x1228C4u;
    // 0x1228c4: 0x0  nop
    ctx->pc = 0x1228c4u;
    // NOP
    ctx->pc = 0x1228c8u;
}
