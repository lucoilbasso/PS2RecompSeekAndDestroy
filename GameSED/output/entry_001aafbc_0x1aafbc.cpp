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

// Function: entry_001aafbc
// Address: 0x1aafbc - 0x1aafc8
void entry_001aafbc_0x1aafbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aafbc_0x1aafbc");
#endif

    ctx->pc = 0x1aafbcu;

    // 0x1aafbc: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1aafbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1aafc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AAFC0u;
    {
        const bool branch_taken_0x1aafc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFC0u;
        // 0x1aafc4: 0x24849500  addiu       $a0, $a0, -0x6B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafc0) {
            ctx->pc = 0x1AAFF4u;
            return;
        }
    }
    ctx->pc = 0x1AAFC8u;
}
