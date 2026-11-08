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

// Function: entry_00123528
// Address: 0x123528 - 0x123554
void entry_00123528_0x123528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123528_0x123528");
#endif

    switch (ctx->pc) {
        case 0x123538u: goto label_123538;
        default: break;
    }

    ctx->pc = 0x123528u;

    // 0x123528: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x123528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12352c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12352cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123530: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x123530u;
    SET_GPR_U32(ctx, 31, 0x123538u);
    ctx->pc = 0x123534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123530u;
    // 0x123534: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x123530u, 0x123538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123538u;
label_123538:
    // 0x123538: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x123538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12353c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x12353Cu;
    {
        const bool branch_taken_0x12353c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12353Cu;
        // 0x123540: 0xe60000dc  swc1        $f0, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12353c) {
            ctx->pc = 0x123554u;
            return;
        }
    }
    ctx->pc = 0x123544u;
    // 0x123544: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123548: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x123548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12354c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x12354cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x123550: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x123550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    ctx->pc = 0x123554u;
}
