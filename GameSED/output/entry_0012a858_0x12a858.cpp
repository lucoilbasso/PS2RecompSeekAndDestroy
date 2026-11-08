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

// Function: entry_0012a858
// Address: 0x12a858 - 0x12a878
void entry_0012a858_0x12a858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a858_0x12a858");
#endif

    ctx->pc = 0x12a858u;

    // 0x12a858: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12a85c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A85Cu;
    {
        const bool branch_taken_0x12a85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a85c) {
            ctx->pc = 0x12A860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A85Cu;
            // 0x12a860: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A878u;
            return;
        }
    }
    ctx->pc = 0x12A864u;
    // 0x12a864: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x12a864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x12a868: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12a868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a86c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12A86Cu;
    {
        const bool branch_taken_0x12a86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A86Cu;
        // 0x12a870: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a86c) {
            ctx->pc = 0x12A88Cu;
            return;
        }
    }
    ctx->pc = 0x12A874u;
    // 0x12a874: 0x0  nop
    ctx->pc = 0x12a874u;
    // NOP
    ctx->pc = 0x12a878u;
}
