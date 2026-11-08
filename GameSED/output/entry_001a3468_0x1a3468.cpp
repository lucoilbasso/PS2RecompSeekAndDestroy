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

// Function: entry_001a3468
// Address: 0x1a3468 - 0x1a3480
void entry_001a3468_0x1a3468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3468_0x1a3468");
#endif

    ctx->pc = 0x1a3468u;

    // 0x1a3468: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x1a3468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1a346c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A346Cu;
    {
        const bool branch_taken_0x1a346c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a346c) {
            ctx->pc = 0x1A3470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A346Cu;
            // 0x1a3470: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3480u;
            return;
        }
    }
    ctx->pc = 0x1A3474u;
    // 0x1a3474: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3474u;
    {
        const bool branch_taken_0x1a3474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3474u;
        // 0x1a3478: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3474) {
            ctx->pc = 0x1A3490u;
            return;
        }
    }
    ctx->pc = 0x1A347Cu;
    // 0x1a347c: 0x0  nop
    ctx->pc = 0x1a347cu;
    // NOP
    ctx->pc = 0x1a3480u;
}
