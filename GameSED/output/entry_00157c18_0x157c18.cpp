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

// Function: entry_00157c18
// Address: 0x157c18 - 0x157c20
void entry_00157c18_0x157c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157c18_0x157c18");
#endif

    ctx->pc = 0x157c18u;

    // 0x157c18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157C18u;
    {
        const bool branch_taken_0x157c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C18u;
        // 0x157c1c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c18) {
            ctx->pc = 0x157C28u;
            return;
        }
    }
    ctx->pc = 0x157C20u;
}
