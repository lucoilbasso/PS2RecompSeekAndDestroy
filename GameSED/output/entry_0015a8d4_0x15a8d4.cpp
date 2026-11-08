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

// Function: entry_0015a8d4
// Address: 0x15a8d4 - 0x15a8e0
void entry_0015a8d4_0x15a8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a8d4_0x15a8d4");
#endif

    ctx->pc = 0x15a8d4u;

    // 0x15a8d4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15a8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x15a8d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A8D8u;
    {
        const bool branch_taken_0x15a8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a8d8) {
            ctx->pc = 0x15A8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A8D8u;
            // 0x15a8dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A8ECu;
            return;
        }
    }
    ctx->pc = 0x15A8E0u;
}
