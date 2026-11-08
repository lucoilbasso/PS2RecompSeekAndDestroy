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

// Function: entry_00103a10
// Address: 0x103a10 - 0x103a58
void entry_00103a10_0x103a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103a10_0x103a10");
#endif

    switch (ctx->pc) {
        case 0x103a4cu: goto label_103a4c;
        default: break;
    }

    ctx->pc = 0x103a10u;

    // 0x103a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103a14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103a18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x103a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103a20: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x103a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103a24: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x103a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x103a28: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x103A28u;
    {
        const bool branch_taken_0x103a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x103A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A28u;
        // 0x103a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a28) {
            ctx->pc = 0x103A98u;
            return;
        }
    }
    ctx->pc = 0x103A30u;
    // 0x103a30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x103a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x103a34: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x103a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x103a38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x103a3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x103A3Cu;
    {
        const bool branch_taken_0x103a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103a3c) {
            ctx->pc = 0x103A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103A3Cu;
            // 0x103a40: 0x30c3ffff  andi        $v1, $a2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x103A58u;
            return;
        }
    }
    ctx->pc = 0x103A44u;
    // 0x103a44: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x103A44u;
    SET_GPR_U32(ctx, 31, 0x103A4Cu);
    ctx->pc = 0x103A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A44u;
    // 0x103a48: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x103A44u, 0x103A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A4Cu;
label_103a4c:
    // 0x103a4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x103A4Cu;
    {
        const bool branch_taken_0x103a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A4Cu;
        // 0x103a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a4c) {
            ctx->pc = 0x103A9Cu;
            return;
        }
    }
    ctx->pc = 0x103A54u;
    // 0x103a54: 0x0  nop
    ctx->pc = 0x103a54u;
    // NOP
    ctx->pc = 0x103a58u;
}
