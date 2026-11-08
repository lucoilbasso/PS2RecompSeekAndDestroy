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

// Function: caseD_3
// Address: 0x107a48 - 0x107a70
void caseD_3_0x107a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x107a48");
#endif

    ctx->pc = 0x107a48u;

    // 0x107a48: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107a4c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x107a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x107a50: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x107A50u;
    {
        const bool branch_taken_0x107a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107a50) {
            ctx->pc = 0x107A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A50u;
            // 0x107a54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            return;
        }
    }
    ctx->pc = 0x107A58u;
    // 0x107a58: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x107a5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107a60: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x107a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    // 0x107a64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x107A64u;
    {
        const bool branch_taken_0x107a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A64u;
        // 0x107a68: 0x34640800  ori         $a0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a64) {
            ctx->pc = 0x107A90u;
            return;
        }
    }
    ctx->pc = 0x107A6Cu;
    // 0x107a6c: 0x0  nop
    ctx->pc = 0x107a6cu;
    // NOP
    ctx->pc = 0x107a70u;
}
