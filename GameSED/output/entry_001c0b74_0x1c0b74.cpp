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

// Function: entry_001c0b74
// Address: 0x1c0b74 - 0x1c0b90
void entry_001c0b74_0x1c0b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0b74_0x1c0b74");
#endif

    ctx->pc = 0x1c0b74u;

    // 0x1c0b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0b78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c0b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c0b7c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0B7Cu;
    {
        const bool branch_taken_0x1c0b7c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B7Cu;
        // 0x1c0b80: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b7c) {
            ctx->pc = 0x1C0B90u;
            return;
        }
    }
    ctx->pc = 0x1C0B84u;
    // 0x1c0b84: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1c0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c0b88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0B88u;
    {
        const bool branch_taken_0x1c0b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B88u;
        // 0x1c0b8c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b88) {
            ctx->pc = 0x1C0B94u;
            return;
        }
    }
    ctx->pc = 0x1C0B90u;
}
