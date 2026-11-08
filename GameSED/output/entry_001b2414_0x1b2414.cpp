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

// Function: entry_001b2414
// Address: 0x1b2414 - 0x1b2444
void entry_001b2414_0x1b2414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2414_0x1b2414");
#endif

    ctx->pc = 0x1b2414u;

label_1b2414:
    // 0x1b2414: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1b2414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b2418: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2418u;
    {
        const bool branch_taken_0x1b2418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2418u;
        // 0x1b241c: 0x24e2a980  addiu       $v0, $a3, -0x5680 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2418) {
            ctx->pc = 0x1B244Cu;
            return;
        }
    }
    ctx->pc = 0x1B2420u;
    // 0x1b2420: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1b2420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b2424: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2428: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b242c: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B242Cu;
    {
        const bool branch_taken_0x1b242c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B242Cu;
        // 0x1b2430: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b242c) {
            ctx->pc = 0x1B2414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2414;
        }
    }
    ctx->pc = 0x1B2434u;
    // 0x1b2434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2438: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b2438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b243c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B243Cu;
    {
        const bool branch_taken_0x1b243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B243Cu;
        // 0x1b2440: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b243c) {
            ctx->pc = 0x1B2450u;
            return;
        }
    }
    ctx->pc = 0x1B2444u;
}
