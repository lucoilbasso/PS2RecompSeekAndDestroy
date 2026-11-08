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

// Function: entry_00190618
// Address: 0x190618 - 0x190668
void entry_00190618_0x190618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190618_0x190618");
#endif

    ctx->pc = 0x190618u;

    // 0x190618: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x190618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19061c: 0xc4c00218  lwc1        $f0, 0x218($a2)
    ctx->pc = 0x19061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190620: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190624: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x190624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x190628: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x190628u;
    {
        const bool branch_taken_0x190628 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x19062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190628u;
        // 0x19062c: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190628) {
            ctx->pc = 0x190668u;
            return;
        }
    }
    ctx->pc = 0x190630u;
    // 0x190630: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x190630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x190634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190638: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x190638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19063c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19063cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x190640: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x190640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x190644: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x190644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x190648: 0x671807  srav        $v1, $a3, $v1
    ctx->pc = 0x190648u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x19064c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x190650: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x190650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190654: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x190654u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x190658: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x190658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19065c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19065Cu;
    {
        const bool branch_taken_0x19065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19065Cu;
        // 0x190660: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19065c) {
            ctx->pc = 0x190670u;
            return;
        }
    }
    ctx->pc = 0x190664u;
    // 0x190664: 0x0  nop
    ctx->pc = 0x190664u;
    // NOP
    ctx->pc = 0x190668u;
}
