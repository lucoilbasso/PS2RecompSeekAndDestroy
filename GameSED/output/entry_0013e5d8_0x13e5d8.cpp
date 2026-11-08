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

// Function: entry_0013e5d8
// Address: 0x13e5d8 - 0x13e640
void entry_0013e5d8_0x13e5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e5d8_0x13e5d8");
#endif

    switch (ctx->pc) {
        case 0x13e634u: goto label_13e634;
        default: break;
    }

    ctx->pc = 0x13e5d8u;

    // 0x13e5d8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x13e5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e5dc: 0x1271023  subu        $v0, $t1, $a3
    ctx->pc = 0x13e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x13e5e0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13e5e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13e5e8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x13E5E8u;
    {
        const bool branch_taken_0x13e5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5E8u;
        // 0x13e5ec: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5e8) {
            ctx->pc = 0x13E6D0u;
            return;
        }
    }
    ctx->pc = 0x13E5F0u;
    // 0x13e5f0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13e5f4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13e5f8: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13e5fc: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x13e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x13e600: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x13e600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e604: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x13e604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x13e608: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13e608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13e60c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e610: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x13e610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x13e614: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13e614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e618: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x13e618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x13e61c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e620: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e624: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13e624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13e628: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x13e628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x13e62c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E62Cu;
    SET_GPR_U32(ctx, 31, 0x13E634u);
    ctx->pc = 0x13E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E62Cu;
    // 0x13e630: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E62Cu, 0x13E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E634u;
label_13e634:
    // 0x13e634: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13e634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13e638: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13e638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13e63c: 0x0  nop
    ctx->pc = 0x13e63cu;
    // NOP
    ctx->pc = 0x13e640u;
}
