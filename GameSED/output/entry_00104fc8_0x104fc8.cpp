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

// Function: entry_00104fc8
// Address: 0x104fc8 - 0x104ffc
void entry_00104fc8_0x104fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104fc8_0x104fc8");
#endif

    switch (ctx->pc) {
        case 0x104fd0u: goto label_104fd0;
        case 0x104fe4u: goto label_104fe4;
        default: break;
    }

    ctx->pc = 0x104fc8u;

label_104fc8:
    // 0x104fc8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x104FC8u;
    SET_GPR_U32(ctx, 31, 0x104FD0u);
    ctx->pc = 0x104FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FC8u;
    // 0x104fcc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x104FC8u, 0x104FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FD0u;
label_104fd0:
    // 0x104fd0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x104fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x104fd4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x104FD4u;
    {
        const bool branch_taken_0x104fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x104FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FD4u;
        // 0x104fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fd4) {
            ctx->pc = 0x104FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104fc8;
        }
    }
    ctx->pc = 0x104FDCu;
    // 0x104fdc: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x104FDCu;
    SET_GPR_U32(ctx, 31, 0x104FE4u);
    ctx->pc = 0x104FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FDCu;
    // 0x104fe0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x104FDCu, 0x104FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FE4u;
label_104fe4:
    // 0x104fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x104fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fe8: 0x8f828d08  lw          $v0, -0x72F8($gp)
    ctx->pc = 0x104fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937864)));
    // 0x104fec: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104FECu;
    {
        const bool branch_taken_0x104fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x104fec) {
            ctx->pc = 0x104FFCu;
            return;
        }
    }
    ctx->pc = 0x104FF4u;
    // 0x104ff4: 0xc06bcbc  jal         func_1AF2F0
    ctx->pc = 0x104FF4u;
    SET_GPR_U32(ctx, 31, 0x104FFCu);
    ctx->pc = 0x104FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FF4u;
    // 0x104ff8: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2F0u, 0x104FF4u, 0x104FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FFCu;
}
