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

// Function: entry_0015ff40
// Address: 0x15ff40 - 0x15ff50
void entry_0015ff40_0x15ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff40_0x15ff40");
#endif

    ctx->pc = 0x15ff40u;

    // 0x15ff40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ff40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ff44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ff48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15FF48u;
    {
        const bool branch_taken_0x15ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF48u;
        // 0x15ff4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff48) {
            ctx->pc = 0x15FF6Cu;
            return;
        }
    }
    ctx->pc = 0x15FF50u;
}
