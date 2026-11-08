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

// Function: entry_0013d728
// Address: 0x13d728 - 0x13d750
void entry_0013d728_0x13d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d728_0x13d728");
#endif

    ctx->pc = 0x13d728u;

    // 0x13d728: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x13d728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13d72c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x13d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13d730: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d734: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x13d734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x13d738: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13d73c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x13d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x13d740: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13d740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13d744: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x13D744u;
    {
        const bool branch_taken_0x13d744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D744u;
        // 0x13d748: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d744) {
            ctx->pc = 0x13D7F0u;
            return;
        }
    }
    ctx->pc = 0x13D74Cu;
    // 0x13d74c: 0x0  nop
    ctx->pc = 0x13d74cu;
    // NOP
    ctx->pc = 0x13d750u;
}
