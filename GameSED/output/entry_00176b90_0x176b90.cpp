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

// Function: entry_00176b90
// Address: 0x176b90 - 0x176bd0
void entry_00176b90_0x176b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176b90_0x176b90");
#endif

    switch (ctx->pc) {
        case 0x176b98u: goto label_176b98;
        default: break;
    }

    ctx->pc = 0x176b90u;

label_176b90:
    // 0x176b90: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176B90u;
    SET_GPR_U32(ctx, 31, 0x176B98u);
    ctx->pc = 0x176B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B90u;
    // 0x176b94: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176B90u, 0x176B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B98u;
label_176b98:
    // 0x176b98: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x176b9c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x176B9Cu;
    {
        const bool branch_taken_0x176b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B9Cu;
        // 0x176ba0: 0x8f858c54  lw          $a1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b9c) {
            ctx->pc = 0x176B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176b90;
        }
    }
    ctx->pc = 0x176BA4u;
    // 0x176ba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ba8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x176bac: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x176bacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176bb0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x176BB0u;
    {
        const bool branch_taken_0x176bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x176BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BB0u;
        // 0x176bb4: 0xacb10020  sw          $s1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bb0) {
            ctx->pc = 0x176BD0u;
            return;
        }
    }
    ctx->pc = 0x176BB8u;
    // 0x176bb8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176bbc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176bc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176bc4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176bc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176BC8u;
    {
        const bool branch_taken_0x176bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BC8u;
        // 0x176bcc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bc8) {
            ctx->pc = 0x176BDCu;
            return;
        }
    }
    ctx->pc = 0x176BD0u;
}
