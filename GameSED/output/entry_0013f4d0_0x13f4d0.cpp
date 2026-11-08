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

// Function: entry_0013f4d0
// Address: 0x13f4d0 - 0x13f4f0
void entry_0013f4d0_0x13f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f4d0_0x13f4d0");
#endif

    switch (ctx->pc) {
        case 0x13f4ecu: goto label_13f4ec;
        default: break;
    }

    ctx->pc = 0x13f4d0u;

    // 0x13f4d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f4d4: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F4D4u;
    {
        const bool branch_taken_0x13f4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x13F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4D4u;
        // 0x13f4d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4d4) {
            ctx->pc = 0x13F4F0u;
            return;
        }
    }
    ctx->pc = 0x13F4DCu;
    // 0x13f4dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13f4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13f4e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13f4e4: 0xc067c32  jal         func_19F0C8
    ctx->pc = 0x13F4E4u;
    SET_GPR_U32(ctx, 31, 0x13F4ECu);
    ctx->pc = 0x13F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4E4u;
    // 0x13f4e8: 0x26240044  addiu       $a0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x13F4E4u, 0x13F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4ECu;
label_13f4ec:
    // 0x13f4ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13f4ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13f4f0u;
}
