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

// Function: entry_00124c58
// Address: 0x124c58 - 0x124c74
void entry_00124c58_0x124c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124c58_0x124c58");
#endif

    ctx->pc = 0x124c58u;

    // 0x124c58: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x124c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x124c5c: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x124c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x124c60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x124c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x124c64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124C64u;
    {
        const bool branch_taken_0x124c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C64u;
        // 0x124c68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c64) {
            ctx->pc = 0x124C78u;
            return;
        }
    }
    ctx->pc = 0x124C6Cu;
    // 0x124c6c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x124c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124c70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x124c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x124c74u;
}
