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

// Function: entry_001d5b08
// Address: 0x1d5b08 - 0x1d5b24
void entry_001d5b08_0x1d5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b08_0x1d5b08");
#endif

    ctx->pc = 0x1d5b08u;

label_1d5b08:
    // 0x1d5b08: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1d5b0c: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x1d5b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d5b10: 0x0  nop
    ctx->pc = 0x1d5b10u;
    // NOP
    // 0x1d5b14: 0x0  nop
    ctx->pc = 0x1d5b14u;
    // NOP
    // 0x1d5b18: 0x0  nop
    ctx->pc = 0x1d5b18u;
    // NOP
    // 0x1d5b1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5B1Cu;
    {
        const bool branch_taken_0x1d5b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B1Cu;
        // 0x1d5b20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b1c) {
            ctx->pc = 0x1D5B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b08;
        }
    }
    ctx->pc = 0x1D5B24u;
}
