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

// Function: entry_00158b84
// Address: 0x158b84 - 0x158c2c
void entry_00158b84_0x158b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b84_0x158b84");
#endif

    ctx->pc = 0x158b84u;

    // 0x158b84: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x158b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x158b88: 0x2408ff80  addiu       $t0, $zero, -0x80
    ctx->pc = 0x158b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x158b8c: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x158b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x158b90: 0x25460030  addiu       $a2, $t2, 0x30
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x158b94: 0x80a30005  lb          $v1, 0x5($a1)
    ctx->pc = 0x158b94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x158b98: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x158b9c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x158b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x158ba0: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x158ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x158ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158ba8: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x158ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158bac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158bb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x158bb4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x158bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x158bb8: 0xad4d0000  sw          $t5, 0x0($t2)
    ctx->pc = 0x158bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 13));
    // 0x158bbc: 0xad430020  sw          $v1, 0x20($t2)
    ctx->pc = 0x158bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 3));
    // 0x158bc0: 0xad470090  sw          $a3, 0x90($t2)
    ctx->pc = 0x158bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 7));
    // 0x158bc4: 0xa1480020  sb          $t0, 0x20($t2)
    ctx->pc = 0x158bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 32), (uint8_t)GPR_U32(ctx, 8));
    // 0x158bc8: 0xd9840000  lqc2        $vf4, 0x0($t4)
    ctx->pc = 0x158bc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x158bcc: 0xd9850010  lqc2        $vf5, 0x10($t4)
    ctx->pc = 0x158bccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x158bd0: 0xd9860020  lqc2        $vf6, 0x20($t4)
    ctx->pc = 0x158bd0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x158bd4: 0xd9870030  lqc2        $vf7, 0x30($t4)
    ctx->pc = 0x158bd4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x158bd8: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x158bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x158bdc: 0xf8c50010  sqc2        $vf5, 0x10($a2)
    ctx->pc = 0x158bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x158be0: 0xf8c60020  sqc2        $vf6, 0x20($a2)
    ctx->pc = 0x158be0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158be4: 0xf8c70030  sqc2        $vf7, 0x30($a2)
    ctx->pc = 0x158be4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x158be8: 0x25430080  addiu       $v1, $t2, 0x80
    ctx->pc = 0x158be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
    // 0x158bec: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x158becu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x158bf0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x158bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x158bf4: 0xe5400098  swc1        $f0, 0x98($t2)
    ctx->pc = 0x158bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 152), bits); }
    // 0x158bf8: 0x25430070  addiu       $v1, $t2, 0x70
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 112));
    // 0x158bfc: 0x79e20000  lq          $v0, 0x0($t7)
    ctx->pc = 0x158bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x158c00: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x158c00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x158c04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x158c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158c08: 0x8d62000c  lw          $v0, 0xC($t3)
    ctx->pc = 0x158c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x158c0c: 0xad44009c  sw          $a0, 0x9C($t2)
    ctx->pc = 0x158c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 156), GPR_U32(ctx, 4));
    // 0x158c10: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x158c14: 0xad490094  sw          $t1, 0x94($t2)
    ctx->pc = 0x158c14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 148), GPR_U32(ctx, 9));
    // 0x158c18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x158c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158c1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x158c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x158c20: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x158c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x158c24: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x158c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x158c28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x158c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x158c2cu;
}
