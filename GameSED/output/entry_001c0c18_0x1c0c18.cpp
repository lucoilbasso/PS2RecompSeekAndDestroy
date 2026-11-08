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

// Function: entry_001c0c18
// Address: 0x1c0c18 - 0x1c0c3c
void entry_001c0c18_0x1c0c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0c18_0x1c0c18");
#endif

    ctx->pc = 0x1c0c18u;

    // 0x1c0c18: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c0c18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c0c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0c20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0c24: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1c0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1c0c28: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0C28u;
    {
        const bool branch_taken_0x1c0c28 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C28u;
        // 0x1c0c2c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c28) {
            ctx->pc = 0x1C0C3Cu;
            return;
        }
    }
    ctx->pc = 0x1C0C30u;
    // 0x1c0c30: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1c0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c0c34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0C34u;
    {
        const bool branch_taken_0x1c0c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C34u;
        // 0x1c0c38: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c34) {
            ctx->pc = 0x1C0C40u;
            return;
        }
    }
    ctx->pc = 0x1C0C3Cu;
}
