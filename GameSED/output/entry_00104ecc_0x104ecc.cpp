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

// Function: entry_00104ecc
// Address: 0x104ecc - 0x104ed8
void entry_00104ecc_0x104ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ecc_0x104ecc");
#endif

    ctx->pc = 0x104eccu;

    // 0x104ecc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x104ECCu;
    {
        const bool branch_taken_0x104ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104ECCu;
        // 0x104ed0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ecc) {
            ctx->pc = 0x104EFCu;
            return;
        }
    }
    ctx->pc = 0x104ED4u;
    // 0x104ed4: 0x0  nop
    ctx->pc = 0x104ed4u;
    // NOP
    ctx->pc = 0x104ed8u;
}
