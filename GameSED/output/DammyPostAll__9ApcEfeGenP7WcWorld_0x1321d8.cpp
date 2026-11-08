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

// Function: DammyPostAll__9ApcEfeGenP7WcWorld
// Address: 0x1321d8 - 0x13220c
void DammyPostAll__9ApcEfeGenP7WcWorld_0x1321d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DammyPostAll__9ApcEfeGenP7WcWorld_0x1321d8");
#endif

    switch (ctx->pc) {
        case 0x1321d8u: goto label_1321d8;
        case 0x1321dcu: goto label_1321dc;
        case 0x1321e0u: goto label_1321e0;
        case 0x1321e4u: goto label_1321e4;
        case 0x1321e8u: goto label_1321e8;
        case 0x1321ecu: goto label_1321ec;
        case 0x1321f0u: goto label_1321f0;
        case 0x1321f4u: goto label_1321f4;
        case 0x1321f8u: goto label_1321f8;
        case 0x1321fcu: goto label_1321fc;
        case 0x132200u: goto label_132200;
        case 0x132204u: goto label_132204;
        case 0x132208u: goto label_132208;
        default: break;
    }

    ctx->pc = 0x1321d8u;

label_1321d8:
    // 0x1321d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1321d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1321dc:
    // 0x1321dc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1321dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1321e0:
    // 0x1321e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1321e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1321e4:
    // 0x1321e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1321e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1321e8:
    // 0x1321e8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1321e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1321ec:
    // 0x1321ec: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1321ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1321f0:
    // 0x1321f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1321f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1321f4:
    // 0x1321f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1321f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1321f8:
    // 0x1321f8: 0x60f809  jalr        $v1
label_1321fc:
    if (ctx->pc == 0x1321FCu) {
        ctx->pc = 0x1321FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321F8u;
        // 0x1321fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132200u;
        goto label_132200;
    }
    ctx->pc = 0x1321F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x132200u);
        ctx->pc = 0x1321FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321F8u;
        // 0x1321fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1321F8u, 0x132200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132200u;
label_132200:
    // 0x132200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132204:
    // 0x132204: 0x3e00008  jr          $ra
label_132208:
    if (ctx->pc == 0x132208u) {
        ctx->pc = 0x132208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132204u;
        // 0x132208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13220Cu;
        goto label_fallthrough_0x132204;
    }
    ctx->pc = 0x132204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132204u;
        // 0x132208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x132204:
    ctx->pc = 0x13220Cu;
}
