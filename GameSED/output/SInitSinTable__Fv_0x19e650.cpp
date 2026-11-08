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

// Function: SInitSinTable__Fv
// Address: 0x19e650 - 0x19e6e8
void SInitSinTable__Fv_0x19e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SInitSinTable__Fv_0x19e650");
#endif

    switch (ctx->pc) {
        case 0x19e680u: goto label_19e680;
        case 0x19e6a4u: goto label_19e6a4;
        case 0x19e6b0u: goto label_19e6b0;
        case 0x19e6bcu: goto label_19e6bc;
        default: break;
    }

    ctx->pc = 0x19e650u;

    // 0x19e650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e654: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19e654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19e658: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19e658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19e65c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19e65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19e660: 0xc7948624  lwc1        $f20, -0x79DC($gp)
    ctx->pc = 0x19e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e668: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19e668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e66c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19e670: 0x2451f640  addiu       $s1, $v0, -0x9C0
    ctx->pc = 0x19e670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x19e674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19e678: 0x24127fff  addiu       $s2, $zero, 0x7FFF
    ctx->pc = 0x19e678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x19e67c: 0x0  nop
    ctx->pc = 0x19e67cu;
    // NOP
label_19e680:
    // 0x19e680: 0x32037fff  andi        $v1, $s0, 0x7FFF
    ctx->pc = 0x19e680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    // 0x19e684: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19e684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19e688: 0x28644000  slti        $a0, $v1, 0x4000
    ctx->pc = 0x19e688u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x19e68c: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x19e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x19e690: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x19e690u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x19e694: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19e694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19e698: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x19e698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19e69c: 0xc072738  jal         func_1C9CE0
    ctx->pc = 0x19E69Cu;
    SET_GPR_U32(ctx, 31, 0x19E6A4u);
    ctx->pc = 0x19E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E69Cu;
    // 0x19e6a0: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9CE0u, 0x19E69Cu, 0x19E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6A4u;
label_19e6a4:
    // 0x19e6a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6a8: 0xc07197a  jal         func_1C65E8
    ctx->pc = 0x19E6A8u;
    SET_GPR_U32(ctx, 31, 0x19E6B0u);
    ctx->pc = 0x1C65E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C65E8u, 0x19E6A8u, 0x19E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6B0u;
label_19e6b0:
    // 0x19e6b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6b4: 0xc072978  jal         func_1CA5E0
    ctx->pc = 0x19E6B4u;
    SET_GPR_U32(ctx, 31, 0x19E6BCu);
    ctx->pc = 0x1CA5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA5E0u, 0x19E6B4u, 0x19E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6BCu;
label_19e6bc:
    // 0x19e6bc: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x19e6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x19e6c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x19e6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x19e6c4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19E6C4u;
    {
        const bool branch_taken_0x19e6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6C4u;
        // 0x19e6c8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6c4) {
            ctx->pc = 0x19E680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e680;
        }
    }
    ctx->pc = 0x19E6CCu;
    // 0x19e6cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e6d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e6d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19e6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e6d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19e6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19e6dc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E0u;
        // 0x19e6e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E6E8u;
}
