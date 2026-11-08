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

// Function: entry_001b0af0
// Address: 0x1b0af0 - 0x1b0b10
void entry_001b0af0_0x1b0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0af0_0x1b0af0");
#endif

    ctx->pc = 0x1b0af0u;

    // 0x1b0af0: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1b0af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x1b0af4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0AF4u;
    {
        const bool branch_taken_0x1b0af4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AF4u;
        // 0x1b0af8: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0af4) {
            ctx->pc = 0x1B0B10u;
            return;
        }
    }
    ctx->pc = 0x1B0AFCu;
    // 0x1b0afc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1b0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b0b00: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1b0b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x1b0b04: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1b0b04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0b08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B0B08u;
    {
        const bool branch_taken_0x1b0b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B08u;
        // 0x1b0b0c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b08) {
            ctx->pc = 0x1B0B38u;
            return;
        }
    }
    ctx->pc = 0x1B0B10u;
}
