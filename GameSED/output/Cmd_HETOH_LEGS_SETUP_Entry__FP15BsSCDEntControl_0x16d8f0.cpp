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

// Function: Cmd_HETOH_LEGS_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x16d8f0 - 0x16dcf4
void Cmd_HETOH_LEGS_SETUP_Entry__FP15BsSCDEntControl_0x16d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_HETOH_LEGS_SETUP_Entry__FP15BsSCDEntControl_0x16d8f0");
#endif

    switch (ctx->pc) {
        case 0x16d8f0u: goto label_16d8f0;
        case 0x16d8f4u: goto label_16d8f4;
        case 0x16d8f8u: goto label_16d8f8;
        case 0x16d8fcu: goto label_16d8fc;
        case 0x16d900u: goto label_16d900;
        case 0x16d904u: goto label_16d904;
        case 0x16d908u: goto label_16d908;
        case 0x16d90cu: goto label_16d90c;
        case 0x16d910u: goto label_16d910;
        case 0x16d914u: goto label_16d914;
        case 0x16d918u: goto label_16d918;
        case 0x16d91cu: goto label_16d91c;
        case 0x16d920u: goto label_16d920;
        case 0x16d924u: goto label_16d924;
        case 0x16d928u: goto label_16d928;
        case 0x16d92cu: goto label_16d92c;
        case 0x16d930u: goto label_16d930;
        case 0x16d934u: goto label_16d934;
        case 0x16d938u: goto label_16d938;
        case 0x16d93cu: goto label_16d93c;
        case 0x16d940u: goto label_16d940;
        case 0x16d944u: goto label_16d944;
        case 0x16d948u: goto label_16d948;
        case 0x16d94cu: goto label_16d94c;
        case 0x16d950u: goto label_16d950;
        case 0x16d954u: goto label_16d954;
        case 0x16d958u: goto label_16d958;
        case 0x16d95cu: goto label_16d95c;
        case 0x16d960u: goto label_16d960;
        case 0x16d964u: goto label_16d964;
        case 0x16d968u: goto label_16d968;
        case 0x16d96cu: goto label_16d96c;
        case 0x16d970u: goto label_16d970;
        case 0x16d974u: goto label_16d974;
        case 0x16d978u: goto label_16d978;
        case 0x16d97cu: goto label_16d97c;
        case 0x16d980u: goto label_16d980;
        case 0x16d984u: goto label_16d984;
        case 0x16d988u: goto label_16d988;
        case 0x16d98cu: goto label_16d98c;
        case 0x16d990u: goto label_16d990;
        case 0x16d994u: goto label_16d994;
        case 0x16d998u: goto label_16d998;
        case 0x16d99cu: goto label_16d99c;
        case 0x16d9a0u: goto label_16d9a0;
        case 0x16d9a4u: goto label_16d9a4;
        case 0x16d9a8u: goto label_16d9a8;
        case 0x16d9acu: goto label_16d9ac;
        case 0x16d9b0u: goto label_16d9b0;
        case 0x16d9b4u: goto label_16d9b4;
        case 0x16d9b8u: goto label_16d9b8;
        case 0x16d9bcu: goto label_16d9bc;
        case 0x16d9c0u: goto label_16d9c0;
        case 0x16d9c4u: goto label_16d9c4;
        case 0x16d9c8u: goto label_16d9c8;
        case 0x16d9ccu: goto label_16d9cc;
        case 0x16d9d0u: goto label_16d9d0;
        case 0x16d9d4u: goto label_16d9d4;
        case 0x16d9d8u: goto label_16d9d8;
        case 0x16d9dcu: goto label_16d9dc;
        case 0x16d9e0u: goto label_16d9e0;
        case 0x16d9e4u: goto label_16d9e4;
        case 0x16d9e8u: goto label_16d9e8;
        case 0x16d9ecu: goto label_16d9ec;
        case 0x16d9f0u: goto label_16d9f0;
        case 0x16d9f4u: goto label_16d9f4;
        case 0x16d9f8u: goto label_16d9f8;
        case 0x16d9fcu: goto label_16d9fc;
        case 0x16da00u: goto label_16da00;
        case 0x16da04u: goto label_16da04;
        case 0x16da08u: goto label_16da08;
        case 0x16da0cu: goto label_16da0c;
        case 0x16da10u: goto label_16da10;
        case 0x16da14u: goto label_16da14;
        case 0x16da18u: goto label_16da18;
        case 0x16da1cu: goto label_16da1c;
        case 0x16da20u: goto label_16da20;
        case 0x16da24u: goto label_16da24;
        case 0x16da28u: goto label_16da28;
        case 0x16da2cu: goto label_16da2c;
        case 0x16da30u: goto label_16da30;
        case 0x16da34u: goto label_16da34;
        case 0x16da38u: goto label_16da38;
        case 0x16da3cu: goto label_16da3c;
        case 0x16da40u: goto label_16da40;
        case 0x16da44u: goto label_16da44;
        case 0x16da48u: goto label_16da48;
        case 0x16da4cu: goto label_16da4c;
        case 0x16da50u: goto label_16da50;
        case 0x16da54u: goto label_16da54;
        case 0x16da58u: goto label_16da58;
        case 0x16da5cu: goto label_16da5c;
        case 0x16da60u: goto label_16da60;
        case 0x16da64u: goto label_16da64;
        case 0x16da68u: goto label_16da68;
        case 0x16da6cu: goto label_16da6c;
        case 0x16da70u: goto label_16da70;
        case 0x16da74u: goto label_16da74;
        case 0x16da78u: goto label_16da78;
        case 0x16da7cu: goto label_16da7c;
        case 0x16da80u: goto label_16da80;
        case 0x16da84u: goto label_16da84;
        case 0x16da88u: goto label_16da88;
        case 0x16da8cu: goto label_16da8c;
        case 0x16da90u: goto label_16da90;
        case 0x16da94u: goto label_16da94;
        case 0x16da98u: goto label_16da98;
        case 0x16da9cu: goto label_16da9c;
        case 0x16daa0u: goto label_16daa0;
        case 0x16daa4u: goto label_16daa4;
        case 0x16daa8u: goto label_16daa8;
        case 0x16daacu: goto label_16daac;
        case 0x16dab0u: goto label_16dab0;
        case 0x16dab4u: goto label_16dab4;
        case 0x16dab8u: goto label_16dab8;
        case 0x16dabcu: goto label_16dabc;
        case 0x16dac0u: goto label_16dac0;
        case 0x16dac4u: goto label_16dac4;
        case 0x16dac8u: goto label_16dac8;
        case 0x16daccu: goto label_16dacc;
        case 0x16dad0u: goto label_16dad0;
        case 0x16dad4u: goto label_16dad4;
        case 0x16dad8u: goto label_16dad8;
        case 0x16dadcu: goto label_16dadc;
        case 0x16dae0u: goto label_16dae0;
        case 0x16dae4u: goto label_16dae4;
        case 0x16dae8u: goto label_16dae8;
        case 0x16daecu: goto label_16daec;
        case 0x16daf0u: goto label_16daf0;
        case 0x16daf4u: goto label_16daf4;
        case 0x16daf8u: goto label_16daf8;
        case 0x16dafcu: goto label_16dafc;
        case 0x16db00u: goto label_16db00;
        case 0x16db04u: goto label_16db04;
        case 0x16db08u: goto label_16db08;
        case 0x16db0cu: goto label_16db0c;
        case 0x16db10u: goto label_16db10;
        case 0x16db14u: goto label_16db14;
        case 0x16db18u: goto label_16db18;
        case 0x16db1cu: goto label_16db1c;
        case 0x16db20u: goto label_16db20;
        case 0x16db24u: goto label_16db24;
        case 0x16db28u: goto label_16db28;
        case 0x16db2cu: goto label_16db2c;
        case 0x16db30u: goto label_16db30;
        case 0x16db34u: goto label_16db34;
        case 0x16db38u: goto label_16db38;
        case 0x16db3cu: goto label_16db3c;
        case 0x16db40u: goto label_16db40;
        case 0x16db44u: goto label_16db44;
        case 0x16db48u: goto label_16db48;
        case 0x16db4cu: goto label_16db4c;
        case 0x16db50u: goto label_16db50;
        case 0x16db54u: goto label_16db54;
        case 0x16db58u: goto label_16db58;
        case 0x16db5cu: goto label_16db5c;
        case 0x16db60u: goto label_16db60;
        case 0x16db64u: goto label_16db64;
        case 0x16db68u: goto label_16db68;
        case 0x16db6cu: goto label_16db6c;
        case 0x16db70u: goto label_16db70;
        case 0x16db74u: goto label_16db74;
        case 0x16db78u: goto label_16db78;
        case 0x16db7cu: goto label_16db7c;
        case 0x16db80u: goto label_16db80;
        case 0x16db84u: goto label_16db84;
        case 0x16db88u: goto label_16db88;
        case 0x16db8cu: goto label_16db8c;
        case 0x16db90u: goto label_16db90;
        case 0x16db94u: goto label_16db94;
        case 0x16db98u: goto label_16db98;
        case 0x16db9cu: goto label_16db9c;
        case 0x16dba0u: goto label_16dba0;
        case 0x16dba4u: goto label_16dba4;
        case 0x16dba8u: goto label_16dba8;
        case 0x16dbacu: goto label_16dbac;
        case 0x16dbb0u: goto label_16dbb0;
        case 0x16dbb4u: goto label_16dbb4;
        case 0x16dbb8u: goto label_16dbb8;
        case 0x16dbbcu: goto label_16dbbc;
        case 0x16dbc0u: goto label_16dbc0;
        case 0x16dbc4u: goto label_16dbc4;
        case 0x16dbc8u: goto label_16dbc8;
        case 0x16dbccu: goto label_16dbcc;
        case 0x16dbd0u: goto label_16dbd0;
        case 0x16dbd4u: goto label_16dbd4;
        case 0x16dbd8u: goto label_16dbd8;
        case 0x16dbdcu: goto label_16dbdc;
        case 0x16dbe0u: goto label_16dbe0;
        case 0x16dbe4u: goto label_16dbe4;
        case 0x16dbe8u: goto label_16dbe8;
        case 0x16dbecu: goto label_16dbec;
        case 0x16dbf0u: goto label_16dbf0;
        case 0x16dbf4u: goto label_16dbf4;
        case 0x16dbf8u: goto label_16dbf8;
        case 0x16dbfcu: goto label_16dbfc;
        case 0x16dc00u: goto label_16dc00;
        case 0x16dc04u: goto label_16dc04;
        case 0x16dc08u: goto label_16dc08;
        case 0x16dc0cu: goto label_16dc0c;
        case 0x16dc10u: goto label_16dc10;
        case 0x16dc14u: goto label_16dc14;
        case 0x16dc18u: goto label_16dc18;
        case 0x16dc1cu: goto label_16dc1c;
        case 0x16dc20u: goto label_16dc20;
        case 0x16dc24u: goto label_16dc24;
        case 0x16dc28u: goto label_16dc28;
        case 0x16dc2cu: goto label_16dc2c;
        case 0x16dc30u: goto label_16dc30;
        case 0x16dc34u: goto label_16dc34;
        case 0x16dc38u: goto label_16dc38;
        case 0x16dc3cu: goto label_16dc3c;
        case 0x16dc40u: goto label_16dc40;
        case 0x16dc44u: goto label_16dc44;
        case 0x16dc48u: goto label_16dc48;
        case 0x16dc4cu: goto label_16dc4c;
        case 0x16dc50u: goto label_16dc50;
        case 0x16dc54u: goto label_16dc54;
        case 0x16dc58u: goto label_16dc58;
        case 0x16dc5cu: goto label_16dc5c;
        case 0x16dc60u: goto label_16dc60;
        case 0x16dc64u: goto label_16dc64;
        case 0x16dc68u: goto label_16dc68;
        case 0x16dc6cu: goto label_16dc6c;
        case 0x16dc70u: goto label_16dc70;
        case 0x16dc74u: goto label_16dc74;
        case 0x16dc78u: goto label_16dc78;
        case 0x16dc7cu: goto label_16dc7c;
        case 0x16dc80u: goto label_16dc80;
        case 0x16dc84u: goto label_16dc84;
        case 0x16dc88u: goto label_16dc88;
        case 0x16dc8cu: goto label_16dc8c;
        case 0x16dc90u: goto label_16dc90;
        case 0x16dc94u: goto label_16dc94;
        case 0x16dc98u: goto label_16dc98;
        case 0x16dc9cu: goto label_16dc9c;
        case 0x16dca0u: goto label_16dca0;
        case 0x16dca4u: goto label_16dca4;
        case 0x16dca8u: goto label_16dca8;
        case 0x16dcacu: goto label_16dcac;
        case 0x16dcb0u: goto label_16dcb0;
        case 0x16dcb4u: goto label_16dcb4;
        case 0x16dcb8u: goto label_16dcb8;
        case 0x16dcbcu: goto label_16dcbc;
        case 0x16dcc0u: goto label_16dcc0;
        case 0x16dcc4u: goto label_16dcc4;
        case 0x16dcc8u: goto label_16dcc8;
        case 0x16dcccu: goto label_16dccc;
        case 0x16dcd0u: goto label_16dcd0;
        case 0x16dcd4u: goto label_16dcd4;
        case 0x16dcd8u: goto label_16dcd8;
        case 0x16dcdcu: goto label_16dcdc;
        case 0x16dce0u: goto label_16dce0;
        case 0x16dce4u: goto label_16dce4;
        case 0x16dce8u: goto label_16dce8;
        case 0x16dcecu: goto label_16dcec;
        case 0x16dcf0u: goto label_16dcf0;
        default: break;
    }

    ctx->pc = 0x16d8f0u;

