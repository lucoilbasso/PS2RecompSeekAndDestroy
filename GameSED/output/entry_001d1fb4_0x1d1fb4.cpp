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

// Function: entry_001d1fb4
// Address: 0x1d1fb4 - 0x1d1fd8
void entry_001d1fb4_0x1d1fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1fb4_0x1d1fb4");
#endif

    ctx->pc = 0x1d1fb4u;

    // 0x1d1fb4: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d1fb8: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1d1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d1fbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d1fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d1fc0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1FC0u;
    {
        const bool branch_taken_0x1d1fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1fc0) {
            ctx->pc = 0x1D1FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1FC0u;
            // 0x1d1fc4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1FD8u;
            return;
        }
    }
    ctx->pc = 0x1D1FC8u;
    // 0x1d1fc8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d1fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d1fcc: 0x104001f7  beqz        $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x1D1FCCu;
    {
        const bool branch_taken_0x1d1fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FCCu;
        // 0x1d1fd0: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fcc) {
            ctx->pc = 0x1D27ACu;
            return;
        }
    }
    ctx->pc = 0x1D1FD4u;
    // 0x1d1fd4: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d1fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x1d1fd8u;
}
