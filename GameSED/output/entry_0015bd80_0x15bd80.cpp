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

// Function: entry_0015bd80
// Address: 0x15bd80 - 0x15bd90
void entry_0015bd80_0x15bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bd80_0x15bd80");
#endif

    ctx->pc = 0x15bd80u;

    // 0x15bd80: 0x1102000b  beq         $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15BD80u;
    {
        const bool branch_taken_0x15bd80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD80u;
        // 0x15bd84: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd80) {
            ctx->pc = 0x15BDB0u;
            return;
        }
    }
    ctx->pc = 0x15BD88u;
    // 0x15bd88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15BD88u;
    {
        const bool branch_taken_0x15bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD88u;
        // 0x15bd8c: 0x2443a4e8  addiu       $v1, $v0, -0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd88) {
            ctx->pc = 0x15BDD0u;
            return;
        }
    }
    ctx->pc = 0x15BD90u;
}
