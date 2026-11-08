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

// Function: entry_001504f8
// Address: 0x1504f8 - 0x150568
void entry_001504f8_0x1504f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001504f8_0x1504f8");
#endif

    switch (ctx->pc) {
        case 0x150500u: goto label_150500;
        default: break;
    }

    ctx->pc = 0x1504f8u;

    // 0x1504f8: 0xc052fa2  jal         func_14BE88
    ctx->pc = 0x1504F8u;
    SET_GPR_U32(ctx, 31, 0x150500u);
    ctx->pc = 0x1504FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504F8u;
    // 0x1504fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE88u, 0x1504F8u, 0x150500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150500u;
label_150500:
    // 0x150500: 0x264a01d0  addiu       $t2, $s2, 0x1D0
    ctx->pc = 0x150500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x150504: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x150504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150508: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x150508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15050c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150510: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x150510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x150514: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x150514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150518: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x150518u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x15051c: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x15051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150520: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x150520u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150524: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x150524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x150528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15052c: 0x264905b0  addiu       $t1, $s2, 0x5B0
    ctx->pc = 0x15052cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
    // 0x150530: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x150530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x150534: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x150534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150538: 0x0  nop
    ctx->pc = 0x150538u;
    // NOP
    // 0x15053c: 0x0  nop
    ctx->pc = 0x15053cu;
    // NOP
    // 0x150540: 0x460201c3  div.s       $f7, $f0, $f2
    ctx->pc = 0x150540u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x150544: 0xc64101e8  lwc1        $f1, 0x1E8($s2)
    ctx->pc = 0x150544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150548: 0x8c644028  lw          $a0, 0x4028($v1)
    ctx->pc = 0x150548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16424)));
    // 0x15054c: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x15054cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x150550: 0x8c624024  lw          $v0, 0x4024($v1)
    ctx->pc = 0x150550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16420)));
    // 0x150554: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x150554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150558: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x150558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15055c: 0xae4201f0  sw          $v0, 0x1F0($s2)
    ctx->pc = 0x15055cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 2));
    // 0x150560: 0xae4401f4  sw          $a0, 0x1F4($s2)
    ctx->pc = 0x150560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 4));
    // 0x150564: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x150564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    ctx->pc = 0x150568u;
}
