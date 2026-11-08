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

// Function: entry_00184ba0
// Address: 0x184ba0 - 0x184bac
void entry_00184ba0_0x184ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184ba0_0x184ba0");
#endif

    ctx->pc = 0x184ba0u;

    // 0x184ba0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x184BA0u;
    {
        const bool branch_taken_0x184ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BA0u;
        // 0x184ba4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ba0) {
            ctx->pc = 0x184BACu;
            return;
        }
    }
    ctx->pc = 0x184BA8u;
    // 0x184ba8: 0xae26012c  sw          $a2, 0x12C($s1)
    ctx->pc = 0x184ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 6));
    ctx->pc = 0x184bacu;
}
