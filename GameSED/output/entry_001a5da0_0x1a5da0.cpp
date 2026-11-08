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

// Function: entry_001a5da0
// Address: 0x1a5da0 - 0x1a5de8
void entry_001a5da0_0x1a5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5da0_0x1a5da0");
#endif

    ctx->pc = 0x1a5da0u;

    // 0x1a5da0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a5da4: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a5da8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a5da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a5dac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a5dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5db0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A5DB0u;
    {
        const bool branch_taken_0x1a5db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DB0u;
        // 0x1a5db4: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5db0) {
            ctx->pc = 0x1A5E60u;
            return;
        }
    }
    ctx->pc = 0x1A5DB8u;
    // 0x1a5db8: 0x3c028001  lui         $v0, 0x8001
    ctx->pc = 0x1a5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32769 << 16));
    // 0x1a5dbc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1a5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5dc0: 0x28a30200  slti        $v1, $a1, 0x200
    ctx->pc = 0x1a5dc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a5dc4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5DC4u;
    {
        const bool branch_taken_0x1a5dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5dc4) {
            ctx->pc = 0x1A5DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5DC4u;
            // 0x1a5dc8: 0x28a20300  slti        $v0, $a1, 0x300 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)768) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5DE8u;
            return;
        }
    }
    ctx->pc = 0x1A5DCCu;
    // 0x1a5dcc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5dd0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a5dd4: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x1a5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x1a5dd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5ddc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A5DDCu;
    {
        const bool branch_taken_0x1a5ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DDCu;
        // 0x1a5de0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ddc) {
            ctx->pc = 0x1A5E58u;
            return;
        }
    }
    ctx->pc = 0x1A5DE4u;
    // 0x1a5de4: 0x0  nop
    ctx->pc = 0x1a5de4u;
    // NOP
    ctx->pc = 0x1a5de8u;
}
