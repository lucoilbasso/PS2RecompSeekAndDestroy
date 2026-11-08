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

// Function: entry_0019fb50
// Address: 0x19fb50 - 0x19fb74
void entry_0019fb50_0x19fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb50_0x19fb50");
#endif

    ctx->pc = 0x19fb50u;

    // 0x19fb50: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19FB50u;
    {
        const bool branch_taken_0x19fb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB50u;
        // 0x19fb54: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb50) {
            ctx->pc = 0x19FB7Cu;
            return;
        }
    }
    ctx->pc = 0x19FB58u;
    // 0x19fb58: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fb5c: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x19fb5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19fb60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB60u;
    {
        const bool branch_taken_0x19fb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB60u;
        // 0x19fb64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb60) {
            ctx->pc = 0x19FB74u;
            return;
        }
    }
    ctx->pc = 0x19FB68u;
    // 0x19fb68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19fb6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19fb70: 0xe2302b  sltu        $a2, $a3, $v0
    ctx->pc = 0x19fb70u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x19fb74u;
}
