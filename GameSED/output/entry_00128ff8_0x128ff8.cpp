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

// Function: entry_00128ff8
// Address: 0x128ff8 - 0x129010
void entry_00128ff8_0x128ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128ff8_0x128ff8");
#endif

    ctx->pc = 0x128ff8u;

    // 0x128ff8: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x128ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x128ffc: 0x1c2102b  sltu        $v0, $t6, $v0
    ctx->pc = 0x128ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129000u;
    {
        const bool branch_taken_0x129000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129000u;
        // 0x129004: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129000) {
            ctx->pc = 0x129014u;
            return;
        }
    }
    ctx->pc = 0x129008u;
    // 0x129008: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x129008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12900c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x129010u;
}
