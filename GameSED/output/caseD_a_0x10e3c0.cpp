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

// Function: caseD_a
// Address: 0x10e3c0 - 0x10e3e8
void caseD_a_0x10e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x10e3c0");
#endif

    switch (ctx->pc) {
        case 0x10e3c0u: goto label_10e3c0;
        case 0x10e3c4u: goto label_10e3c4;
        case 0x10e3c8u: goto label_10e3c8;
        case 0x10e3ccu: goto label_10e3cc;
        case 0x10e3d0u: goto label_10e3d0;
        case 0x10e3d4u: goto label_10e3d4;
        case 0x10e3d8u: goto label_10e3d8;
        case 0x10e3dcu: goto label_10e3dc;
        case 0x10e3e0u: goto label_10e3e0;
        case 0x10e3e4u: goto label_10e3e4;
        default: break;
    }

    ctx->pc = 0x10e3c0u;

label_10e3c0:
    // 0x10e3c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x10e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_10e3c4:
    // 0x10e3c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10e3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e3c8:
    // 0x10e3c8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x10e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_10e3cc:
    // 0x10e3cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10e3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e3d0:
    // 0x10e3d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10e3d4:
    // 0x10e3d4: 0x60f809  jalr        $v1
label_10e3d8:
    if (ctx->pc == 0x10E3D8u) {
        ctx->pc = 0x10E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3D4u;
        // 0x10e3d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3DCu;
        goto label_10e3dc;
    }
    ctx->pc = 0x10E3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E3DCu);
        ctx->pc = 0x10E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3D4u;
        // 0x10e3d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E3D4u, 0x10E3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E3DCu;
label_10e3dc:
    // 0x10e3dc: 0x10000042  b           . + 4 + (0x42 << 2)
label_10e3e0:
    if (ctx->pc == 0x10E3E0u) {
        ctx->pc = 0x10E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3DCu;
        // 0x10e3e0: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3E4u;
        goto label_10e3e4;
    }
    ctx->pc = 0x10E3DCu;
    {
        const bool branch_taken_0x10e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3DCu;
        // 0x10e3e0: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3dc) {
            ctx->pc = 0x10E4E8u;
            return;
        }
    }
    ctx->pc = 0x10E3E4u;
label_10e3e4:
    // 0x10e3e4: 0x0  nop
    ctx->pc = 0x10e3e4u;
    // NOP
    ctx->pc = 0x10e3e8u;
}
