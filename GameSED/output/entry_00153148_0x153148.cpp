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

// Function: entry_00153148
// Address: 0x153148 - 0x153158
void entry_00153148_0x153148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153148_0x153148");
#endif

    ctx->pc = 0x153148u;

    // 0x153148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153148u;
    {
        const bool branch_taken_0x153148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153148u;
        // 0x15314c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153148) {
            ctx->pc = 0x153158u;
            return;
        }
    }
    ctx->pc = 0x153150u;
    // 0x153150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x153150u;
    {
        const bool branch_taken_0x153150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153150u;
        // 0x153154: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153150) {
            ctx->pc = 0x15315Cu;
            return;
        }
    }
    ctx->pc = 0x153158u;
}
