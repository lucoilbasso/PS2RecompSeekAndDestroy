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

// Function: entry_00120ac8
// Address: 0x120ac8 - 0x120adc
void entry_00120ac8_0x120ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120ac8_0x120ac8");
#endif

    ctx->pc = 0x120ac8u;

    // 0x120ac8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x120AC8u;
    {
        const bool branch_taken_0x120ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AC8u;
        // 0x120acc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ac8) {
            ctx->pc = 0x120AE0u;
            return;
        }
    }
    ctx->pc = 0x120AD0u;
    // 0x120ad0: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x120ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x120ad4: 0x1620ffc6  bnez        $s1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x120AD4u;
    {
        const bool branch_taken_0x120ad4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AD4u;
        // 0x120ad8: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ad4) {
            ctx->pc = 0x1209F0u;
            return;
        }
    }
    ctx->pc = 0x120ADCu;
}
