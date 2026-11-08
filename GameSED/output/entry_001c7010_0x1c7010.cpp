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

// Function: entry_001c7010
// Address: 0x1c7010 - 0x1c7070
void entry_001c7010_0x1c7010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7010_0x1c7010");
#endif

    ctx->pc = 0x1c7010u;

    // 0x1c7010: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x1c7010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x1c7014: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1c7014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1c7018: 0xafa50234  sw          $a1, 0x234($sp)
    ctx->pc = 0x1c7018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 5));
    // 0x1c701c: 0xafa9023c  sw          $t1, 0x23C($sp)
    ctx->pc = 0x1c701cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 9));
    // 0x1c7020: 0x5012  mflo        $t2
    ctx->pc = 0x1c7020u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x1c7024: 0x29430000  slti        $v1, $t2, 0x0
    ctx->pc = 0x1c7024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c7028: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1c7028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c702c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1c702cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1c7030: 0xafaa0244  sw          $t2, 0x244($sp)
    ctx->pc = 0x1c7030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 10));
    // 0x1c7034: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x1c7034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x1c7038: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c7038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c703c: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x1c703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1c7040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7044: 0x678023  subu        $s0, $v1, $a3
    ctx->pc = 0x1c7044u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c7048: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c7048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c704c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c7050: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x1c7050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1c7054: 0x4800014  bltz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C7054u;
    {
        const bool branch_taken_0x1c7054 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1C7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7054u;
        // 0x1c7058: 0xafa60250  sw          $a2, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7054) {
            ctx->pc = 0x1C70A8u;
            return;
        }
    }
    ctx->pc = 0x1C705Cu;
    // 0x1c705c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1c705cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c7060: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x1c7060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c7064: 0x499821  addu        $s3, $v0, $t1
    ctx->pc = 0x1c7064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1c7068: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x1c7068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c706c: 0x0  nop
    ctx->pc = 0x1c706cu;
    // NOP
    ctx->pc = 0x1c7070u;
}
