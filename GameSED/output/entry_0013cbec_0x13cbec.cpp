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

// Function: entry_0013cbec
// Address: 0x13cbec - 0x13cc24
void entry_0013cbec_0x13cbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cbec_0x13cbec");
#endif

    switch (ctx->pc) {
        case 0x13cbf8u: goto label_13cbf8;
        default: break;
    }

    ctx->pc = 0x13cbecu;

    // 0x13cbec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cbf0: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x13CBF0u;
    SET_GPR_U32(ctx, 31, 0x13CBF8u);
    ctx->pc = 0x13CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CBF0u;
    // 0x13cbf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x13CBF0u, 0x13CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CBF8u;
label_13cbf8:
    // 0x13cbf8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x13cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x13cbfc: 0xc7818134  lwc1        $f1, -0x7ECC($gp)
    ctx->pc = 0x13cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cc00: 0xc7808a34  lwc1        $f0, -0x75CC($gp)
    ctx->pc = 0x13cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cc04: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x13cc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x13cc08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13cc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13cc0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13cc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13cc10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13cc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13cc14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13cc14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13cc18: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13cc18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13cc1c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x13CC1Cu;
    SET_GPR_U32(ctx, 31, 0x13CC24u);
    ctx->pc = 0x13CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC1Cu;
    // 0x13cc20: 0x248468b0  addiu       $a0, $a0, 0x68B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x13CC1Cu, 0x13CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC24u;
}
