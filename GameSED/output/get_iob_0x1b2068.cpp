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

// Function: get_iob
// Address: 0x1b2068 - 0x1b20d4
void get_iob_0x1b2068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_iob_0x1b2068");
#endif

    switch (ctx->pc) {
        case 0x1b2084u: goto label_1b2084;
        case 0x1b208cu: goto label_1b208c;
        case 0x1b20a0u: goto label_1b20a0;
        case 0x1b20bcu: goto label_1b20bc;
        default: break;
    }

    ctx->pc = 0x1b2068u;

    // 0x1b2068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b206c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2070: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b2070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b2074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2078: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b207c: 0xc06c7e0  jal         func_1B1F80
    ctx->pc = 0x1B207Cu;
    SET_GPR_U32(ctx, 31, 0x1B2084u);
    ctx->pc = 0x1B2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B207Cu;
    // 0x1b2080: 0x3c110025  lui         $s1, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F80u, 0x1B207Cu, 0x1B2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2084u;
label_1b2084:
    // 0x1b2084: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B2084u;
    SET_GPR_U32(ctx, 31, 0x1B208Cu);
    ctx->pc = 0x1B2088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2084u;
    // 0x1b2088: 0x8e24aa10  lw          $a0, -0x55F0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B2084u, 0x1B208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B208Cu;
label_1b208c:
    // 0x1b208c: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x1b208cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b2090: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2090u;
    {
        const bool branch_taken_0x1b2090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2090u;
        // 0x1b2094: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2090) {
            ctx->pc = 0x1B20A8u;
            goto label_1b20a8;
        }
    }
    ctx->pc = 0x1B2098u;
    // 0x1b2098: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B2098u;
    SET_GPR_U32(ctx, 31, 0x1B20A0u);
    ctx->pc = 0x1B209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2098u;
    // 0x1b209c: 0x8e24aa10  lw          $a0, -0x55F0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B2098u, 0x1B20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20A0u;
label_1b20a0:
    // 0x1b20a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B20A0u;
    {
        const bool branch_taken_0x1b20a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20A0u;
        // 0x1b20a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20a0) {
            ctx->pc = 0x1B20C0u;
            goto label_1b20c0;
        }
    }
    ctx->pc = 0x1B20A8u;
label_1b20a8:
    // 0x1b20a8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b20ac: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x1b20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x1b20b0: 0x8e24aa10  lw          $a0, -0x55F0($s1)
    ctx->pc = 0x1b20b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945296)));
    // 0x1b20b4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B20B4u;
    SET_GPR_U32(ctx, 31, 0x1B20BCu);
    ctx->pc = 0x1B20B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20B4u;
    // 0x1b20b8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B20B4u, 0x1B20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20BCu;
label_1b20bc:
    // 0x1b20bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b20bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b20c0:
    // 0x1b20c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b20c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b20c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b20c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b20c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b20c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b20cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B20CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20CCu;
        // 0x1b20d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B20CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B20D4u;
}
