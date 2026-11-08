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

// Function: entry_001a8208
// Address: 0x1a8208 - 0x1a8230
void entry_001a8208_0x1a8208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8208_0x1a8208");
#endif

    switch (ctx->pc) {
        case 0x1a8218u: goto label_1a8218;
        case 0x1a8224u: goto label_1a8224;
        default: break;
    }

    ctx->pc = 0x1a8208u;

    // 0x1a8208: 0x54560009  bnel        $v0, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8208u;
    {
        const bool branch_taken_0x1a8208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1a8208) {
            ctx->pc = 0x1A820Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8208u;
            // 0x1a820c: 0x46146002  mul.s       $f0, $f12, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8230u;
            return;
        }
    }
    ctx->pc = 0x1A8210u;
    // 0x1a8210: 0xc072738  jal         func_1C9CE0
    ctx->pc = 0x1A8210u;
    SET_GPR_U32(ctx, 31, 0x1A8218u);
    ctx->pc = 0x1C9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9CE0u, 0x1A8210u, 0x1A8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8218u;
label_1a8218:
    // 0x1a8218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a8218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a821c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A821Cu;
    SET_GPR_U32(ctx, 31, 0x1A8224u);
    ctx->pc = 0x1A8220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A821Cu;
    // 0x1a8220: 0x26a4d918  addiu       $a0, $s5, -0x26E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A821Cu, 0x1A8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8224u;
label_1a8224:
    // 0x1a8224: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8224u;
    {
        const bool branch_taken_0x1a8224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8224u;
        // 0x1a8228: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8224) {
            ctx->pc = 0x1A8244u;
            return;
        }
    }
    ctx->pc = 0x1A822Cu;
    // 0x1a822c: 0x0  nop
    ctx->pc = 0x1a822cu;
    // NOP
    ctx->pc = 0x1a8230u;
}
