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

// Function: entry_0019626c
// Address: 0x19626c - 0x196274
void entry_0019626c_0x19626c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019626c_0x19626c");
#endif

    ctx->pc = 0x19626cu;

    // 0x19626c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19626Cu;
    {
        const bool branch_taken_0x19626c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19626c) {
            ctx->pc = 0x196270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19626Cu;
            // 0x196270: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196280u;
            return;
        }
    }
    ctx->pc = 0x196274u;
}
