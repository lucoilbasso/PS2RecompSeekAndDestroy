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

// Function: entry_0013fdbc
// Address: 0x13fdbc - 0x13fdc4
void entry_0013fdbc_0x13fdbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fdbc_0x13fdbc");
#endif

    ctx->pc = 0x13fdbcu;

    // 0x13fdbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FDBCu;
    {
        const bool branch_taken_0x13fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fdbc) {
            ctx->pc = 0x13FDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FDBCu;
            // 0x13fdc0: 0xac40014c  sw          $zero, 0x14C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FDC4u;
            return;
        }
    }
    ctx->pc = 0x13FDC4u;
}
