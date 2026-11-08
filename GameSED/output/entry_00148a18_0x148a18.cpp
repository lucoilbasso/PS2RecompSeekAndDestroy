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

// Function: entry_00148a18
// Address: 0x148a18 - 0x148a90
void entry_00148a18_0x148a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148a18_0x148a18");
#endif

    switch (ctx->pc) {
        case 0x148a2cu: goto label_148a2c;
        default: break;
    }

    ctx->pc = 0x148a18u;

    // 0x148a18: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x148a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x148a1c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x148a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x148a20: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x148a20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148a24: 0xc06af0c  jal         func_1ABC30
    ctx->pc = 0x148A24u;
    SET_GPR_U32(ctx, 31, 0x148A2Cu);
    ctx->pc = 0x148A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A24u;
    // 0x148a28: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC30u, 0x148A24u, 0x148A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A2Cu;
label_148a2c:
    // 0x148a2c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x148a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x148a30: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x148a30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a34: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x148a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x148a38: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x148a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x148a3c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148a40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x148a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x148a44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148a48: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x148a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x148a4c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x148a50: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x148a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x148a54: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x148a54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148a58: 0x34849020  ori         $a0, $a0, 0x9020
    ctx->pc = 0x148a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36896);
    // 0x148a5c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x148a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x148a60: 0x34a59010  ori         $a1, $a1, 0x9010
    ctx->pc = 0x148a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36880);
    // 0x148a64: 0x24080101  addiu       $t0, $zero, 0x101
    ctx->pc = 0x148a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x148a68: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x148a68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x148a6c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x148a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x148a70: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x148a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x148a74: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x148a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x148a78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148a7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148a80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x148A80u;
    {
        const bool branch_taken_0x148a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A80u;
        // 0x148a84: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a80) {
            ctx->pc = 0x148AB4u;
            return;
        }
    }
    ctx->pc = 0x148A88u;
    // 0x148a88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x148a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a8c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x148a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148a90u;
}
