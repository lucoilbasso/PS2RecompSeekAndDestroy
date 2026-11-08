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

// Function: entry_00199978
// Address: 0x199978 - 0x199984
void entry_00199978_0x199978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199978_0x199978");
#endif

    ctx->pc = 0x199978u;

    // 0x199978: 0x94a20022  lhu         $v0, 0x22($a1)
    ctx->pc = 0x199978u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x19997c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19997Cu;
    {
        const bool branch_taken_0x19997c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19997c) {
            ctx->pc = 0x199980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19997Cu;
            // 0x199980: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199990u;
            return;
        }
    }
    ctx->pc = 0x199984u;
}
