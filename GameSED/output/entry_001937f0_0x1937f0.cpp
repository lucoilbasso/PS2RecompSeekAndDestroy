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

// Function: entry_001937f0
// Address: 0x1937f0 - 0x193800
void entry_001937f0_0x1937f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001937f0_0x1937f0");
#endif

    ctx->pc = 0x1937f0u;

    // 0x1937f0: 0x152c0003  bne         $t1, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1937F0u;
    {
        const bool branch_taken_0x1937f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 12));
        ctx->pc = 0x1937F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937F0u;
        // 0x1937f4: 0xc500000c  lwc1        $f0, 0xC($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937f0) {
            ctx->pc = 0x193800u;
            return;
        }
    }
    ctx->pc = 0x1937F8u;
    // 0x1937f8: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x1937f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1937fc: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x1937fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x193800u;
}
