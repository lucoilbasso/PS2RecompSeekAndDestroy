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

// Function: BossDamageSetup__8ApcPanel
// Address: 0x15d9e8 - 0x15de18
void BossDamageSetup__8ApcPanel_0x15d9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BossDamageSetup__8ApcPanel_0x15d9e8");
#endif

    switch (ctx->pc) {
        case 0x15d9e8u: goto label_15d9e8;
        case 0x15d9ecu: goto label_15d9ec;
        case 0x15d9f0u: goto label_15d9f0;
        case 0x15d9f4u: goto label_15d9f4;
        case 0x15d9f8u: goto label_15d9f8;
        case 0x15d9fcu: goto label_15d9fc;
        case 0x15da00u: goto label_15da00;
        case 0x15da04u: goto label_15da04;
        case 0x15da08u: goto label_15da08;
        case 0x15da0cu: goto label_15da0c;
        case 0x15da10u: goto label_15da10;
        case 0x15da14u: goto label_15da14;
        case 0x15da18u: goto label_15da18;
        case 0x15da1cu: goto label_15da1c;
        case 0x15da20u: goto label_15da20;
        case 0x15da24u: goto label_15da24;
        case 0x15da28u: goto label_15da28;
        case 0x15da2cu: goto label_15da2c;
        case 0x15da30u: goto label_15da30;
        case 0x15da34u: goto label_15da34;
        case 0x15da38u: goto label_15da38;
        case 0x15da3cu: goto label_15da3c;
        case 0x15da40u: goto label_15da40;
        case 0x15da44u: goto label_15da44;
        case 0x15da48u: goto label_15da48;
        case 0x15da4cu: goto label_15da4c;
        case 0x15da50u: goto label_15da50;
        case 0x15da54u: goto label_15da54;
        case 0x15da58u: goto label_15da58;
        case 0x15da5cu: goto label_15da5c;
        case 0x15da60u: goto label_15da60;
        case 0x15da64u: goto label_15da64;
        case 0x15da68u: goto label_15da68;
        case 0x15da6cu: goto label_15da6c;
        case 0x15da70u: goto label_15da70;
        case 0x15da74u: goto label_15da74;
        case 0x15da78u: goto label_15da78;
        case 0x15da7cu: goto label_15da7c;
        case 0x15da80u: goto label_15da80;
        case 0x15da84u: goto label_15da84;
        case 0x15da88u: goto label_15da88;
        case 0x15da8cu: goto label_15da8c;
        case 0x15da90u: goto label_15da90;
        case 0x15da94u: goto label_15da94;
        case 0x15da98u: goto label_15da98;
        case 0x15da9cu: goto label_15da9c;
        case 0x15daa0u: goto label_15daa0;
        case 0x15daa4u: goto label_15daa4;
        case 0x15daa8u: goto label_15daa8;
        case 0x15daacu: goto label_15daac;
        case 0x15dab0u: goto label_15dab0;
        case 0x15dab4u: goto label_15dab4;
        case 0x15dab8u: goto label_15dab8;
        case 0x15dabcu: goto label_15dabc;
        case 0x15dac0u: goto label_15dac0;
        case 0x15dac4u: goto label_15dac4;
        case 0x15dac8u: goto label_15dac8;
        case 0x15daccu: goto label_15dacc;
        case 0x15dad0u: goto label_15dad0;
        case 0x15dad4u: goto label_15dad4;
        case 0x15dad8u: goto label_15dad8;
        case 0x15dadcu: goto label_15dadc;
        case 0x15dae0u: goto label_15dae0;
        case 0x15dae4u: goto label_15dae4;
        case 0x15dae8u: goto label_15dae8;
        case 0x15daecu: goto label_15daec;
        case 0x15daf0u: goto label_15daf0;
        case 0x15daf4u: goto label_15daf4;
        case 0x15daf8u: goto label_15daf8;
        case 0x15dafcu: goto label_15dafc;
        case 0x15db00u: goto label_15db00;
        case 0x15db04u: goto label_15db04;
        case 0x15db08u: goto label_15db08;
        case 0x15db0cu: goto label_15db0c;
        case 0x15db10u: goto label_15db10;
        case 0x15db14u: goto label_15db14;
        case 0x15db18u: goto label_15db18;
        case 0x15db1cu: goto label_15db1c;
        case 0x15db20u: goto label_15db20;
        case 0x15db24u: goto label_15db24;
        case 0x15db28u: goto label_15db28;
        case 0x15db2cu: goto label_15db2c;
        case 0x15db30u: goto label_15db30;
        case 0x15db34u: goto label_15db34;
        case 0x15db38u: goto label_15db38;
        case 0x15db3cu: goto label_15db3c;
        case 0x15db40u: goto label_15db40;
        case 0x15db44u: goto label_15db44;
        case 0x15db48u: goto label_15db48;
        case 0x15db4cu: goto label_15db4c;
        case 0x15db50u: goto label_15db50;
        case 0x15db54u: goto label_15db54;
        case 0x15db58u: goto label_15db58;
        case 0x15db5cu: goto label_15db5c;
        case 0x15db60u: goto label_15db60;
        case 0x15db64u: goto label_15db64;
        case 0x15db68u: goto label_15db68;
        case 0x15db6cu: goto label_15db6c;
        case 0x15db70u: goto label_15db70;
        case 0x15db74u: goto label_15db74;
        case 0x15db78u: goto label_15db78;
        case 0x15db7cu: goto label_15db7c;
        case 0x15db80u: goto label_15db80;
        case 0x15db84u: goto label_15db84;
        case 0x15db88u: goto label_15db88;
        case 0x15db8cu: goto label_15db8c;
        case 0x15db90u: goto label_15db90;
        case 0x15db94u: goto label_15db94;
        case 0x15db98u: goto label_15db98;
        case 0x15db9cu: goto label_15db9c;
        case 0x15dba0u: goto label_15dba0;
        case 0x15dba4u: goto label_15dba4;
        case 0x15dba8u: goto label_15dba8;
        case 0x15dbacu: goto label_15dbac;
        case 0x15dbb0u: goto label_15dbb0;
        case 0x15dbb4u: goto label_15dbb4;
        case 0x15dbb8u: goto label_15dbb8;
        case 0x15dbbcu: goto label_15dbbc;
        case 0x15dbc0u: goto label_15dbc0;
        case 0x15dbc4u: goto label_15dbc4;
        case 0x15dbc8u: goto label_15dbc8;
        case 0x15dbccu: goto label_15dbcc;
        case 0x15dbd0u: goto label_15dbd0;
        case 0x15dbd4u: goto label_15dbd4;
        case 0x15dbd8u: goto label_15dbd8;
        case 0x15dbdcu: goto label_15dbdc;
        case 0x15dbe0u: goto label_15dbe0;
        case 0x15dbe4u: goto label_15dbe4;
        case 0x15dbe8u: goto label_15dbe8;
        case 0x15dbecu: goto label_15dbec;
        case 0x15dbf0u: goto label_15dbf0;
        case 0x15dbf4u: goto label_15dbf4;
        case 0x15dbf8u: goto label_15dbf8;
        case 0x15dbfcu: goto label_15dbfc;
        case 0x15dc00u: goto label_15dc00;
        case 0x15dc04u: goto label_15dc04;
        case 0x15dc08u: goto label_15dc08;
        case 0x15dc0cu: goto label_15dc0c;
        case 0x15dc10u: goto label_15dc10;
        case 0x15dc14u: goto label_15dc14;
        case 0x15dc18u: goto label_15dc18;
        case 0x15dc1cu: goto label_15dc1c;
        case 0x15dc20u: goto label_15dc20;
        case 0x15dc24u: goto label_15dc24;
        case 0x15dc28u: goto label_15dc28;
        case 0x15dc2cu: goto label_15dc2c;
        case 0x15dc30u: goto label_15dc30;
        case 0x15dc34u: goto label_15dc34;
        case 0x15dc38u: goto label_15dc38;
        case 0x15dc3cu: goto label_15dc3c;
        case 0x15dc40u: goto label_15dc40;
        case 0x15dc44u: goto label_15dc44;
        case 0x15dc48u: goto label_15dc48;
        case 0x15dc4cu: goto label_15dc4c;
        case 0x15dc50u: goto label_15dc50;
        case 0x15dc54u: goto label_15dc54;
        case 0x15dc58u: goto label_15dc58;
        case 0x15dc5cu: goto label_15dc5c;
        case 0x15dc60u: goto label_15dc60;
        case 0x15dc64u: goto label_15dc64;
        case 0x15dc68u: goto label_15dc68;
        case 0x15dc6cu: goto label_15dc6c;
        case 0x15dc70u: goto label_15dc70;
        case 0x15dc74u: goto label_15dc74;
        case 0x15dc78u: goto label_15dc78;
        case 0x15dc7cu: goto label_15dc7c;
        case 0x15dc80u: goto label_15dc80;
        case 0x15dc84u: goto label_15dc84;
        case 0x15dc88u: goto label_15dc88;
        case 0x15dc8cu: goto label_15dc8c;
        case 0x15dc90u: goto label_15dc90;
        case 0x15dc94u: goto label_15dc94;
        case 0x15dc98u: goto label_15dc98;
        case 0x15dc9cu: goto label_15dc9c;
        case 0x15dca0u: goto label_15dca0;
        case 0x15dca4u: goto label_15dca4;
        case 0x15dca8u: goto label_15dca8;
        case 0x15dcacu: goto label_15dcac;
        case 0x15dcb0u: goto label_15dcb0;
        case 0x15dcb4u: goto label_15dcb4;
        case 0x15dcb8u: goto label_15dcb8;
        case 0x15dcbcu: goto label_15dcbc;
        case 0x15dcc0u: goto label_15dcc0;
        case 0x15dcc4u: goto label_15dcc4;
        case 0x15dcc8u: goto label_15dcc8;
        case 0x15dcccu: goto label_15dccc;
        case 0x15dcd0u: goto label_15dcd0;
        case 0x15dcd4u: goto label_15dcd4;
        case 0x15dcd8u: goto label_15dcd8;
        case 0x15dcdcu: goto label_15dcdc;
        case 0x15dce0u: goto label_15dce0;
        case 0x15dce4u: goto label_15dce4;
        case 0x15dce8u: goto label_15dce8;
        case 0x15dcecu: goto label_15dcec;
        case 0x15dcf0u: goto label_15dcf0;
        case 0x15dcf4u: goto label_15dcf4;
        case 0x15dcf8u: goto label_15dcf8;
        case 0x15dcfcu: goto label_15dcfc;
        case 0x15dd00u: goto label_15dd00;
        case 0x15dd04u: goto label_15dd04;
        case 0x15dd08u: goto label_15dd08;
        case 0x15dd0cu: goto label_15dd0c;
        case 0x15dd10u: goto label_15dd10;
        case 0x15dd14u: goto label_15dd14;
        case 0x15dd18u: goto label_15dd18;
        case 0x15dd1cu: goto label_15dd1c;
        case 0x15dd20u: goto label_15dd20;
        case 0x15dd24u: goto label_15dd24;
        case 0x15dd28u: goto label_15dd28;
        case 0x15dd2cu: goto label_15dd2c;
        case 0x15dd30u: goto label_15dd30;
        case 0x15dd34u: goto label_15dd34;
        case 0x15dd38u: goto label_15dd38;
        case 0x15dd3cu: goto label_15dd3c;
        case 0x15dd40u: goto label_15dd40;
        case 0x15dd44u: goto label_15dd44;
        case 0x15dd48u: goto label_15dd48;
        case 0x15dd4cu: goto label_15dd4c;
        case 0x15dd50u: goto label_15dd50;
        case 0x15dd54u: goto label_15dd54;
        case 0x15dd58u: goto label_15dd58;
        case 0x15dd5cu: goto label_15dd5c;
        case 0x15dd60u: goto label_15dd60;
        case 0x15dd64u: goto label_15dd64;
        case 0x15dd68u: goto label_15dd68;
        case 0x15dd6cu: goto label_15dd6c;
        case 0x15dd70u: goto label_15dd70;
        case 0x15dd74u: goto label_15dd74;
        case 0x15dd78u: goto label_15dd78;
        case 0x15dd7cu: goto label_15dd7c;
        case 0x15dd80u: goto label_15dd80;
        case 0x15dd84u: goto label_15dd84;
        case 0x15dd88u: goto label_15dd88;
        case 0x15dd8cu: goto label_15dd8c;
        case 0x15dd90u: goto label_15dd90;
        case 0x15dd94u: goto label_15dd94;
        case 0x15dd98u: goto label_15dd98;
        case 0x15dd9cu: goto label_15dd9c;
        case 0x15dda0u: goto label_15dda0;
        case 0x15dda4u: goto label_15dda4;
        case 0x15dda8u: goto label_15dda8;
        case 0x15ddacu: goto label_15ddac;
        case 0x15ddb0u: goto label_15ddb0;
        case 0x15ddb4u: goto label_15ddb4;
        case 0x15ddb8u: goto label_15ddb8;
        case 0x15ddbcu: goto label_15ddbc;
        case 0x15ddc0u: goto label_15ddc0;
        case 0x15ddc4u: goto label_15ddc4;
        case 0x15ddc8u: goto label_15ddc8;
        case 0x15ddccu: goto label_15ddcc;
        case 0x15ddd0u: goto label_15ddd0;
        case 0x15ddd4u: goto label_15ddd4;
        case 0x15ddd8u: goto label_15ddd8;
        case 0x15dddcu: goto label_15dddc;
        case 0x15dde0u: goto label_15dde0;
        case 0x15dde4u: goto label_15dde4;
        case 0x15dde8u: goto label_15dde8;
        case 0x15ddecu: goto label_15ddec;
        case 0x15ddf0u: goto label_15ddf0;
        case 0x15ddf4u: goto label_15ddf4;
        case 0x15ddf8u: goto label_15ddf8;
        case 0x15ddfcu: goto label_15ddfc;
        case 0x15de00u: goto label_15de00;
        case 0x15de04u: goto label_15de04;
        case 0x15de08u: goto label_15de08;
        case 0x15de0cu: goto label_15de0c;
        case 0x15de10u: goto label_15de10;
        case 0x15de14u: goto label_15de14;
        default: break;
    }

    ctx->pc = 0x15d9e8u;

