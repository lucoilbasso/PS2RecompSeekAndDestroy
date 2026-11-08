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

// Function: entry_00133708
// Address: 0x133708 - 0x133718
void entry_00133708_0x133708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133708_0x133708");
#endif

    ctx->pc = 0x133708u;

    // 0x133708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13370c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133710: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x133710u;
    {
        const bool branch_taken_0x133710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133710u;
        // 0x133714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133710) {
            ctx->pc = 0x13375Cu;
            return;
        }
    }
    ctx->pc = 0x133718u;
}
