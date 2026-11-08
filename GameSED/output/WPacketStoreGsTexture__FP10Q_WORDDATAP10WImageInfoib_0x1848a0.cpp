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

// Function: WPacketStoreGsTexture__FP10Q_WORDDATAP10WImageInfoib
// Address: 0x1848a0 - 0x18495c
void WPacketStoreGsTexture__FP10Q_WORDDATAP10WImageInfoib_0x1848a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPacketStoreGsTexture__FP10Q_WORDDATAP10WImageInfoib_0x1848a0");
#endif

    ctx->pc = 0x1848a0u;

    // 0x1848a0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1848a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1848a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1848a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848a8: 0x7100a  movz        $v0, $zero, $a3
    ctx->pc = 0x1848a8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1848ac: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1848acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1848b0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1848b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1848b4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1848b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848b8: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x1848b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x1848bc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1848bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1848c0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1848c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848c4: 0x30cdffff  andi        $t5, $a2, 0xFFFF
    ctx->pc = 0x1848c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1848c8: 0xdd630038  ld          $v1, 0x38($t3)
    ctx->pc = 0x1848c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x1848cc: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1848CCu;
    {
        const bool branch_taken_0x1848cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1848D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848CCu;
        // 0x1848d0: 0x25820010  addiu       $v0, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848cc) {
            ctx->pc = 0x184930u;
            goto label_184930;
        }
    }
    ctx->pc = 0x1848D4u;
    // 0x1848d4: 0x95680018  lhu         $t0, 0x18($t3)
    ctx->pc = 0x1848d4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x1848d8: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x1848d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1848dc: 0xa53bc  dsll32      $t2, $t2, 14
    ctx->pc = 0x1848dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 14));
    // 0x1848e0: 0x95640004  lhu         $a0, 0x4($t3)
    ctx->pc = 0x1848e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1848e4: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x1848e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1848e8: 0x94cf8  dsll        $t1, $t1, 19
    ctx->pc = 0x1848e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 19);
    // 0x1848ec: 0x95670002  lhu         $a3, 0x2($t3)
    ctx->pc = 0x1848ecu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1848f0: 0x846b8  dsll        $t0, $t0, 26
    ctx->pc = 0x1848f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 26);
    // 0x1848f4: 0x9565001a  lhu         $a1, 0x1A($t3)
    ctx->pc = 0x1848f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26)));
    // 0x1848f8: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1848f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1848fc: 0x9566000c  lhu         $a2, 0xC($t3)
    ctx->pc = 0x1848fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x184900: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x184900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x184904: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x184904u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x184908: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x184908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x18490c: 0x634fc  dsll32      $a2, $a2, 19
    ctx->pc = 0x18490cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 19));
    // 0x184910: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x184910u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x184914: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x184914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x184918: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x184918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x18491c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x18491cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x184920: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x184920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x184924: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x184924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x184928: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x184928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18492c: 0xfd630038  sd          $v1, 0x38($t3)
    ctx->pc = 0x18492cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 56), GPR_U64(ctx, 3));
label_184930:
    // 0x184930: 0x95630008  lhu         $v1, 0x8($t3)
    ctx->pc = 0x184930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x184934: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x184934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x184938: 0x95650030  lhu         $a1, 0x30($t3)
    ctx->pc = 0x184938u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x18493c: 0xdd640038  ld          $a0, 0x38($t3)
    ctx->pc = 0x18493cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x184940: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x184944: 0xfd860008  sd          $a2, 0x8($t4)
    ctx->pc = 0x184944u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 6));
    // 0x184948: 0x6d182d  daddu       $v1, $v1, $t5
    ctx->pc = 0x184948u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 13));
    // 0x18494c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x18494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x184950: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x184950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x184954: 0x3e00008  jr          $ra
    ctx->pc = 0x184954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184954u;
        // 0x184958: 0xfd840000  sd          $a0, 0x0($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18495Cu;
}
