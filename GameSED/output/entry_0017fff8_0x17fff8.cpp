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

// Function: entry_0017fff8
// Address: 0x17fff8 - 0x180014
void entry_0017fff8_0x17fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fff8_0x17fff8");
#endif

    ctx->pc = 0x17fff8u;

label_17fff8:
    // 0x17fff8: 0x246300f6  addiu       $v1, $v1, 0xF6
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 246));
    // 0x17fffc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17fffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x180000: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x180000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x180004: 0x0  nop
    ctx->pc = 0x180004u;
    // NOP
    // 0x180008: 0x0  nop
    ctx->pc = 0x180008u;
    // NOP
    // 0x18000c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18000Cu;
    {
        const bool branch_taken_0x18000c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18000Cu;
        // 0x180010: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18000c) {
            ctx->pc = 0x17FFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fff8;
        }
    }
    ctx->pc = 0x180014u;
}
