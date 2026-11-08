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

// Function: entry_0011e0b8
// Address: 0x11e0b8 - 0x11e0e0
void entry_0011e0b8_0x11e0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e0b8_0x11e0b8");
#endif

    ctx->pc = 0x11e0b8u;

    // 0x11e0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e0bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11e0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11e0c4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x11e0c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11e0c8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E0C8u;
    {
        const bool branch_taken_0x11e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0C8u;
        // 0x11e0cc: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0c8) {
            ctx->pc = 0x11E114u;
            return;
        }
    }
    ctx->pc = 0x11E0D0u;
    // 0x11e0d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e0d4: 0x244b5a50  addiu       $t3, $v0, 0x5A50
    ctx->pc = 0x11e0d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e0d8: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x11e0d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11e0dc: 0x0  nop
    ctx->pc = 0x11e0dcu;
    // NOP
    ctx->pc = 0x11e0e0u;
}
