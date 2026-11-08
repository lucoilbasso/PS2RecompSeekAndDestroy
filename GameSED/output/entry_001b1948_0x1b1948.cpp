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

// Function: entry_001b1948
// Address: 0x1b1948 - 0x1b1960
void entry_001b1948_0x1b1948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1948_0x1b1948");
#endif

    ctx->pc = 0x1b1948u;

    // 0x1b1948: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B1948u;
    {
        const bool branch_taken_0x1b1948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1948) {
            ctx->pc = 0x1B194Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1948u;
            // 0x1b194c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B199Cu;
            return;
        }
    }
    ctx->pc = 0x1B1950u;
    // 0x1b1950: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1950u;
    {
        const bool branch_taken_0x1b1950 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1950u;
        // 0x1b1954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1950) {
            ctx->pc = 0x1B1960u;
            return;
        }
    }
    ctx->pc = 0x1B1958u;
    // 0x1b1958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1958u;
    {
        const bool branch_taken_0x1b1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1958u;
        // 0x1b195c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1958) {
            ctx->pc = 0x1B1964u;
            return;
        }
    }
    ctx->pc = 0x1B1960u;
}
