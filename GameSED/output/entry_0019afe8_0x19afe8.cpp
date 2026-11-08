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

// Function: entry_0019afe8
// Address: 0x19afe8 - 0x19b000
void entry_0019afe8_0x19afe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019afe8_0x19afe8");
#endif

    ctx->pc = 0x19afe8u;

    // 0x19afe8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19afe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19afec: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x19afecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19aff0: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AFF0u;
    {
        const bool branch_taken_0x19aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF0u;
        // 0x19aff4: 0x91030000  lbu         $v1, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aff0) {
            ctx->pc = 0x19B000u;
            return;
        }
    }
    ctx->pc = 0x19AFF8u;
    // 0x19aff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AFF8u;
    {
        const bool branch_taken_0x19aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF8u;
        // 0x19affc: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aff8) {
            ctx->pc = 0x19B004u;
            return;
        }
    }
    ctx->pc = 0x19B000u;
}
