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

// Function: entry_001c0bf8
// Address: 0x1c0bf8 - 0x1c0c18
void entry_001c0bf8_0x1c0bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0bf8_0x1c0bf8");
#endif

    ctx->pc = 0x1c0bf8u;

    // 0x1c0bf8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c0bf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c0bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0c00: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c0c04: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1c0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1c0c08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1c0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c0c0c: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0C0Cu;
    {
        const bool branch_taken_0x1c0c0c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1C0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C0Cu;
        // 0x1c0c10: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c0c) {
            ctx->pc = 0x1C0C18u;
            return;
        }
    }
    ctx->pc = 0x1C0C14u;
    // 0x1c0c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1c0c18u;
}
