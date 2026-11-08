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

// Function: entry_001cc598
// Address: 0x1cc598 - 0x1cc5c0
void entry_001cc598_0x1cc598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc598_0x1cc598");
#endif

    ctx->pc = 0x1cc598u;

    // 0x1cc598: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc59c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc5a0: 0x8c95000c  lw          $s5, 0xC($a0)
    ctx->pc = 0x1cc5a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cc5a4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1cc5a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1cc5a8: 0x12a200c8  beq         $s5, $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x1CC5A8u;
    {
        const bool branch_taken_0x1cc5a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5A8u;
        // 0x1cc5ac: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5a8) {
            ctx->pc = 0x1CC8CCu;
            return;
        }
    }
    ctx->pc = 0x1CC5B0u;
    // 0x1cc5b0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1cc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1cc5b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1cc5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1cc5b8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1cc5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1cc5bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1cc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1cc5c0u;
}
