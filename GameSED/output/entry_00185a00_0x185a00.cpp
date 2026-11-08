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

// Function: entry_00185a00
// Address: 0x185a00 - 0x185a0c
void entry_00185a00_0x185a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185a00_0x185a00");
#endif

    ctx->pc = 0x185a00u;

    // 0x185a00: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x185A00u;
    {
        const bool branch_taken_0x185a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a00) {
            ctx->pc = 0x185A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185A00u;
            // 0x185a04: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185A20u;
            return;
        }
    }
    ctx->pc = 0x185A08u;
    // 0x185a08: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x185a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->pc = 0x185a0cu;
}
