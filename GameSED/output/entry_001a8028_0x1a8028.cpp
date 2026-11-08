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

// Function: entry_001a8028
// Address: 0x1a8028 - 0x1a8048
void entry_001a8028_0x1a8028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8028_0x1a8028");
#endif

    ctx->pc = 0x1a8028u;

    // 0x1a8028: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a802c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a8030: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8034: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a8034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a8038: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1a8038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a803c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A803Cu;
    {
        const bool branch_taken_0x1a803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A803Cu;
        // 0x1a8040: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a803c) {
            ctx->pc = 0x1A8070u;
            return;
        }
    }
    ctx->pc = 0x1A8044u;
    // 0x1a8044: 0x0  nop
    ctx->pc = 0x1a8044u;
    // NOP
    ctx->pc = 0x1a8048u;
}
