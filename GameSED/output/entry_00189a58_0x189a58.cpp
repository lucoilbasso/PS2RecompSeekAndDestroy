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

// Function: entry_00189a58
// Address: 0x189a58 - 0x189ad8
void entry_00189a58_0x189a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189a58_0x189a58");
#endif

    switch (ctx->pc) {
        case 0x189accu: goto label_189acc;
        default: break;
    }

    ctx->pc = 0x189a58u;

    // 0x189a58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x189a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189a5c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x189a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x189a60: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x189a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x189a64: 0x2071823  subu        $v1, $s0, $a3
    ctx->pc = 0x189a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x189a68: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x189a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x189a6c: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x189a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x189a70: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x189a70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x189a74: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x189a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x189a78: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x189A78u;
    {
        const bool branch_taken_0x189a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A78u;
        // 0x189a7c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a78) {
            ctx->pc = 0x189BE0u;
            return;
        }
    }
    ctx->pc = 0x189A80u;
    // 0x189a80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x189a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a84: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x189a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x189a88: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x189a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x189a8c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x189a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x189a90: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x189a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x189a94: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x189a94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x189a98: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x189a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189a9c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x189a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x189aa0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x189aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189aa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189aa8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x189aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x189aac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x189aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189ab0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x189ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x189ab4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x189ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189ab8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x189ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189abc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x189abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x189ac0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x189ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x189ac4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189AC4u;
    SET_GPR_U32(ctx, 31, 0x189ACCu);
    ctx->pc = 0x189AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AC4u;
    // 0x189ac8: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189AC4u, 0x189ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189ACCu;
label_189acc:
    // 0x189acc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x189accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x189ad0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x189ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x189ad4: 0x0  nop
    ctx->pc = 0x189ad4u;
    // NOP
    ctx->pc = 0x189ad8u;
}
