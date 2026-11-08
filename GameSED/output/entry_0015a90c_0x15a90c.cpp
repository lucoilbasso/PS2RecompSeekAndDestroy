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

// Function: entry_0015a90c
// Address: 0x15a90c - 0x15a920
void entry_0015a90c_0x15a90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a90c_0x15a90c");
#endif

    ctx->pc = 0x15a90cu;

    // 0x15a90c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A90Cu;
    {
        const bool branch_taken_0x15a90c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A90Cu;
        // 0x15a910: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a90c) {
            ctx->pc = 0x15A920u;
            return;
        }
    }
    ctx->pc = 0x15A914u;
    // 0x15a914: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x15a918: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A918u;
    {
        const bool branch_taken_0x15a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A918u;
        // 0x15a91c: 0x3042fff7  andi        $v0, $v0, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a918) {
            ctx->pc = 0x15A928u;
            return;
        }
    }
    ctx->pc = 0x15A920u;
}
