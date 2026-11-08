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

// Function: entry_0017ffa0
// Address: 0x17ffa0 - 0x17ffc0
void entry_0017ffa0_0x17ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ffa0_0x17ffa0");
#endif

    ctx->pc = 0x17ffa0u;

    // 0x17ffa0: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x17ffa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17ffa4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x17ffa4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffa8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x17ffa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17ffac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17ffacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffb0: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x17ffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x17ffb4: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x17ffb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17ffb8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FFB8u;
    {
        const bool branch_taken_0x17ffb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFB8u;
        // 0x17ffbc: 0x2c4d0001  sltiu       $t5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffb8) {
            ctx->pc = 0x17FFDCu;
            return;
        }
    }
    ctx->pc = 0x17FFC0u;
}
