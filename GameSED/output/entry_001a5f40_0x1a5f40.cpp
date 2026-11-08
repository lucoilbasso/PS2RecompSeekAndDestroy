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

// Function: entry_001a5f40
// Address: 0x1a5f40 - 0x1a5f88
void entry_001a5f40_0x1a5f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5f40_0x1a5f40");
#endif

    ctx->pc = 0x1a5f40u;

    // 0x1a5f40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a5f44: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a5f48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a5f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a5f4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a5f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5f50: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A5F50u;
    {
        const bool branch_taken_0x1a5f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F50u;
        // 0x1a5f54: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f50) {
            ctx->pc = 0x1A6000u;
            return;
        }
    }
    ctx->pc = 0x1A5F58u;
    // 0x1a5f58: 0x3c028001  lui         $v0, 0x8001
    ctx->pc = 0x1a5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32769 << 16));
    // 0x1a5f5c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1a5f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5f60: 0x28a30200  slti        $v1, $a1, 0x200
    ctx->pc = 0x1a5f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a5f64: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5F64u;
    {
        const bool branch_taken_0x1a5f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F64u;
        // 0x1a5f68: 0x28a20300  slti        $v0, $a1, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)768) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f64) {
            ctx->pc = 0x1A5F88u;
            return;
        }
    }
    ctx->pc = 0x1A5F6Cu;
    // 0x1a5f6c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5f70: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a5f74: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x1a5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x1a5f78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5f7c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A5F7Cu;
    {
        const bool branch_taken_0x1a5f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F7Cu;
        // 0x1a5f80: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f7c) {
            ctx->pc = 0x1A6010u;
            return;
        }
    }
    ctx->pc = 0x1A5F84u;
    // 0x1a5f84: 0x0  nop
    ctx->pc = 0x1a5f84u;
    // NOP
    ctx->pc = 0x1a5f88u;
}
