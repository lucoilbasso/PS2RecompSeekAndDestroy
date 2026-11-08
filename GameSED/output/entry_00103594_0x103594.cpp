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

// Function: entry_00103594
// Address: 0x103594 - 0x1035a8
void entry_00103594_0x103594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103594_0x103594");
#endif

    ctx->pc = 0x103594u;

    // 0x103594: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x103594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x103598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10359c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x10359Cu;
    {
        const bool branch_taken_0x10359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10359Cu;
        // 0x1035a0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10359c) {
            ctx->pc = 0x10364Cu;
            return;
        }
    }
    ctx->pc = 0x1035A4u;
    // 0x1035a4: 0x0  nop
    ctx->pc = 0x1035a4u;
    // NOP
    ctx->pc = 0x1035a8u;
}
