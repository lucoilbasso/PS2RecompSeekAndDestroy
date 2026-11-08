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

// Function: entry_0019f34c
// Address: 0x19f34c - 0x19f35c
void entry_0019f34c_0x19f34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f34c_0x19f34c");
#endif

    ctx->pc = 0x19f34cu;

    // 0x19f34c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19f350: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F350u;
            // 0x19f354: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F35Cu;
            return;
        }
    }
    ctx->pc = 0x19F358u;
    // 0x19f358: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x19f358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    ctx->pc = 0x19f35cu;
}
