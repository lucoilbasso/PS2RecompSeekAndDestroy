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

// Function: entry_00192548
// Address: 0x192548 - 0x192558
void entry_00192548_0x192548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192548_0x192548");
#endif

    ctx->pc = 0x192548u;

    // 0x192548: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x192548u;
    {
        const bool branch_taken_0x192548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192548u;
        // 0x19254c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192548) {
            ctx->pc = 0x1924A8u;
            return;
        }
    }
    ctx->pc = 0x192550u;
    // 0x192550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x192550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192554: 0xae220290  sw          $v0, 0x290($s1)
    ctx->pc = 0x192554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
    ctx->pc = 0x192558u;
}
