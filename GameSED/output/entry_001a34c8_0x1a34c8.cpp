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

// Function: entry_001a34c8
// Address: 0x1a34c8 - 0x1a34e0
void entry_001a34c8_0x1a34c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a34c8_0x1a34c8");
#endif

    ctx->pc = 0x1a34c8u;

    // 0x1a34c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A34C8u;
    {
        const bool branch_taken_0x1a34c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a34c8) {
            ctx->pc = 0x1A34CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A34C8u;
            // 0x1a34cc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A34E0u;
            return;
        }
    }
    ctx->pc = 0x1A34D0u;
    // 0x1a34d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a34d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A34D4u;
    {
        const bool branch_taken_0x1a34d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34D4u;
        // 0x1a34d8: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34d4) {
            ctx->pc = 0x1A34F4u;
            return;
        }
    }
    ctx->pc = 0x1A34DCu;
    // 0x1a34dc: 0x0  nop
    ctx->pc = 0x1a34dcu;
    // NOP
    ctx->pc = 0x1a34e0u;
}
