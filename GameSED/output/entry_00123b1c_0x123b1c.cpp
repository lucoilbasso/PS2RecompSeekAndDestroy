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

// Function: entry_00123b1c
// Address: 0x123b1c - 0x123b58
void entry_00123b1c_0x123b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123b1c_0x123b1c");
#endif

    ctx->pc = 0x123b1cu;

    // 0x123b1c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x123B1Cu;
    {
        const bool branch_taken_0x123b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B1Cu;
        // 0x123b20: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b1c) {
            ctx->pc = 0x123B58u;
            return;
        }
    }
    ctx->pc = 0x123B24u;
    // 0x123b24: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x123B24u;
    {
        const bool branch_taken_0x123b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B24u;
        // 0x123b28: 0x26220160  addiu       $v0, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b24) {
            ctx->pc = 0x123B80u;
            return;
        }
    }
    ctx->pc = 0x123B2Cu;
    // 0x123b2c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x123b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123b30: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x123b30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x123b34: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x123b34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x123b38: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x123b38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x123b3c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x123b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123b40: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x123b40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123b44: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x123b44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123b48: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x123b48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123b4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x123B4Cu;
    {
        const bool branch_taken_0x123b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B4Cu;
        // 0x123b50: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b4c) {
            ctx->pc = 0x123B80u;
            return;
        }
    }
    ctx->pc = 0x123B54u;
    // 0x123b54: 0x0  nop
    ctx->pc = 0x123b54u;
    // NOP
    ctx->pc = 0x123b58u;
}
