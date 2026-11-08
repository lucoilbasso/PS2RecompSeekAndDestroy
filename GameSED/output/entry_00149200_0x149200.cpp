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

// Function: entry_00149200
// Address: 0x149200 - 0x149264
void entry_00149200_0x149200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149200_0x149200");
#endif

    ctx->pc = 0x149200u;

    // 0x149200: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x149200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x149204: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149208: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x149208u;
    {
        const bool branch_taken_0x149208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149208u;
        // 0x14920c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149208) {
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x149210u;
    // 0x149210: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x149210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x149214: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149218: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x149218u;
    {
        const bool branch_taken_0x149218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149218) {
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x149220u;
    // 0x149220: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x149220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x149224: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x149224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x149228: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14922c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14922Cu;
    {
        const bool branch_taken_0x14922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14922c) {
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x149234u;
    // 0x149234: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x149234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x149238: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14923c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14923Cu;
    {
        const bool branch_taken_0x14923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14923c) {
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x149244u;
    // 0x149244: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x149244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x149248: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x149248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x14924c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14924cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149250: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149250u;
    {
        const bool branch_taken_0x149250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149250) {
            ctx->pc = 0x149264u;
            return;
        }
    }
    ctx->pc = 0x149258u;
    // 0x149258: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x14925c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14925cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149260: 0x2c490001  sltiu       $t1, $v0, 0x1
    ctx->pc = 0x149260u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x149264u;
}
