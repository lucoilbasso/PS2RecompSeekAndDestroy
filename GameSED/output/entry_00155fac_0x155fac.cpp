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

// Function: entry_00155fac
// Address: 0x155fac - 0x155fd0
void entry_00155fac_0x155fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155fac_0x155fac");
#endif

    ctx->pc = 0x155facu;

    // 0x155fac: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x155facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x155fb0: 0x24459d20  addiu       $a1, $v0, -0x62E0
    ctx->pc = 0x155fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941984));
    // 0x155fb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x155fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x209D20u));
    // 0x155fb8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x155FB8u;
    {
        const bool branch_taken_0x155fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FB8u;
        // 0x155fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fb8) {
            ctx->pc = 0x155FF8u;
            return;
        }
    }
    ctx->pc = 0x155FC0u;
    // 0x155fc0: 0x1047000d  beq         $v0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x155FC0u;
    {
        const bool branch_taken_0x155fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x155fc0) {
            ctx->pc = 0x155FF8u;
            return;
        }
    }
    ctx->pc = 0x155FC8u;
    // 0x155fc8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x155fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x155fcc: 0x0  nop
    ctx->pc = 0x155fccu;
    // NOP
    ctx->pc = 0x155fd0u;
}
