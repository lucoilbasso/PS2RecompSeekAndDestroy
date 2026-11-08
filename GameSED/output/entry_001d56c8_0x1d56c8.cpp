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

// Function: entry_001d56c8
// Address: 0x1d56c8 - 0x1d56d4
void entry_001d56c8_0x1d56c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d56c8_0x1d56c8");
#endif

    ctx->pc = 0x1d56c8u;

    // 0x1d56c8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1d56c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1d56cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D56CCu;
    {
        const bool branch_taken_0x1d56cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56CCu;
        // 0x1d56d0: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56cc) {
            ctx->pc = 0x1D56E0u;
            return;
        }
    }
    ctx->pc = 0x1D56D4u;
}
