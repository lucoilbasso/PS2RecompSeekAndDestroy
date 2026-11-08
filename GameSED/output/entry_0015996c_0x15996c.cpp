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

// Function: entry_0015996c
// Address: 0x15996c - 0x1599a0
void entry_0015996c_0x15996c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015996c_0x15996c");
#endif

    ctx->pc = 0x15996cu;

    // 0x15996c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x15996Cu;
    {
        const bool branch_taken_0x15996c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15996Cu;
        // 0x159970: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15996c) {
            ctx->pc = 0x1599A0u;
            return;
        }
    }
    ctx->pc = 0x159974u;
    // 0x159974: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159978: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x159978u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15997c: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x15997cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x159980: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159980u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x159984: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159984u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x159988: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159988u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15998c: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x15998cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159990: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x159990u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x159994: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x159994u;
    {
        const bool branch_taken_0x159994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159994u;
        // 0x159998: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159994) {
            ctx->pc = 0x1599B0u;
            return;
        }
    }
    ctx->pc = 0x15999Cu;
    // 0x15999c: 0x0  nop
    ctx->pc = 0x15999cu;
    // NOP
    ctx->pc = 0x1599a0u;
}
