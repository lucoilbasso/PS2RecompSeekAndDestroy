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

// Function: entry_001da788
// Address: 0x1da788 - 0x1da8a4
void entry_001da788_0x1da788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da788_0x1da788");
#endif

    ctx->pc = 0x1da788u;

label_1da788:
    // 0x1da788: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da78c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1da78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1da790: 0x0  nop
    ctx->pc = 0x1da790u;
    // NOP
    // 0x1da794: 0x0  nop
    ctx->pc = 0x1da794u;
    // NOP
    // 0x1da798: 0x0  nop
    ctx->pc = 0x1da798u;
    // NOP
    // 0x1da79c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DA79Cu;
    {
        const bool branch_taken_0x1da79c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA79Cu;
        // 0x1da7a0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da79c) {
            ctx->pc = 0x1DA788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da788;
        }
    }
    ctx->pc = 0x1DA7A4u;
    // 0x1da7a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1da7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1da7a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1da7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da7ac: 0x25a31a60  addiu       $v1, $t5, 0x1A60
    ctx->pc = 0x1da7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 6752));
    // 0x1da7b0: 0x25a519c0  addiu       $a1, $t5, 0x19C0
    ctx->pc = 0x1da7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 6592));
    // 0x1da7b4: 0x25a211b0  addiu       $v0, $t5, 0x11B0
    ctx->pc = 0x1da7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4528));
    // 0x1da7b8: 0x25a419e4  addiu       $a0, $t5, 0x19E4
    ctx->pc = 0x1da7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 6628));
    // 0x1da7bc: 0x25a619f0  addiu       $a2, $t5, 0x19F0
    ctx->pc = 0x1da7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 6640));
    // 0x1da7c0: 0x25a719fc  addiu       $a3, $t5, 0x19FC
    ctx->pc = 0x1da7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 6652));
    // 0x1da7c4: 0x25a81a08  addiu       $t0, $t5, 0x1A08
    ctx->pc = 0x1da7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 6664));
    // 0x1da7c8: 0x25a91a14  addiu       $t1, $t5, 0x1A14
    ctx->pc = 0x1da7c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 6676));
    // 0x1da7cc: 0x25aa1a20  addiu       $t2, $t5, 0x1A20
    ctx->pc = 0x1da7ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 6688));
    // 0x1da7d0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da7d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1da7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1da7d8: 0xada00cc4  sw          $zero, 0xCC4($t5)
    ctx->pc = 0x1da7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 3268), GPR_U32(ctx, 0));
    // 0x1da7dc: 0x25ac1a80  addiu       $t4, $t5, 0x1A80
    ctx->pc = 0x1da7dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 6784));
    // 0x1da7e0: 0xada00cc8  sw          $zero, 0xCC8($t5)
    ctx->pc = 0x1da7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 3272), GPR_U32(ctx, 0));
    // 0x1da7e4: 0xada00ccc  sw          $zero, 0xCCC($t5)
    ctx->pc = 0x1da7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 3276), GPR_U32(ctx, 0));
    // 0x1da7e8: 0xada00cf0  sw          $zero, 0xCF0($t5)
    ctx->pc = 0x1da7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 3312), GPR_U32(ctx, 0));
    // 0x1da7ec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1da7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1da7f0: 0xac4b0008  sw          $t3, 0x8($v0)
    ctx->pc = 0x1da7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 11));
    // 0x1da7f4: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1da7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1da7f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1da7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1da7fc: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x1da7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x1da800: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1da800u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1da804: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1da804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1da808: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1da808u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1da80c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1da80cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1da810: 0xada00d74  sw          $zero, 0xD74($t5)
    ctx->pc = 0x1da810u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 3444), GPR_U32(ctx, 0));
    // 0x1da814: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1da814u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1da818: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1da818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1da81c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1da81cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1da820: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1da820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1da824: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x1da824u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x1da828: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1da828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1da82c: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1da82cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x1da830: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1da830u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1da834: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1da834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1da838: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1da838u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1da83c: 0xe5a01ac4  swc1        $f0, 0x1AC4($t5)
    ctx->pc = 0x1da83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 6852), bits); }
    // 0x1da840: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x1da840u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x1da844: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1da844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1da848: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x1da848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1da84c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x1da84cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x1da850: 0xada01a2c  sw          $zero, 0x1A2C($t5)
    ctx->pc = 0x1da850u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 6700), GPR_U32(ctx, 0));
    // 0x1da854: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1da854u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1da858: 0xe5a01ac0  swc1        $f0, 0x1AC0($t5)
    ctx->pc = 0x1da858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 6848), bits); }
    // 0x1da85c: 0xada01ac8  sw          $zero, 0x1AC8($t5)
    ctx->pc = 0x1da85cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 6856), GPR_U32(ctx, 0));
    // 0x1da860: 0xada01acc  sw          $zero, 0x1ACC($t5)
    ctx->pc = 0x1da860u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 6860), GPR_U32(ctx, 0));
    // 0x1da864: 0xada01ad0  sw          $zero, 0x1AD0($t5)
    ctx->pc = 0x1da864u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 6864), GPR_U32(ctx, 0));
    // 0x1da868: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1da868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1da86c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1da86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1da870: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1da870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1da874: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1da874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1da878: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1da878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1da87c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1da87cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1da880: 0xf9800000  sqc2        $vf0, 0x0($t4)
    ctx->pc = 0x1da880u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1da884: 0x25a21a90  addiu       $v0, $t5, 0x1A90
    ctx->pc = 0x1da884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 6800));
    // 0x1da888: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1da888u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1da88c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1da88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1da890: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1da890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1da894: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x1da894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x1da898: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x1da898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x1da89c: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x1da89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x1da8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8A8u;
}
