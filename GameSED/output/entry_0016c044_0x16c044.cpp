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

// Function: entry_0016c044
// Address: 0x16c044 - 0x16c060
void entry_0016c044_0x16c044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c044_0x16c044");
#endif

    ctx->pc = 0x16c044u;

    // 0x16c044: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x16c044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c048: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C048u;
    {
        const bool branch_taken_0x16c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c048) {
            ctx->pc = 0x16C04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C048u;
            // 0x16c04c: 0xae510208  sw          $s1, 0x208($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C060u;
            return;
        }
    }
    ctx->pc = 0x16C050u;
    // 0x16c050: 0xae430208  sw          $v1, 0x208($s2)
    ctx->pc = 0x16c050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 3));
    // 0x16c054: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16C054u;
    {
        const bool branch_taken_0x16c054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C054u;
        // 0x16c058: 0xae510204  sw          $s1, 0x204($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c054) {
            ctx->pc = 0x16C0E0u;
            return;
        }
    }
    ctx->pc = 0x16C05Cu;
    // 0x16c05c: 0x0  nop
    ctx->pc = 0x16c05cu;
    // NOP
    ctx->pc = 0x16c060u;
}