label_16d8f0:
    // 0x16d8f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16d8f4:
    // 0x16d8f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16d8f8:
    // 0x16d8f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16d8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16d8fc:
    // 0x16d8fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16d8fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d900:
    // 0x16d900: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_16d904:
    // 0x16d904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16d908:
    // 0x16d908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16d90c:
    // 0x16d90c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16d910:
    // 0x16d910: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16d910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_16d914:
    // 0x16d914: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_16d918:
    // 0x16d918: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16d91c:
    // 0x16d91c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x16d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_16d920:
    // 0x16d920: 0xc06a26e  jal         func_1A89B8
label_16d924:
    if (ctx->pc == 0x16D924u) {
        ctx->pc = 0x16D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D920u;
        // 0x16d924: 0x8c560044  lw          $s6, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D928u;
        goto label_16d928;
    }
    ctx->pc = 0x16D920u;
    SET_GPR_U32(ctx, 31, 0x16D928u);
    ctx->pc = 0x16D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D920u;
    // 0x16d924: 0x8c560044  lw          $s6, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D920u, 0x16D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D928u;
label_16d928:
    // 0x16d928: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16d928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16d92c:
    // 0x16d92c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16d92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d930:
    // 0x16d930: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16d930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16d934:
    // 0x16d934: 0xc04110c  jal         func_104430
