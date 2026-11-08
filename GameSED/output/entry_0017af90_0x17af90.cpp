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

// Function: entry_0017af90
// Address: 0x17af90 - 0x17afa8
void entry_0017af90_0x17af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017af90_0x17af90");
#endif

    ctx->pc = 0x17af90u;

    // 0x17af90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17af90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17af94: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x17af94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17af98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AF98u;
    {
        const bool branch_taken_0x17af98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF98u;
        // 0x17af9c: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af98) {
            ctx->pc = 0x17AF70u;
            return;
        }
    }
    ctx->pc = 0x17AFA0u;
    // 0x17afa0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17afa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afa4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x17afa8u;
}
