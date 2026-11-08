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

// Function: __dynamic_cast_2
// Address: 0x1ceef8 - 0x1cef84
void ps2___dynamic_cast_2_0x1ceef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dynamic_cast_2_0x1ceef8");
#endif

    switch (ctx->pc) {
        case 0x1ceef8u: goto label_1ceef8;
        case 0x1ceefcu: goto label_1ceefc;
        case 0x1cef00u: goto label_1cef00;
        case 0x1cef04u: goto label_1cef04;
        case 0x1cef08u: goto label_1cef08;
        case 0x1cef0cu: goto label_1cef0c;
        case 0x1cef10u: goto label_1cef10;
        case 0x1cef14u: goto label_1cef14;
        case 0x1cef18u: goto label_1cef18;
        case 0x1cef1cu: goto label_1cef1c;
        case 0x1cef20u: goto label_1cef20;
        case 0x1cef24u: goto label_1cef24;
        case 0x1cef28u: goto label_1cef28;
        case 0x1cef2cu: goto label_1cef2c;
        case 0x1cef30u: goto label_1cef30;
        case 0x1cef34u: goto label_1cef34;
        case 0x1cef38u: goto label_1cef38;
        case 0x1cef3cu: goto label_1cef3c;
        case 0x1cef40u: goto label_1cef40;
        case 0x1cef44u: goto label_1cef44;
        case 0x1cef48u: goto label_1cef48;
        case 0x1cef4cu: goto label_1cef4c;
        case 0x1cef50u: goto label_1cef50;
        case 0x1cef54u: goto label_1cef54;
        case 0x1cef58u: goto label_1cef58;
        case 0x1cef5cu: goto label_1cef5c;
        case 0x1cef60u: goto label_1cef60;
        case 0x1cef64u: goto label_1cef64;
        case 0x1cef68u: goto label_1cef68;
        case 0x1cef6cu: goto label_1cef6c;
        case 0x1cef70u: goto label_1cef70;
        case 0x1cef74u: goto label_1cef74;
        case 0x1cef78u: goto label_1cef78;
        case 0x1cef7cu: goto label_1cef7c;
        case 0x1cef80u: goto label_1cef80;
        default: break;
    }

    ctx->pc = 0x1ceef8u;

label_1ceef8:
    // 0x1ceef8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ceef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ceefc:
    // 0x1ceefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ceefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cef00:
    // 0x1cef00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cef04:
    // 0x1cef04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cef08:
    // 0x1cef08: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1cef08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cef0c:
    // 0x1cef0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cef10:
    // 0x1cef10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cef10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cef14:
    // 0x1cef14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1cef18:
    // 0x1cef18: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cef18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cef1c:
    // 0x1cef1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1cef20:
    // 0x1cef20: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1cef20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cef24:
    // 0x1cef24: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1cef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1cef28:
    // 0x1cef28: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1cef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1cef2c:
    // 0x1cef2c: 0x80f809  jalr        $a0
label_1cef30:
    if (ctx->pc == 0x1CEF30u) {
        ctx->pc = 0x1CEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF2Cu;
        // 0x1cef30: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEF34u;
        goto label_1cef34;
    }
    ctx->pc = 0x1CEF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x1CEF34u);
        ctx->pc = 0x1CEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF2Cu;
        // 0x1cef30: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEF2Cu, 0x1CEF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEF34u;
label_1cef34:
    // 0x1cef34: 0x260f809  jalr        $s3
label_1cef38:
    if (ctx->pc == 0x1CEF38u) {
        ctx->pc = 0x1CEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF34u;
        // 0x1cef38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEF3Cu;
        goto label_1cef3c;
    }
    ctx->pc = 0x1CEF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1CEF3Cu);
        ctx->pc = 0x1CEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF34u;
        // 0x1cef38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEF34u, 0x1CEF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEF3Cu;
label_1cef3c:
    // 0x1cef3c: 0x240f809  jalr        $s2
label_1cef40:
    if (ctx->pc == 0x1CEF40u) {
        ctx->pc = 0x1CEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF3Cu;
        // 0x1cef40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEF44u;
        goto label_1cef44;
    }
    ctx->pc = 0x1CEF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x1CEF44u);
        ctx->pc = 0x1CEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF3Cu;
        // 0x1cef40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEF3Cu, 0x1CEF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEF44u;
label_1cef44:
    // 0x1cef44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cef44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cef48:
    // 0x1cef48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cef4c:
    // 0x1cef4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cef4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cef50:
    // 0x1cef50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cef50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cef54:
    // 0x1cef54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cef54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cef58:
    // 0x1cef58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cef58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cef5c:
    // 0x1cef5c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1cef5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cef60:
    // 0x1cef60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cef60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cef64:
    // 0x1cef64: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1cef64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cef68:
    // 0x1cef68: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cef68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cef6c:
    // 0x1cef6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cef6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cef70:
    // 0x1cef70: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1cef70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cef74:
    // 0x1cef74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cef74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cef78:
    // 0x1cef78: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1cef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1cef7c:
    // 0x1cef7c: 0x8072f70  j           func_1CBDC0
label_1cef80:
    if (ctx->pc == 0x1CEF80u) {
        ctx->pc = 0x1CEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF7Cu;
        // 0x1cef80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEF84u;
        goto label_fallthrough_0x1cef7c;
    }
    ctx->pc = 0x1CEF7Cu;
    ctx->pc = 0x1CEF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF7Cu;
    // 0x1cef80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDC0u;
    dyncast__C16__user_type_infoiRC9type_infoPvT2T3_0x1cbdc0(rdram, ctx, runtime); return;
label_fallthrough_0x1cef7c:
    ctx->pc = 0x1CEF84u;
}