label_15d9e8:
    // 0x15d9e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15d9ec:
    // 0x15d9ec: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15d9f0:
    // 0x15d9f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15d9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15d9f4:
    // 0x15d9f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15d9f8:
    // 0x15d9f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_15d9fc:
    // 0x15d9fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15d9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_15da00:
    // 0x15da00: 0x2454a828  addiu       $s4, $v0, -0x57D8
    ctx->pc = 0x15da00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944808));
label_15da04:
    // 0x15da04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_15da08:
    // 0x15da08: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15da08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15da0c:
    // 0x15da0c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15da0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_15da10:
    // 0x15da10: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15da10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15da14:
    // 0x15da14: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x15da14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_15da18:
    // 0x15da18: 0x26d50da0  addiu       $s5, $s6, 0xDA0
    ctx->pc = 0x15da18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 3488));
label_15da1c:
    // 0x15da1c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x15da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_15da20:
    // 0x15da20: 0x241eff20  addiu       $fp, $zero, -0xE0
    ctx->pc = 0x15da20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967072));
label_15da24:
    // 0x15da24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15da28:
    // 0x15da28: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15da28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_15da2c:
    // 0x15da2c: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15da2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15da30:
    // 0x15da30: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x15da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15da34:
    // 0x15da34: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15da34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15da38:
    // 0x15da38: 0xc06bd28  jal         func_1AF4A0
