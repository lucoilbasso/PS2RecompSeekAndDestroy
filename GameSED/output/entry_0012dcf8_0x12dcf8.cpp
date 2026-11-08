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

// Function: entry_0012dcf8
// Address: 0x12dcf8 - 0x12dd60
void entry_0012dcf8_0x12dcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dcf8_0x12dcf8");
#endif

    switch (ctx->pc) {
        case 0x12dd58u: goto label_12dd58;
        default: break;
    }

    ctx->pc = 0x12dcf8u;

    // 0x12dcf8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x12dcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcfc: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x12dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12dd00: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12dd04: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x12dd04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x12dd08: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12dd08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12dd0c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x12dd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12dd10: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x12dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x12dd14: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x12dd14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd18: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12dd1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12dd20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12dd20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd24: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x12dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x12dd28: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12dd28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12dd2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12dd30: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12dd34: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12dd38: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12dd3c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x12dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x12dd40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12dd44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12dd48: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12dd4c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12dd50: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12DD50u;
    SET_GPR_U32(ctx, 31, 0x12DD58u);
    ctx->pc = 0x12DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD50u;
    // 0x12dd54: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12DD50u, 0x12DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD58u;
label_12dd58:
    // 0x12dd58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12dd5c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12dd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x12dd60u;
}
