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

// Function: entry_001a27c8
// Address: 0x1a27c8 - 0x1a27e0
void entry_001a27c8_0x1a27c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a27c8_0x1a27c8");
#endif

    ctx->pc = 0x1a27c8u;

    // 0x1a27c8: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a27c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a27cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A27CCu;
    {
        const bool branch_taken_0x1a27cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27CCu;
        // 0x1a27d0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27cc) {
            ctx->pc = 0x1A27E0u;
            return;
        }
    }
    ctx->pc = 0x1A27D4u;
    // 0x1a27d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a27d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A27D8u;
    {
        const bool branch_taken_0x1a27d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27D8u;
        // 0x1a27dc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27d8) {
            ctx->pc = 0x1A27F4u;
            return;
        }
    }
    ctx->pc = 0x1A27E0u;
}
