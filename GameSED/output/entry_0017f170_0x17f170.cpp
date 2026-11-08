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

// Function: entry_0017f170
// Address: 0x17f170 - 0x17f190
void entry_0017f170_0x17f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f170_0x17f170");
#endif

    ctx->pc = 0x17f170u;

    // 0x17f170: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17f174: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17f174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17f178: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17f17c: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x17f17cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17f180: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17f180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f184: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x17F184u;
    {
        const bool branch_taken_0x17f184 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F184u;
        // 0x17f188: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f184) {
            ctx->pc = 0x17F1B4u;
            return;
        }
    }
    ctx->pc = 0x17F18Cu;
    // 0x17f18c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x17f18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x17f190u;
}
