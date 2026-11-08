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

// Function: SHitpolyTestClipXZ__FP13WHitpolyParamP9FVector32f
// Address: 0x183048 - 0x1830ac
void SHitpolyTestClipXZ__FP13WHitpolyParamP9FVector32f_0x183048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SHitpolyTestClipXZ__FP13WHitpolyParamP9FVector32f_0x183048");
#endif

    ctx->pc = 0x183048u;

    // 0x183048: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x183048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18304c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x18304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183050: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x183050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x183054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x183054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183058: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x183058u;
    {
        const bool branch_taken_0x183058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183058u;
        // 0x18305c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183058) {
            ctx->pc = 0x183064u;
            goto label_183064;
        }
    }
    ctx->pc = 0x183060u;
    // 0x183060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183064:
    // 0x183064: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x183064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183068: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x183068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x18306c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18306cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183070: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x183070u;
    {
        const bool branch_taken_0x183070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183070) {
            ctx->pc = 0x183074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183070u;
            // 0x183074: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x183078u;
            goto label_183078;
        }
    }
    ctx->pc = 0x183078u;
label_183078:
    // 0x183078: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x183078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18307c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x18307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183080: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x183080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x183084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x183084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183088: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x183088u;
    {
        const bool branch_taken_0x183088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183088) {
            ctx->pc = 0x18308Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183088u;
            // 0x18308c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x183090u;
            goto label_183090;
        }
    }
    ctx->pc = 0x183090u;
label_183090:
    // 0x183090: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x183090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183094: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x183094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x183098: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x183098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18309c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18309Cu;
    {
        const bool branch_taken_0x18309c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18309c) {
            ctx->pc = 0x1830A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18309Cu;
            // 0x1830a0: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            goto label_1830a4;
        }
    }
    ctx->pc = 0x1830A4u;
label_1830a4:
    // 0x1830a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1830A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1830A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1830ACu;
}