label_16d938:
    if (ctx->pc == 0x16D938u) {
        ctx->pc = 0x16D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D934u;
        // 0x16d938: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D93Cu;
        goto label_16d93c;
    }
    ctx->pc = 0x16D934u;
    SET_GPR_U32(ctx, 31, 0x16D93Cu);
    ctx->pc = 0x16D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D934u;
    // 0x16d938: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16D934u, 0x16D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D93Cu;
label_16d93c:
    // 0x16d93c: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x16d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
label_16d940:
    // 0x16d940: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16d940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d944:
    // 0x16d944: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x16d944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_16d948:
    // 0x16d948: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_16d94c:
    if (ctx->pc == 0x16D94Cu) {
        ctx->pc = 0x16D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D948u;
        // 0x16d94c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D950u;
        goto label_16d950;
    }
    ctx->pc = 0x16D948u;
    {
        const bool branch_taken_0x16d948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d948) {
            ctx->pc = 0x16D94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D948u;
            // 0x16d94c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D974u;
            goto label_16d974;
        }
    }
    ctx->pc = 0x16D950u;
label_16d950:
    // 0x16d950: 0xc04112c  jal         func_1044B0
label_16d954:
    if (ctx->pc == 0x16D954u) {
        ctx->pc = 0x16D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D950u;
        // 0x16d954: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D958u;
        goto label_16d958;
    }
    ctx->pc = 0x16D950u;
    SET_GPR_U32(ctx, 31, 0x16D958u);
    ctx->pc = 0x16D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D950u;
    // 0x16d954: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x16D950u, 0x16D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D958u;
label_16d958:
    // 0x16d958: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16d958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_16d95c:
    // 0x16d95c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d960:
    // 0x16d960: 0x24a574c0  addiu       $a1, $a1, 0x74C0
    ctx->pc = 0x16d960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29888));
label_16d964:
    // 0x16d964: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x16d964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_16d968:
    // 0x16d968: 0xc0415ec  jal         func_1057B0
label_16d96c:
    if (ctx->pc == 0x16D96Cu) {
        ctx->pc = 0x16D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D968u;
        // 0x16d96c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D970u;
        goto label_16d970;
    }
    ctx->pc = 0x16D968u;
    SET_GPR_U32(ctx, 31, 0x16D970u);
    ctx->pc = 0x16D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D968u;
    // 0x16d96c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16D968u, 0x16D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D970u;
label_16d970:
    // 0x16d970: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x16d970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_16d974:
    // 0x16d974: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x16d974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16d978:
    // 0x16d978: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x16d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_16d97c:
    // 0x16d97c: 0x24110306  addiu       $s1, $zero, 0x306
    ctx->pc = 0x16d97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16d980:
    // 0x16d980: 0xc0682b2  jal         func_1A0AC8
label_16d984:
    if (ctx->pc == 0x16D984u) {
        ctx->pc = 0x16D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D980u;
        // 0x16d984: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D988u;
        goto label_16d988;
    }
    ctx->pc = 0x16D980u;
    SET_GPR_U32(ctx, 31, 0x16D988u);
    ctx->pc = 0x16D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D980u;
    // 0x16d984: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16D980u, 0x16D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D988u;
label_16d988:
    // 0x16d988: 0xc0682b6  jal         func_1A0AD8
label_16d98c:
    if (ctx->pc == 0x16D98Cu) {
        ctx->pc = 0x16D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D988u;
        // 0x16d98c: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D990u;
        goto label_16d990;
    }
    ctx->pc = 0x16D988u;
    SET_GPR_U32(ctx, 31, 0x16D990u);
    ctx->pc = 0x16D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D988u;
    // 0x16d98c: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16D988u, 0x16D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D990u;
label_16d990:
    // 0x16d990: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16d990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16d994:
    // 0x16d994: 0x2463f5d0  addiu       $v1, $v1, -0xA30
    ctx->pc = 0x16d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964688));
label_16d998:
    // 0x16d998: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16d998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d99c:
    // 0x16d99c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x16d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_16d9a0:
    // 0x16d9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d9a4:
    // 0x16d9a4: 0xc061258  jal         func_184960
label_16d9a8:
    if (ctx->pc == 0x16D9A8u) {
        ctx->pc = 0x16D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9A4u;
        // 0x16d9a8: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D9ACu;
        goto label_16d9ac;
    }
    ctx->pc = 0x16D9A4u;
    SET_GPR_U32(ctx, 31, 0x16D9ACu);
    ctx->pc = 0x16D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9A4u;
    // 0x16d9a8: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x16D9A4u, 0x16D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9ACu;
