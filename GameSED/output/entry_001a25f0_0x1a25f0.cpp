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

// Function: entry_001a25f0
// Address: 0x1a25f0 - 0x1a2608
void entry_001a25f0_0x1a25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a25f0_0x1a25f0");
#endif

    ctx->pc = 0x1a25f0u;

    // 0x1a25f0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a25f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a25f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A25F4u;
    {
        const bool branch_taken_0x1a25f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25F4u;
        // 0x1a25f8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25f4) {
            ctx->pc = 0x1A2608u;
            return;
        }
    }
    ctx->pc = 0x1A25FCu;
    // 0x1a25fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a2600: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2600u;
    {
        const bool branch_taken_0x1a2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2600u;
        // 0x1a2604: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2600) {
            ctx->pc = 0x1A261Cu;
            return;
        }
    }
    ctx->pc = 0x1A2608u;
}
