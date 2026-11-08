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

// Function: entry_001c4b18
// Address: 0x1c4b18 - 0x1c4b2c
void entry_001c4b18_0x1c4b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4b18_0x1c4b18");
#endif

    ctx->pc = 0x1c4b18u;

    // 0x1c4b18: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x1c4b18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c4b1c: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4B1Cu;
    {
        const bool branch_taken_0x1c4b1c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B1Cu;
        // 0x1c4b20: 0x8e0a0010  lw          $t2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b1c) {
            ctx->pc = 0x1C4B2Cu;
            return;
        }
    }
    ctx->pc = 0x1C4B24u;
    // 0x1c4b24: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x1c4b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4b28: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c4b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1c4b2cu;
}
