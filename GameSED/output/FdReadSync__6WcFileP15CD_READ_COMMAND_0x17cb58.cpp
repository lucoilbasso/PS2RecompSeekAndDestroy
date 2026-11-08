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

// Function: FdReadSync__6WcFileP15CD_READ_COMMAND
// Address: 0x17cb58 - 0x17cbf8
void FdReadSync__6WcFileP15CD_READ_COMMAND_0x17cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FdReadSync__6WcFileP15CD_READ_COMMAND_0x17cb58");
#endif

    switch (ctx->pc) {
        case 0x17cb58u: goto label_17cb58;
        case 0x17cb5cu: goto label_17cb5c;
        case 0x17cb60u: goto label_17cb60;
        case 0x17cb64u: goto label_17cb64;
        case 0x17cb68u: goto label_17cb68;
        case 0x17cb6cu: goto label_17cb6c;
        case 0x17cb70u: goto label_17cb70;
        case 0x17cb74u: goto label_17cb74;
        case 0x17cb78u: goto label_17cb78;
        case 0x17cb7cu: goto label_17cb7c;
        case 0x17cb80u: goto label_17cb80;
        case 0x17cb84u: goto label_17cb84;
        case 0x17cb88u: goto label_17cb88;
        case 0x17cb8cu: goto label_17cb8c;
        case 0x17cb90u: goto label_17cb90;
        case 0x17cb94u: goto label_17cb94;
        case 0x17cb98u: goto label_17cb98;
        case 0x17cb9cu: goto label_17cb9c;
        case 0x17cba0u: goto label_17cba0;
        case 0x17cba4u: goto label_17cba4;
        case 0x17cba8u: goto label_17cba8;
        case 0x17cbacu: goto label_17cbac;
        case 0x17cbb0u: goto label_17cbb0;
        case 0x17cbb4u: goto label_17cbb4;
        case 0x17cbb8u: goto label_17cbb8;
        case 0x17cbbcu: goto label_17cbbc;
        case 0x17cbc0u: goto label_17cbc0;
        case 0x17cbc4u: goto label_17cbc4;
        case 0x17cbc8u: goto label_17cbc8;
        case 0x17cbccu: goto label_17cbcc;
        case 0x17cbd0u: goto label_17cbd0;
        case 0x17cbd4u: goto label_17cbd4;
        case 0x17cbd8u: goto label_17cbd8;
        case 0x17cbdcu: goto label_17cbdc;
        case 0x17cbe0u: goto label_17cbe0;
        case 0x17cbe4u: goto label_17cbe4;
        case 0x17cbe8u: goto label_17cbe8;
        case 0x17cbecu: goto label_17cbec;
        case 0x17cbf0u: goto label_17cbf0;
        case 0x17cbf4u: goto label_17cbf4;
        default: break;
    }

    ctx->pc = 0x17cb58u;

label_17cb58:
    // 0x17cb58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17cb5c:
    // 0x17cb5c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x17cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_17cb60:
    // 0x17cb60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17cb64:
    // 0x17cb64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17cb68:
    // 0x17cb68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17cb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_17cb6c:
    // 0x17cb6c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x17cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17cb70:
    // 0x17cb70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17cb74:
    // 0x17cb74: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x17cb74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17cb78:
    // 0x17cb78: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x17cb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_17cb7c:
    // 0x17cb7c: 0x8ca60048  lw          $a2, 0x48($a1)
    ctx->pc = 0x17cb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_17cb80:
    // 0x17cb80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17cb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_17cb84:
    // 0x17cb84: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x17cb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_17cb88:
    // 0x17cb88: 0x8ca80050  lw          $t0, 0x50($a1)
    ctx->pc = 0x17cb88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_17cb8c:
    // 0x17cb8c: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x17cb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_17cb90:
    // 0x17cb90: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x17cb90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
label_17cb94:
    // 0x17cb94: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x17cb94u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_17cb98:
    // 0x17cb98: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x17cb98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_17cb9c:
    // 0x17cb9c: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x17cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
label_17cba0:
    // 0x17cba0: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x17cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_17cba4:
    // 0x17cba4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x17cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_17cba8:
    // 0x17cba8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_17cbac:
    // 0x17cbac: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x17cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_17cbb0:
    // 0x17cbb0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17cbb4:
    // 0x17cbb4: 0x40f809  jalr        $v0
label_17cbb8:
    if (ctx->pc == 0x17CBB8u) {
        ctx->pc = 0x17CBBCu;
        goto label_17cbbc;
    }
    ctx->pc = 0x17CBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17CBBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CBB4u, 0x17CBBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17CBBCu;
label_17cbbc:
    // 0x17cbbc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_17cbc0:
    // 0x17cbc0: 0xc0686ba  jal         func_1A1AE8
label_17cbc4:
    if (ctx->pc == 0x17CBC4u) {
        ctx->pc = 0x17CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBC0u;
        // 0x17cbc4: 0x24847b80  addiu       $a0, $a0, 0x7B80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CBC8u;
        goto label_17cbc8;
    }
    ctx->pc = 0x17CBC0u;
    SET_GPR_U32(ctx, 31, 0x17CBC8u);
    ctx->pc = 0x17CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBC0u;
    // 0x17cbc4: 0x24847b80  addiu       $a0, $a0, 0x7B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17CBC0u, 0x17CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBC8u;
label_17cbc8:
    // 0x17cbc8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x17cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_17cbcc:
    // 0x17cbcc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17cbd0:
    // 0x17cbd0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x17cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17cbd4:
    // 0x17cbd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_17cbd8:
    // 0x17cbd8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_17cbdc:
    // 0x17cbdc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17cbe0:
    // 0x17cbe0: 0xc06bd20  jal         func_1AF480
label_17cbe4:
    if (ctx->pc == 0x17CBE4u) {
        ctx->pc = 0x17CBE8u;
        goto label_17cbe8;
    }
    ctx->pc = 0x17CBE0u;
    SET_GPR_U32(ctx, 31, 0x17CBE8u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17CBE0u, 0x17CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBE8u;
label_17cbe8:
    // 0x17cbe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17cbec:
    // 0x17cbec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17cbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17cbf0:
    // 0x17cbf0: 0x3e00008  jr          $ra
label_17cbf4:
    if (ctx->pc == 0x17CBF4u) {
        ctx->pc = 0x17CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBF0u;
        // 0x17cbf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CBF8u;
        goto label_fallthrough_0x17cbf0;
    }
    ctx->pc = 0x17CBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBF0u;
        // 0x17cbf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17cbf0:
    ctx->pc = 0x17CBF8u;
}
