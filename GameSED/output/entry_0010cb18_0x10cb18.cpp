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

// Function: entry_0010cb18
// Address: 0x10cb18 - 0x10cb54
void entry_0010cb18_0x10cb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cb18_0x10cb18");
#endif

    switch (ctx->pc) {
        case 0x10cb34u: goto label_10cb34;
        default: break;
    }

    ctx->pc = 0x10cb18u;

    // 0x10cb18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cb1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10cb24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10cb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10cb2c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CB2Cu;
    SET_GPR_U32(ctx, 31, 0x10CB34u);
    ctx->pc = 0x10CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB2Cu;
    // 0x10cb30: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CB2Cu, 0x10CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB34u;
label_10cb34:
    // 0x10cb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb38: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10cb3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CB3Cu;
    {
        const bool branch_taken_0x10cb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB3Cu;
        // 0x10cb40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb3c) {
            ctx->pc = 0x10CB54u;
            return;
        }
    }
    ctx->pc = 0x10CB44u;
    // 0x10cb44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cb48: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10cb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10cb4c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CB4Cu;
    {
        const bool branch_taken_0x10cb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cb4c) {
            ctx->pc = 0x10CB58u;
            return;
        }
    }
    ctx->pc = 0x10CB54u;
}
