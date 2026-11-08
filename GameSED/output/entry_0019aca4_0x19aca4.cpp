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

// Function: entry_0019aca4
// Address: 0x19aca4 - 0x19acd8
void entry_0019aca4_0x19aca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aca4_0x19aca4");
#endif

    ctx->pc = 0x19aca4u;

    // 0x19aca4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19aca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aca8: 0x14102b  sltu        $v0, $zero, $s4
    ctx->pc = 0x19aca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x19acac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19acacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acb0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x19acb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acb4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19acb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acb8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x19acb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19ACBCu;
    {
        const bool branch_taken_0x19acbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACBCu;
        // 0x19acc0: 0xfd2023  subu        $a0, $a3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acbc) {
            ctx->pc = 0x19ACE4u;
            return;
        }
    }
    ctx->pc = 0x19ACC4u;
    // 0x19acc4: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ACC4u;
    {
        const bool branch_taken_0x19acc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACC4u;
        // 0x19acc8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acc4) {
            ctx->pc = 0x19ACD8u;
            return;
        }
    }
    ctx->pc = 0x19ACCCu;
    // 0x19accc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19acccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19acd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19ACD0u;
    {
        const bool branch_taken_0x19acd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACD0u;
        // 0x19acd4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acd0) {
            ctx->pc = 0x19ACE0u;
            return;
        }
    }
    ctx->pc = 0x19ACD8u;
}
