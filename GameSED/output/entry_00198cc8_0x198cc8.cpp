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

// Function: entry_00198cc8
// Address: 0x198cc8 - 0x198cdc
void entry_00198cc8_0x198cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198cc8_0x198cc8");
#endif

    ctx->pc = 0x198cc8u;

    // 0x198cc8: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x198CC8u;
    {
        const bool branch_taken_0x198cc8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CC8u;
        // 0x198ccc: 0x34a30080  ori         $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cc8) {
            ctx->pc = 0x198CDCu;
            return;
        }
    }
    ctx->pc = 0x198CD0u;
    // 0x198cd0: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x198cd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x198cd4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x198cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x198cd8: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x198cd8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->pc = 0x198cdcu;
}
