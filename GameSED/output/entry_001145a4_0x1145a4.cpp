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

// Function: entry_001145a4
// Address: 0x1145a4 - 0x1145b0
void entry_001145a4_0x1145a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001145a4_0x1145a4");
#endif

    ctx->pc = 0x1145a4u;

    // 0x1145a4: 0x1453fff6  bne         $v0, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1145A4u;
    {
        const bool branch_taken_0x1145a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1145A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145A4u;
        // 0x1145a8: 0xa6040000  sh          $a0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145a4) {
            ctx->pc = 0x114580u;
            return;
        }
    }
    ctx->pc = 0x1145ACu;
    // 0x1145ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1145acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1145b0u;
}
