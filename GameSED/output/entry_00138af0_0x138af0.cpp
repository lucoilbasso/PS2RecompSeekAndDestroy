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

// Function: entry_00138af0
// Address: 0x138af0 - 0x138afc
void entry_00138af0_0x138af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138af0_0x138af0");
#endif

    ctx->pc = 0x138af0u;

    // 0x138af0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x138af0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138af4: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138AF4u;
    {
        const bool branch_taken_0x138af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x138AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AF4u;
        // 0x138af8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138af4) {
            ctx->pc = 0x138B18u;
            return;
        }
    }
    ctx->pc = 0x138AFCu;
}
