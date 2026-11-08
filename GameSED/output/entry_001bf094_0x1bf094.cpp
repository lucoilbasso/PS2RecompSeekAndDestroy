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

// Function: entry_001bf094
// Address: 0x1bf094 - 0x1bf0e0
void entry_001bf094_0x1bf094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf094_0x1bf094");
#endif

    ctx->pc = 0x1bf094u;

    // 0x1bf094: 0x8e2701c8  lw          $a3, 0x1C8($s1)
    ctx->pc = 0x1bf094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1bf098: 0x8e2501d8  lw          $a1, 0x1D8($s1)
    ctx->pc = 0x1bf098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x1bf09c: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1bf09cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bf0a0: 0x8e2401cc  lw          $a0, 0x1CC($s1)
    ctx->pc = 0x1bf0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x1bf0a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bf0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf0a8: 0x8e2301dc  lw          $v1, 0x1DC($s1)
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x1bf0ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bf0acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf0b0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1bf0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1bf0b4: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1bf0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1bf0b8: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x1bf0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x1bf0bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bf0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bf0c0: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF0C0u;
    {
        const bool branch_taken_0x1bf0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1BF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0C0u;
        // 0x1bf0c4: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0c0) {
            ctx->pc = 0x1BF0E0u;
            return;
        }
    }
    ctx->pc = 0x1BF0C8u;
    // 0x1bf0c8: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1bf0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1bf0cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF0CCu;
    {
        const bool branch_taken_0x1bf0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0CCu;
        // 0x1bf0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0cc) {
            ctx->pc = 0x1BF0E4u;
            return;
        }
    }
    ctx->pc = 0x1BF0D4u;
    // 0x1bf0d4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1bf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1bf0d8: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x1bf0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x1bf0dc: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x1bf0dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1bf0e0u;
}
