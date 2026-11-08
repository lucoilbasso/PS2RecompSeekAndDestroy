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

// Function: entry_001b1264
// Address: 0x1b1264 - 0x1b1270
void entry_001b1264_0x1b1264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1264_0x1b1264");
#endif

    ctx->pc = 0x1b1264u;

    // 0x1b1264: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1b1264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b1268: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B1268u;
    {
        const bool branch_taken_0x1b1268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1268u;
        // 0x1b126c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1268) {
            ctx->pc = 0x1B1218u;
            return;
        }
    }
    ctx->pc = 0x1B1270u;
}
