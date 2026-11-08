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

// Function: entry_0019aea0
// Address: 0x19aea0 - 0x19aeb8
void entry_0019aea0_0x19aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aea0_0x19aea0");
#endif

    ctx->pc = 0x19aea0u;

    // 0x19aea0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19aea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19aea4: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x19aea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19aea8: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AEA8u;
    {
        const bool branch_taken_0x19aea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEA8u;
        // 0x19aeac: 0x91030000  lbu         $v1, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aea8) {
            ctx->pc = 0x19AEB8u;
            return;
        }
    }
    ctx->pc = 0x19AEB0u;
    // 0x19aeb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AEB0u;
    {
        const bool branch_taken_0x19aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEB0u;
        // 0x19aeb4: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aeb0) {
            ctx->pc = 0x19AEBCu;
            return;
        }
    }
    ctx->pc = 0x19AEB8u;
}
