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

// Function: entry_001343a4
// Address: 0x1343a4 - 0x1343d8
void entry_001343a4_0x1343a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001343a4_0x1343a4");
#endif

    ctx->pc = 0x1343a4u;

    // 0x1343a4: 0x122000b6  beqz        $s1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1343A4u;
    {
        const bool branch_taken_0x1343a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343A4u;
        // 0x1343a8: 0x24021118  addiu       $v0, $zero, 0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343a4) {
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x1343ACu;
    // 0x1343ac: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1343acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1343b0: 0x146200b4  bne         $v1, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1343B0u;
    {
        const bool branch_taken_0x1343b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1343B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343B0u;
        // 0x1343b4: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343b0) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x1343B8u;
    // 0x1343b8: 0x8e220688  lw          $v0, 0x688($s1)
    ctx->pc = 0x1343b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
    // 0x1343bc: 0x8e23068c  lw          $v1, 0x68C($s1)
    ctx->pc = 0x1343bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x1343c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1343c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1343c4: 0x544000ae  bnel        $v0, $zero, . + 4 + (0xAE << 2)
    ctx->pc = 0x1343C4u;
    {
        const bool branch_taken_0x1343c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1343c4) {
            ctx->pc = 0x1343C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1343C4u;
            // 0x1343c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x1343CCu;
    // 0x1343cc: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1343CCu;
    {
        const bool branch_taken_0x1343cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1343cc) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x1343D4u;
    // 0x1343d4: 0x0  nop
    ctx->pc = 0x1343d4u;
    // NOP
    ctx->pc = 0x1343d8u;
}
