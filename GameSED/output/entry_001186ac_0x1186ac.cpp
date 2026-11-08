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

// Function: entry_001186ac
// Address: 0x1186ac - 0x1186c8
void entry_001186ac_0x1186ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186ac_0x1186ac");
#endif

    ctx->pc = 0x1186acu;

    // 0x1186ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1186acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1186b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1186B0u;
    {
        const bool branch_taken_0x1186b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186B0u;
        // 0x1186b4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186b0) {
            ctx->pc = 0x1186C8u;
            return;
        }
    }
    ctx->pc = 0x1186B8u;
    // 0x1186b8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1186B8u;
    {
        const bool branch_taken_0x1186b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1186BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186B8u;
        // 0x1186bc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186b8) {
            ctx->pc = 0x1186C8u;
            return;
        }
    }
    ctx->pc = 0x1186C0u;
    // 0x1186c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1186C0u;
    {
        const bool branch_taken_0x1186c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1186C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186C0u;
        // 0x1186c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186c0) {
            ctx->pc = 0x1186F0u;
            return;
        }
    }
    ctx->pc = 0x1186C8u;
}
