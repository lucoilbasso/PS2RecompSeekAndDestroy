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

// Function: _sceCd_Poff_Intr
// Address: 0x1ba1e8 - 0x1ba224
void _sceCd_Poff_Intr_0x1ba1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_Poff_Intr_0x1ba1e8");
#endif

    switch (ctx->pc) {
        case 0x1ba1e8u: goto label_1ba1e8;
        case 0x1ba1ecu: goto label_1ba1ec;
        case 0x1ba1f0u: goto label_1ba1f0;
        case 0x1ba1f4u: goto label_1ba1f4;
        case 0x1ba1f8u: goto label_1ba1f8;
        case 0x1ba1fcu: goto label_1ba1fc;
        case 0x1ba200u: goto label_1ba200;
        case 0x1ba204u: goto label_1ba204;
        case 0x1ba208u: goto label_1ba208;
        case 0x1ba20cu: goto label_1ba20c;
        case 0x1ba210u: goto label_1ba210;
        case 0x1ba214u: goto label_1ba214;
        case 0x1ba218u: goto label_1ba218;
        case 0x1ba21cu: goto label_1ba21c;
        case 0x1ba220u: goto label_1ba220;
        default: break;
    }

    ctx->pc = 0x1ba1e8u;

label_1ba1e8:
    // 0x1ba1e8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1ba1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_1ba1ec:
    // 0x1ba1ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ba1f0:
    // 0x1ba1f0: 0x8c45d684  lw          $a1, -0x297C($v0)
    ctx->pc = 0x1ba1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956676)));
label_1ba1f4:
    // 0x1ba1f4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1ba1f8:
    if (ctx->pc == 0x1BA1F8u) {
        ctx->pc = 0x1BA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1F4u;
        // 0x1ba1f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA1FCu;
        goto label_1ba1fc;
    }
    ctx->pc = 0x1BA1F4u;
    {
        const bool branch_taken_0x1ba1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1F4u;
        // 0x1ba1f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1f4) {
            ctx->pc = 0x1BA218u;
            goto label_1ba218;
        }
    }
    ctx->pc = 0x1BA1FCu;
label_1ba1fc:
    // 0x1ba1fc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ba200:
    // 0x1ba200: 0x8c43c0a4  lw          $v1, -0x3F5C($v0)
    ctx->pc = 0x1ba200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951076)));
label_1ba204:
    // 0x1ba204: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1ba208:
    if (ctx->pc == 0x1BA208u) {
        ctx->pc = 0x1BA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA204u;
        // 0x1ba208: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA20Cu;
        goto label_1ba20c;
    }
    ctx->pc = 0x1BA204u;
    {
        const bool branch_taken_0x1ba204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA204u;
        // 0x1ba208: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba204) {
            ctx->pc = 0x1BA21Cu;
            goto label_1ba21c;
        }
    }
    ctx->pc = 0x1BA20Cu;
label_1ba20c:
    // 0x1ba20c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1ba20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_1ba210:
    // 0x1ba210: 0xa0f809  jalr        $a1
label_1ba214:
    if (ctx->pc == 0x1BA214u) {
        ctx->pc = 0x1BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA210u;
        // 0x1ba214: 0x8c44d688  lw          $a0, -0x2978($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA218u;
        goto label_1ba218;
    }
    ctx->pc = 0x1BA210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1BA218u);
        ctx->pc = 0x1BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA210u;
        // 0x1ba214: 0x8c44d688  lw          $a0, -0x2978($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956680)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA210u, 0x1BA218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA218u;
label_1ba218:
    // 0x1ba218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba21c:
    // 0x1ba21c: 0x3e00008  jr          $ra
label_1ba220:
    if (ctx->pc == 0x1BA220u) {
        ctx->pc = 0x1BA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA21Cu;
        // 0x1ba220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA224u;
        goto label_fallthrough_0x1ba21c;
    }
    ctx->pc = 0x1BA21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA21Cu;
        // 0x1ba220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ba21c:
    ctx->pc = 0x1BA224u;
}
