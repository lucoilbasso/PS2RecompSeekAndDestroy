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

// Function: entry_00196ad4
// Address: 0x196ad4 - 0x196af0
void entry_00196ad4_0x196ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196ad4_0x196ad4");
#endif

    ctx->pc = 0x196ad4u;

    // 0x196ad4: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x196AD4u;
    {
        const bool branch_taken_0x196ad4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x196AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AD4u;
        // 0x196ad8: 0x26a30034  addiu       $v1, $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ad4) {
            ctx->pc = 0x196AF0u;
            return;
        }
    }
    ctx->pc = 0x196ADCu;
    // 0x196adc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196ae0: 0xae420130  sw          $v0, 0x130($s2)
    ctx->pc = 0x196ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 2));
    // 0x196ae4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x196AE4u;
    {
        const bool branch_taken_0x196ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AE4u;
        // 0x196ae8: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ae4) {
            ctx->pc = 0x196B64u;
            return;
        }
    }
    ctx->pc = 0x196AECu;
    // 0x196aec: 0x0  nop
    ctx->pc = 0x196aecu;
    // NOP
    ctx->pc = 0x196af0u;
}
