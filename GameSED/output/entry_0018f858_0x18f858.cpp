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

// Function: entry_0018f858
// Address: 0x18f858 - 0x18f8a8
void entry_0018f858_0x18f858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f858_0x18f858");
#endif

    ctx->pc = 0x18f858u;

    // 0x18f858: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x18f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f85c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18f85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f860: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18f864: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x18f864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x18f868: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x18F868u;
    {
        const bool branch_taken_0x18f868 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F868u;
        // 0x18f86c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f868) {
            ctx->pc = 0x18F8A8u;
            return;
        }
    }
    ctx->pc = 0x18F870u;
    // 0x18f870: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18f870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18f874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f878: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x18f878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18f87c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18f880: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18f880u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f884: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x18f884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x18f888: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x18f888u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x18f88c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x18f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x18f890: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18f890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f894: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x18f894u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x18f898: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x18f898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x18f89c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F89Cu;
    {
        const bool branch_taken_0x18f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F89Cu;
        // 0x18f8a0: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f89c) {
            ctx->pc = 0x18F8B0u;
            return;
        }
    }
    ctx->pc = 0x18F8A4u;
    // 0x18f8a4: 0x0  nop
    ctx->pc = 0x18f8a4u;
    // NOP
    ctx->pc = 0x18f8a8u;
}
