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

// Function: entry_00133468
// Address: 0x133468 - 0x133478
void entry_00133468_0x133468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133468_0x133468");
#endif

    ctx->pc = 0x133468u;

    // 0x133468: 0x5260030f  beql        $s3, $zero, . + 4 + (0x30F << 2)
    ctx->pc = 0x133468u;
    {
        const bool branch_taken_0x133468 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x133468) {
            ctx->pc = 0x13346Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133468u;
            // 0x13346c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133470u;
    // 0x133470: 0x10000307  b           . + 4 + (0x307 << 2)
    ctx->pc = 0x133470u;
    {
        const bool branch_taken_0x133470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133470u;
        // 0x133474: 0xc6600088  lwc1        $f0, 0x88($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133470) {
            ctx->pc = 0x134090u;
            return;
        }
    }
    ctx->pc = 0x133478u;
}
