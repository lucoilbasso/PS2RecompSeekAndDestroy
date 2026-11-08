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

// Function: entry_001dcf48
// Address: 0x1dcf48 - 0x1dcf58
void entry_001dcf48_0x1dcf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf48_0x1dcf48");
#endif

    ctx->pc = 0x1dcf48u;

    // 0x1dcf48: 0x50a2001b  beql        $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DCF48u;
    {
        const bool branch_taken_0x1dcf48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf48) {
            ctx->pc = 0x1DCF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF48u;
            // 0x1dcf4c: 0xe4ec0008  swc1        $f12, 0x8($a3) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFB8u;
            return;
        }
    }
    ctx->pc = 0x1DCF50u;
    // 0x1dcf50: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DCF50u;
    {
        const bool branch_taken_0x1dcf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF50u;
        // 0x1dcf54: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf50) {
            ctx->pc = 0x1DCFBCu;
            return;
        }
    }
    ctx->pc = 0x1DCF58u;
}
