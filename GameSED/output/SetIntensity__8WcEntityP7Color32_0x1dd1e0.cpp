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

// Function: SetIntensity__8WcEntityP7Color32
// Address: 0x1dd1e0 - 0x1dd210
void SetIntensity__8WcEntityP7Color32_0x1dd1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIntensity__8WcEntityP7Color32_0x1dd1e0");
#endif

    switch (ctx->pc) {
        case 0x1dd1e0u: goto label_1dd1e0;
        case 0x1dd1e4u: goto label_1dd1e4;
        case 0x1dd1e8u: goto label_1dd1e8;
        case 0x1dd1ecu: goto label_1dd1ec;
        case 0x1dd1f0u: goto label_1dd1f0;
        case 0x1dd1f4u: goto label_1dd1f4;
        case 0x1dd1f8u: goto label_1dd1f8;
        case 0x1dd1fcu: goto label_1dd1fc;
        case 0x1dd200u: goto label_1dd200;
        case 0x1dd204u: goto label_1dd204;
        case 0x1dd208u: goto label_1dd208;
        case 0x1dd20cu: goto label_1dd20c;
        default: break;
    }

    ctx->pc = 0x1dd1e0u;

label_1dd1e0:
    // 0x1dd1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1dd1e4:
    // 0x1dd1e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dd1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1e8:
    // 0x1dd1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dd1ec:
    // 0x1dd1ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1dd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1dd1f0:
    // 0x1dd1f0: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_1dd1f4:
    // 0x1dd1f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1dd1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd1f8:
    // 0x1dd1f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dd1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dd1fc:
    // 0x1dd1fc: 0x60f809  jalr        $v1
label_1dd200:
    if (ctx->pc == 0x1DD200u) {
        ctx->pc = 0x1DD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1FCu;
        // 0x1dd200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD204u;
        goto label_1dd204;
    }
    ctx->pc = 0x1DD1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD204u);
        ctx->pc = 0x1DD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1FCu;
        // 0x1dd200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1FCu, 0x1DD204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD204u;
label_1dd204:
    // 0x1dd204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd208:
    // 0x1dd208: 0x3e00008  jr          $ra
label_1dd20c:
    if (ctx->pc == 0x1DD20Cu) {
        ctx->pc = 0x1DD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD208u;
        // 0x1dd20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD210u;
        goto label_fallthrough_0x1dd208;
    }
    ctx->pc = 0x1DD208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD208u;
        // 0x1dd20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd208:
    ctx->pc = 0x1DD210u;
}
