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

// Function: entry_0019bab8
// Address: 0x19bab8 - 0x19bae0
void entry_0019bab8_0x19bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bab8_0x19bab8");
#endif

    ctx->pc = 0x19bab8u;

    // 0x19bab8: 0x0  nop
    ctx->pc = 0x19bab8u;
    // NOP
    // 0x19babc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19BABCu;
    {
        const bool branch_taken_0x19babc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BABCu;
        // 0x19bac0: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19babc) {
            ctx->pc = 0x19BAA8u;
            return;
        }
    }
    ctx->pc = 0x19BAC4u;
    // 0x19bac4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bac8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19BAC8u;
    {
        const bool branch_taken_0x19bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAC8u;
        // 0x19bacc: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bac8) {
            ctx->pc = 0x19BB80u;
            return;
        }
    }
    ctx->pc = 0x19BAD0u;
    // 0x19bad0: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x19bad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x19bad4: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x19bad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19bad8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x19bad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19badc: 0x0  nop
    ctx->pc = 0x19badcu;
    // NOP
    ctx->pc = 0x19bae0u;
}
