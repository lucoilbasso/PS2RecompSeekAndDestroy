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

// Function: __eh_rtime_match
// Address: 0x1cda58 - 0x1cdaa0
void ps2___eh_rtime_match_0x1cda58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eh_rtime_match_0x1cda58");
#endif

    switch (ctx->pc) {
        case 0x1cda58u: goto label_1cda58;
        case 0x1cda5cu: goto label_1cda5c;
        case 0x1cda60u: goto label_1cda60;
        case 0x1cda64u: goto label_1cda64;
        case 0x1cda68u: goto label_1cda68;
        case 0x1cda6cu: goto label_1cda6c;
        case 0x1cda70u: goto label_1cda70;
        case 0x1cda74u: goto label_1cda74;
        case 0x1cda78u: goto label_1cda78;
        case 0x1cda7cu: goto label_1cda7c;
        case 0x1cda80u: goto label_1cda80;
        case 0x1cda84u: goto label_1cda84;
        case 0x1cda88u: goto label_1cda88;
        case 0x1cda8cu: goto label_1cda8c;
        case 0x1cda90u: goto label_1cda90;
        case 0x1cda94u: goto label_1cda94;
        case 0x1cda98u: goto label_1cda98;
        case 0x1cda9cu: goto label_1cda9c;
        default: break;
    }

    ctx->pc = 0x1cda58u;

label_1cda58:
    // 0x1cda58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cda58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cda5c:
    // 0x1cda5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cda5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cda60:
    // 0x1cda60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cda60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1cda64:
    // 0x1cda64: 0xc0734a6  jal         func_1CD298
label_1cda68:
    if (ctx->pc == 0x1CDA68u) {
        ctx->pc = 0x1CDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA64u;
        // 0x1cda68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA6Cu;
        goto label_1cda6c;
    }
    ctx->pc = 0x1CDA64u;
    SET_GPR_U32(ctx, 31, 0x1CDA6Cu);
    ctx->pc = 0x1CDA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA64u;
    // 0x1cda68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD298u, 0x1CDA64u, 0x1CDA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA6Cu;
label_1cda6c:
    // 0x1cda6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cda70:
    // 0x1cda70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cda70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cda74:
    // 0x1cda74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cda74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cda78:
    // 0x1cda78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cda78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cda7c:
    // 0x1cda7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cda80:
    if (ctx->pc == 0x1CDA80u) {
        ctx->pc = 0x1CDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA7Cu;
        // 0x1cda80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA84u;
        goto label_1cda84;
    }
    ctx->pc = 0x1CDA7Cu;
    {
        const bool branch_taken_0x1cda7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA7Cu;
        // 0x1cda80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda7c) {
            ctx->pc = 0x1CDA90u;
            goto label_1cda90;
        }
    }
    ctx->pc = 0x1CDA84u;
label_1cda84:
    // 0x1cda84: 0x60f809  jalr        $v1
label_1cda88:
    if (ctx->pc == 0x1CDA88u) {
        ctx->pc = 0x1CDA8Cu;
        goto label_1cda8c;
    }
    ctx->pc = 0x1CDA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDA8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA84u, 0x1CDA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDA8Cu;
label_1cda8c:
    // 0x1cda8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1cda8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cda90:
    // 0x1cda90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cda90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cda94:
    // 0x1cda94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cda94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cda98:
    // 0x1cda98: 0x3e00008  jr          $ra
label_1cda9c:
    if (ctx->pc == 0x1CDA9Cu) {
        ctx->pc = 0x1CDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA98u;
        // 0x1cda9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAA0u;
        goto label_fallthrough_0x1cda98;
    }
    ctx->pc = 0x1CDA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA98u;
        // 0x1cda9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cda98:
    ctx->pc = 0x1CDAA0u;
}
