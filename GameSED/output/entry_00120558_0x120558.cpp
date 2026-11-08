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

// Function: entry_00120558
// Address: 0x120558 - 0x1205dc
void entry_00120558_0x120558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120558_0x120558");
#endif

    ctx->pc = 0x120558u;

    // 0x120558: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x120558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x12055c: 0x11000049  beqz        $t0, . + 4 + (0x49 << 2)
    ctx->pc = 0x12055Cu;
    {
        const bool branch_taken_0x12055c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x120560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12055Cu;
        // 0x120560: 0x25070080  addiu       $a3, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12055c) {
            ctx->pc = 0x120684u;
            return;
        }
    }
    ctx->pc = 0x120564u;
    // 0x120564: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x120564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x120568: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x120568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12056c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120570: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120574: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x120574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x120578: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x120578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12057c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12057cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x120580: 0x15e00016  bnez        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x120580u;
    {
        const bool branch_taken_0x120580 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120580u;
        // 0x120584: 0x25050090  addiu       $a1, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120580) {
            ctx->pc = 0x1205DCu;
            return;
        }
    }
    ctx->pc = 0x120588u;
    // 0x120588: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x120588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12058c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x12058cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x120590: 0x8cc40120  lw          $a0, 0x120($a2)
    ctx->pc = 0x120590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x120594: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x120594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x120598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x120598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12059c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12059cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1205a0: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1205a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1205a4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1205a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1205a8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1205a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1205ac: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1205acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1205b0: 0xd9430000  lqc2        $vf3, 0x0($t2)
    ctx->pc = 0x1205b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1205b4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1205b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1205b8: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1205b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1205bc: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x1205bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x1205c0: 0x250400a0  addiu       $a0, $t0, 0xA0
    ctx->pc = 0x1205c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x1205c4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1205c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1205c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1205c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1205cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1205ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1205d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1205d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1205d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1205d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1205d8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1205d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1205dcu;
}
