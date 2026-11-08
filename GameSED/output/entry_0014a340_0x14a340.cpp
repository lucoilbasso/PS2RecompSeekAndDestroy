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

// Function: entry_0014a340
// Address: 0x14a340 - 0x14a3a4
void entry_0014a340_0x14a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a340_0x14a340");
#endif

    ctx->pc = 0x14a340u;

    // 0x14a340: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x14a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14a344: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a348: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A348u;
    {
        const bool branch_taken_0x14a348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A348u;
        // 0x14a34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a348) {
            ctx->pc = 0x14A3A4u;
            return;
        }
    }
    ctx->pc = 0x14A350u;
    // 0x14a350: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x14a350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14a354: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a358: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A358u;
    {
        const bool branch_taken_0x14a358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a358) {
            ctx->pc = 0x14A3A4u;
            return;
        }
    }
    ctx->pc = 0x14A360u;
    // 0x14a360: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14a364: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x14a364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x14a368: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a36c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A36Cu;
    {
        const bool branch_taken_0x14a36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a36c) {
            ctx->pc = 0x14A3A4u;
            return;
        }
    }
    ctx->pc = 0x14A374u;
    // 0x14a374: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x14a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x14a378: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a37c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A37Cu;
    {
        const bool branch_taken_0x14a37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a37c) {
            ctx->pc = 0x14A3A4u;
            return;
        }
    }
    ctx->pc = 0x14A384u;
    // 0x14a384: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x14a384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14a388: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x14a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x14a38c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x14a38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a390: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A390u;
    {
        const bool branch_taken_0x14a390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a390) {
            ctx->pc = 0x14A3A4u;
            return;
        }
    }
    ctx->pc = 0x14A398u;
    // 0x14a398: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x14a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x14a39c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x14a39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14a3a0: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x14a3a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x14a3a4u;
}
