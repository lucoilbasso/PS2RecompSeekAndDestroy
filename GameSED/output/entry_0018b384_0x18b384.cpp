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

// Function: entry_0018b384
// Address: 0x18b384 - 0x18b38c
void entry_0018b384_0x18b384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b384_0x18b384");
#endif

    ctx->pc = 0x18b384u;

    // 0x18b384: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18B384u;
    {
        const bool branch_taken_0x18b384 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b384) {
            ctx->pc = 0x18B388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B384u;
            // 0x18b388: 0xae11012c  sw          $s1, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B38Cu;
            return;
        }
    }
    ctx->pc = 0x18B38Cu;
}
