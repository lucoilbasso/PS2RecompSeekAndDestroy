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

// Function: entry_0019c8ac
// Address: 0x19c8ac - 0x19c8bc
void entry_0019c8ac_0x19c8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8ac_0x19c8ac");
#endif

    ctx->pc = 0x19c8acu;

    // 0x19c8ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C8ACu;
    {
        const bool branch_taken_0x19c8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8ACu;
        // 0x19c8b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8ac) {
            ctx->pc = 0x19C8BCu;
            return;
        }
    }
    ctx->pc = 0x19C8B4u;
    // 0x19c8b4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19c8b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c8b8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x19c8b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x19c8bcu;
}
