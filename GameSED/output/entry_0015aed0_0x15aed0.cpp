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

// Function: entry_0015aed0
// Address: 0x15aed0 - 0x15af18
void entry_0015aed0_0x15aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aed0_0x15aed0");
#endif

    switch (ctx->pc) {
        case 0x15af0cu: goto label_15af0c;
        default: break;
    }

    ctx->pc = 0x15aed0u;

label_15aed0:
    // 0x15aed0: 0x10c00037  beqz        $a2, . + 4 + (0x37 << 2)
label_15aed4:
    if (ctx->pc == 0x15AED4u) {
        ctx->pc = 0x15AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AED0u;
        // 0x15aed4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AED8u;
        goto label_15aed8;
    }
    ctx->pc = 0x15AED0u;
    {
        const bool branch_taken_0x15aed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AED0u;
        // 0x15aed4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aed0) {
            ctx->pc = 0x15AFB0u;
            return;
        }
    }
    ctx->pc = 0x15AED8u;
label_15aed8:
    // 0x15aed8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15aedc:
    // 0x15aedc: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_15aee0:
    // 0x15aee0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15aee4:
    // 0x15aee4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x15aee4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_15aee8:
    // 0x15aee8: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
label_15aeec:
    if (ctx->pc == 0x15AEECu) {
        ctx->pc = 0x15AEF0u;
        goto label_15aef0;
    }
    ctx->pc = 0x15AEE8u;
    {
        const bool branch_taken_0x15aee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15aee8) {
            ctx->pc = 0x15AF18u;
            return;
        }
    }
    ctx->pc = 0x15AEF0u;
label_15aef0:
    // 0x15aef0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15aef4:
    // 0x15aef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15aef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15aef8:
    // 0x15aef8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15aefc:
    // 0x15aefc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15aefcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15af00:
    // 0x15af00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15af00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15af04:
    // 0x15af04: 0x60f809  jalr        $v1
label_15af08:
    if (ctx->pc == 0x15AF08u) {
        ctx->pc = 0x15AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF04u;
        // 0x15af08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF0Cu;
        goto label_15af0c;
    }
    ctx->pc = 0x15AF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15AF0Cu);
        ctx->pc = 0x15AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF04u;
        // 0x15af08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF04u, 0x15AF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AF0Cu;
label_15af0c:
    // 0x15af0c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x15af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_15af10:
    // 0x15af10: 0x10000027  b           . + 4 + (0x27 << 2)
label_15af14:
    if (ctx->pc == 0x15AF14u) {
        ctx->pc = 0x15AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF10u;
        // 0x15af14: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF18u;
        goto label_fallthrough_0x15af10;
    }
    ctx->pc = 0x15AF10u;
    {
        const bool branch_taken_0x15af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF10u;
        // 0x15af14: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af10) {
            ctx->pc = 0x15AFB0u;
            return;
        }
    }
label_fallthrough_0x15af10:
    ctx->pc = 0x15AF18u;
}
