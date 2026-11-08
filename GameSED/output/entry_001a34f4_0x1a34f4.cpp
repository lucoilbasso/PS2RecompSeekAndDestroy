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

// Function: entry_001a34f4
// Address: 0x1a34f4 - 0x1a3548
void entry_001a34f4_0x1a34f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a34f4_0x1a34f4");
#endif

    ctx->pc = 0x1a34f4u;

    // 0x1a34f4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1a34f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a34f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a34fc: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1a34fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1a3500: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a3500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a3504: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a3504u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a3508: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a3508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a350c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a350cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a3510: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a3510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3514: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a3514u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1a3518: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x1a3518u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a351c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a351cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a3520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3524: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a3524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3528: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a3528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a352c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1a352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a3530: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a3530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3534: 0x0  nop
    ctx->pc = 0x1a3534u;
    // NOP
    // 0x1a3538: 0x0  nop
    ctx->pc = 0x1a3538u;
    // NOP
    // 0x1a353c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a353cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1a3540: 0xc0688f4  jal         func_1A23D0
    ctx->pc = 0x1A3540u;
    SET_GPR_U32(ctx, 31, 0x1A3548u);
    ctx->pc = 0x1A3544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3540u;
    // 0x1a3544: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23D0u, 0x1A3540u, 0x1A3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3548u;
}
