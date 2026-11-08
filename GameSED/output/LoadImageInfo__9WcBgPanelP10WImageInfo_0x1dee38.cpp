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

// Function: LoadImageInfo__9WcBgPanelP10WImageInfo
// Address: 0x1dee38 - 0x1def10
void LoadImageInfo__9WcBgPanelP10WImageInfo_0x1dee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadImageInfo__9WcBgPanelP10WImageInfo_0x1dee38");
#endif

    ctx->pc = 0x1dee38u;

    // 0x1dee38: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1dee38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dee3c: 0x248701c0  addiu       $a3, $a0, 0x1C0
    ctx->pc = 0x1dee3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x1dee40: 0x248b0150  addiu       $t3, $a0, 0x150
    ctx->pc = 0x1dee40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1dee44: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x1dee44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dee48: 0xe73bc  dsll32      $t6, $t6, 14
    ctx->pc = 0x1dee48u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 14));
    // 0x1dee4c: 0xfc8201c0  sd          $v0, 0x1C0($a0)
    ctx->pc = 0x1dee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 448), GPR_U64(ctx, 2));
    // 0x1dee50: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x1dee50u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dee54: 0xd6cf8  dsll        $t5, $t5, 19
    ctx->pc = 0x1dee54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 19);
    // 0x1dee58: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x1dee58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1dee5c: 0xfc8201c8  sd          $v0, 0x1C8($a0)
    ctx->pc = 0x1dee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 456), GPR_U64(ctx, 2));
    // 0x1dee60: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1dee60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1dee64: 0xfc8301d0  sd          $v1, 0x1D0($a0)
    ctx->pc = 0x1dee64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 464), GPR_U64(ctx, 3));
    // 0x1dee68: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x1dee68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1dee6c: 0xfc8201d8  sd          $v0, 0x1D8($a0)
    ctx->pc = 0x1dee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 472), GPR_U64(ctx, 2));
    // 0x1dee70: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x1dee70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1dee74: 0xfc8301e0  sd          $v1, 0x1E0($a0)
    ctx->pc = 0x1dee74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 480), GPR_U64(ctx, 3));
    // 0x1dee78: 0xdca20028  ld          $v0, 0x28($a1)
    ctx->pc = 0x1dee78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1dee7c: 0xfc8201e8  sd          $v0, 0x1E8($a0)
    ctx->pc = 0x1dee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 488), GPR_U64(ctx, 2));
    // 0x1dee80: 0xdca30030  ld          $v1, 0x30($a1)
    ctx->pc = 0x1dee80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1dee84: 0xfc8301f0  sd          $v1, 0x1F0($a0)
    ctx->pc = 0x1dee84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 3));
    // 0x1dee88: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x1dee88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1dee8c: 0xfc8201f8  sd          $v0, 0x1F8($a0)
    ctx->pc = 0x1dee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 2));
    // 0x1dee90: 0x94e30018  lhu         $v1, 0x18($a3)
    ctx->pc = 0x1dee90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1dee94: 0x956c000c  lhu         $t4, 0xC($t3)
    ctx->pc = 0x1dee94u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x1dee98: 0xa5630008  sh          $v1, 0x8($t3)
    ctx->pc = 0x1dee98u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dee9c: 0x94e2001a  lhu         $v0, 0x1A($a3)
    ctx->pc = 0x1dee9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x1deea0: 0xa562000a  sh          $v0, 0xA($t3)
    ctx->pc = 0x1deea0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1deea4: 0x94e80018  lhu         $t0, 0x18($a3)
    ctx->pc = 0x1deea4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1deea8: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x1deea8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1deeac: 0x94e90002  lhu         $t1, 0x2($a3)
    ctx->pc = 0x1deeacu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1deeb0: 0x846b8  dsll        $t0, $t0, 26
    ctx->pc = 0x1deeb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 26);
    // 0x1deeb4: 0x94e5001a  lhu         $a1, 0x1A($a3)
    ctx->pc = 0x1deeb4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x1deeb8: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1deeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1deebc: 0x94e6000c  lhu         $a2, 0xC($a3)
    ctx->pc = 0x1deebcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1deec0: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x1deec0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x1deec4: 0x94ea0030  lhu         $t2, 0x30($a3)
    ctx->pc = 0x1deec4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1deec8: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x1deec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x1deecc: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x1deeccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1deed0: 0x634fc  dsll32      $a2, $a2, 19
    ctx->pc = 0x1deed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 19));
    // 0x1deed4: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x1deed4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1deed8: 0x10d4025  or          $t0, $t0, $t5
    ctx->pc = 0x1deed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 13));
    // 0x1deedc: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x1deedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x1deee0: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x1deee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x1deee4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1deee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1deee8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1deee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1deeec: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1deeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1deef0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1deef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1deef4: 0x6c182d  daddu       $v1, $v1, $t4
    ctx->pc = 0x1deef4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 12));
    // 0x1deef8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1deef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1deefc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1deefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1def00: 0xfce20038  sd          $v0, 0x38($a3)
    ctx->pc = 0x1def00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 2));
    // 0x1def04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1def04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1def08: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF08u;
        // 0x1def0c: 0xfd620018  sd          $v0, 0x18($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEF10u;
}
