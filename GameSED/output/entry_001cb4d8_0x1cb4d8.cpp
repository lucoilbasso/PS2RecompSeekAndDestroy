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

// Function: entry_001cb4d8
// Address: 0x1cb4d8 - 0x1cb524
void entry_001cb4d8_0x1cb4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb4d8_0x1cb4d8");
#endif

    switch (ctx->pc) {
        case 0x1cb4e4u: goto label_1cb4e4;
        case 0x1cb4f0u: goto label_1cb4f0;
        case 0x1cb51cu: goto label_1cb51c;
        default: break;
    }

    ctx->pc = 0x1cb4d8u;

    // 0x1cb4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4dc: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB4DCu;
    SET_GPR_U32(ctx, 31, 0x1CB4E4u);
    ctx->pc = 0x1CB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4DCu;
    // 0x1cb4e0: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB4DCu, 0x1CB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4E4u;
label_1cb4e4:
    // 0x1cb4e4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1cb4e8: 0xc0729c8  jal         func_1CA720
    ctx->pc = 0x1CB4E8u;
    SET_GPR_U32(ctx, 31, 0x1CB4F0u);
    ctx->pc = 0x1CB4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4E8u;
    // 0x1cb4ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA720u, 0x1CB4E8u, 0x1CB4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4F0u;
label_1cb4f0:
    // 0x1cb4f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1cb4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb4f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4f8: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1cb4fc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1cb4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb500: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1cb500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1cb504: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cb508: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB508u;
    {
        const bool branch_taken_0x1cb508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB508u;
        // 0x1cb50c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb508) {
            ctx->pc = 0x1CB524u;
            return;
        }
    }
    ctx->pc = 0x1CB510u;
    // 0x1cb510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb514: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB514u;
    SET_GPR_U32(ctx, 31, 0x1CB51Cu);
    ctx->pc = 0x1CB518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB514u;
    // 0x1cb518: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB514u, 0x1CB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB51Cu;
label_1cb51c:
    // 0x1cb51c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cb51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb520: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1cb524u;
}
