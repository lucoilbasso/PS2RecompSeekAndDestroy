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

// Function: entry_00150210
// Address: 0x150210 - 0x150220
void entry_00150210_0x150210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150210_0x150210");
#endif

    ctx->pc = 0x150210u;

    // 0x150210: 0x12220017  beq         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150210u;
    {
        const bool branch_taken_0x150210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x150214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150210u;
        // 0x150214: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150210) {
            ctx->pc = 0x150270u;
            return;
        }
    }
    ctx->pc = 0x150218u;
    // 0x150218: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x150218u;
    {
        const bool branch_taken_0x150218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150218u;
        // 0x15021c: 0xae110840  sw          $s1, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150218) {
            ctx->pc = 0x150278u;
            return;
        }
    }
    ctx->pc = 0x150220u;
}
