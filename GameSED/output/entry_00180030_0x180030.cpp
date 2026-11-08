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

// Function: entry_00180030
// Address: 0x180030 - 0x18004c
void entry_00180030_0x180030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180030_0x180030");
#endif

    ctx->pc = 0x180030u;

label_180030:
    // 0x180030: 0x246300f6  addiu       $v1, $v1, 0xF6
    ctx->pc = 0x180030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 246));
    // 0x180034: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x180034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x180038: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x180038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x18003c: 0x0  nop
    ctx->pc = 0x18003cu;
    // NOP
    // 0x180040: 0x0  nop
    ctx->pc = 0x180040u;
    // NOP
    // 0x180044: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x180044u;
    {
        const bool branch_taken_0x180044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180044u;
        // 0x180048: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180044) {
            ctx->pc = 0x180030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180030;
        }
    }
    ctx->pc = 0x18004Cu;
}
