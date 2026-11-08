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

// Function: entry_00146fe8
// Address: 0x146fe8 - 0x147020
void entry_00146fe8_0x146fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146fe8_0x146fe8");
#endif

    switch (ctx->pc) {
        case 0x146ff0u: goto label_146ff0;
        default: break;
    }

    ctx->pc = 0x146fe8u;

label_146fe8:
    // 0x146fe8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x146FE8u;
    SET_GPR_U32(ctx, 31, 0x146FF0u);
    ctx->pc = 0x146FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146FE8u;
    // 0x146fec: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x146FE8u, 0x146FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FF0u;
label_146ff0:
    // 0x146ff0: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x146ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x146ff4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x146FF4u;
    {
        const bool branch_taken_0x146ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x146FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FF4u;
        // 0x146ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ff4) {
            ctx->pc = 0x146FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146fe8;
        }
    }
    ctx->pc = 0x146FFCu;
    // 0x146ffc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x146ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147000: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x147000u;
    {
        const bool branch_taken_0x147000 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x147004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147000u;
        // 0x147004: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147000) {
            ctx->pc = 0x147020u;
            return;
        }
    }
    ctx->pc = 0x147008u;
    // 0x147008: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x147008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x14700c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14700cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x147010: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x147010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x147014: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x147014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x147018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x147018u;
    {
        const bool branch_taken_0x147018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147018u;
        // 0x14701c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147018) {
            ctx->pc = 0x147030u;
            return;
        }
    }
    ctx->pc = 0x147020u;
}
