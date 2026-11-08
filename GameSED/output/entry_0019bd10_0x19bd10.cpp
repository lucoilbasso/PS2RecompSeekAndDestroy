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

// Function: entry_0019bd10
// Address: 0x19bd10 - 0x19bd30
void entry_0019bd10_0x19bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bd10_0x19bd10");
#endif

    ctx->pc = 0x19bd10u;

    // 0x19bd10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19bd14: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BD14u;
    {
        const bool branch_taken_0x19bd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd14) {
            ctx->pc = 0x19BD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BD14u;
            // 0x19bd18: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BD30u;
            return;
        }
    }
    ctx->pc = 0x19BD1Cu;
    // 0x19bd1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bd20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bd24: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19bd28: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19BD28u;
    {
        const bool branch_taken_0x19bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD28u;
        // 0x19bd2c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd28) {
            ctx->pc = 0x19BDA8u;
            return;
        }
    }
    ctx->pc = 0x19BD30u;
}
