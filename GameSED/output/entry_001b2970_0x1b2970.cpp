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

// Function: entry_001b2970
// Address: 0x1b2970 - 0x1b299c
void entry_001b2970_0x1b2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2970_0x1b2970");
#endif

    ctx->pc = 0x1b2970u;

label_1b2970:
    // 0x1b2970: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b2970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b2974: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B2974u;
    {
        const bool branch_taken_0x1b2974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2974u;
        // 0x1b2978: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2974) {
            ctx->pc = 0x1B29ACu;
            return;
        }
    }
    ctx->pc = 0x1B297Cu;
    // 0x1b297c: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x1b297cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1b2980: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b2980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2984: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1b2984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b2988: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b2988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b298c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B298Cu;
    {
        const bool branch_taken_0x1b298c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b298c) {
            ctx->pc = 0x1B2990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B298Cu;
            // 0x1b2990: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2970;
        }
    }
    ctx->pc = 0x1B2994u;
    // 0x1b2994: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2994u;
    {
        const bool branch_taken_0x1b2994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2994u;
        // 0x1b2998: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2994) {
            ctx->pc = 0x1B29B0u;
            return;
        }
    }
    ctx->pc = 0x1B299Cu;
}
