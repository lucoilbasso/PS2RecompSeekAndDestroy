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

// Function: entry_001805a4
// Address: 0x1805a4 - 0x1805e8
void entry_001805a4_0x1805a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001805a4_0x1805a4");
#endif

    ctx->pc = 0x1805a4u;

    // 0x1805a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1805a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1805a8: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x1805a8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x1805ac: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x1805acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1805b0: 0xade20020  sw          $v0, 0x20($t7)
    ctx->pc = 0x1805b0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 2));
    // 0x1805b4: 0x48225000  qmfc2.ni    $v0, $vf10
    ctx->pc = 0x1805b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1805b8: 0xade20004  sw          $v0, 0x4($t7)
    ctx->pc = 0x1805b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 2));
    // 0x1805bc: 0x48225800  qmfc2.ni    $v0, $vf11
    ctx->pc = 0x1805bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x1805c0: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x1805c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x1805c4: 0xade3000c  sw          $v1, 0xC($t7)
    ctx->pc = 0x1805c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
    // 0x1805c8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1805c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1805cc: 0xade80010  sw          $t0, 0x10($t7)
    ctx->pc = 0x1805ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 8));
    // 0x1805d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1805d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1805d4: 0xade50014  sw          $a1, 0x14($t7)
    ctx->pc = 0x1805d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 5));
    // 0x1805d8: 0xade90018  sw          $t1, 0x18($t7)
    ctx->pc = 0x1805d8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 9));
    // 0x1805dc: 0xadea001c  sw          $t2, 0x1C($t7)
    ctx->pc = 0x1805dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 10));
    // 0x1805e0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1805E0u;
    {
        const bool branch_taken_0x1805e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1805E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805E0u;
        // 0x1805e4: 0xaf8b8d3c  sw          $t3, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805e0) {
            ctx->pc = 0x180600u;
            return;
        }
    }
    ctx->pc = 0x1805E8u;
}
