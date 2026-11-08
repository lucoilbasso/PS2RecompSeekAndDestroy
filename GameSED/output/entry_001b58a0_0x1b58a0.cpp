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

// Function: entry_001b58a0
// Address: 0x1b58a0 - 0x1b58d0
void entry_001b58a0_0x1b58a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b58a0_0x1b58a0");
#endif

    ctx->pc = 0x1b58a0u;

label_1b58a0:
    // 0x1b58a0: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x1b58a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1b58a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B58A4u;
    {
        const bool branch_taken_0x1b58a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58A4u;
        // 0x1b58a8: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58a4) {
            ctx->pc = 0x1B58D8u;
            return;
        }
    }
    ctx->pc = 0x1B58ACu;
    // 0x1b58ac: 0x24e3b300  addiu       $v1, $a3, -0x4D00
    ctx->pc = 0x1b58acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947584));
    // 0x1b58b0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1b58b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b58b4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b58b8: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1b58b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b58bc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1b58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1b58c0: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B58C0u;
    {
        const bool branch_taken_0x1b58c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b58c0) {
            ctx->pc = 0x1B58C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B58C0u;
            // 0x1b58c4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B58A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b58a0;
        }
    }
    ctx->pc = 0x1B58C8u;
    // 0x1b58c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B58C8u;
    {
        const bool branch_taken_0x1b58c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58C8u;
        // 0x1b58cc: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58c8) {
            ctx->pc = 0x1B58DCu;
            return;
        }
    }
    ctx->pc = 0x1B58D0u;
}
