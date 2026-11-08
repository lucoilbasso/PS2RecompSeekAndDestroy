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

// Function: entry_0012c5b8
// Address: 0x12c5b8 - 0x12c5f8
void entry_0012c5b8_0x12c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c5b8_0x12c5b8");
#endif

    switch (ctx->pc) {
        case 0x12c5c4u: goto label_12c5c4;
        default: break;
    }

    ctx->pc = 0x12c5b8u;

    // 0x12c5b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c5bc: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C5BCu;
    SET_GPR_U32(ctx, 31, 0x12C5C4u);
    ctx->pc = 0x12C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5BCu;
    // 0x12c5c0: 0x262501c4  addiu       $a1, $s1, 0x1C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C5BCu, 0x12C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5C4u;
label_12c5c4:
    // 0x12c5c4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x12c5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c5c8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x12c5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c5cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12c5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12c5d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12c5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12c5d4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x12c5d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12c5d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c5dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12c5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12c5e0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x12c5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c5e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12C5E4u;
    {
        const bool branch_taken_0x12c5e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5E4u;
        // 0x12c5e8: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5e4) {
            ctx->pc = 0x12C5F8u;
            return;
        }
    }
    ctx->pc = 0x12C5ECu;
    // 0x12c5ec: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x12c5ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x12c5f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c5f4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x12c5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->pc = 0x12c5f8u;
}
