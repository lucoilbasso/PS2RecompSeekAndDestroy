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

// Function: caseD_14
// Address: 0x1ab690 - 0x1ab6b4
void caseD_14_0x1ab690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x1ab690");
#endif

    ctx->pc = 0x1ab690u;

    // 0x1ab690: 0x1071018  mult        $v0, $t0, $a3
    ctx->pc = 0x1ab690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ab694: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1ab694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1ab698: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x1ab698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
    // 0x1ab69c: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x1ab69cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1ab6a0: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1ab6a4: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1ab6a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1ab6a8: 0x659024  and         $s2, $v1, $a1
    ctx->pc = 0x1ab6a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ab6ac: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB6ACu;
    {
        const bool branch_taken_0x1ab6ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6ACu;
        // 0x1ab6b0: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6ac) {
            ctx->pc = 0x1AB6C0u;
            return;
        }
    }
    ctx->pc = 0x1AB6B4u;
}