label_16d9ac:
    // 0x16d9ac: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x16d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_16d9b0:
    // 0x16d9b0: 0xc78084a8  lwc1        $f0, -0x7B58($gp)
    ctx->pc = 0x16d9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d9b4:
    // 0x16d9b4: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x16d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_16d9b8:
    // 0x16d9b8: 0xae500150  sw          $s0, 0x150($s2)
    ctx->pc = 0x16d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 16));
label_16d9bc:
    // 0x16d9bc: 0xe640020c  swc1        $f0, 0x20C($s2)
    ctx->pc = 0x16d9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 524), bits); }
label_16d9c0:
    // 0x16d9c0: 0xe6400200  swc1        $f0, 0x200($s2)
    ctx->pc = 0x16d9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 512), bits); }
label_16d9c4:
    // 0x16d9c4: 0xae530154  sw          $s3, 0x154($s2)
    ctx->pc = 0x16d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 19));
label_16d9c8:
    // 0x16d9c8: 0xae400204  sw          $zero, 0x204($s2)
    ctx->pc = 0x16d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 0));
label_16d9cc:
    // 0x16d9cc: 0xae400208  sw          $zero, 0x208($s2)
    ctx->pc = 0x16d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
label_16d9d0:
    // 0x16d9d0: 0xae400210  sw          $zero, 0x210($s2)
    ctx->pc = 0x16d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 0));
label_16d9d4:
    // 0x16d9d4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d9d8:
    // 0x16d9d8: 0x26420240  addiu       $v0, $s2, 0x240
    ctx->pc = 0x16d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
label_16d9dc:
    // 0x16d9dc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d9e0:
    // 0x16d9e0: 0x26430290  addiu       $v1, $s2, 0x290
    ctx->pc = 0x16d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
label_16d9e4:
    // 0x16d9e4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16d9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d9e8:
    // 0x16d9e8: 0x264402a0  addiu       $a0, $s2, 0x2A0
    ctx->pc = 0x16d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
label_16d9ec:
    // 0x16d9ec: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x16d9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d9f0:
    // 0x16d9f0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x16d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16d9f4:
    // 0x16d9f4: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x16d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_16d9f8:
    // 0x16d9f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16d9fc:
    // 0x16d9fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16da00:
    // 0x16da00: 0x60f809  jalr        $v1
label_16da04:
    if (ctx->pc == 0x16DA04u) {
        ctx->pc = 0x16DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA00u;
        // 0x16da04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA08u;
        goto label_16da08;
    }
    ctx->pc = 0x16DA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16DA08u);
        ctx->pc = 0x16DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA00u;
        // 0x16da04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA00u, 0x16DA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DA08u;
label_16da08:
    // 0x16da08: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x16da08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_16da0c:
    // 0x16da0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16da0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16da10:
    // 0x16da10: 0x26460300  addiu       $a2, $s2, 0x300
    ctx->pc = 0x16da10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
label_16da14:
    // 0x16da14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16da14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_16da18:
    // 0x16da18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16da18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16da1c:
    // 0x16da1c: 0xe64202e4  swc1        $f2, 0x2E4($s2)
    ctx->pc = 0x16da1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 740), bits); }
label_16da20:
    // 0x16da20: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16da20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
label_16da24:
    // 0x16da24: 0xe64202e8  swc1        $f2, 0x2E8($s2)
    ctx->pc = 0x16da24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 744), bits); }
label_16da28:
    // 0x16da28: 0xae4002ec  sw          $zero, 0x2EC($s2)
    ctx->pc = 0x16da28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 748), GPR_U32(ctx, 0));
label_16da2c:
    // 0x16da2c: 0xe64202f0  swc1        $f2, 0x2F0($s2)
    ctx->pc = 0x16da2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
label_16da30:
    // 0x16da30: 0xe64202f4  swc1        $f2, 0x2F4($s2)
    ctx->pc = 0x16da30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 756), bits); }
label_16da34:
    // 0x16da34: 0xc78184ac  lwc1        $f1, -0x7B54($gp)
    ctx->pc = 0x16da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16da38:
    // 0x16da38: 0xc78084b0  lwc1        $f0, -0x7B50($gp)
    ctx->pc = 0x16da38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16da3c:
    // 0x16da3c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x16da3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16da40:
    // 0x16da40: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16da40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16da44:
    // 0x16da44: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16da44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16da48:
    // 0x16da48: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16da48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16da4c:
    // 0x16da4c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16da4cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16da50:
    // 0x16da50: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16da50u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16da54:
    // 0x16da54: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16da54u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16da58:
    // 0x16da58: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16da58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_16da5c:
    // 0x16da5c: 0x264202d4  addiu       $v0, $s2, 0x2D4
    ctx->pc = 0x16da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 724));
label_16da60:
    // 0x16da60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16da60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16da64:
    // 0x16da64: 0x0  nop
    ctx->pc = 0x16da64u;
    // NOP
label_16da68:
    // 0x16da68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16da68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_16da6c:
    // 0x16da6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_16da70:
    // 0x16da70: 0x0  nop
    ctx->pc = 0x16da70u;
    // NOP
label_16da74:
    // 0x16da74: 0x0  nop
    ctx->pc = 0x16da74u;
    // NOP
label_16da78:
    // 0x16da78: 0x0  nop
    ctx->pc = 0x16da78u;
    // NOP
label_16da7c:
    // 0x16da7c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_16da80:
    if (ctx->pc == 0x16DA80u) {
        ctx->pc = 0x16DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA7Cu;
        // 0x16da80: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA84u;
        goto label_16da84;
    }
    ctx->pc = 0x16DA7Cu;
    {
        const bool branch_taken_0x16da7c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA7Cu;
        // 0x16da80: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da7c) {
            ctx->pc = 0x16DA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16da68;
        }
    }
    ctx->pc = 0x16DA84u;
label_16da84:
    // 0x16da84: 0xaea002dc  sw          $zero, 0x2DC($s5)
    ctx->pc = 0x16da84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 732), GPR_U32(ctx, 0));
label_16da88:
    // 0x16da88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16da88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16da8c:
    // 0x16da8c: 0xaea002d8  sw          $zero, 0x2D8($s5)
    ctx->pc = 0x16da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 728), GPR_U32(ctx, 0));
label_16da90:
    // 0x16da90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16da90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16da94:
    // 0x16da94: 0xc06825c  jal         func_1A0970