label_15da3c:
    if (ctx->pc == 0x15DA3Cu) {
        ctx->pc = 0x15DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA38u;
        // 0x15da3c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA40u;
        goto label_15da40;
    }
    ctx->pc = 0x15DA38u;
    SET_GPR_U32(ctx, 31, 0x15DA40u);
    ctx->pc = 0x15DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA38u;
    // 0x15da3c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15DA38u, 0x15DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA40u;
label_15da40:
    // 0x15da40: 0xc06bd20  jal         func_1AF480
label_15da44:
    if (ctx->pc == 0x15DA44u) {
        ctx->pc = 0x15DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA40u;
        // 0x15da44: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA48u;
        goto label_15da48;
    }
    ctx->pc = 0x15DA40u;
    SET_GPR_U32(ctx, 31, 0x15DA48u);
    ctx->pc = 0x15DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA40u;
    // 0x15da44: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15DA40u, 0x15DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA48u;
label_15da48:
    // 0x15da48: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15da48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15da4c:
    // 0x15da4c: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15da4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15da50:
    // 0x15da50: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15da54:
    // 0x15da54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15da54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15da58:
    // 0x15da58: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15da5c:
    // 0x15da5c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15da5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15da60:
    // 0x15da60: 0xc0682b2  jal         func_1A0AC8
