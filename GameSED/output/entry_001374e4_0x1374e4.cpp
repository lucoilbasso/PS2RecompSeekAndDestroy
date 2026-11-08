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

// Function: entry_001374e4
// Address: 0x1374e4 - 0x1374ec
void entry_001374e4_0x1374e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001374e4_0x1374e4");
#endif

    ctx->pc = 0x1374e4u;

    // 0x1374e4: 0x56c0feb2  bnel        $s6, $zero, . + 4 + (-0x14E << 2)
    ctx->pc = 0x1374E4u;
    {
        const bool branch_taken_0x1374e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1374e4) {
            ctx->pc = 0x1374E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1374E4u;
            // 0x1374e8: 0x8ed20004  lw          $s2, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136FB0u;
            return;
        }
    }
    ctx->pc = 0x1374ECu;
}
