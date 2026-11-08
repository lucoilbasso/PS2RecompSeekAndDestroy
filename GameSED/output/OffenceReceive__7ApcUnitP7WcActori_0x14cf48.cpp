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

// Function: OffenceReceive__7ApcUnitP7WcActori
// Address: 0x14cf48 - 0x14cf8c
void OffenceReceive__7ApcUnitP7WcActori_0x14cf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OffenceReceive__7ApcUnitP7WcActori_0x14cf48");
#endif

    switch (ctx->pc) {
        case 0x14cf48u: goto label_14cf48;
        case 0x14cf4cu: goto label_14cf4c;
        case 0x14cf50u: goto label_14cf50;
        case 0x14cf54u: goto label_14cf54;
        case 0x14cf58u: goto label_14cf58;
        case 0x14cf5cu: goto label_14cf5c;
        case 0x14cf60u: goto label_14cf60;
        case 0x14cf64u: goto label_14cf64;
        case 0x14cf68u: goto label_14cf68;
        case 0x14cf6cu: goto label_14cf6c;
        case 0x14cf70u: goto label_14cf70;
        case 0x14cf74u: goto label_14cf74;
        case 0x14cf78u: goto label_14cf78;
        case 0x14cf7cu: goto label_14cf7c;
        case 0x14cf80u: goto label_14cf80;
        case 0x14cf84u: goto label_14cf84;
        case 0x14cf88u: goto label_14cf88;
        default: break;
    }

    ctx->pc = 0x14cf48u;

label_14cf48:
    // 0x14cf48: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x14cf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14cf4c:
    // 0x14cf4c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x14cf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14cf50:
    // 0x14cf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14cf54:
    // 0x14cf54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14cf54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cf58:
    // 0x14cf58: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14cf58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14cf5c:
    // 0x14cf5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14cf60:
    // 0x14cf60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_14cf64:
    if (ctx->pc == 0x14CF64u) {
        ctx->pc = 0x14CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF60u;
        // 0x14cf64: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF68u;
        goto label_14cf68;
    }
    ctx->pc = 0x14CF60u;
    {
        const bool branch_taken_0x14cf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF60u;
        // 0x14cf64: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf60) {
            ctx->pc = 0x14CF80u;
            goto label_14cf80;
        }
    }
    ctx->pc = 0x14CF68u;
label_14cf68:
    // 0x14cf68: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x14cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_14cf6c:
    // 0x14cf6c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x14cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_14cf70:
    // 0x14cf70: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14cf70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14cf74:
    // 0x14cf74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14cf78:
    // 0x14cf78: 0x60f809  jalr        $v1
label_14cf7c:
    if (ctx->pc == 0x14CF7Cu) {
        ctx->pc = 0x14CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF78u;
        // 0x14cf7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF80u;
        goto label_14cf80;
    }
    ctx->pc = 0x14CF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14CF80u);
        ctx->pc = 0x14CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF78u;
        // 0x14cf7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF78u, 0x14CF80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CF80u;
label_14cf80:
    // 0x14cf80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14cf84:
    // 0x14cf84: 0x3e00008  jr          $ra
label_14cf88:
    if (ctx->pc == 0x14CF88u) {
        ctx->pc = 0x14CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF84u;
        // 0x14cf88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF8Cu;
        goto label_fallthrough_0x14cf84;
    }
    ctx->pc = 0x14CF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF84u;
        // 0x14cf88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14cf84:
    ctx->pc = 0x14CF8Cu;
}
