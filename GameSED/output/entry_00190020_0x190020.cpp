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

// Function: entry_00190020
// Address: 0x190020 - 0x190088
void entry_00190020_0x190020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190020_0x190020");
#endif

    switch (ctx->pc) {
        case 0x19007cu: goto label_19007c;
        default: break;
    }

    ctx->pc = 0x190020u;

    // 0x190020: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x190020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190024: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x190024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x190028: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x190028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19002c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x19002cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x190030: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x190030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x190034: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x190034u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x190038: 0x1251823  subu        $v1, $t1, $a1
    ctx->pc = 0x190038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x19003c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x19003cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190040: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x190040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x190044: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x190044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x190048: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x190048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x19004c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x19004cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190050: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x190050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x190054: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x190054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x190058: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x190058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19005c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190060: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x190060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x190064: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x190064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190068: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x190068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19006c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x19006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x190070: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x190070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x190074: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190074u;
    SET_GPR_U32(ctx, 31, 0x19007Cu);
    ctx->pc = 0x190078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190074u;
    // 0x190078: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190074u, 0x19007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19007Cu;
label_19007c:
    // 0x19007c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19007cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x190080: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x190080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x190084: 0x0  nop
    ctx->pc = 0x190084u;
    // NOP
    ctx->pc = 0x190088u;
}
