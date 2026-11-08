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

// Function: entry_00166364
// Address: 0x166364 - 0x166370
void entry_00166364_0x166364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166364_0x166364");
#endif

    ctx->pc = 0x166364u;

    // 0x166364: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x166364u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x166368: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x166368u;
    {
        const bool branch_taken_0x166368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166368u;
        // 0x16636c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166368) {
            ctx->pc = 0x16659Cu;
            return;
        }
    }
    ctx->pc = 0x166370u;
}