label_15da64:
    if (ctx->pc == 0x15DA64u) {
        ctx->pc = 0x15DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA60u;
        // 0x15da64: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA68u;
        goto label_15da68;
    }
    ctx->pc = 0x15DA60u;
    SET_GPR_U32(ctx, 31, 0x15DA68u);
    ctx->pc = 0x15DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA60u;
    // 0x15da64: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15DA60u, 0x15DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA68u;
label_15da68:
    // 0x15da68: 0xc0682b6  jal         func_1A0AD8
label_15da6c:
    if (ctx->pc == 0x15DA6Cu) {
        ctx->pc = 0x15DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA68u;
        // 0x15da6c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA70u;
        goto label_15da70;
    }
    ctx->pc = 0x15DA68u;
    SET_GPR_U32(ctx, 31, 0x15DA70u);
    ctx->pc = 0x15DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA68u;
    // 0x15da6c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15DA68u, 0x15DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA70u;
label_15da70:
    // 0x15da70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15da70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15da74:
    // 0x15da74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15da74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15da78:
    // 0x15da78: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15da78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15da7c:
    // 0x15da7c: 0x245701c0  addiu       $s7, $v0, 0x1C0
    ctx->pc = 0x15da7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15da80:
    // 0x15da80: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15da80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15da84:
    // 0x15da84: 0xae57000c  sw          $s7, 0xC($s2)
    ctx->pc = 0x15da84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 23));
label_15da88:
    // 0x15da88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15da88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15da8c:
    // 0x15da8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15da8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15da90:
    // 0x15da90: 0xc062cb0  jal         func_18B2C0
