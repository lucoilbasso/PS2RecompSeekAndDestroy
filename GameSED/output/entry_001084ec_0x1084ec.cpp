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

// Function: entry_001084ec
// Address: 0x1084ec - 0x1084f8
void entry_001084ec_0x1084ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001084ec_0x1084ec");
#endif

    ctx->pc = 0x1084ecu;

    // 0x1084ec: 0x2232024  and         $a0, $s1, $v1
    ctx->pc = 0x1084ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1084f0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1084F0u;
    {
        const bool branch_taken_0x1084f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1084F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084F0u;
        // 0x1084f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084f0) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x1084F8u;
}
