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

// Function: entry_001a16b4
// Address: 0x1a16b4 - 0x1a16c0
void entry_001a16b4_0x1a16b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a16b4_0x1a16b4");
#endif

    ctx->pc = 0x1a16b4u;

    // 0x1a16b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a16b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A16B8u;
    {
        const bool branch_taken_0x1a16b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16B8u;
        // 0x1a16bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16b8) {
            ctx->pc = 0x1A16C8u;
            return;
        }
    }
    ctx->pc = 0x1A16C0u;
}
