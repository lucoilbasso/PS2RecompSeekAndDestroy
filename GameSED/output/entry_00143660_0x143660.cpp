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

// Function: entry_00143660
// Address: 0x143660 - 0x143698
void entry_00143660_0x143660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143660_0x143660");
#endif

    switch (ctx->pc) {
        case 0x143668u: goto label_143668;
        case 0x14368cu: goto label_14368c;
        default: break;
    }

    ctx->pc = 0x143660u;

    // 0x143660: 0xc068086  jal         func_1A0218
    ctx->pc = 0x143660u;
    SET_GPR_U32(ctx, 31, 0x143668u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x143660u, 0x143668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143668u;
label_143668:
    // 0x143668: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x143668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14366c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x14366cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x143670: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x143670u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x143674: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x143674u;
    {
        const bool branch_taken_0x143674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143674u;
        // 0x143678: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143674) {
            ctx->pc = 0x143698u;
            return;
        }
    }
    ctx->pc = 0x14367Cu;
    // 0x14367c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x14367cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x143680: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x143680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x143684: 0xc06727a  jal         func_19C9E8
    ctx->pc = 0x143684u;
    SET_GPR_U32(ctx, 31, 0x14368Cu);
    ctx->pc = 0x143688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143684u;
    // 0x143688: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9E8u, 0x143684u, 0x14368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14368Cu;
label_14368c:
    // 0x14368c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14368Cu;
    {
        const bool branch_taken_0x14368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14368Cu;
        // 0x143690: 0x96e3000e  lhu         $v1, 0xE($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14368c) {
            ctx->pc = 0x1436B0u;
            return;
        }
    }
    ctx->pc = 0x143694u;
    // 0x143694: 0x0  nop
    ctx->pc = 0x143694u;
    // NOP
    ctx->pc = 0x143698u;
}
