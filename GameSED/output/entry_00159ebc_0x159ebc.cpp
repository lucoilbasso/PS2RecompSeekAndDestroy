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

// Function: entry_00159ebc
// Address: 0x159ebc - 0x159ef0
void entry_00159ebc_0x159ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159ebc_0x159ebc");
#endif

    ctx->pc = 0x159ebcu;

    // 0x159ebc: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x159EBCu;
    {
        const bool branch_taken_0x159ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ebc) {
            ctx->pc = 0x159EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159EBCu;
            // 0x159ec0: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159EF0u;
            return;
        }
    }
    ctx->pc = 0x159EC4u;
    // 0x159ec4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x159ec4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159ec8: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x159ec8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x159ecc: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x159eccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x159ed0: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x159ed0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x159ed4: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x159ed8: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x159ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159edc: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x159edcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159ee0: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x159ee4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x159EE4u;
    {
        const bool branch_taken_0x159ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EE4u;
        // 0x159ee8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ee4) {
            ctx->pc = 0x159EFCu;
            return;
        }
    }
    ctx->pc = 0x159EECu;
    // 0x159eec: 0x0  nop
    ctx->pc = 0x159eecu;
    // NOP
    ctx->pc = 0x159ef0u;
}
