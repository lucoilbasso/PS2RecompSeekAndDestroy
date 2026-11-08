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

// Function: entry_001ad6f0
// Address: 0x1ad6f0 - 0x1ad70c
void entry_001ad6f0_0x1ad6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad6f0_0x1ad6f0");
#endif

    ctx->pc = 0x1ad6f0u;

label_1ad6f0:
    // 0x1ad6f0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1ad6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ad6f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ad6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ad6f8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1ad6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ad6fc: 0x0  nop
    ctx->pc = 0x1ad6fcu;
    // NOP
    // 0x1ad700: 0x0  nop
    ctx->pc = 0x1ad700u;
    // NOP
    // 0x1ad704: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AD704u;
    {
        const bool branch_taken_0x1ad704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad704) {
            ctx->pc = 0x1AD6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad6f0;
        }
    }
    ctx->pc = 0x1AD70Cu;
}