label_15da94:
    if (ctx->pc == 0x15DA94u) {
        ctx->pc = 0x15DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA90u;
        // 0x15da94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA98u;
        goto label_15da98;
    }
    ctx->pc = 0x15DA90u;
    SET_GPR_U32(ctx, 31, 0x15DA98u);
    ctx->pc = 0x15DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA90u;
    // 0x15da94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15DA90u, 0x15DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA98u;
label_15da98:
    // 0x15da98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15da98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15da9c:
    // 0x15da9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15daa0:
    // 0x15daa0: 0xc06825c  jal         func_1A0970
label_15daa4:
    if (ctx->pc == 0x15DAA4u) {
        ctx->pc = 0x15DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAA0u;
        // 0x15daa4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAA8u;
        goto label_15daa8;
    }
    ctx->pc = 0x15DAA0u;
    SET_GPR_U32(ctx, 31, 0x15DAA8u);
    ctx->pc = 0x15DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAA0u;
    // 0x15daa4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15DAA0u, 0x15DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAA8u;
label_15daa8:
    // 0x15daa8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15daac:
    // 0x15daac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dab0:
    // 0x15dab0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15dab4:
    // 0x15dab4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15dab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15dab8:
    // 0x15dab8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15dabc:
    // 0x15dabc: 0x60f809  jalr        $v1
label_15dac0:
    if (ctx->pc == 0x15DAC0u) {
        ctx->pc = 0x15DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DABCu;
        // 0x15dac0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAC4u;
        goto label_15dac4;
    }
    ctx->pc = 0x15DABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DAC4u);
        ctx->pc = 0x15DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DABCu;
        // 0x15dac0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DABCu, 0x15DAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DAC4u;
label_15dac4:
    // 0x15dac4: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15dac4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15dac8:
    // 0x15dac8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15dacc:
    if (ctx->pc == 0x15DACCu) {
        ctx->pc = 0x15DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAC8u;
        // 0x15dacc: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAD0u;
        goto label_15dad0;
    }
    ctx->pc = 0x15DAC8u;
    {
        const bool branch_taken_0x15dac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAC8u;
        // 0x15dacc: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dac8) {
            ctx->pc = 0x15DB84u;
            goto label_15db84;
        }
    }
    ctx->pc = 0x15DAD0u;
label_15dad0:
    // 0x15dad0: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15dad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15dad4:
    // 0x15dad4: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15dad4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15dad8:
    // 0x15dad8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15dad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15dadc:
    // 0x15dadc: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15dae0:
    // 0x15dae0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15dae4:
    // 0x15dae4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15dae8:
    // 0x15dae8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15daec:
    // 0x15daec: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15daecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15daf0:
    // 0x15daf0: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15daf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15daf4:
    // 0x15daf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15daf8:
    // 0x15daf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15dafc:
    // 0x15dafc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15dafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15db00:
    // 0x15db00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15db00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15db04:
    // 0x15db04: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15db04u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15db08:
    // 0x15db08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15db08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15db0c:
    // 0x15db0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15db0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15db10:
    // 0x15db10: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15db10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15db14:
    // 0x15db14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15db14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15db18:
    // 0x15db18: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15db18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15db1c:
    // 0x15db1c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15db1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15db20:
    // 0x15db20: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15db20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15db24:
    // 0x15db24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15db24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15db28:
    // 0x15db28: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15db28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15db2c:
    // 0x15db2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15db2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15db30:
    // 0x15db30: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15db30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15db34:
    // 0x15db34: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15db34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15db38:
    // 0x15db38: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15db38u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15db3c:
    // 0x15db3c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15db3cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15db40:
    // 0x15db40: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15db40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15db44:
    // 0x15db44: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15db44u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15db48:
    // 0x15db48: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15db48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15db4c:
    // 0x15db4c: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15db4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15db50:
    // 0x15db50: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15db50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15db54:
    // 0x15db54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15db54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15db58:
    // 0x15db58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15db58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15db5c:
    // 0x15db5c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15db5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15db60:
    // 0x15db60: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15db60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15db64:
    // 0x15db64: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15db64u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15db68:
    // 0x15db68: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15db68u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15db6c:
    // 0x15db6c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15db6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15db70:
    // 0x15db70: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15db70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15db74:
    // 0x15db74: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15db74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15db78:
    // 0x15db78: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15db78u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15db7c:
    // 0x15db7c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15db7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15db80:
    // 0x15db80: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15db80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15db84:
    // 0x15db84: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15db84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15db88:
    // 0x15db88: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15db88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15db8c:
    // 0x15db8c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15db90:
    // 0x15db90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15db90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15db94:
    // 0x15db94: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15db98:
    // 0x15db98: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15db9c:
    // 0x15db9c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15dba0:
    // 0x15dba0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15dba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15dba4:
    // 0x15dba4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15dba8:
    // 0x15dba8: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15dbac:
    // 0x15dbac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15dbb0:
    // 0x15dbb0: 0x40f809  jalr        $v0
