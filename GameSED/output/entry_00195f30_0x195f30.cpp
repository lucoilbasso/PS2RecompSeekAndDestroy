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

// Function: entry_00195f30
// Address: 0x195f30 - 0x195f44
void entry_00195f30_0x195f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195f30_0x195f30");
#endif

    ctx->pc = 0x195f30u;

    // 0x195f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195F30u;
    {
        const bool branch_taken_0x195f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F30u;
        // 0x195f34: 0x34e30080  ori         $v1, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f30) {
            ctx->pc = 0x195F44u;
            return;
        }
    }
    ctx->pc = 0x195F38u;
    // 0x195f38: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x195f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x195f3c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x195f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x195f40: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x195f40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    ctx->pc = 0x195f44u;
}
