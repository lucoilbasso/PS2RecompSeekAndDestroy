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

// Function: WImageChangeBaseBlock__FP10WImageInfoi
// Address: 0x17e5a8 - 0x17e620
void WImageChangeBaseBlock__FP10WImageInfoi_0x17e5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageChangeBaseBlock__FP10WImageInfoi_0x17e5a8");
#endif

    ctx->pc = 0x17e5a8u;

    // 0x17e5a8: 0x9482002c  lhu         $v0, 0x2C($a0)
    ctx->pc = 0x17e5a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x17e5ac: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x17e5acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17e5b0: 0xb5bbc  dsll32      $t3, $t3, 14
    ctx->pc = 0x17e5b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 14));
    // 0x17e5b4: 0x94890018  lhu         $t1, 0x18($a0)
    ctx->pc = 0x17e5b4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17e5b8: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x17e5b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17e5bc: 0xa54f8  dsll        $t2, $t2, 19
    ctx->pc = 0x17e5bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 19);
    // 0x17e5c0: 0x94860004  lhu         $a2, 0x4($a0)
    ctx->pc = 0x17e5c0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17e5c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17e5c8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x17e5c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17e5cc: 0x94eb8  dsll        $t1, $t1, 26
    ctx->pc = 0x17e5ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 26);
    // 0x17e5d0: 0x9488001a  lhu         $t0, 0x1A($a0)
    ctx->pc = 0x17e5d0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x17e5d4: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x17e5d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x17e5d8: 0x9487000c  lhu         $a3, 0xC($a0)
    ctx->pc = 0x17e5d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17e5dc: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x17e5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x17e5e0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x17e5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e5e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17e5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17e5e8: 0x847b8  dsll        $t0, $t0, 30
    ctx->pc = 0x17e5e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 30);
    // 0x17e5ec: 0x73cfc  dsll32      $a3, $a3, 19
    ctx->pc = 0x17e5ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 19));
    // 0x17e5f0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x17e5f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x17e5f4: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x17e5f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x17e5f8: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x17e5f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x17e5fc: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x17e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x17e600: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x17e600u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x17e604: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x17e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x17e608: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x17e608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x17e60c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17e610: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x17e610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x17e614: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x17e614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e618: 0x3e00008  jr          $ra
    ctx->pc = 0x17E618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E618u;
        // 0x17e61c: 0xfc820038  sd          $v0, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E620u;
}