label_15dbb4:
    if (ctx->pc == 0x15DBB4u) {
        ctx->pc = 0x15DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBB0u;
        // 0x15dbb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBB8u;
        goto label_15dbb8;
    }
    ctx->pc = 0x15DBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15DBB8u);
        ctx->pc = 0x15DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBB0u;
        // 0x15dbb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DBB0u, 0x15DBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DBB8u;
label_15dbb8:
    // 0x15dbb8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15dbbc:
    // 0x15dbbc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15dbc0:
    // 0x15dbc0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15dbc4:
    // 0x15dbc4: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15dbc8:
    // 0x15dbc8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15dbc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15dbcc:
    // 0x15dbcc: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x15dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_15dbd0:
    // 0x15dbd0: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15dbd4:
    // 0x15dbd4: 0x24c6ff54  addiu       $a2, $a2, -0xAC
    ctx->pc = 0x15dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967124));
label_15dbd8:
    // 0x15dbd8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15dbdc:
    // 0x15dbdc: 0xe0f809  jalr        $a3
label_15dbe0:
    if (ctx->pc == 0x15DBE0u) {
        ctx->pc = 0x15DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBDCu;
        // 0x15dbe0: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBE4u;
        goto label_15dbe4;
    }
    ctx->pc = 0x15DBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15DBE4u);
        ctx->pc = 0x15DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBDCu;
        // 0x15dbe0: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DBDCu, 0x15DBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DBE4u;
label_15dbe4:
    // 0x15dbe4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15dbe8:
    // 0x15dbe8: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15dbe8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15dbec:
    // 0x15dbec: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15dbecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15dbf0:
    // 0x15dbf0: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15dbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15dbf4:
    // 0x15dbf4: 0xc06bd28  jal         func_1AF4A0
label_15dbf8:
    if (ctx->pc == 0x15DBF8u) {
        ctx->pc = 0x15DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBF4u;
        // 0x15dbf8: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBFCu;
        goto label_15dbfc;
    }
    ctx->pc = 0x15DBF4u;
    SET_GPR_U32(ctx, 31, 0x15DBFCu);
    ctx->pc = 0x15DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBF4u;
    // 0x15dbf8: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15DBF4u, 0x15DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBFCu;
label_15dbfc:
    // 0x15dbfc: 0xc06bd20  jal         func_1AF480
label_15dc00:
    if (ctx->pc == 0x15DC00u) {
        ctx->pc = 0x15DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBFCu;
        // 0x15dc00: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC04u;
        goto label_15dc04;
    }
    ctx->pc = 0x15DBFCu;
    SET_GPR_U32(ctx, 31, 0x15DC04u);
    ctx->pc = 0x15DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBFCu;
    // 0x15dc00: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15DBFCu, 0x15DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC04u;
label_15dc04:
    // 0x15dc04: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15dc08:
    // 0x15dc08: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15dc08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15dc0c:
    // 0x15dc0c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15dc10:
    // 0x15dc10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15dc14:
    // 0x15dc14: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15dc18:
    // 0x15dc18: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15dc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15dc1c:
    // 0x15dc1c: 0xc0682b2  jal         func_1A0AC8
label_15dc20:
    if (ctx->pc == 0x15DC20u) {
        ctx->pc = 0x15DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC1Cu;
        // 0x15dc20: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC24u;
        goto label_15dc24;
    }
    ctx->pc = 0x15DC1Cu;
    SET_GPR_U32(ctx, 31, 0x15DC24u);
    ctx->pc = 0x15DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC1Cu;
    // 0x15dc20: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15DC1Cu, 0x15DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC24u;
label_15dc24:
    // 0x15dc24: 0xc0682b6  jal         func_1A0AD8
label_15dc28:
    if (ctx->pc == 0x15DC28u) {
        ctx->pc = 0x15DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC24u;
        // 0x15dc28: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC2Cu;
        goto label_15dc2c;
    }
    ctx->pc = 0x15DC24u;
    SET_GPR_U32(ctx, 31, 0x15DC2Cu);
    ctx->pc = 0x15DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC24u;
    // 0x15dc28: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15DC24u, 0x15DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC2Cu;
label_15dc2c:
    // 0x15dc2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15dc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15dc30:
    // 0x15dc30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15dc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15dc34:
    // 0x15dc34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15dc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15dc38:
    // 0x15dc38: 0xae57000c  sw          $s7, 0xC($s2)
    ctx->pc = 0x15dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 23));
