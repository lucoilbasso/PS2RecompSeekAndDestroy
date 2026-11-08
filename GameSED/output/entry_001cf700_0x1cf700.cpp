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

// Function: entry_001cf700
// Address: 0x1cf700 - 0x1cf718
void entry_001cf700_0x1cf700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf700_0x1cf700");
#endif

    ctx->pc = 0x1cf700u;

    // 0x1cf700: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1cf700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1cf704: 0x14550004  bne         $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF704u;
    {
        const bool branch_taken_0x1cf704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1CF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF704u;
        // 0x1cf708: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf704) {
            ctx->pc = 0x1CF718u;
            return;
        }
    }
    ctx->pc = 0x1CF70Cu;
    // 0x1cf70c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF70Cu;
    {
        const bool branch_taken_0x1cf70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF70Cu;
        // 0x1cf710: 0xaed10000  sw          $s1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf70c) {
            ctx->pc = 0x1CF720u;
            return;
        }
    }
    ctx->pc = 0x1CF714u;
    // 0x1cf714: 0x0  nop
    ctx->pc = 0x1cf714u;
    // NOP
    ctx->pc = 0x1cf718u;
}
