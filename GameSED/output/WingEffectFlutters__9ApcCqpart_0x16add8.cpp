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

// Function: WingEffectFlutters__9ApcCqpart
// Address: 0x16add8 - 0x16ae44
void WingEffectFlutters__9ApcCqpart_0x16add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WingEffectFlutters__9ApcCqpart_0x16add8");
#endif

    switch (ctx->pc) {
        case 0x16ae1cu: goto label_16ae1c;
        case 0x16ae2cu: goto label_16ae2c;
        case 0x16ae34u: goto label_16ae34;
        default: break;
    }

    ctx->pc = 0x16add8u;

    // 0x16add8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16addc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16ade0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16ade4: 0x8c901264  lw          $s0, 0x1264($a0)
    ctx->pc = 0x16ade4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4708)));
    // 0x16ade8: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x16ADE8u;
    {
        const bool branch_taken_0x16ade8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ade8) {
            ctx->pc = 0x16ADECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ADE8u;
            // 0x16adec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AE38u;
            goto label_16ae38;
        }
    }
    ctx->pc = 0x16ADF0u;
    // 0x16adf0: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x16adf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16adf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16adf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16adf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16adf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16adfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16adfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ae00: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x16AE00u;
    {
        const bool branch_taken_0x16ae00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ae00) {
            ctx->pc = 0x16AE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AE00u;
            // 0x16ae04: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AE38u;
            goto label_16ae38;
        }
    }
    ctx->pc = 0x16AE08u;
    // 0x16ae08: 0x260305f0  addiu       $v1, $s0, 0x5F0
    ctx->pc = 0x16ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    // 0x16ae0c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16ae0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ae10: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16ae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16ae14: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16AE14u;
    SET_GPR_U32(ctx, 31, 0x16AE1Cu);
    ctx->pc = 0x16AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE14u;
    // 0x16ae18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16AE14u, 0x16AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE1Cu;
label_16ae1c:
    // 0x16ae1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16ae1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16ae20: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x16ae20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x16ae24: 0xc04c9d4  jal         func_132750
    ctx->pc = 0x16AE24u;
    SET_GPR_U32(ctx, 31, 0x16AE2Cu);
    ctx->pc = 0x16AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE24u;
    // 0x16ae28: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x132750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132750u, 0x16AE24u, 0x16AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE2Cu;
label_16ae2c:
    // 0x16ae2c: 0xc04ca08  jal         func_132820
    ctx->pc = 0x16AE2Cu;
    SET_GPR_U32(ctx, 31, 0x16AE34u);
    ctx->pc = 0x16AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE2Cu;
    // 0x16ae30: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132820u, 0x16AE2Cu, 0x16AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE34u;
label_16ae34:
    // 0x16ae34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16ae34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ae38:
    // 0x16ae38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16ae38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ae3c: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE3Cu;
        // 0x16ae40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AE44u;
}
