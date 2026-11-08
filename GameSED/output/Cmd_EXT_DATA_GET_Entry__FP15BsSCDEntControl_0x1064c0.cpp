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

// Function: Cmd_EXT_DATA_GET_Entry__FP15BsSCDEntControl
// Address: 0x1064c0 - 0x106518
void Cmd_EXT_DATA_GET_Entry__FP15BsSCDEntControl_0x1064c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXT_DATA_GET_Entry__FP15BsSCDEntControl_0x1064c0");
#endif

    switch (ctx->pc) {
        case 0x1064d8u: goto label_1064d8;
        case 0x1064e8u: goto label_1064e8;
        case 0x106504u: goto label_106504;
        default: break;
    }

    ctx->pc = 0x1064c0u;

    // 0x1064c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1064c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1064c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1064c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1064c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1064c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1064cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1064ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1064d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1064D0u;
    SET_GPR_U32(ctx, 31, 0x1064D8u);
    ctx->pc = 0x1064D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064D0u;
    // 0x1064d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1064D0u, 0x1064D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064D8u;
label_1064d8:
    // 0x1064d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1064d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1064dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1064E0u;
    SET_GPR_U32(ctx, 31, 0x1064E8u);
    ctx->pc = 0x1064E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064E0u;
    // 0x1064e4: 0x118900  sll         $s1, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1064E0u, 0x1064E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064E8u;
label_1064e8:
    // 0x1064e8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1064e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1064ec: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1064ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1064f0: 0x8ca5ef8c  lw          $a1, -0x1074($a1)
    ctx->pc = 0x1064f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963084)));
    // 0x1064f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1064f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1064f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064fc: 0xc06a584  jal         func_1A9610
    ctx->pc = 0x1064FCu;
    SET_GPR_U32(ctx, 31, 0x106504u);
    ctx->pc = 0x106500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064FCu;
    // 0x106500: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9610u, 0x1064FCu, 0x106504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106504u;
label_106504:
    // 0x106504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10650c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10650cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106510: 0x3e00008  jr          $ra
    ctx->pc = 0x106510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106510u;
        // 0x106514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106518u;
}
