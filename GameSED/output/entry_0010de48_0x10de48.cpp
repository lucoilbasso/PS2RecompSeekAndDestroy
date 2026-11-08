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

// Function: entry_0010de48
// Address: 0x10de48 - 0x10de70
void entry_0010de48_0x10de48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de48_0x10de48");
#endif

    ctx->pc = 0x10de48u;

    // 0x10de48: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10de4c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10de50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10de54: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DE54u;
    {
        const bool branch_taken_0x10de54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE54u;
        // 0x10de58: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de54) {
            ctx->pc = 0x10DE70u;
            return;
        }
    }
    ctx->pc = 0x10DE5Cu;
    // 0x10de5c: 0x8e0501c4  lw          $a1, 0x1C4($s0)
    ctx->pc = 0x10de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x10de60: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x10de60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x10de64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10de64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10de68: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10DE68u;
    {
        const bool branch_taken_0x10de68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE68u;
        // 0x10de6c: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de68) {
            ctx->pc = 0x10DF28u;
            return;
        }
    }
    ctx->pc = 0x10DE70u;
}
