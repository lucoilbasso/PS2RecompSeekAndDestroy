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

// Function: entry_00180268
// Address: 0x180268 - 0x18027c
void entry_00180268_0x180268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180268_0x180268");
#endif

    ctx->pc = 0x180268u;

    // 0x180268: 0x55400005  bnel        $t2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x180268u;
    {
        const bool branch_taken_0x180268 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x180268) {
            ctx->pc = 0x18026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180268u;
            // 0x18026c: 0xa5d00000  sh          $s0, 0x0($t6) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180280u;
            return;
        }
    }
    ctx->pc = 0x180270u;
    // 0x180270: 0x2e220001  sltiu       $v0, $s1, 0x1
    ctx->pc = 0x180270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x180274: 0xa1d10004  sb          $s1, 0x4($t6)
    ctx->pc = 0x180274u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x180278: 0xa1c20005  sb          $v0, 0x5($t6)
    ctx->pc = 0x180278u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18027cu;
}
