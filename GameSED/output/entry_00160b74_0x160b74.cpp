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

// Function: entry_00160b74
// Address: 0x160b74 - 0x160b80
void entry_00160b74_0x160b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b74_0x160b74");
#endif

    ctx->pc = 0x160b74u;

    // 0x160b74: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x160b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x160b78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160B78u;
    {
        const bool branch_taken_0x160b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b78) {
            ctx->pc = 0x160B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160B78u;
            // 0x160b7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B8Cu;
            return;
        }
    }
    ctx->pc = 0x160B80u;
}
