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

// Function: entry_0012fcbc
// Address: 0x12fcbc - 0x12fcc4
void entry_0012fcbc_0x12fcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fcbc_0x12fcbc");
#endif

    ctx->pc = 0x12fcbcu;

    // 0x12fcbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12FCBCu;
    {
        const bool branch_taken_0x12fcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fcbc) {
            ctx->pc = 0x12FCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FCBCu;
            // 0x12fcc0: 0xafd60000  sw          $s6, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FCC4u;
            return;
        }
    }
    ctx->pc = 0x12FCC4u;
}
