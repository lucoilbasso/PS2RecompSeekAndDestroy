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

// Function: entry_0019ad44
// Address: 0x19ad44 - 0x19ad60
void entry_0019ad44_0x19ad44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ad44_0x19ad44");
#endif

    ctx->pc = 0x19ad44u;

    // 0x19ad44: 0x0  nop
    ctx->pc = 0x19ad44u;
    // NOP
    // 0x19ad48: 0x0  nop
    ctx->pc = 0x19ad48u;
    // NOP
    // 0x19ad4c: 0x14e9fff6  bne         $a3, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AD4Cu;
    {
        const bool branch_taken_0x19ad4c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x19AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD4Cu;
        // 0x19ad50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad4c) {
            ctx->pc = 0x19AD28u;
            return;
        }
    }
    ctx->pc = 0x19AD54u;
    // 0x19ad54: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19AD54u;
    {
        const bool branch_taken_0x19ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD54u;
        // 0x19ad58: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad54) {
            ctx->pc = 0x19ADD0u;
            return;
        }
    }
    ctx->pc = 0x19AD5Cu;
    // 0x19ad5c: 0x0  nop
    ctx->pc = 0x19ad5cu;
    // NOP
    ctx->pc = 0x19ad60u;
}
