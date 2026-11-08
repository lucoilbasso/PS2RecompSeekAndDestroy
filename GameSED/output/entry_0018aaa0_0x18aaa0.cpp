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

// Function: entry_0018aaa0
// Address: 0x18aaa0 - 0x18aaf0
void entry_0018aaa0_0x18aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aaa0_0x18aaa0");
#endif

    ctx->pc = 0x18aaa0u;

    // 0x18aaa0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18aaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aaa4: 0xc4c00218  lwc1        $f0, 0x218($a2)
    ctx->pc = 0x18aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18aaa8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18aaa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18aaac: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x18aaacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x18aab0: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x18AAB0u;
    {
        const bool branch_taken_0x18aab0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x18AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAB0u;
        // 0x18aab4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aab0) {
            ctx->pc = 0x18AAF0u;
            return;
        }
    }
    ctx->pc = 0x18AAB8u;
    // 0x18aab8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18aabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aac0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x18aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18aac4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18aac8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aacc: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x18aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x18aad0: 0x671807  srav        $v1, $a3, $v1
    ctx->pc = 0x18aad0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x18aad4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x18aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x18aad8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18aadc: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x18aadcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x18aae0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x18aae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18AAE4u;
    {
        const bool branch_taken_0x18aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAE4u;
        // 0x18aae8: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aae4) {
            ctx->pc = 0x18AAF8u;
            return;
        }
    }
    ctx->pc = 0x18AAECu;
    // 0x18aaec: 0x0  nop
    ctx->pc = 0x18aaecu;
    // NOP
    ctx->pc = 0x18aaf0u;
}
