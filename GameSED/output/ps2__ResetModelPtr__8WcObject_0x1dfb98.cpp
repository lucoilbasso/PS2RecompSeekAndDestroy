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

// Function: _ResetModelPtr__8WcObject
// Address: 0x1dfb98 - 0x1dfc0c
void ps2__ResetModelPtr__8WcObject_0x1dfb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ResetModelPtr__8WcObject_0x1dfb98");
#endif

    switch (ctx->pc) {
        case 0x1dfbecu: goto label_1dfbec;
        default: break;
    }

    ctx->pc = 0x1dfb98u;

    // 0x1dfb98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfb9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dfb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfba4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dfba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dfba8: 0x8ca60194  lw          $a2, 0x194($a1)
    ctx->pc = 0x1dfba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    // 0x1dfbac: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DFBACu;
    {
        const bool branch_taken_0x1dfbac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBACu;
        // 0x1dfbb0: 0xaca60158  sw          $a2, 0x158($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbac) {
            ctx->pc = 0x1DFBFCu;
            goto label_1dfbfc;
        }
    }
    ctx->pc = 0x1DFBB4u;
    // 0x1dfbb4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1dfbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1dfbb8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1dfbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1dfbbc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1dfbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1dfbc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dfbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dfbc4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DFBC4u;
    {
        const bool branch_taken_0x1dfbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBC4u;
        // 0x1dfbc8: 0xaca4015c  sw          $a0, 0x15C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbc4) {
            ctx->pc = 0x1DFBFCu;
            goto label_1dfbfc;
        }
    }
    ctx->pc = 0x1DFBCCu;
    // 0x1dfbcc: 0x24b00160  addiu       $s0, $a1, 0x160
    ctx->pc = 0x1dfbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x1dfbd0: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1dfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1dfbd4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dfbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dfbd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1dfbdc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFBDCu;
    {
        const bool branch_taken_0x1dfbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBDCu;
        // 0x1dfbe0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbdc) {
            ctx->pc = 0x1DFBECu;
            goto label_1dfbec;
        }
    }
    ctx->pc = 0x1DFBE4u;
    // 0x1dfbe4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1DFBE4u;
    SET_GPR_U32(ctx, 31, 0x1DFBECu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1DFBE4u, 0x1DFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBECu;
label_1dfbec:
    // 0x1dfbec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dfbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dfbf0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dfbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dfbf4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1dfbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1dfbf8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1dfbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1dfbfc:
    // 0x1dfbfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfbfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dfc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfc04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC04u;
        // 0x1dfc08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC0Cu;
}