label_16da98:
    if (ctx->pc == 0x16DA98u) {
        ctx->pc = 0x16DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA94u;
        // 0x16da98: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA9Cu;
        goto label_16da9c;
    }
    ctx->pc = 0x16DA94u;
    SET_GPR_U32(ctx, 31, 0x16DA9Cu);
    ctx->pc = 0x16DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA94u;
    // 0x16da98: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x16DA94u, 0x16DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA9Cu;
label_16da9c:
    // 0x16da9c: 0xc06a26e  jal         func_1A89B8
label_16daa0:
    if (ctx->pc == 0x16DAA0u) {
        ctx->pc = 0x16DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA9Cu;
        // 0x16daa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAA4u;
        goto label_16daa4;
    }
    ctx->pc = 0x16DA9Cu;
    SET_GPR_U32(ctx, 31, 0x16DAA4u);
    ctx->pc = 0x16DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA9Cu;
    // 0x16daa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DA9Cu, 0x16DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAA4u;
label_16daa4:
    // 0x16daa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16daa8:
    // 0x16daa8: 0xc06a26e  jal         func_1A89B8
label_16daac:
    if (ctx->pc == 0x16DAACu) {
        ctx->pc = 0x16DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAA8u;
        // 0x16daac: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAB0u;
        goto label_16dab0;
    }
    ctx->pc = 0x16DAA8u;
    SET_GPR_U32(ctx, 31, 0x16DAB0u);
    ctx->pc = 0x16DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAA8u;
    // 0x16daac: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DAA8u, 0x16DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAB0u;
label_16dab0:
    // 0x16dab0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16dab4:
    if (ctx->pc == 0x16DAB4u) {
        ctx->pc = 0x16DAB8u;
        goto label_16dab8;
    }
    ctx->pc = 0x16DAB0u;
    {
        const bool branch_taken_0x16dab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dab0) {
            ctx->pc = 0x16DAC0u;
            goto label_16dac0;
        }
    }
    ctx->pc = 0x16DAB8u;
label_16dab8:
    // 0x16dab8: 0x10000010  b           . + 4 + (0x10 << 2)
label_16dabc:
    if (ctx->pc == 0x16DABCu) {
        ctx->pc = 0x16DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAB8u;
        // 0x16dabc: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAC0u;
        goto label_16dac0;
    }
    ctx->pc = 0x16DAB8u;
    {
        const bool branch_taken_0x16dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAB8u;
        // 0x16dabc: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dab8) {
            ctx->pc = 0x16DAFCu;
            goto label_16dafc;
        }
    }
    ctx->pc = 0x16DAC0u;
label_16dac0:
    // 0x16dac0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16dac4:
    if (ctx->pc == 0x16DAC4u) {
        ctx->pc = 0x16DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAC0u;
        // 0x16dac4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAC8u;
        goto label_16dac8;
    }
    ctx->pc = 0x16DAC0u;
    {
        const bool branch_taken_0x16dac0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16dac0) {
            ctx->pc = 0x16DAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DAC0u;
            // 0x16dac4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DAD8u;
            goto label_16dad8;
        }
    }
    ctx->pc = 0x16DAC8u;
label_16dac8:
    // 0x16dac8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16dacc:
    // 0x16dacc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16daccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16dad0:
    // 0x16dad0: 0x1000000a  b           . + 4 + (0xA << 2)
label_16dad4:
    if (ctx->pc == 0x16DAD4u) {
        ctx->pc = 0x16DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAD0u;
        // 0x16dad4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAD8u;
        goto label_16dad8;
    }
    ctx->pc = 0x16DAD0u;
    {
        const bool branch_taken_0x16dad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAD0u;
        // 0x16dad4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dad0) {
            ctx->pc = 0x16DAFCu;
            goto label_16dafc;
        }
    }
    ctx->pc = 0x16DAD8u;
label_16dad8:
    // 0x16dad8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16dadc:
    // 0x16dadc: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16dae0:
    // 0x16dae0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16dae4:
    if (ctx->pc == 0x16DAE4u) {
        ctx->pc = 0x16DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAE0u;
        // 0x16dae4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAE8u;
        goto label_16dae8;
    }
    ctx->pc = 0x16DAE0u;
    {
        const bool branch_taken_0x16dae0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAE0u;
        // 0x16dae4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dae0) {
            ctx->pc = 0x16DAF8u;
            goto label_16daf8;
        }
    }
    ctx->pc = 0x16DAE8u;
label_16dae8:
    // 0x16dae8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16daec:
    // 0x16daec: 0x10000003  b           . + 4 + (0x3 << 2)
label_16daf0:
    if (ctx->pc == 0x16DAF0u) {
        ctx->pc = 0x16DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAECu;
        // 0x16daf0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAF4u;
        goto label_16daf4;
    }
    ctx->pc = 0x16DAECu;
    {
        const bool branch_taken_0x16daec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAECu;
        // 0x16daf0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16daec) {
            ctx->pc = 0x16DAFCu;
            goto label_16dafc;
        }
    }
    ctx->pc = 0x16DAF4u;
label_16daf4:
    // 0x16daf4: 0x0  nop
    ctx->pc = 0x16daf4u;
    // NOP
label_16daf8:
    // 0x16daf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16daf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dafc:
    // 0x16dafc: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x16dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
label_16db00:
    // 0x16db00: 0xc06a26e  jal         func_1A89B8
label_16db04:
    if (ctx->pc == 0x16DB04u) {
        ctx->pc = 0x16DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB00u;
        // 0x16db04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB08u;
        goto label_16db08;
    }
    ctx->pc = 0x16DB00u;
    SET_GPR_U32(ctx, 31, 0x16DB08u);
    ctx->pc = 0x16DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB00u;
    // 0x16db04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DB00u, 0x16DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB08u;
label_16db08:
    // 0x16db08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16db0c:
    if (ctx->pc == 0x16DB0Cu) {
        ctx->pc = 0x16DB10u;
        goto label_16db10;
    }
    ctx->pc = 0x16DB08u;
    {
        const bool branch_taken_0x16db08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16db08) {
            ctx->pc = 0x16DB18u;
            goto label_16db18;
        }
    }
    ctx->pc = 0x16DB10u;
label_16db10:
    // 0x16db10: 0x10000010  b           . + 4 + (0x10 << 2)
label_16db14:
    if (ctx->pc == 0x16DB14u) {
        ctx->pc = 0x16DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB10u;
        // 0x16db14: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB18u;
        goto label_16db18;
    }
    ctx->pc = 0x16DB10u;
    {
        const bool branch_taken_0x16db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB10u;
        // 0x16db14: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db10) {
            ctx->pc = 0x16DB54u;
            goto label_16db54;
        }
    }
    ctx->pc = 0x16DB18u;
