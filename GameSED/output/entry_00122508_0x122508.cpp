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

// Function: entry_00122508
// Address: 0x122508 - 0x122518
void entry_00122508_0x122508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122508_0x122508");
#endif

    ctx->pc = 0x122508u;

    // 0x122508: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x122508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12250c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12250Cu;
    {
        const bool branch_taken_0x12250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12250Cu;
        // 0x122510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12250c) {
            ctx->pc = 0x12253Cu;
            return;
        }
    }
    ctx->pc = 0x122514u;
    // 0x122514: 0x0  nop
    ctx->pc = 0x122514u;
    // NOP
    ctx->pc = 0x122518u;
}
