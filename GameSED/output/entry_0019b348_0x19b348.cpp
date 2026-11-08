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

// Function: entry_0019b348
// Address: 0x19b348 - 0x19b368
void entry_0019b348_0x19b348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b348_0x19b348");
#endif

    ctx->pc = 0x19b348u;

    // 0x19b348: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x19b348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b34c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19B34Cu;
    {
        const bool branch_taken_0x19b34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B34Cu;
        // 0x19b350: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b34c) {
            ctx->pc = 0x19B330u;
            return;
        }
    }
    ctx->pc = 0x19B354u;
    // 0x19b354: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b358: 0x5840003c  blezl       $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x19B358u;
    {
        const bool branch_taken_0x19b358 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19b358) {
            ctx->pc = 0x19B35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B358u;
            // 0x19b35c: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B44Cu;
            return;
        }
    }
    ctx->pc = 0x19B360u;
    // 0x19b360: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19b360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b364: 0x0  nop
    ctx->pc = 0x19b364u;
    // NOP
    ctx->pc = 0x19b368u;
}
