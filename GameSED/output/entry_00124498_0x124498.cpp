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

// Function: entry_00124498
// Address: 0x124498 - 0x1244d0
void entry_00124498_0x124498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124498_0x124498");
#endif

    switch (ctx->pc) {
        case 0x1244b0u: goto label_1244b0;
        default: break;
    }

    ctx->pc = 0x124498u;

    // 0x124498: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x124498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12449c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1244a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1244a4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1244a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1244a8: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x1244A8u;
    SET_GPR_U32(ctx, 31, 0x1244B0u);
    ctx->pc = 0x1244ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244A8u;
    // 0x1244ac: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x1244A8u, 0x1244B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244B0u;
label_1244b0:
    // 0x1244b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1244b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1244b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1244b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1244b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1244B8u;
    {
        const bool branch_taken_0x1244b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1244BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244B8u;
        // 0x1244bc: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244b8) {
            ctx->pc = 0x1244D0u;
            return;
        }
    }
    ctx->pc = 0x1244C0u;
    // 0x1244c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1244c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1244c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1244c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1244c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1244c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1244cc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1244ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1244d0u;
}
