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

// Function: entry_001b5160
// Address: 0x1b5160 - 0x1b5188
void entry_001b5160_0x1b5160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5160_0x1b5160");
#endif

    ctx->pc = 0x1b5160u;

label_1b5160:
    // 0x1b5160: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x1b5160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1b5164: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b5168: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b5168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b516c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b5170: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x1b5170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1b5174: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b5174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5178: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B5178u;
    {
        const bool branch_taken_0x1b5178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5178) {
            ctx->pc = 0x1B5160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5160;
        }
    }
    ctx->pc = 0x1B5180u;
    // 0x1b5180: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5180u;
    {
        const bool branch_taken_0x1b5180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5180u;
        // 0x1b5184: 0xae500810  sw          $s0, 0x810($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5180) {
            ctx->pc = 0x1B5198u;
            return;
        }
    }
    ctx->pc = 0x1B5188u;
}
