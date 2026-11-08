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

// Function: entry_00157cc8
// Address: 0x157cc8 - 0x157d20
void entry_00157cc8_0x157cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157cc8_0x157cc8");
#endif

    ctx->pc = 0x157cc8u;

    // 0x157cc8: 0x266403b0  addiu       $a0, $s3, 0x3B0
    ctx->pc = 0x157cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
    // 0x157ccc: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x157cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x157cd0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x157cd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157cd4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x157cd4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157cd8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157cdc: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x157cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157ce0: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x157ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x157ce4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x157CE4u;
    {
        const bool branch_taken_0x157ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CE4u;
        // 0x157ce8: 0x266403d0  addiu       $a0, $s3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ce4) {
            ctx->pc = 0x157D60u;
            return;
        }
    }
    ctx->pc = 0x157CECu;
    // 0x157cec: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x157cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x157cf0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x157CF0u;
    {
        const bool branch_taken_0x157cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CF0u;
        // 0x157cf4: 0x26430140  addiu       $v1, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cf0) {
            ctx->pc = 0x157D64u;
            return;
        }
    }
    ctx->pc = 0x157CF8u;
    // 0x157cf8: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x157cf8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x157cfc: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x157d00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x157d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157d04: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x157d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x157d08: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x157d08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x157d0c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x157d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x157d10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157D10u;
    {
        const bool branch_taken_0x157d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D10u;
        // 0x157d14: 0x267503d0  addiu       $s5, $s3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d10) {
            ctx->pc = 0x157D20u;
            return;
        }
    }
    ctx->pc = 0x157D18u;
    // 0x157d18: 0xc061920  jal         func_186480
    ctx->pc = 0x157D18u;
    SET_GPR_U32(ctx, 31, 0x157D20u);
    ctx->pc = 0x157D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D18u;
    // 0x157d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x157D18u, 0x157D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D20u;
}
