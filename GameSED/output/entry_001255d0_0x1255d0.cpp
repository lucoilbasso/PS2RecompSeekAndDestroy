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

// Function: entry_001255d0
// Address: 0x1255d0 - 0x125688
void entry_001255d0_0x1255d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001255d0_0x1255d0");
#endif

    switch (ctx->pc) {
        case 0x12567cu: goto label_12567c;
        default: break;
    }

    ctx->pc = 0x1255d0u;

    // 0x1255d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1255d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1255d4: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1255D4u;
    {
        const bool branch_taken_0x1255d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1255D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255D4u;
        // 0x1255d8: 0x8fa40134  lw          $a0, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255d4) {
            ctx->pc = 0x125718u;
            return;
        }
    }
    ctx->pc = 0x1255DCu;
    // 0x1255dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1255dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1255e0: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1255e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1255e4: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1255e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1255e8: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1255e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1255ec: 0x3404a800  ori         $a0, $zero, 0xA800
    ctx->pc = 0x1255ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x1255f0: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x1255f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x1255f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1255f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1255f8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1255f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1255fc: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x1255fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x125600: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x125600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x125604: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x125604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x125608: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x125608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12560c: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x12560cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x125610: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x125610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x125614: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x125614u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x125618: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x125618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12561c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12561cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x125620: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x125620u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x125624: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x125624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x125628: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x125628u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x12562c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x12562cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125630: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x125630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x125634: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x125634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125638: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x125638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12563c: 0x2451023  subu        $v0, $s2, $a1
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x125640: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x125640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x125644: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x125648: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x125648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12564c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12564cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125650: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x125650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x125654: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x125654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x125658: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x125658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12565c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x125660: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x125660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x125664: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x125664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125668: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x125668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12566c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x12566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x125670: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x125670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x125674: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x125674u;
    SET_GPR_U32(ctx, 31, 0x12567Cu);
    ctx->pc = 0x125678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125674u;
    // 0x125678: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x125674u, 0x12567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12567Cu;
label_12567c:
    // 0x12567c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125680: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x125680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x125684: 0x0  nop
    ctx->pc = 0x125684u;
    // NOP
    ctx->pc = 0x125688u;
}
