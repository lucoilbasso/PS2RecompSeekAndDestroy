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

// Function: entry_0012244c
// Address: 0x12244c - 0x122460
void entry_0012244c_0x12244c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012244c_0x12244c");
#endif

    ctx->pc = 0x12244cu;

    // 0x12244c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12244Cu;
    {
        const bool branch_taken_0x12244c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x122450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12244Cu;
        // 0x122450: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12244c) {
            ctx->pc = 0x122460u;
            return;
        }
    }
    ctx->pc = 0x122454u;
    // 0x122454: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x122454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122458: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x122458u;
    {
        const bool branch_taken_0x122458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122458) {
            ctx->pc = 0x12245Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122458u;
            // 0x12245c: 0x8ec20158  lw          $v0, 0x158($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122488u;
            return;
        }
    }
    ctx->pc = 0x122460u;
}
