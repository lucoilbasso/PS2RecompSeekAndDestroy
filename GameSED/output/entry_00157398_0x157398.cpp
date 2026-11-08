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

// Function: entry_00157398
// Address: 0x157398 - 0x1573a4
void entry_00157398_0x157398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157398_0x157398");
#endif

    ctx->pc = 0x157398u;

    // 0x157398: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x157398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15739c: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x15739Cu;
    {
        const bool branch_taken_0x15739c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x15739c) {
            ctx->pc = 0x1573A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15739Cu;
            // 0x1573a0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1573A4u;
            return;
        }
    }
    ctx->pc = 0x1573A4u;
}
