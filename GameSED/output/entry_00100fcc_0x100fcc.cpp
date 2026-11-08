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

// Function: entry_00100fcc
// Address: 0x100fcc - 0x100fe4
void entry_00100fcc_0x100fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100fcc_0x100fcc");
#endif

    ctx->pc = 0x100fccu;

    // 0x100fcc: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x100FCCu;
    {
        const bool branch_taken_0x100fcc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x100FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FCCu;
        // 0x100fd0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fcc) {
            ctx->pc = 0x100FE4u;
            return;
        }
    }
    ctx->pc = 0x100FD4u;
    // 0x100fd4: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x100fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x100fd8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x100fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100fdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x100FDCu;
    {
        const bool branch_taken_0x100fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100fdc) {
            ctx->pc = 0x100FE8u;
            return;
        }
    }
    ctx->pc = 0x100FE4u;
}
