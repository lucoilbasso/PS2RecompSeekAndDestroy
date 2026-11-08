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

// Function: entry_00164728
// Address: 0x164728 - 0x164744
void entry_00164728_0x164728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164728_0x164728");
#endif

    ctx->pc = 0x164728u;

    // 0x164728: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x164728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16472c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16472cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x164730: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x164730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164734: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x164734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16473c: 0xc05862e  jal         func_1618B8
    ctx->pc = 0x16473Cu;
    SET_GPR_U32(ctx, 31, 0x164744u);
    ctx->pc = 0x164740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16473Cu;
    // 0x164740: 0xe6a01ac4  swc1        $f0, 0x1AC4($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 6852), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1618B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1618B8u, 0x16473Cu, 0x164744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164744u;
}
