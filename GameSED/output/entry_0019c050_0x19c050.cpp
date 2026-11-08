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

// Function: entry_0019c050
// Address: 0x19c050 - 0x19c078
void entry_0019c050_0x19c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c050_0x19c050");
#endif

    ctx->pc = 0x19c050u;

    // 0x19c050: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c054: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19c054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c058: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c058u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F4u));
    // 0x19c05c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C05Cu;
    {
        const bool branch_taken_0x19c05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c05c) {
            ctx->pc = 0x19C060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C05Cu;
            // 0x19c060: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C078u;
            return;
        }
    }
    ctx->pc = 0x19C064u;
    // 0x19c064: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c06c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c070: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19C070u;
    {
        const bool branch_taken_0x19c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C070u;
        // 0x19c074: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c070) {
            ctx->pc = 0x19C0F0u;
            return;
        }
    }
    ctx->pc = 0x19C078u;
}
