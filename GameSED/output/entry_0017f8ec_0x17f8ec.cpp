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

// Function: entry_0017f8ec
// Address: 0x17f8ec - 0x17f920
void entry_0017f8ec_0x17f8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f8ec_0x17f8ec");
#endif

    switch (ctx->pc) {
        case 0x17f908u: goto label_17f908;
        case 0x17f910u: goto label_17f910;
        default: break;
    }

    ctx->pc = 0x17f8ecu;

    // 0x17f8ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f8f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17f8f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17f8f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17f8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f900: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17F900u;
    SET_GPR_U32(ctx, 31, 0x17F908u);
    ctx->pc = 0x17F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F900u;
    // 0x17f904: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17F900u, 0x17F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F908u;
label_17f908:
    // 0x17f908: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17F908u;
    SET_GPR_U32(ctx, 31, 0x17F910u);
    ctx->pc = 0x17F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F908u;
    // 0x17f90c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17F908u, 0x17F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F910u;
label_17f910:
    // 0x17f910: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x17f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f914: 0x58600012  blezl       $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F914u;
    {
        const bool branch_taken_0x17f914 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17f914) {
            ctx->pc = 0x17F918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F914u;
            // 0x17f918: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F960u;
            return;
        }
    }
    ctx->pc = 0x17F91Cu;
    // 0x17f91c: 0x0  nop
    ctx->pc = 0x17f91cu;
    // NOP
    ctx->pc = 0x17f920u;
}
