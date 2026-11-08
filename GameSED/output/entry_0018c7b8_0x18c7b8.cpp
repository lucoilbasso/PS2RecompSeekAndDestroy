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

// Function: entry_0018c7b8
// Address: 0x18c7b8 - 0x18c7f0
void entry_0018c7b8_0x18c7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c7b8_0x18c7b8");
#endif

    ctx->pc = 0x18c7b8u;

label_18c7b8:
    // 0x18c7b8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x18c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_18c7bc:
    // 0x18c7bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18c7c0:
    // 0x18c7c0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18c7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_18c7c4:
    // 0x18c7c4: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x18c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
label_18c7c8:
    // 0x18c7c8: 0x2c43000f  sltiu       $v1, $v0, 0xF
    ctx->pc = 0x18c7c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_18c7cc:
    // 0x18c7cc: 0x5060004a  beql        $v1, $zero, . + 4 + (0x4A << 2)
label_18c7d0:
    if (ctx->pc == 0x18C7D0u) {
        ctx->pc = 0x18C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7CCu;
        // 0x18c7d0: 0x8e020238  lw          $v0, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7D4u;
        goto label_18c7d4;
    }
    ctx->pc = 0x18C7CCu;
    {
        const bool branch_taken_0x18c7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c7cc) {
            ctx->pc = 0x18C7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C7CCu;
            // 0x18c7d0: 0x8e020238  lw          $v0, 0x238($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C8F8u;
            return;
        }
    }
    ctx->pc = 0x18C7D4u;
label_18c7d4:
    // 0x18c7d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18c7d8:
    // 0x18c7d8: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x18c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_18c7dc:
    // 0x18c7dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18c7e0:
    // 0x18c7e0: 0x8c638060  lw          $v1, -0x7FA0($v1)
    ctx->pc = 0x18c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934624)));
label_18c7e4:
    // 0x18c7e4: 0x600008  jr          $v1
label_18c7e8:
    if (ctx->pc == 0x18C7E8u) {
        ctx->pc = 0x18C7ECu;
        goto label_18c7ec;
    }
    ctx->pc = 0x18C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C7E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18C7ECu;
label_18c7ec:
    // 0x18c7ec: 0x0  nop
    ctx->pc = 0x18c7ecu;
    // NOP
    ctx->pc = 0x18c7f0u;
}