label_15dc3c:
    // 0x15dc3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15dc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15dc40:
    // 0x15dc40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15dc40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc44:
    // 0x15dc44: 0xc062cb0  jal         func_18B2C0
label_15dc48:
    if (ctx->pc == 0x15DC48u) {
        ctx->pc = 0x15DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC44u;
        // 0x15dc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC4Cu;
        goto label_15dc4c;
    }
    ctx->pc = 0x15DC44u;
    SET_GPR_U32(ctx, 31, 0x15DC4Cu);
    ctx->pc = 0x15DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC44u;
    // 0x15dc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15DC44u, 0x15DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC4Cu;
label_15dc4c:
    // 0x15dc4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15dc50:
    // 0x15dc50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc54:
    // 0x15dc54: 0xc06825c  jal         func_1A0970
label_15dc58:
    if (ctx->pc == 0x15DC58u) {
        ctx->pc = 0x15DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC54u;
        // 0x15dc58: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC5Cu;
        goto label_15dc5c;
    }
    ctx->pc = 0x15DC54u;
    SET_GPR_U32(ctx, 31, 0x15DC5Cu);
    ctx->pc = 0x15DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC54u;
    // 0x15dc58: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15DC54u, 0x15DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC5Cu;
label_15dc5c:
    // 0x15dc5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15dc60:
    // 0x15dc60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc64:
    // 0x15dc64: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15dc68:
    // 0x15dc68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15dc68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15dc6c:
    // 0x15dc6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15dc70:
    // 0x15dc70: 0x60f809  jalr        $v1
label_15dc74:
    if (ctx->pc == 0x15DC74u) {
        ctx->pc = 0x15DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC70u;
        // 0x15dc74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC78u;
        goto label_15dc78;
    }
    ctx->pc = 0x15DC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DC78u);
        ctx->pc = 0x15DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC70u;
        // 0x15dc74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DC70u, 0x15DC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DC78u;
label_15dc78:
    // 0x15dc78: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15dc78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15dc7c:
    // 0x15dc7c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15dc80:
    if (ctx->pc == 0x15DC80u) {
        ctx->pc = 0x15DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC7Cu;
        // 0x15dc80: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC84u;
        goto label_15dc84;
    }
    ctx->pc = 0x15DC7Cu;
    {
        const bool branch_taken_0x15dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC7Cu;
        // 0x15dc80: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc7c) {
            ctx->pc = 0x15DD38u;
            goto label_15dd38;
        }
    }
    ctx->pc = 0x15DC84u;
label_15dc84:
    // 0x15dc84: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15dc84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15dc88:
    // 0x15dc88: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15dc88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15dc8c:
    // 0x15dc8c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15dc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15dc90:
    // 0x15dc90: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15dc94:
    // 0x15dc94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15dc98:
    // 0x15dc98: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15dc9c:
    // 0x15dc9c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15dca0:
    // 0x15dca0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15dca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15dca4:
    // 0x15dca4: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15dca4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15dca8:
    // 0x15dca8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15dcac:
    // 0x15dcac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15dcb0:
    // 0x15dcb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15dcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15dcb4:
    // 0x15dcb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15dcb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15dcb8:
    // 0x15dcb8: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15dcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15dcbc:
    // 0x15dcbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15dcbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15dcc0:
    // 0x15dcc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15dcc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15dcc4:
    // 0x15dcc4: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15dcc8:
    // 0x15dcc8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15dcc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15dccc:
    // 0x15dccc: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15dcccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15dcd0:
    // 0x15dcd0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15dcd0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15dcd4:
    // 0x15dcd4: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15dcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15dcd8:
    // 0x15dcd8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15dcd8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15dcdc:
    // 0x15dcdc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15dcdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15dce0:
    // 0x15dce0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15dce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15dce4:
    // 0x15dce4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15dce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15dce8:
    // 0x15dce8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15dce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15dcec:
    // 0x15dcec: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15dcecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15dcf0:
    // 0x15dcf0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15dcf0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15dcf4:
    // 0x15dcf4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15dcf4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15dcf8:
    // 0x15dcf8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15dcfc:
    // 0x15dcfc: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15dd00:
    // 0x15dd00: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15dd04:
    // 0x15dd04: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15dd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15dd08:
    // 0x15dd08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15dd08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15dd0c:
    // 0x15dd0c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15dd0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15dd10:
    // 0x15dd10: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15dd10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15dd14:
    // 0x15dd14: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15dd18:
    // 0x15dd18: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15dd18u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15dd1c:
    // 0x15dd1c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15dd1cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15dd20:
    // 0x15dd20: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15dd20u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15dd24:
    // 0x15dd24: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15dd24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15dd28:
    // 0x15dd28: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15dd28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15dd2c:
    // 0x15dd2c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15dd2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15dd30:
    // 0x15dd30: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15dd30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15dd34:
    // 0x15dd34: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15dd38:
    // 0x15dd38: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15dd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15dd3c:
    // 0x15dd3c: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15dd40:
    // 0x15dd40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15dd44:
    // 0x15dd44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15dd44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dd48:
    // 0x15dd48: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15dd4c:
    // 0x15dd4c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15dd50:
    // 0x15dd50: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15dd54:
    // 0x15dd54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15dd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15dd58:
    // 0x15dd58: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x15dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
