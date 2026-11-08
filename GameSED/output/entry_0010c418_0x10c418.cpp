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

// Function: entry_0010c418
// Address: 0x10c418 - 0x10c450
void entry_0010c418_0x10c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c418_0x10c418");
#endif

    switch (ctx->pc) {
        case 0x10c424u: goto label_10c424;
        default: break;
    }

    ctx->pc = 0x10c418u;

    // 0x10c418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10c418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c41c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C41Cu;
    SET_GPR_U32(ctx, 31, 0x10C424u);
    ctx->pc = 0x10C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C41Cu;
    // 0x10c420: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C41Cu, 0x10C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C424u;
label_10c424:
    // 0x10c424: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10c424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c428: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C428u;
    {
        const bool branch_taken_0x10c428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C428u;
        // 0x10c42c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c428) {
            ctx->pc = 0x10C450u;
            return;
        }
    }
    ctx->pc = 0x10C430u;
    // 0x10c430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c434: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10c434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10c438: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x10c438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x10c43c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x10c43cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x10c440: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10c440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10c444: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10c444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10c448: 0x705210c8  pmaxw       $v0, $v0, $s2
    ctx->pc = 0x10c448u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x10c44c: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x10c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x10c450u;
}
