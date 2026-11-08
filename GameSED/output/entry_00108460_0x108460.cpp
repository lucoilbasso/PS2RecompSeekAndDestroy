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

// Function: entry_00108460
// Address: 0x108460 - 0x108484
void entry_00108460_0x108460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108460_0x108460");
#endif

    ctx->pc = 0x108460u;

    // 0x108460: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x108460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x108464: 0x24040176  addiu       $a0, $zero, 0x176
    ctx->pc = 0x108464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x108468: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x108468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10846c: 0x14640023  bne         $v1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10846Cu;
    {
        const bool branch_taken_0x10846c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x108470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10846Cu;
        // 0x108470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10846c) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x108474u;
    // 0x108474: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x108474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x108478: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x108478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x10847c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x10847cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x108480: 0x24451490  addiu       $a1, $v0, 0x1490
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
    ctx->pc = 0x108484u;
}
