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

// Function: entry_0018dbe8
// Address: 0x18dbe8 - 0x18dbf0
void entry_0018dbe8_0x18dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dbe8_0x18dbe8");
#endif

    ctx->pc = 0x18dbe8u;

    // 0x18dbe8: 0x5440fd55  bnel        $v0, $zero, . + 4 + (-0x2AB << 2)
    ctx->pc = 0x18DBE8u;
    {
        const bool branch_taken_0x18dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dbe8) {
            ctx->pc = 0x18DBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DBE8u;
            // 0x18dbec: 0x92700000  lbu         $s0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D140u;
            return;
        }
    }
    ctx->pc = 0x18DBF0u;
}
