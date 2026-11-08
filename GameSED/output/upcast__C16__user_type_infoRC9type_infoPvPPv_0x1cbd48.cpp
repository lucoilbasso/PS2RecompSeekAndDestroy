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

// Function: upcast__C16__user_type_infoRC9type_infoPvPPv
// Address: 0x1cbd48 - 0x1cbdc0
void upcast__C16__user_type_infoRC9type_infoPvPPv_0x1cbd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("upcast__C16__user_type_infoRC9type_infoPvPPv_0x1cbd48");
#endif

    switch (ctx->pc) {
        case 0x1cbd48u: goto label_1cbd48;
        case 0x1cbd4cu: goto label_1cbd4c;
        case 0x1cbd50u: goto label_1cbd50;
        case 0x1cbd54u: goto label_1cbd54;
        case 0x1cbd58u: goto label_1cbd58;
        case 0x1cbd5cu: goto label_1cbd5c;
        case 0x1cbd60u: goto label_1cbd60;
        case 0x1cbd64u: goto label_1cbd64;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbd6cu: goto label_1cbd6c;
        case 0x1cbd70u: goto label_1cbd70;
        case 0x1cbd74u: goto label_1cbd74;
        case 0x1cbd78u: goto label_1cbd78;
        case 0x1cbd7cu: goto label_1cbd7c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbd88u: goto label_1cbd88;
        case 0x1cbd8cu: goto label_1cbd8c;
        case 0x1cbd90u: goto label_1cbd90;
        case 0x1cbd94u: goto label_1cbd94;
        case 0x1cbd98u: goto label_1cbd98;
        case 0x1cbd9cu: goto label_1cbd9c;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbda4u: goto label_1cbda4;
        case 0x1cbda8u: goto label_1cbda8;
        case 0x1cbdacu: goto label_1cbdac;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdb4u: goto label_1cbdb4;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbdbcu: goto label_1cbdbc;
        default: break;
    }

    ctx->pc = 0x1cbd48u;

label_1cbd48:
    // 0x1cbd48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cbd4c:
    // 0x1cbd4c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1cbd4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd50:
    // 0x1cbd50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cbd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1cbd54:
    // 0x1cbd54: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1cbd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd58:
    // 0x1cbd58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cbd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1cbd5c:
    // 0x1cbd5c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1cbd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd60:
    // 0x1cbd60: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cbd60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd64:
    // 0x1cbd64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cbd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1cbd68:
    // 0x1cbd68: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1cbd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1cbd6c:
    // 0x1cbd6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1cbd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd70:
    // 0x1cbd70: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cbd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cbd74:
    // 0x1cbd74: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cbd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cbd78:
    // 0x1cbd78: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1cbd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1cbd7c:
    // 0x1cbd7c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cbd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1cbd80:
    // 0x1cbd80: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cbd80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbd84:
    // 0x1cbd84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cbd88:
    // 0x1cbd88: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1cbd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1cbd8c:
    // 0x1cbd8c: 0x40f809  jalr        $v0
label_1cbd90:
    if (ctx->pc == 0x1CBD90u) {
        ctx->pc = 0x1CBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD8Cu;
        // 0x1cbd90: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD94u;
        goto label_1cbd94;
    }
    ctx->pc = 0x1CBD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBD94u);
        ctx->pc = 0x1CBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD8Cu;
        // 0x1cbd90: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBD8Cu, 0x1CBD94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBD94u;
label_1cbd94:
    // 0x1cbd94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1cbd98:
    if (ctx->pc == 0x1CBD98u) {
        ctx->pc = 0x1CBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD94u;
        // 0x1cbd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD9Cu;
        goto label_1cbd9c;
    }
    ctx->pc = 0x1CBD94u;
    {
        const bool branch_taken_0x1cbd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD94u;
        // 0x1cbd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd94) {
            ctx->pc = 0x1CBDB0u;
            goto label_1cbdb0;
        }
    }
    ctx->pc = 0x1CBD9Cu;
label_1cbd9c:
    // 0x1cbd9c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbda0:
    // 0x1cbda0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cbda4:
    // 0x1cbda4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cbda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1cbda8:
    // 0x1cbda8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1cbda8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cbdac:
    // 0x1cbdac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cbdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cbdb0:
    // 0x1cbdb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cbdb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbdb4:
    // 0x1cbdb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cbdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cbdb8:
    // 0x1cbdb8: 0x3e00008  jr          $ra
label_1cbdbc:
    if (ctx->pc == 0x1CBDBCu) {
        ctx->pc = 0x1CBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDB8u;
        // 0x1cbdbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDC0u;
        goto label_fallthrough_0x1cbdb8;
    }
    ctx->pc = 0x1CBDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDB8u;
        // 0x1cbdbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cbdb8:
    ctx->pc = 0x1CBDC0u;
}
