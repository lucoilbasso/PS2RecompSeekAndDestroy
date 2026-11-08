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

// Function: entry_001b3258
// Address: 0x1b3258 - 0x1b328c
void entry_001b3258_0x1b3258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3258_0x1b3258");
#endif

    ctx->pc = 0x1b3258u;

label_1b3258:
    // 0x1b3258: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1b3258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b325c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B325Cu;
    {
        const bool branch_taken_0x1b325c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B325Cu;
        // 0x1b3260: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b325c) {
            ctx->pc = 0x1B328Cu;
            return;
        }
    }
    ctx->pc = 0x1B3264u;
    // 0x1b3264: 0x24e3a980  addiu       $v1, $a3, -0x5680
    ctx->pc = 0x1b3264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945152));
    // 0x1b3268: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b3268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b326c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3270: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b3270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b3274: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B3274u;
    {
        const bool branch_taken_0x1b3274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3274u;
        // 0x1b3278: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3274) {
            ctx->pc = 0x1B3258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3258;
        }
    }
    ctx->pc = 0x1B327Cu;
    // 0x1b327c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b3280: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1b3280u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b3284: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b3284u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1b3288: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1b3288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1b328cu;
}
