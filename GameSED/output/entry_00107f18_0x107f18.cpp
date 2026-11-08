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

// Function: entry_00107f18
// Address: 0x107f18 - 0x107f38
void entry_00107f18_0x107f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f18_0x107f18");
#endif

    ctx->pc = 0x107f18u;

    // 0x107f18: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x107F18u;
    {
        const bool branch_taken_0x107f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x107F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F18u;
        // 0x107f1c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f18) {
            ctx->pc = 0x107F70u;
            return;
        }
    }
    ctx->pc = 0x107F20u;
    // 0x107f20: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x107f24: 0x56220013  bnel        $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x107F24u;
    {
        const bool branch_taken_0x107f24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x107f24) {
            ctx->pc = 0x107F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107F24u;
            // 0x107f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F74u;
            return;
        }
    }
    ctx->pc = 0x107F2Cu;
    // 0x107f2c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x107f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x107f30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x107f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f34: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x107f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x107f38u;
}
