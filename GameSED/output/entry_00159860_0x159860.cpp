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

// Function: entry_00159860
// Address: 0x159860 - 0x159890
void entry_00159860_0x159860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159860_0x159860");
#endif

    ctx->pc = 0x159860u;

    // 0x159860: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x159860u;
    {
        const bool branch_taken_0x159860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x159860) {
            ctx->pc = 0x159864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159860u;
            // 0x159864: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159890u;
            return;
        }
    }
    ctx->pc = 0x159868u;
    // 0x159868: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159868u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15986c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x15986cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159870: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x159870u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x159874: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159874u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x159878: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x159878u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15987c: 0xf8c50010  sqc2        $vf5, 0x10($a2)
    ctx->pc = 0x15987cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159880: 0xf8c60020  sqc2        $vf6, 0x20($a2)
    ctx->pc = 0x159880u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159884: 0xf8c70030  sqc2        $vf7, 0x30($a2)
    ctx->pc = 0x159884u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x159888: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x159888u;
    {
        const bool branch_taken_0x159888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159888u;
        // 0x15988c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159888) {
            ctx->pc = 0x15989Cu;
            return;
        }
    }
    ctx->pc = 0x159890u;
}
