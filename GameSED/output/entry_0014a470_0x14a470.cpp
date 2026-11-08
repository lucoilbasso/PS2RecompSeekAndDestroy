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

// Function: entry_0014a470
// Address: 0x14a470 - 0x14a4d4
void entry_0014a470_0x14a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a470_0x14a470");
#endif

    ctx->pc = 0x14a470u;

    // 0x14a470: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a474: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a478: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A478u;
    {
        const bool branch_taken_0x14a478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A478u;
        // 0x14a47c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a478) {
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A480u;
    // 0x14a480: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x14a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14a484: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a488: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A488u;
    {
        const bool branch_taken_0x14a488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a488) {
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A490u;
    // 0x14a490: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14a494: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x14a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a498: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a49c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A49Cu;
    {
        const bool branch_taken_0x14a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a49c) {
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A4A4u;
    // 0x14a4a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14a4a8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a4ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A4ACu;
    {
        const bool branch_taken_0x14a4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a4ac) {
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A4B4u;
    // 0x14a4b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14a4b8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x14a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x14a4bc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a4c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A4C0u;
    {
        const bool branch_taken_0x14a4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a4c0) {
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A4C8u;
    // 0x14a4c8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x14a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x14a4cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a4d0: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x14a4d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x14a4d4u;
}
