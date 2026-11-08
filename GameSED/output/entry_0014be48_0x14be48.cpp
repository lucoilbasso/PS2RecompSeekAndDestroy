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

// Function: entry_0014be48
// Address: 0x14be48 - 0x14be50
void entry_0014be48_0x14be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014be48_0x14be48");
#endif

    ctx->pc = 0x14be48u;

    // 0x14be48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14BE48u;
    {
        const bool branch_taken_0x14be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE48u;
        // 0x14be4c: 0xa4e3023a  sh          $v1, 0x23A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be48) {
            ctx->pc = 0x14BE6Cu;
            return;
        }
    }
    ctx->pc = 0x14BE50u;
}
