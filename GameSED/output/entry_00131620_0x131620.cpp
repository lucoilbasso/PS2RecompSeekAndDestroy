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

// Function: entry_00131620
// Address: 0x131620 - 0x131660
void entry_00131620_0x131620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131620_0x131620");
#endif

    switch (ctx->pc) {
        case 0x131648u: goto label_131648;
        default: break;
    }

    ctx->pc = 0x131620u;

    // 0x131620: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x131620u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x131624: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x131624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x131628: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x131628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13162c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13162cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x131630: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x131630u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131634: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x131634u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131638: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x131638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13163c: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x13163cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x131640: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x131640u;
    SET_GPR_U32(ctx, 31, 0x131648u);
    ctx->pc = 0x131644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131640u;
    // 0x131644: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x131640u, 0x131648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131648u;
label_131648:
    // 0x131648: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x131648u;
    {
        const bool branch_taken_0x131648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131648) {
            ctx->pc = 0x13164Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131648u;
            // 0x13164c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1316A4u;
            return;
        }
    }
    ctx->pc = 0x131650u;
    // 0x131650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x131650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131658: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x131658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x13165c: 0x0  nop
    ctx->pc = 0x13165cu;
    // NOP
    ctx->pc = 0x131660u;
}
