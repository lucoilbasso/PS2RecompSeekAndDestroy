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

// Function: entry_0014bdf8
// Address: 0x14bdf8 - 0x14be04
void entry_0014bdf8_0x14bdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bdf8_0x14bdf8");
#endif

    ctx->pc = 0x14bdf8u;

    // 0x14bdf8: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14BDF8u;
    {
        const bool branch_taken_0x14bdf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x14BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDF8u;
        // 0x14bdfc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdf8) {
            ctx->pc = 0x14BE04u;
            return;
        }
    }
    ctx->pc = 0x14BE00u;
    // 0x14be00: 0xace4023c  sw          $a0, 0x23C($a3)
    ctx->pc = 0x14be00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 4));
    ctx->pc = 0x14be04u;
}
