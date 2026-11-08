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

// Function: entry_001981ec
// Address: 0x1981ec - 0x198228
void entry_001981ec_0x1981ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001981ec_0x1981ec");
#endif

    ctx->pc = 0x1981ecu;

    // 0x1981ec: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x1981ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1981f0: 0x2442ecb0  addiu       $v0, $v0, -0x1350
    ctx->pc = 0x1981f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x1981f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1981f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1981f8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1981f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1981fc: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1981fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x198200: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x198200u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x198204: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x198204u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x198208: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x198208u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19820c: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x19820cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x198210: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x198210u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x198214: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x198214u;
    {
        const bool branch_taken_0x198214 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x198218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198214u;
        // 0x198218: 0x26230090  addiu       $v1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198214) {
            ctx->pc = 0x198228u;
            return;
        }
    }
    ctx->pc = 0x19821Cu;
    // 0x19821c: 0x8e5303d4  lw          $s3, 0x3D4($s2)
    ctx->pc = 0x19821cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 980)));
    // 0x198220: 0x5260002d  beql        $s3, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x198220u;
    {
        const bool branch_taken_0x198220 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x198220) {
            ctx->pc = 0x198224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198220u;
            // 0x198224: 0x8e4303d0  lw          $v1, 0x3D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1982D8u;
            return;
        }
    }
    ctx->pc = 0x198228u;
}