label_15dd5c:
    // 0x15dd5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15dd60:
    // 0x15dd60: 0x60f809  jalr        $v1
label_15dd64:
    if (ctx->pc == 0x15DD64u) {
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD68u;
        goto label_15dd68;
    }
    ctx->pc = 0x15DD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DD68u);
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DD60u, 0x15DD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DD68u;
label_15dd68:
    // 0x15dd68: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15dd6c:
    // 0x15dd6c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15dd70:
    // 0x15dd70: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15dd74:
    // 0x15dd74: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15dd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15dd78:
    // 0x15dd78: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15dd78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15dd7c:
    // 0x15dd7c: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x15dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_15dd80:
    // 0x15dd80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15dd84:
    // 0x15dd84: 0x24c6ff54  addiu       $a2, $a2, -0xAC
    ctx->pc = 0x15dd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967124));
label_15dd88:
    // 0x15dd88: 0x60f809  jalr        $v1
label_15dd8c:
    if (ctx->pc == 0x15DD8Cu) {
        ctx->pc = 0x15DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD88u;
        // 0x15dd8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD90u;
        goto label_15dd90;
    }
    ctx->pc = 0x15DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DD90u);
        ctx->pc = 0x15DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD88u;
        // 0x15dd8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DD88u, 0x15DD90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DD90u;
label_15dd90:
    // 0x15dd90: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15dd94:
    // 0x15dd94: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15dd98:
    // 0x15dd98: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15dd9c:
    // 0x15dd9c: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15dda0:
    // 0x15dda0: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15dda4:
    // 0x15dda4: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15dda8:
    // 0x15dda8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15dda8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ddac:
    // 0x15ddac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ddb0:
    // 0x15ddb0: 0x60f809  jalr        $v1
label_15ddb4:
    if (ctx->pc == 0x15DDB4u) {
        ctx->pc = 0x15DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDB0u;
        // 0x15ddb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDB8u;
        goto label_15ddb8;
    }
    ctx->pc = 0x15DDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DDB8u);
        ctx->pc = 0x15DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDB0u;
        // 0x15ddb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DDB0u, 0x15DDB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DDB8u;
label_15ddb8:
    // 0x15ddb8: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15ddbc:
    // 0x15ddbc: 0x96c20016  lhu         $v0, 0x16($s6)
    ctx->pc = 0x15ddbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
label_15ddc0:
    // 0x15ddc0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15ddc4:
    // 0x15ddc4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15ddc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15ddc8:
    // 0x15ddc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ddcc:
    // 0x15ddcc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15ddd0:
    // 0x15ddd0: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15ddd4:
    // 0x15ddd4: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x15ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_15ddd8:
    // 0x15ddd8: 0xa6c20016  sh          $v0, 0x16($s6)
    ctx->pc = 0x15ddd8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 22), (uint16_t)GPR_U32(ctx, 2));
label_15dddc:
    // 0x15dddc: 0xaea40030  sw          $a0, 0x30($s5)
    ctx->pc = 0x15dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 4));
label_15dde0:
    // 0x15dde0: 0xaea50028  sw          $a1, 0x28($s5)
    ctx->pc = 0x15dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 5));
label_15dde4:
    // 0x15dde4: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x15dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_15dde8:
    // 0x15dde8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15dde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ddec:
    // 0x15ddec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15ddecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15ddf0:
    // 0x15ddf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15ddf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15ddf4:
    // 0x15ddf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15ddf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15ddf8:
    // 0x15ddf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15ddf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ddfc:
    // 0x15ddfc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15ddfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15de00:
    // 0x15de00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x15de00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15de04:
    // 0x15de04: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x15de04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15de08:
    // 0x15de08: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x15de08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15de0c:
    // 0x15de0c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15de0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15de10:
    // 0x15de10: 0x3e00008  jr          $ra
label_15de14:
    if (ctx->pc == 0x15DE14u) {
        ctx->pc = 0x15DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE10u;
        // 0x15de14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE18u;
        goto label_fallthrough_0x15de10;
    }
    ctx->pc = 0x15DE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE10u;
        // 0x15de14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15de10:
    ctx->pc = 0x15DE18u;
}
