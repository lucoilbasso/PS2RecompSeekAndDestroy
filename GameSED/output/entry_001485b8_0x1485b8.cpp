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

// Function: entry_001485b8
// Address: 0x1485b8 - 0x148668
void entry_001485b8_0x1485b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001485b8_0x1485b8");
#endif

    switch (ctx->pc) {
        case 0x148660u: goto label_148660;
        default: break;
    }

    ctx->pc = 0x1485b8u;

    // 0x1485b8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1485b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1485bc: 0x2ae20008  slti        $v0, $s7, 0x8
    ctx->pc = 0x1485bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1485c0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1485c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1485c4: 0x1440ff28  bnez        $v0, . + 4 + (-0xD8 << 2)
    ctx->pc = 0x1485C4u;
    {
        const bool branch_taken_0x1485c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1485C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1485C4u;
        // 0x1485c8: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485c4) {
            ctx->pc = 0x148268u;
            return;
        }
    }
    ctx->pc = 0x1485CCu;
    // 0x1485cc: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1485ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485d0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1485d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1485d4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1485d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1485d8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1485d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485dc: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1485dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1485e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1485e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1485e4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1485e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1485e8: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x1485e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x1485ec: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1485ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1485f0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1485f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1485f4: 0x8fb000a4  lw          $s0, 0xA4($sp)
    ctx->pc = 0x1485f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1485f8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1485f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1485fc: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1485fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x148600: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x148600u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x148604: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x148604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x148608: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x148608u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x14860c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x14860cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x148610: 0x3c0a5000  lui         $t2, 0x5000
    ctx->pc = 0x148610u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20480 << 16));
    // 0x148614: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x148614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x148618: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x148618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14861c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x14861cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148620: 0x1661023  subu        $v0, $t3, $a2
    ctx->pc = 0x148620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x148624: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x148624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x148628: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x148628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14862c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14862cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x148630: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x148630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x148634: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x148634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x148638: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x148638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x14863c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x14863cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x148640: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148644: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x148644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x148648: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x148648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14864c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148650: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x148650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x148654: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x148654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x148658: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x148658u;
    SET_GPR_U32(ctx, 31, 0x148660u);
    ctx->pc = 0x14865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148658u;
    // 0x14865c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x148658u, 0x148660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148660u;
label_148660:
    // 0x148660: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148664: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x148668u;
}
