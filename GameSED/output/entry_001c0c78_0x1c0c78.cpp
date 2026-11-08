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

// Function: entry_001c0c78
// Address: 0x1c0c78 - 0x1c0c94
void entry_001c0c78_0x1c0c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0c78_0x1c0c78");
#endif

    ctx->pc = 0x1c0c78u;

    // 0x1c0c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0c7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c0c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c0c80: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0C80u;
    {
        const bool branch_taken_0x1c0c80 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C80u;
        // 0x1c0c84: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c80) {
            ctx->pc = 0x1C0C94u;
            return;
        }
    }
    ctx->pc = 0x1C0C88u;
    // 0x1c0c88: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c0c8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0C8Cu;
    {
        const bool branch_taken_0x1c0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C8Cu;
        // 0x1c0c90: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c8c) {
            ctx->pc = 0x1C0C98u;
            return;
        }
    }
    ctx->pc = 0x1C0C94u;
}
