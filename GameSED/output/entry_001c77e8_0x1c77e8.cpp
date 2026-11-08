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

// Function: entry_001c77e8
// Address: 0x1c77e8 - 0x1c7800
void entry_001c77e8_0x1c77e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c77e8_0x1c77e8");
#endif

    ctx->pc = 0x1c77e8u;

    // 0x1c77e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c77ec: 0x10c20054  beq         $a2, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1C77ECu;
    {
        const bool branch_taken_0x1c77ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77ECu;
        // 0x1c77f0: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77ec) {
            ctx->pc = 0x1C7940u;
            return;
        }
    }
    ctx->pc = 0x1C77F4u;
    // 0x1c77f4: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1C77F4u;
    {
        const bool branch_taken_0x1c77f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77F4u;
        // 0x1c77f8: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77f4) {
            ctx->pc = 0x1C7ACCu;
            return;
        }
    }
    ctx->pc = 0x1C77FCu;
    // 0x1c77fc: 0x0  nop
    ctx->pc = 0x1c77fcu;
    // NOP
    ctx->pc = 0x1c7800u;
}
