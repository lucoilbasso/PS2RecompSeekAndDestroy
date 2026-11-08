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

// Function: entry_00161710
// Address: 0x161710 - 0x161718
void entry_00161710_0x161710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161710_0x161710");
#endif

    ctx->pc = 0x161710u;

    // 0x161710: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x161710u;
    {
        const bool branch_taken_0x161710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161710u;
        // 0x161714: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161710) {
            ctx->pc = 0x161730u;
            return;
        }
    }
    ctx->pc = 0x161718u;
}
