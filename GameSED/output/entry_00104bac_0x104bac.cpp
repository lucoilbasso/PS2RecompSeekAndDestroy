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

// Function: entry_00104bac
// Address: 0x104bac - 0x104bd8
void entry_00104bac_0x104bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104bac_0x104bac");
#endif

    switch (ctx->pc) {
        case 0x104bd0u: goto label_104bd0;
        default: break;
    }

    ctx->pc = 0x104bacu;

    // 0x104bac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x104bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104bb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x104bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x104bb4: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x104BB4u;
    {
        const bool branch_taken_0x104bb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x104BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BB4u;
        // 0x104bb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bb4) {
            ctx->pc = 0x104BE4u;
            return;
        }
    }
    ctx->pc = 0x104BBCu;
    // 0x104bbc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x104bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x104bc0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104BC0u;
    {
        const bool branch_taken_0x104bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104bc0) {
            ctx->pc = 0x104BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104BC0u;
            // 0x104bc4: 0x8e27000c  lw          $a3, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104BD8u;
            return;
        }
    }
    ctx->pc = 0x104BC8u;
    // 0x104bc8: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x104BC8u;
    SET_GPR_U32(ctx, 31, 0x104BD0u);
    ctx->pc = 0x104BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BC8u;
    // 0x104bcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x104BC8u, 0x104BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BD0u;
label_104bd0:
    // 0x104bd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x104bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bd4: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x104bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x104bd8u;
}
