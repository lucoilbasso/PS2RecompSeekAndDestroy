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

// Function: entry_0018be48
// Address: 0x18be48 - 0x18be58
void entry_0018be48_0x18be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018be48_0x18be48");
#endif

    ctx->pc = 0x18be48u;

    // 0x18be48: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x18be48u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be4c: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BE4Cu;
    {
        const bool branch_taken_0x18be4c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE4Cu;
        // 0x18be50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be4c) {
            ctx->pc = 0x18BE58u;
            return;
        }
    }
    ctx->pc = 0x18BE54u;
    // 0x18be54: 0x96fe0000  lhu         $fp, 0x0($s7)
    ctx->pc = 0x18be54u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->pc = 0x18be58u;
}
