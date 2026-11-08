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

// Function: entry_00137d28
// Address: 0x137d28 - 0x137d68
void entry_00137d28_0x137d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137d28_0x137d28");
#endif

    switch (ctx->pc) {
        case 0x137d30u: goto label_137d30;
        default: break;
    }

    ctx->pc = 0x137d28u;

    // 0x137d28: 0xc061422  jal         func_185088
    ctx->pc = 0x137D28u;
    SET_GPR_U32(ctx, 31, 0x137D30u);
    ctx->pc = 0x137D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D28u;
    // 0x137d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x137D28u, 0x137D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D30u;
label_137d30:
    // 0x137d30: 0x26630110  addiu       $v1, $s3, 0x110
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    // 0x137d34: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x137d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137d38: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x137d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x137d3c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x137D3Cu;
    {
        const bool branch_taken_0x137d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D3Cu;
        // 0x137d40: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d3c) {
            ctx->pc = 0x137D74u;
            return;
        }
    }
    ctx->pc = 0x137D44u;
    // 0x137d44: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x137D44u;
    {
        const bool branch_taken_0x137d44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x137d44) {
            ctx->pc = 0x137D68u;
            return;
        }
    }
    ctx->pc = 0x137D4Cu;
    // 0x137d4c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x137d4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137d50: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x137d50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137d54: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x137d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x137d58: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x137d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137d5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x137D5Cu;
    {
        const bool branch_taken_0x137d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D5Cu;
        // 0x137d60: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d5c) {
            ctx->pc = 0x137D74u;
            return;
        }
    }
    ctx->pc = 0x137D64u;
    // 0x137d64: 0x0  nop
    ctx->pc = 0x137d64u;
    // NOP
    ctx->pc = 0x137d68u;
}
