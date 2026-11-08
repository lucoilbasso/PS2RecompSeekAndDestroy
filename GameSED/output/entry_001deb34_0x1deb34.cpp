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

// Function: entry_001deb34
// Address: 0x1deb34 - 0x1deb3c
void entry_001deb34_0x1deb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deb34_0x1deb34");
#endif

    ctx->pc = 0x1deb34u;

    // 0x1deb34: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DEB34u;
    {
        const bool branch_taken_0x1deb34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deb34) {
            ctx->pc = 0x1DEB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEB34u;
            // 0x1deb38: 0xae53012c  sw          $s3, 0x12C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEB3Cu;
            return;
        }
    }
    ctx->pc = 0x1DEB3Cu;
}
