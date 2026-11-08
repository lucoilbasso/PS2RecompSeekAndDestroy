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

// Function: entry_0014a5f8
// Address: 0x14a5f8 - 0x14a600
void entry_0014a5f8_0x14a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a5f8_0x14a5f8");
#endif

    ctx->pc = 0x14a5f8u;

    // 0x14a5f8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A5F8u;
    {
        const bool branch_taken_0x14a5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a5f8) {
            ctx->pc = 0x14A5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A5F8u;
            // 0x14a5fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A610u;
            return;
        }
    }
    ctx->pc = 0x14A600u;
}
