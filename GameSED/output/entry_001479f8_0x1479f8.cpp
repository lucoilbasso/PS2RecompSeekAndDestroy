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

// Function: entry_001479f8
// Address: 0x1479f8 - 0x147a98
void entry_001479f8_0x1479f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001479f8_0x1479f8");
#endif

    switch (ctx->pc) {
        case 0x147a8cu: goto label_147a8c;
        default: break;
    }

    ctx->pc = 0x1479f8u;

    // 0x1479f8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1479f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479fc: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1479fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x147a00: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x147a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a04: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x147a04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x147a08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x147a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x147a0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x147a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x147a10: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x147a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x147a14: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x147a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x147a18: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x147a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x147a1c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x147a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x147a20: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x147a20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x147a24: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x147a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a28: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x147a28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x147a2c: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x147a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x147a30: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x147a30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x147a34: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x147a34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x147a38: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x147a38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x147a3c: 0x3c0a5000  lui         $t2, 0x5000
    ctx->pc = 0x147a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20480 << 16));
    // 0x147a40: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x147a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x147a44: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x147a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a48: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x147a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147a4c: 0x1661023  subu        $v0, $t3, $a2
    ctx->pc = 0x147a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x147a50: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x147a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x147a54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x147a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x147a58: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x147a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x147a5c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x147a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x147a60: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x147a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x147a64: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x147a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x147a68: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x147a68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x147a6c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x147a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147a70: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x147a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x147a74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x147a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x147a78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x147a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147a7c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x147a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x147a80: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x147a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x147a84: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147A84u;
    SET_GPR_U32(ctx, 31, 0x147A8Cu);
    ctx->pc = 0x147A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A84u;
    // 0x147a88: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147A84u, 0x147A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A8Cu;
label_147a8c:
    // 0x147a8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x147a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x147a90: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x147a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x147a94: 0x0  nop
    ctx->pc = 0x147a94u;
    // NOP
    ctx->pc = 0x147a98u;
}
