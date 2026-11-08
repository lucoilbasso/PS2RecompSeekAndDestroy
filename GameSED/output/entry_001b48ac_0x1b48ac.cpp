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

// Function: entry_001b48ac
// Address: 0x1b48ac - 0x1b48c8
void entry_001b48ac_0x1b48ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b48ac_0x1b48ac");
#endif

    ctx->pc = 0x1b48acu;

    // 0x1b48ac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b48acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b48b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b48b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48b4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b48b8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B48B8u;
    {
        const bool branch_taken_0x1b48b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48B8u;
        // 0x1b48bc: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48b8) {
            ctx->pc = 0x1B48ECu;
            return;
        }
    }
    ctx->pc = 0x1B48C0u;
    // 0x1b48c0: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1b48c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1b48c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1b48c8u;
}
