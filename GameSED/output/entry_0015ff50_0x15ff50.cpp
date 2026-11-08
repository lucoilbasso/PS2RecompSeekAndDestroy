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

// Function: entry_0015ff50
// Address: 0x15ff50 - 0x15ff60
void entry_0015ff50_0x15ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff50_0x15ff50");
#endif

    ctx->pc = 0x15ff50u;

    // 0x15ff50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ff54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ff58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15FF58u;
    {
        const bool branch_taken_0x15ff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF58u;
        // 0x15ff5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff58) {
            ctx->pc = 0x15FF6Cu;
            return;
        }
    }
    ctx->pc = 0x15FF60u;
}
