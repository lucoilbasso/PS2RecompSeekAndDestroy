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

// Function: entry_00149b04
// Address: 0x149b04 - 0x149b14
void entry_00149b04_0x149b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149b04_0x149b04");
#endif

    ctx->pc = 0x149b04u;

    // 0x149b04: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x149b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x149b08: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x149B08u;
    {
        const bool branch_taken_0x149b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B08u;
        // 0x149b0c: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b08) {
            ctx->pc = 0x149AA8u;
            return;
        }
    }
    ctx->pc = 0x149B10u;
    // 0x149b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x149b14u;
}
