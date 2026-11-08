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

// Function: entry_0012359c
// Address: 0x12359c - 0x1235cc
void entry_0012359c_0x12359c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012359c_0x12359c");
#endif

    switch (ctx->pc) {
        case 0x1235acu: goto label_1235ac;
        default: break;
    }

    ctx->pc = 0x12359cu;

    // 0x12359c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x12359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1235a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1235a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235a4: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x1235A4u;
    SET_GPR_U32(ctx, 31, 0x1235ACu);
    ctx->pc = 0x1235A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235A4u;
    // 0x1235a8: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x1235A4u, 0x1235ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235ACu;
label_1235ac:
    // 0x1235ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1235acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1235b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1235b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1235b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1235B4u;
    {
        const bool branch_taken_0x1235b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1235B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235B4u;
        // 0x1235b8: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235b4) {
            ctx->pc = 0x1235CCu;
            return;
        }
    }
    ctx->pc = 0x1235BCu;
    // 0x1235bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1235bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1235c0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1235c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1235c4: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1235c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1235c8: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1235c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    ctx->pc = 0x1235ccu;
}
