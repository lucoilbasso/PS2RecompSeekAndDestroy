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

// Function: entry_00154d90
// Address: 0x154d90 - 0x154dc4
void entry_00154d90_0x154d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154d90_0x154d90");
#endif

    switch (ctx->pc) {
        case 0x154db8u: goto label_154db8;
        default: break;
    }

    ctx->pc = 0x154d90u;

    // 0x154d90: 0x26020820  addiu       $v0, $s0, 0x820
    ctx->pc = 0x154d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x154d94: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x154d94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x154d98: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x154d9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x154d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x154da0: 0xe6010414  swc1        $f1, 0x414($s0)
    ctx->pc = 0x154da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
    // 0x154da4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x154da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154da8: 0x1044015c  beq         $v0, $a0, . + 4 + (0x15C << 2)
    ctx->pc = 0x154DA8u;
    {
        const bool branch_taken_0x154da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x154DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DA8u;
        // 0x154dac: 0xe6010634  swc1        $f1, 0x634($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154da8) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154DB0u;
    // 0x154db0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154DB0u;
    SET_GPR_U32(ctx, 31, 0x154DB8u);
    ctx->pc = 0x154DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DB0u;
    // 0x154db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154DB0u, 0x154DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DB8u;
label_154db8:
    // 0x154db8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154DB8u;
    {
        const bool branch_taken_0x154db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DB8u;
        // 0x154dbc: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154db8) {
            ctx->pc = 0x154DD0u;
            return;
        }
    }
    ctx->pc = 0x154DC0u;
    // 0x154dc0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    ctx->pc = 0x154dc4u;
}
