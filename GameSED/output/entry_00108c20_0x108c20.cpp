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

// Function: entry_00108c20
// Address: 0x108c20 - 0x108c60
void entry_00108c20_0x108c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108c20_0x108c20");
#endif

    switch (ctx->pc) {
        case 0x108c2cu: goto label_108c2c;
        default: break;
    }

    ctx->pc = 0x108c20u;

    // 0x108c20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c24: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108C24u;
    SET_GPR_U32(ctx, 31, 0x108C2Cu);
    ctx->pc = 0x108C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C24u;
    // 0x108c28: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108C24u, 0x108C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C2Cu;
label_108c2c:
    // 0x108c2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108C2Cu;
    {
        const bool branch_taken_0x108c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C2Cu;
        // 0x108c30: 0x26030004  addiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c2c) {
            ctx->pc = 0x108C60u;
            return;
        }
    }
    ctx->pc = 0x108C34u;
    // 0x108c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x108c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108c38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x108c3c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x108c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x108c40: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x108c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x108c44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x108c44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x108c48: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x108c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x108c4c: 0x705210c8  pmaxw       $v0, $v0, $s2
    ctx->pc = 0x108c4cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x108c50: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x108c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x108c54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108C54u;
    {
        const bool branch_taken_0x108c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C54u;
        // 0x108c58: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c54) {
            ctx->pc = 0x108C68u;
            return;
        }
    }
    ctx->pc = 0x108C5Cu;
    // 0x108c5c: 0x0  nop
    ctx->pc = 0x108c5cu;
    // NOP
    ctx->pc = 0x108c60u;
}
