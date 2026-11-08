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

// Function: entry_00147ab8
// Address: 0x147ab8 - 0x147ae8
void entry_00147ab8_0x147ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147ab8_0x147ab8");
#endif

    switch (ctx->pc) {
        case 0x147ac0u: goto label_147ac0;
        default: break;
    }

    ctx->pc = 0x147ab8u;

label_147ab8:
    // 0x147ab8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x147AB8u;
    SET_GPR_U32(ctx, 31, 0x147AC0u);
    ctx->pc = 0x147ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AB8u;
    // 0x147abc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x147AB8u, 0x147AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AC0u;
label_147ac0:
    // 0x147ac0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x147ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x147ac4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x147AC4u;
    {
        const bool branch_taken_0x147ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x147AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AC4u;
        // 0x147ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ac4) {
            ctx->pc = 0x147AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147ab8;
        }
    }
    ctx->pc = 0x147ACCu;
    // 0x147acc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x147accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x147ad0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x147ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147ad4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x147AD4u;
    {
        const bool branch_taken_0x147ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AD4u;
        // 0x147ad8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ad4) {
            ctx->pc = 0x147AE8u;
            return;
        }
    }
    ctx->pc = 0x147ADCu;
    // 0x147adc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x147adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x147ae0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x147AE0u;
    SET_GPR_U32(ctx, 31, 0x147AE8u);
    ctx->pc = 0x147AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AE0u;
    // 0x147ae4: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x147AE0u, 0x147AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AE8u;
}
