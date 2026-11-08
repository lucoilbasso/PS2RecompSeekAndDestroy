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

// Function: entry_001b5354
// Address: 0x1b5354 - 0x1b5370
void entry_001b5354_0x1b5354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5354_0x1b5354");
#endif

    ctx->pc = 0x1b5354u;

    // 0x1b5354: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b5354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b5358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b535c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b535cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b5360: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5360u;
    {
        const bool branch_taken_0x1b5360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5360u;
        // 0x1b5364: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5360) {
            ctx->pc = 0x1B5394u;
            return;
        }
    }
    ctx->pc = 0x1B5368u;
    // 0x1b5368: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1b5368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1b536c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b536cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1b5370u;
}