label_16db18:
    // 0x16db18: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16db1c:
    if (ctx->pc == 0x16DB1Cu) {
        ctx->pc = 0x16DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB18u;
        // 0x16db1c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB20u;
        goto label_16db20;
    }
    ctx->pc = 0x16DB18u;
    {
        const bool branch_taken_0x16db18 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16db18) {
            ctx->pc = 0x16DB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DB18u;
            // 0x16db1c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DB30u;
            goto label_16db30;
        }
    }
    ctx->pc = 0x16DB20u;
label_16db20:
    // 0x16db20: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16db24:
    // 0x16db24: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16db24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16db28:
    // 0x16db28: 0x1000000a  b           . + 4 + (0xA << 2)
label_16db2c:
    if (ctx->pc == 0x16DB2Cu) {
        ctx->pc = 0x16DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB28u;
        // 0x16db2c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB30u;
        goto label_16db30;
    }
    ctx->pc = 0x16DB28u;
    {
        const bool branch_taken_0x16db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB28u;
        // 0x16db2c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db28) {
            ctx->pc = 0x16DB54u;
            goto label_16db54;
        }
    }
    ctx->pc = 0x16DB30u;
label_16db30:
    // 0x16db30: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16db34:
    // 0x16db34: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16db38:
    // 0x16db38: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16db3c:
    if (ctx->pc == 0x16DB3Cu) {
        ctx->pc = 0x16DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB38u;
        // 0x16db3c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB40u;
        goto label_16db40;
    }
    ctx->pc = 0x16DB38u;
    {
        const bool branch_taken_0x16db38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB38u;
        // 0x16db3c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db38) {
            ctx->pc = 0x16DB50u;
            goto label_16db50;
        }
    }
    ctx->pc = 0x16DB40u;
label_16db40:
    // 0x16db40: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16db44:
    // 0x16db44: 0x10000003  b           . + 4 + (0x3 << 2)
label_16db48:
    if (ctx->pc == 0x16DB48u) {
        ctx->pc = 0x16DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB44u;
        // 0x16db48: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB4Cu;
        goto label_16db4c;
    }
    ctx->pc = 0x16DB44u;
    {
        const bool branch_taken_0x16db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB44u;
        // 0x16db48: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db44) {
            ctx->pc = 0x16DB54u;
            goto label_16db54;
        }
    }
    ctx->pc = 0x16DB4Cu;
label_16db4c:
    // 0x16db4c: 0x0  nop
    ctx->pc = 0x16db4cu;
    // NOP
label_16db50:
    // 0x16db50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16db50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16db54:
    // 0x16db54: 0xae0202b8  sw          $v0, 0x2B8($s0)
    ctx->pc = 0x16db54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 2));
label_16db58:
    // 0x16db58: 0xc06a26e  jal         func_1A89B8
label_16db5c:
    if (ctx->pc == 0x16DB5Cu) {
        ctx->pc = 0x16DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB58u;
        // 0x16db5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB60u;
        goto label_16db60;
    }
    ctx->pc = 0x16DB58u;
    SET_GPR_U32(ctx, 31, 0x16DB60u);
    ctx->pc = 0x16DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB58u;
    // 0x16db5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DB58u, 0x16DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB60u;
label_16db60:
    // 0x16db60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16db64:
    if (ctx->pc == 0x16DB64u) {
        ctx->pc = 0x16DB68u;
        goto label_16db68;
    }
    ctx->pc = 0x16DB60u;
    {
        const bool branch_taken_0x16db60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16db60) {
            ctx->pc = 0x16DB70u;
            goto label_16db70;
        }
    }
    ctx->pc = 0x16DB68u;
label_16db68:
    // 0x16db68: 0x10000010  b           . + 4 + (0x10 << 2)
label_16db6c:
    if (ctx->pc == 0x16DB6Cu) {
        ctx->pc = 0x16DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB68u;
        // 0x16db6c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB70u;
        goto label_16db70;
    }
    ctx->pc = 0x16DB68u;
    {
        const bool branch_taken_0x16db68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB68u;
        // 0x16db6c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db68) {
            ctx->pc = 0x16DBACu;
            goto label_16dbac;
        }
    }
    ctx->pc = 0x16DB70u;
label_16db70:
    // 0x16db70: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16db74:
    if (ctx->pc == 0x16DB74u) {
        ctx->pc = 0x16DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB70u;
        // 0x16db74: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB78u;
        goto label_16db78;
    }
    ctx->pc = 0x16DB70u;
    {
        const bool branch_taken_0x16db70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16db70) {
            ctx->pc = 0x16DB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DB70u;
            // 0x16db74: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DB88u;
            goto label_16db88;
        }
    }
    ctx->pc = 0x16DB78u;
label_16db78:
    // 0x16db78: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16db78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16db7c:
    // 0x16db7c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16db80:
    // 0x16db80: 0x1000000a  b           . + 4 + (0xA << 2)
label_16db84:
    if (ctx->pc == 0x16DB84u) {
        ctx->pc = 0x16DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB80u;
        // 0x16db84: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB88u;
        goto label_16db88;
    }
    ctx->pc = 0x16DB80u;
    {
        const bool branch_taken_0x16db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB80u;
        // 0x16db84: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db80) {
            ctx->pc = 0x16DBACu;
            goto label_16dbac;
        }
    }
    ctx->pc = 0x16DB88u;
label_16db88:
    // 0x16db88: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16db88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16db8c:
    // 0x16db8c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16db90:
    // 0x16db90: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16db94:
    if (ctx->pc == 0x16DB94u) {
        ctx->pc = 0x16DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB90u;
        // 0x16db94: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB98u;
        goto label_16db98;
    }
    ctx->pc = 0x16DB90u;
    {
        const bool branch_taken_0x16db90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB90u;
        // 0x16db94: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db90) {
            ctx->pc = 0x16DBA8u;
            goto label_16dba8;
        }
    }
    ctx->pc = 0x16DB98u;
label_16db98:
    // 0x16db98: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16db98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16db9c:
    // 0x16db9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_16dba0:
    if (ctx->pc == 0x16DBA0u) {
        ctx->pc = 0x16DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB9Cu;
        // 0x16dba0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBA4u;
        goto label_16dba4;
    }
    ctx->pc = 0x16DB9Cu;
    {
        const bool branch_taken_0x16db9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB9Cu;
        // 0x16dba0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db9c) {
            ctx->pc = 0x16DBACu;
            goto label_16dbac;
        }
    }
    ctx->pc = 0x16DBA4u;
