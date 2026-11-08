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

// Function: entry_00159734
// Address: 0x159734 - 0x159768
void entry_00159734_0x159734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159734_0x159734");
#endif

    ctx->pc = 0x159734u;

    // 0x159734: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x159734u;
    {
        const bool branch_taken_0x159734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159734u;
        // 0x159738: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159734) {
            ctx->pc = 0x159768u;
            return;
        }
    }
    ctx->pc = 0x15973Cu;
    // 0x15973c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15973cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159740: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x159740u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159744: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x159744u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x159748: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159748u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15974c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15974cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x159750: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159750u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159754: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x159754u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159758: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x159758u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15975c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15975Cu;
    {
        const bool branch_taken_0x15975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15975Cu;
        // 0x159760: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15975c) {
            ctx->pc = 0x159778u;
            return;
        }
    }
    ctx->pc = 0x159764u;
    // 0x159764: 0x0  nop
    ctx->pc = 0x159764u;
    // NOP
    ctx->pc = 0x159768u;
}
