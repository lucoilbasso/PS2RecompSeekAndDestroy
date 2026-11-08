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

// Function: entry_0012e3f8
// Address: 0x12e3f8 - 0x12e404
void entry_0012e3f8_0x12e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e3f8_0x12e3f8");
#endif

    ctx->pc = 0x12e3f8u;

    // 0x12e3f8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E3F8u;
    {
        const bool branch_taken_0x12e3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3F8u;
        // 0x12e3fc: 0xffbf00b8  sd          $ra, 0xB8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3f8) {
            ctx->pc = 0x12E460u;
            return;
        }
    }
    ctx->pc = 0x12E400u;
    // 0x12e400: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x12e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    ctx->pc = 0x12e404u;
}