label_16dba4:
    // 0x16dba4: 0x0  nop
    ctx->pc = 0x16dba4u;
    // NOP
label_16dba8:
    // 0x16dba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16dba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dbac:
    // 0x16dbac: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x16dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
label_16dbb0:
    // 0x16dbb0: 0xc06a26e  jal         func_1A89B8
label_16dbb4:
    if (ctx->pc == 0x16DBB4u) {
        ctx->pc = 0x16DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBB0u;
        // 0x16dbb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBB8u;
        goto label_16dbb8;
    }
    ctx->pc = 0x16DBB0u;
    SET_GPR_U32(ctx, 31, 0x16DBB8u);
    ctx->pc = 0x16DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBB0u;
    // 0x16dbb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DBB0u, 0x16DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBB8u;
label_16dbb8:
    // 0x16dbb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16dbbc:
    if (ctx->pc == 0x16DBBCu) {
        ctx->pc = 0x16DBC0u;
        goto label_16dbc0;
    }
    ctx->pc = 0x16DBB8u;
    {
        const bool branch_taken_0x16dbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dbb8) {
            ctx->pc = 0x16DBC8u;
            goto label_16dbc8;
        }
    }
    ctx->pc = 0x16DBC0u;
label_16dbc0:
    // 0x16dbc0: 0x10000010  b           . + 4 + (0x10 << 2)
label_16dbc4:
    if (ctx->pc == 0x16DBC4u) {
        ctx->pc = 0x16DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBC0u;
        // 0x16dbc4: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBC8u;
        goto label_16dbc8;
    }
    ctx->pc = 0x16DBC0u;
    {
        const bool branch_taken_0x16dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBC0u;
        // 0x16dbc4: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbc0) {
            ctx->pc = 0x16DC04u;
            goto label_16dc04;
        }
    }
    ctx->pc = 0x16DBC8u;
label_16dbc8:
    // 0x16dbc8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16dbcc:
    if (ctx->pc == 0x16DBCCu) {
        ctx->pc = 0x16DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBC8u;
        // 0x16dbcc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBD0u;
        goto label_16dbd0;
    }
    ctx->pc = 0x16DBC8u;
    {
        const bool branch_taken_0x16dbc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16dbc8) {
            ctx->pc = 0x16DBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DBC8u;
            // 0x16dbcc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DBE0u;
            goto label_16dbe0;
        }
    }
    ctx->pc = 0x16DBD0u;
label_16dbd0:
    // 0x16dbd0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16dbd4:
    // 0x16dbd4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16dbd8:
    // 0x16dbd8: 0x1000000a  b           . + 4 + (0xA << 2)
label_16dbdc:
    if (ctx->pc == 0x16DBDCu) {
        ctx->pc = 0x16DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBD8u;
        // 0x16dbdc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBE0u;
        goto label_16dbe0;
    }
    ctx->pc = 0x16DBD8u;
    {
        const bool branch_taken_0x16dbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBD8u;
        // 0x16dbdc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbd8) {
            ctx->pc = 0x16DC04u;
            goto label_16dc04;
        }
    }
    ctx->pc = 0x16DBE0u;
label_16dbe0:
    // 0x16dbe0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16dbe4:
    // 0x16dbe4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16dbe8:
    // 0x16dbe8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16dbec:
    if (ctx->pc == 0x16DBECu) {
        ctx->pc = 0x16DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBE8u;
        // 0x16dbec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBF0u;
        goto label_16dbf0;
    }
    ctx->pc = 0x16DBE8u;
    {
        const bool branch_taken_0x16dbe8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBE8u;
        // 0x16dbec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbe8) {
            ctx->pc = 0x16DC00u;
            goto label_16dc00;
        }
    }
    ctx->pc = 0x16DBF0u;
label_16dbf0:
    // 0x16dbf0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16dbf4:
    // 0x16dbf4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16dbf8:
    if (ctx->pc == 0x16DBF8u) {
        ctx->pc = 0x16DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBF4u;
        // 0x16dbf8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBFCu;
        goto label_16dbfc;
    }
    ctx->pc = 0x16DBF4u;
    {
        const bool branch_taken_0x16dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBF4u;
        // 0x16dbf8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbf4) {
            ctx->pc = 0x16DC04u;
            goto label_16dc04;
        }
    }
    ctx->pc = 0x16DBFCu;
label_16dbfc:
    // 0x16dbfc: 0x0  nop
    ctx->pc = 0x16dbfcu;
    // NOP
label_16dc00:
    // 0x16dc00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16dc00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dc04:
    // 0x16dc04: 0xae0202c0  sw          $v0, 0x2C0($s0)
    ctx->pc = 0x16dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 2));
label_16dc08:
    // 0x16dc08: 0xc06a26e  jal         func_1A89B8
label_16dc0c:
    if (ctx->pc == 0x16DC0Cu) {
        ctx->pc = 0x16DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC08u;
        // 0x16dc0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC10u;
        goto label_16dc10;
    }
    ctx->pc = 0x16DC08u;
    SET_GPR_U32(ctx, 31, 0x16DC10u);
    ctx->pc = 0x16DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC08u;
    // 0x16dc0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DC08u, 0x16DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC10u;
label_16dc10:
    // 0x16dc10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16dc14:
    if (ctx->pc == 0x16DC14u) {
        ctx->pc = 0x16DC18u;
        goto label_16dc18;
    }
    ctx->pc = 0x16DC10u;
    {
        const bool branch_taken_0x16dc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc10) {
            ctx->pc = 0x16DC20u;
            goto label_16dc20;
        }
    }
    ctx->pc = 0x16DC18u;
label_16dc18:
    // 0x16dc18: 0x10000010  b           . + 4 + (0x10 << 2)
label_16dc1c:
    if (ctx->pc == 0x16DC1Cu) {
        ctx->pc = 0x16DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC18u;
        // 0x16dc1c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC20u;
        goto label_16dc20;
    }
    ctx->pc = 0x16DC18u;
    {
        const bool branch_taken_0x16dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC18u;
        // 0x16dc1c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc18) {
            ctx->pc = 0x16DC5Cu;
            goto label_16dc5c;
        }
    }
    ctx->pc = 0x16DC20u;
label_16dc20:
    // 0x16dc20: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16dc24:
    if (ctx->pc == 0x16DC24u) {
        ctx->pc = 0x16DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC20u;
        // 0x16dc24: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC28u;
        goto label_16dc28;
    }
    ctx->pc = 0x16DC20u;
    {
        const bool branch_taken_0x16dc20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16dc20) {
            ctx->pc = 0x16DC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DC20u;
            // 0x16dc24: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DC38u;
            goto label_16dc38;
        }
    }
    ctx->pc = 0x16DC28u;
