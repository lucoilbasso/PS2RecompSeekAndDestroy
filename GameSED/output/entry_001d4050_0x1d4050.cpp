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

// Function: entry_001d4050
// Address: 0x1d4050 - 0x1d4064
void entry_001d4050_0x1d4050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4050_0x1d4050");
#endif

    ctx->pc = 0x1d4050u;

    // 0x1d4050: 0x5a20000b  blezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4050u;
    {
        const bool branch_taken_0x1d4050 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1d4050) {
            ctx->pc = 0x1D4054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4050u;
            // 0x1d4054: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4080u;
            return;
        }
    }
    ctx->pc = 0x1D4058u;
    // 0x1d4058: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1d4058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1d405c: 0x16830006  bne         $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D405Cu;
    {
        const bool branch_taken_0x1d405c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D405Cu;
        // 0x1d4060: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d405c) {
            ctx->pc = 0x1D4078u;
            return;
        }
    }
    ctx->pc = 0x1D4064u;
}
