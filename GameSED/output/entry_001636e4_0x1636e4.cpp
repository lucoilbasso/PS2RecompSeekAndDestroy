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

// Function: entry_001636e4
// Address: 0x1636e4 - 0x163758
void entry_001636e4_0x1636e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001636e4_0x1636e4");
#endif

    switch (ctx->pc) {
        case 0x163704u: goto label_163704;
        default: break;
    }

    ctx->pc = 0x1636e4u;

    // 0x1636e4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1636e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1636e8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1636E8u;
    {
        const bool branch_taken_0x1636e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1636ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636E8u;
        // 0x1636ec: 0x133140  sll         $a2, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636e8) {
            ctx->pc = 0x163788u;
            return;
        }
    }
    ctx->pc = 0x1636F0u;
    // 0x1636f0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1636f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1636f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1636f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1636f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1636f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636fc: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1636FCu;
    SET_GPR_U32(ctx, 31, 0x163704u);
    ctx->pc = 0x163700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636FCu;
    // 0x163700: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1636FCu, 0x163704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163704u;
label_163704:
    // 0x163704: 0x8e420204  lw          $v0, 0x204($s2)
    ctx->pc = 0x163704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
    // 0x163708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x163708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16370c: 0x8e43016c  lw          $v1, 0x16C($s2)
    ctx->pc = 0x16370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x163710: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x163710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163714: 0x262200b  movn        $a0, $s3, $v0
    ctx->pc = 0x163714u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    // 0x163718: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x163718u;
    {
        const bool branch_taken_0x163718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163718u;
        // 0x16371c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163718) {
            ctx->pc = 0x163758u;
            return;
        }
    }
    ctx->pc = 0x163720u;
    // 0x163720: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x163720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163724: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x163724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x163728: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x163728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x16372c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x163730: 0x8c64015c  lw          $a0, 0x15C($v1)
    ctx->pc = 0x163730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x163734: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x163734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x163738: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x163738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16373c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x16373cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163740: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x163740u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x163744: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x163744u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163748: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x163748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x16374c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x16374Cu;
    {
        const bool branch_taken_0x16374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16374Cu;
        // 0x163750: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16374c) {
            ctx->pc = 0x1638CCu;
            return;
        }
    }
    ctx->pc = 0x163754u;
    // 0x163754: 0x0  nop
    ctx->pc = 0x163754u;
    // NOP
    ctx->pc = 0x163758u;
}