label_16dc28:
    // 0x16dc28: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16dc2c:
    // 0x16dc2c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16dc30:
    // 0x16dc30: 0x1000000a  b           . + 4 + (0xA << 2)
label_16dc34:
    if (ctx->pc == 0x16DC34u) {
        ctx->pc = 0x16DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC30u;
        // 0x16dc34: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC38u;
        goto label_16dc38;
    }
    ctx->pc = 0x16DC30u;
    {
        const bool branch_taken_0x16dc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC30u;
        // 0x16dc34: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc30) {
            ctx->pc = 0x16DC5Cu;
            goto label_16dc5c;
        }
    }
    ctx->pc = 0x16DC38u;
label_16dc38:
    // 0x16dc38: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_16dc3c:
    // 0x16dc3c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16dc40:
    // 0x16dc40: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16dc44:
    if (ctx->pc == 0x16DC44u) {
        ctx->pc = 0x16DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC40u;
        // 0x16dc44: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC48u;
        goto label_16dc48;
    }
    ctx->pc = 0x16DC40u;
    {
        const bool branch_taken_0x16dc40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC40u;
        // 0x16dc44: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc40) {
            ctx->pc = 0x16DC58u;
            goto label_16dc58;
        }
    }
    ctx->pc = 0x16DC48u;
label_16dc48:
    // 0x16dc48: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16dc4c:
    // 0x16dc4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_16dc50:
    if (ctx->pc == 0x16DC50u) {
        ctx->pc = 0x16DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC4Cu;
        // 0x16dc50: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC54u;
        goto label_16dc54;
    }
    ctx->pc = 0x16DC4Cu;
    {
        const bool branch_taken_0x16dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC4Cu;
        // 0x16dc50: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc4c) {
            ctx->pc = 0x16DC5Cu;
            goto label_16dc5c;
        }
    }
    ctx->pc = 0x16DC54u;
label_16dc54:
    // 0x16dc54: 0x0  nop
    ctx->pc = 0x16dc54u;
    // NOP
label_16dc58:
    // 0x16dc58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16dc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dc5c:
    // 0x16dc5c: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x16dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
label_16dc60:
    // 0x16dc60: 0xc05b58c  jal         func_16D630
label_16dc64:
    if (ctx->pc == 0x16DC64u) {
        ctx->pc = 0x16DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC60u;
        // 0x16dc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC68u;
        goto label_16dc68;
    }
    ctx->pc = 0x16DC60u;
    SET_GPR_U32(ctx, 31, 0x16DC68u);
    ctx->pc = 0x16DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC60u;
    // 0x16dc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D630u, 0x16DC60u, 0x16DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC68u;
label_16dc68:
    // 0x16dc68: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_16dc6c:
    // 0x16dc6c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16dc70:
    // 0x16dc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16dc74:
    // 0x16dc74: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16dc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_16dc78:
    // 0x16dc78: 0xc06164c  jal         func_185930
label_16dc7c:
    if (ctx->pc == 0x16DC7Cu) {
        ctx->pc = 0x16DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC78u;
        // 0x16dc7c: 0x2451ed50  addiu       $s1, $v0, -0x12B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC80u;
        goto label_16dc80;
    }
    ctx->pc = 0x16DC78u;
    SET_GPR_U32(ctx, 31, 0x16DC80u);
    ctx->pc = 0x16DC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC78u;
    // 0x16dc7c: 0x2451ed50  addiu       $s1, $v0, -0x12B0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16DC78u, 0x16DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC80u;
label_16dc80:
    // 0x16dc80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16dc84:
    // 0x16dc84: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_16dc88:
    // 0x16dc88: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_16dc8c:
    if (ctx->pc == 0x16DC8Cu) {
        ctx->pc = 0x16DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC88u;
        // 0x16dc8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC90u;
        goto label_16dc90;
    }
    ctx->pc = 0x16DC88u;
    {
        const bool branch_taken_0x16dc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc88) {
            ctx->pc = 0x16DC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DC88u;
            // 0x16dc8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DCBCu;
            goto label_16dcbc;
        }
    }
    ctx->pc = 0x16DC90u;
label_16dc90:
    // 0x16dc90: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x16dc90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_16dc94:
    // 0x16dc94: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x16dc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_16dc98:
    // 0x16dc98: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x16dc98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_16dc9c:
    // 0x16dc9c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16dc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_16dca0:
    // 0x16dca0: 0xac910018  sw          $s1, 0x18($a0)
    ctx->pc = 0x16dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 17));
label_16dca4:
    // 0x16dca4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x16dca4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_16dca8:
    // 0x16dca8: 0xac90001c  sw          $s0, 0x1C($a0)
    ctx->pc = 0x16dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 16));
label_16dcac:
    // 0x16dcac: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x16dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_16dcb0:
    // 0x16dcb0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x16dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_16dcb4:
    // 0x16dcb4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x16dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_16dcb8:
    // 0x16dcb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16dcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16dcbc:
    // 0x16dcbc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16dcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16dcc0:
    // 0x16dcc0: 0xc040ce8  jal         func_1033A0
label_16dcc4:
    if (ctx->pc == 0x16DCC4u) {
        ctx->pc = 0x16DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCC0u;
        // 0x16dcc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DCC8u;
        goto label_16dcc8;
    }
    ctx->pc = 0x16DCC0u;
    SET_GPR_U32(ctx, 31, 0x16DCC8u);
    ctx->pc = 0x16DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCC0u;
    // 0x16dcc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x16DCC0u, 0x16DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCC8u;
label_16dcc8:
    // 0x16dcc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16dcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16dccc:
    // 0x16dccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16dcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16dcd0:
    // 0x16dcd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16dcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16dcd4:
    // 0x16dcd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16dcd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16dcd8:
    // 0x16dcd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16dcd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16dcdc:
    // 0x16dcdc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16dcdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16dce0:
    // 0x16dce0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16dce0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16dce4:
    // 0x16dce4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16dce4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16dce8:
    // 0x16dce8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16dce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16dcec:
    // 0x16dcec: 0x3e00008  jr          $ra
label_16dcf0:
    if (ctx->pc == 0x16DCF0u) {
        ctx->pc = 0x16DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCECu;
        // 0x16dcf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DCF4u;
        goto label_fallthrough_0x16dcec;
    }
    ctx->pc = 0x16DCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCECu;
        // 0x16dcf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16dcec:
    ctx->pc = 0x16DCF4u;
}
