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

// Function: entry_0019c5b8
// Address: 0x19c5b8 - 0x19c5d8
void entry_0019c5b8_0x19c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c5b8_0x19c5b8");
#endif

    ctx->pc = 0x19c5b8u;

    // 0x19c5b8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19c5bc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C5BCu;
    {
        const bool branch_taken_0x19c5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c5bc) {
            ctx->pc = 0x19C5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C5BCu;
            // 0x19c5c0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C5D8u;
            return;
        }
    }
    ctx->pc = 0x19C5C4u;
    // 0x19c5c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c5c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c5cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c5d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19C5D0u;
    {
        const bool branch_taken_0x19c5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5D0u;
        // 0x19c5d4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5d0) {
            ctx->pc = 0x19C650u;
            return;
        }
    }
    ctx->pc = 0x19C5D8u;
}
