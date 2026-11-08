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

// Function: entry_0019abd8
// Address: 0x19abd8 - 0x19abf4
void entry_0019abd8_0x19abd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019abd8_0x19abd8");
#endif

    ctx->pc = 0x19abd8u;

label_19abd8:
    // 0x19abd8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19abdc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x19abdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19abe0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x19abe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19abe4: 0x0  nop
    ctx->pc = 0x19abe4u;
    // NOP
    // 0x19abe8: 0x0  nop
    ctx->pc = 0x19abe8u;
    // NOP
    // 0x19abec: 0x14a7fffa  bne         $a1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ABECu;
    {
        const bool branch_taken_0x19abec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x19ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABECu;
        // 0x19abf0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abec) {
            ctx->pc = 0x19ABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19abd8;
        }
    }
    ctx->pc = 0x19ABF4u;
}
