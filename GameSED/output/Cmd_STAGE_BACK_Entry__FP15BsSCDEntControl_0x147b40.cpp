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

// Function: Cmd_STAGE_BACK_Entry__FP15BsSCDEntControl
// Address: 0x147b40 - 0x147e64
void Cmd_STAGE_BACK_Entry__FP15BsSCDEntControl_0x147b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_BACK_Entry__FP15BsSCDEntControl_0x147b40");
#endif

    switch (ctx->pc) {
        case 0x147b40u: goto label_147b40;
        case 0x147b44u: goto label_147b44;
        case 0x147b48u: goto label_147b48;
        case 0x147b4cu: goto label_147b4c;
        case 0x147b50u: goto label_147b50;
        case 0x147b54u: goto label_147b54;
        case 0x147b58u: goto label_147b58;
        case 0x147b5cu: goto label_147b5c;
        case 0x147b60u: goto label_147b60;
        case 0x147b64u: goto label_147b64;
        case 0x147b68u: goto label_147b68;
        case 0x147b6cu: goto label_147b6c;
        case 0x147b70u: goto label_147b70;
        case 0x147b74u: goto label_147b74;
        case 0x147b78u: goto label_147b78;
        case 0x147b7cu: goto label_147b7c;
        case 0x147b80u: goto label_147b80;
        case 0x147b84u: goto label_147b84;
        case 0x147b88u: goto label_147b88;
        case 0x147b8cu: goto label_147b8c;
        case 0x147b90u: goto label_147b90;
        case 0x147b94u: goto label_147b94;
        case 0x147b98u: goto label_147b98;
        case 0x147b9cu: goto label_147b9c;
        case 0x147ba0u: goto label_147ba0;
        case 0x147ba4u: goto label_147ba4;
        case 0x147ba8u: goto label_147ba8;
        case 0x147bacu: goto label_147bac;
        case 0x147bb0u: goto label_147bb0;
        case 0x147bb4u: goto label_147bb4;
        case 0x147bb8u: goto label_147bb8;
        case 0x147bbcu: goto label_147bbc;
        case 0x147bc0u: goto label_147bc0;
        case 0x147bc4u: goto label_147bc4;
        case 0x147bc8u: goto label_147bc8;
        case 0x147bccu: goto label_147bcc;
        case 0x147bd0u: goto label_147bd0;
        case 0x147bd4u: goto label_147bd4;
        case 0x147bd8u: goto label_147bd8;
        case 0x147bdcu: goto label_147bdc;
        case 0x147be0u: goto label_147be0;
        case 0x147be4u: goto label_147be4;
        case 0x147be8u: goto label_147be8;
        case 0x147becu: goto label_147bec;
        case 0x147bf0u: goto label_147bf0;
        case 0x147bf4u: goto label_147bf4;
        case 0x147bf8u: goto label_147bf8;
        case 0x147bfcu: goto label_147bfc;
        case 0x147c00u: goto label_147c00;
        case 0x147c04u: goto label_147c04;
        case 0x147c08u: goto label_147c08;
        case 0x147c0cu: goto label_147c0c;
        case 0x147c10u: goto label_147c10;
        case 0x147c14u: goto label_147c14;
        case 0x147c18u: goto label_147c18;
        case 0x147c1cu: goto label_147c1c;
        case 0x147c20u: goto label_147c20;
        case 0x147c24u: goto label_147c24;
        case 0x147c28u: goto label_147c28;
        case 0x147c2cu: goto label_147c2c;
        case 0x147c30u: goto label_147c30;
        case 0x147c34u: goto label_147c34;
        case 0x147c38u: goto label_147c38;
        case 0x147c3cu: goto label_147c3c;
        case 0x147c40u: goto label_147c40;
        case 0x147c44u: goto label_147c44;
        case 0x147c48u: goto label_147c48;
        case 0x147c4cu: goto label_147c4c;
        case 0x147c50u: goto label_147c50;
        case 0x147c54u: goto label_147c54;
        case 0x147c58u: goto label_147c58;
        case 0x147c5cu: goto label_147c5c;
        case 0x147c60u: goto label_147c60;
        case 0x147c64u: goto label_147c64;
        case 0x147c68u: goto label_147c68;
        case 0x147c6cu: goto label_147c6c;
        case 0x147c70u: goto label_147c70;
        case 0x147c74u: goto label_147c74;
        case 0x147c78u: goto label_147c78;
        case 0x147c7cu: goto label_147c7c;
        case 0x147c80u: goto label_147c80;
        case 0x147c84u: goto label_147c84;
        case 0x147c88u: goto label_147c88;
        case 0x147c8cu: goto label_147c8c;
        case 0x147c90u: goto label_147c90;
        case 0x147c94u: goto label_147c94;
        case 0x147c98u: goto label_147c98;
        case 0x147c9cu: goto label_147c9c;
        case 0x147ca0u: goto label_147ca0;
        case 0x147ca4u: goto label_147ca4;
        case 0x147ca8u: goto label_147ca8;
        case 0x147cacu: goto label_147cac;
        case 0x147cb0u: goto label_147cb0;
        case 0x147cb4u: goto label_147cb4;
        case 0x147cb8u: goto label_147cb8;
        case 0x147cbcu: goto label_147cbc;
        case 0x147cc0u: goto label_147cc0;
        case 0x147cc4u: goto label_147cc4;
        case 0x147cc8u: goto label_147cc8;
        case 0x147cccu: goto label_147ccc;
        case 0x147cd0u: goto label_147cd0;
        case 0x147cd4u: goto label_147cd4;
        case 0x147cd8u: goto label_147cd8;
        case 0x147cdcu: goto label_147cdc;
        case 0x147ce0u: goto label_147ce0;
        case 0x147ce4u: goto label_147ce4;
        case 0x147ce8u: goto label_147ce8;
        case 0x147cecu: goto label_147cec;
        case 0x147cf0u: goto label_147cf0;
        case 0x147cf4u: goto label_147cf4;
        case 0x147cf8u: goto label_147cf8;
        case 0x147cfcu: goto label_147cfc;
        case 0x147d00u: goto label_147d00;
        case 0x147d04u: goto label_147d04;
        case 0x147d08u: goto label_147d08;
        case 0x147d0cu: goto label_147d0c;
        case 0x147d10u: goto label_147d10;
        case 0x147d14u: goto label_147d14;
        case 0x147d18u: goto label_147d18;
        case 0x147d1cu: goto label_147d1c;
        case 0x147d20u: goto label_147d20;
        case 0x147d24u: goto label_147d24;
        case 0x147d28u: goto label_147d28;
        case 0x147d2cu: goto label_147d2c;
        case 0x147d30u: goto label_147d30;
        case 0x147d34u: goto label_147d34;
        case 0x147d38u: goto label_147d38;
        case 0x147d3cu: goto label_147d3c;
        case 0x147d40u: goto label_147d40;
        case 0x147d44u: goto label_147d44;
        case 0x147d48u: goto label_147d48;
        case 0x147d4cu: goto label_147d4c;
        case 0x147d50u: goto label_147d50;
        case 0x147d54u: goto label_147d54;
        case 0x147d58u: goto label_147d58;
        case 0x147d5cu: goto label_147d5c;
        case 0x147d60u: goto label_147d60;
        case 0x147d64u: goto label_147d64;
        case 0x147d68u: goto label_147d68;
        case 0x147d6cu: goto label_147d6c;
        case 0x147d70u: goto label_147d70;
        case 0x147d74u: goto label_147d74;
        case 0x147d78u: goto label_147d78;
        case 0x147d7cu: goto label_147d7c;
        case 0x147d80u: goto label_147d80;
        case 0x147d84u: goto label_147d84;
        case 0x147d88u: goto label_147d88;
        case 0x147d8cu: goto label_147d8c;
        case 0x147d90u: goto label_147d90;
        case 0x147d94u: goto label_147d94;
        case 0x147d98u: goto label_147d98;
        case 0x147d9cu: goto label_147d9c;
        case 0x147da0u: goto label_147da0;
        case 0x147da4u: goto label_147da4;
        case 0x147da8u: goto label_147da8;
        case 0x147dacu: goto label_147dac;
        case 0x147db0u: goto label_147db0;
        case 0x147db4u: goto label_147db4;
        case 0x147db8u: goto label_147db8;
        case 0x147dbcu: goto label_147dbc;
        case 0x147dc0u: goto label_147dc0;
        case 0x147dc4u: goto label_147dc4;
        case 0x147dc8u: goto label_147dc8;
        case 0x147dccu: goto label_147dcc;
        case 0x147dd0u: goto label_147dd0;
        case 0x147dd4u: goto label_147dd4;
        case 0x147dd8u: goto label_147dd8;
        case 0x147ddcu: goto label_147ddc;
        case 0x147de0u: goto label_147de0;
        case 0x147de4u: goto label_147de4;
        case 0x147de8u: goto label_147de8;
        case 0x147decu: goto label_147dec;
        case 0x147df0u: goto label_147df0;
        case 0x147df4u: goto label_147df4;
        case 0x147df8u: goto label_147df8;
        case 0x147dfcu: goto label_147dfc;
        case 0x147e00u: goto label_147e00;
        case 0x147e04u: goto label_147e04;
        case 0x147e08u: goto label_147e08;
        case 0x147e0cu: goto label_147e0c;
        case 0x147e10u: goto label_147e10;
        case 0x147e14u: goto label_147e14;
        case 0x147e18u: goto label_147e18;
        case 0x147e1cu: goto label_147e1c;
        case 0x147e20u: goto label_147e20;
        case 0x147e24u: goto label_147e24;
        case 0x147e28u: goto label_147e28;
        case 0x147e2cu: goto label_147e2c;
        case 0x147e30u: goto label_147e30;
        case 0x147e34u: goto label_147e34;
        case 0x147e38u: goto label_147e38;
        case 0x147e3cu: goto label_147e3c;
        case 0x147e40u: goto label_147e40;
        case 0x147e44u: goto label_147e44;
        case 0x147e48u: goto label_147e48;
        case 0x147e4cu: goto label_147e4c;
        case 0x147e50u: goto label_147e50;
        case 0x147e54u: goto label_147e54;
        case 0x147e58u: goto label_147e58;
        case 0x147e5cu: goto label_147e5c;
        case 0x147e60u: goto label_147e60;
        default: break;
    }

    ctx->pc = 0x147b40u;

label_147b40:
    // 0x147b40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x147b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_147b44:
    // 0x147b44: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x147b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_147b48:
    // 0x147b48: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x147b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_147b4c:
    // 0x147b4c: 0x247126c0  addiu       $s1, $v1, 0x26C0
    ctx->pc = 0x147b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
label_147b50:
    // 0x147b50: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x147b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_147b54:
    // 0x147b54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x147b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147b58:
    // 0x147b58: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x147b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_147b5c:
    // 0x147b5c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x147b5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_147b60:
    // 0x147b60: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x147b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_147b64:
    // 0x147b64: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x147b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_147b68:
    // 0x147b68: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x147b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_147b6c:
    // 0x147b6c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x147b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_147b70:
    // 0x147b70: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x147b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_147b74:
    // 0x147b74: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x147b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_147b78:
    // 0x147b78: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x147b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_147b7c:
    // 0x147b7c: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x147b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_147b80:
    // 0x147b80: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x147b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_147b84:
    // 0x147b84: 0x16060010  bne         $s0, $a2, . + 4 + (0x10 << 2)
label_147b88:
    if (ctx->pc == 0x147B88u) {
        ctx->pc = 0x147B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B84u;
        // 0x147b88: 0x8c560018  lw          $s6, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147B8Cu;
        goto label_147b8c;
    }
    ctx->pc = 0x147B84u;
    {
        const bool branch_taken_0x147b84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x147B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B84u;
        // 0x147b88: 0x8c560018  lw          $s6, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b84) {
            ctx->pc = 0x147BC8u;
            goto label_147bc8;
        }
    }
    ctx->pc = 0x147B8Cu;
label_147b8c:
    // 0x147b8c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x147b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_147b90:
    // 0x147b90: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x147b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_147b94:
    // 0x147b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_147b98:
    // 0x147b98: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x147b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_147b9c:
    // 0x147b9c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x147b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_147ba0:
    // 0x147ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_147ba4:
    // 0x147ba4: 0xc0416ee  jal         func_105BB8
label_147ba8:
    if (ctx->pc == 0x147BA8u) {
        ctx->pc = 0x147BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BA4u;
        // 0x147ba8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147BACu;
        goto label_147bac;
    }
    ctx->pc = 0x147BA4u;
    SET_GPR_U32(ctx, 31, 0x147BACu);
    ctx->pc = 0x147BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BA4u;
    // 0x147ba8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x147BA4u, 0x147BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BACu;
label_147bac:
    // 0x147bac: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
label_147bb0:
    if (ctx->pc == 0x147BB0u) {
        ctx->pc = 0x147BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BACu;
        // 0x147bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147BB4u;
        goto label_147bb4;
    }
    ctx->pc = 0x147BACu;
    {
        const bool branch_taken_0x147bac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x147BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BACu;
        // 0x147bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bac) {
            ctx->pc = 0x147B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147b98;
        }
    }
    ctx->pc = 0x147BB4u;
label_147bb4:
    // 0x147bb4: 0xc051d60  jal         func_147580
label_147bb8:
    if (ctx->pc == 0x147BB8u) {
        ctx->pc = 0x147BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BB4u;
        // 0x147bb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147BBCu;
        goto label_147bbc;
    }
    ctx->pc = 0x147BB4u;
    SET_GPR_U32(ctx, 31, 0x147BBCu);
    ctx->pc = 0x147BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BB4u;
    // 0x147bb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147580u, 0x147BB4u, 0x147BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BBCu;
label_147bbc:
    // 0x147bbc: 0x1000008f  b           . + 4 + (0x8F << 2)
label_147bc0:
    if (ctx->pc == 0x147BC0u) {
        ctx->pc = 0x147BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BBCu;
        // 0x147bc0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147BC4u;
        goto label_147bc4;
    }
    ctx->pc = 0x147BBCu;
    {
        const bool branch_taken_0x147bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BBCu;
        // 0x147bc0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bbc) {
            ctx->pc = 0x147DFCu;
            goto label_147dfc;
        }
    }
    ctx->pc = 0x147BC4u;
label_147bc4:
    // 0x147bc4: 0x0  nop
    ctx->pc = 0x147bc4u;
    // NOP
label_147bc8:
    // 0x147bc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x147bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_147bcc:
    // 0x147bcc: 0x56020012  bnel        $s0, $v0, . + 4 + (0x12 << 2)
label_147bd0:
    if (ctx->pc == 0x147BD0u) {
        ctx->pc = 0x147BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BCCu;
        // 0x147bd0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147BD4u;
        goto label_147bd4;
    }
    ctx->pc = 0x147BCCu;
    {
        const bool branch_taken_0x147bcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x147bcc) {
            ctx->pc = 0x147BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147BCCu;
            // 0x147bd0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147C18u;
            goto label_147c18;
        }
    }
    ctx->pc = 0x147BD4u;
label_147bd4:
    // 0x147bd4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x147bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_147bd8:
    // 0x147bd8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x147bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_147bdc:
    // 0x147bdc: 0xc0416ee  jal         func_105BB8
label_147be0:
    if (ctx->pc == 0x147BE0u) {
        ctx->pc = 0x147BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BDCu;
        // 0x147be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147BE4u;
        goto label_147be4;
    }
    ctx->pc = 0x147BDCu;
    SET_GPR_U32(ctx, 31, 0x147BE4u);
    ctx->pc = 0x147BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BDCu;
    // 0x147be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x147BDCu, 0x147BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BE4u;
label_147be4:
    // 0x147be4: 0xc06256e  jal         func_1895B8
label_147be8:
    if (ctx->pc == 0x147BE8u) {
        ctx->pc = 0x147BECu;
        goto label_147bec;
    }
    ctx->pc = 0x147BE4u;
    SET_GPR_U32(ctx, 31, 0x147BECu);
    ctx->pc = 0x1895B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1895B8u, 0x147BE4u, 0x147BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BECu;
label_147bec:
    // 0x147bec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x147becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_147bf0:
    // 0x147bf0: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x147bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
label_147bf4:
    // 0x147bf4: 0x246376f8  addiu       $v1, $v1, 0x76F8
    ctx->pc = 0x147bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30456));
label_147bf8:
    // 0x147bf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147bfc:
    // 0x147bfc: 0xae250370  sw          $a1, 0x370($s1)
    ctx->pc = 0x147bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 5));
label_147c00:
    // 0x147c00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x147c00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_147c04:
    // 0x147c04: 0xae240250  sw          $a0, 0x250($s1)
    ctx->pc = 0x147c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 4));
label_147c08:
    // 0x147c08: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x147c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_147c0c:
    // 0x147c0c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_147c10:
    if (ctx->pc == 0x147C10u) {
        ctx->pc = 0x147C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C0Cu;
        // 0x147c10: 0xac51015c  sw          $s1, 0x15C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147C14u;
        goto label_147c14;
    }
    ctx->pc = 0x147C0Cu;
    {
        const bool branch_taken_0x147c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C0Cu;
        // 0x147c10: 0xac51015c  sw          $s1, 0x15C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c0c) {
            ctx->pc = 0x147DFCu;
            goto label_147dfc;
        }
    }
    ctx->pc = 0x147C14u;
label_147c14:
    // 0x147c14: 0x0  nop
    ctx->pc = 0x147c14u;
    // NOP
label_147c18:
    // 0x147c18: 0x56020027  bnel        $s0, $v0, . + 4 + (0x27 << 2)
label_147c1c:
    if (ctx->pc == 0x147C1Cu) {
        ctx->pc = 0x147C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C18u;
        // 0x147c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147C20u;
        goto label_147c20;
    }
    ctx->pc = 0x147C18u;
    {
        const bool branch_taken_0x147c18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x147c18) {
            ctx->pc = 0x147C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147C18u;
            // 0x147c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147CB8u;
            goto label_147cb8;
        }
    }
    ctx->pc = 0x147C20u;
label_147c20:
    // 0x147c20: 0xc06a26e  jal         func_1A89B8
label_147c24:
    if (ctx->pc == 0x147C24u) {
        ctx->pc = 0x147C28u;
        goto label_147c28;
    }
    ctx->pc = 0x147C20u;
    SET_GPR_U32(ctx, 31, 0x147C28u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147C20u, 0x147C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C28u;
label_147c28:
    // 0x147c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_147c2c:
    // 0x147c2c: 0xc06a250  jal         func_1A8940
label_147c30:
    if (ctx->pc == 0x147C30u) {
        ctx->pc = 0x147C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C2Cu;
        // 0x147c30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147C34u;
        goto label_147c34;
    }
    ctx->pc = 0x147C2Cu;
    SET_GPR_U32(ctx, 31, 0x147C34u);
    ctx->pc = 0x147C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C2Cu;
    // 0x147c30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x147C2Cu, 0x147C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C34u;
label_147c34:
    // 0x147c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_147c38:
    // 0x147c38: 0xc06a250  jal         func_1A8940
label_147c3c:
    if (ctx->pc == 0x147C3Cu) {
        ctx->pc = 0x147C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C38u;
        // 0x147c3c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147C40u;
        goto label_147c40;
    }
    ctx->pc = 0x147C38u;
    SET_GPR_U32(ctx, 31, 0x147C40u);
    ctx->pc = 0x147C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C38u;
    // 0x147c3c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x147C38u, 0x147C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C40u;
label_147c40:
    // 0x147c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_147c44:
    // 0x147c44: 0xc06a250  jal         func_1A8940
label_147c48:
    if (ctx->pc == 0x147C48u) {
        ctx->pc = 0x147C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C44u;
        // 0x147c48: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147C4Cu;
        goto label_147c4c;
    }
    ctx->pc = 0x147C44u;
    SET_GPR_U32(ctx, 31, 0x147C4Cu);
    ctx->pc = 0x147C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C44u;
    // 0x147c48: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x147C44u, 0x147C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C4Cu;
label_147c4c:
    // 0x147c4c: 0x6000010  bltz        $s0, . + 4 + (0x10 << 2)
label_147c50:
    if (ctx->pc == 0x147C50u) {
        ctx->pc = 0x147C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C4Cu;
        // 0x147c50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147C54u;
        goto label_147c54;
    }
    ctx->pc = 0x147C4Cu;
    {
        const bool branch_taken_0x147c4c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x147C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C4Cu;
        // 0x147c50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c4c) {
            ctx->pc = 0x147C90u;
            goto label_147c90;
        }
    }
    ctx->pc = 0x147C54u;
label_147c54:
    // 0x147c54: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x147c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_147c58:
    // 0x147c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147c5c:
    // 0x147c5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_147c60:
    if (ctx->pc == 0x147C60u) {
        ctx->pc = 0x147C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C5Cu;
        // 0x147c60: 0x26240370  addiu       $a0, $s1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147C64u;
        goto label_147c64;
    }
    ctx->pc = 0x147C5Cu;
    {
        const bool branch_taken_0x147c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x147C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C5Cu;
        // 0x147c60: 0x26240370  addiu       $a0, $s1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c5c) {
            ctx->pc = 0x147C70u;
            goto label_147c70;
        }
    }
    ctx->pc = 0x147C64u;
label_147c64:
    // 0x147c64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x147c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_147c68:
    // 0x147c68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x147c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_147c6c:
    // 0x147c6c: 0x24440378  addiu       $a0, $v0, 0x378
    ctx->pc = 0x147c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 888));
label_147c70:
    // 0x147c70: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x147c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_147c74:
    // 0x147c74: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x147c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_147c78:
    // 0x147c78: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x147c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_147c7c:
    // 0x147c7c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x147c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_147c80:
    // 0x147c80: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x147c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_147c84:
    // 0x147c84: 0x1000005d  b           . + 4 + (0x5D << 2)
label_147c88:
    if (ctx->pc == 0x147C88u) {
        ctx->pc = 0x147C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C84u;
        // 0x147c88: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147C8Cu;
        goto label_147c8c;
    }
    ctx->pc = 0x147C84u;
    {
        const bool branch_taken_0x147c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C84u;
        // 0x147c88: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c84) {
            ctx->pc = 0x147DFCu;
            goto label_147dfc;
        }
    }
    ctx->pc = 0x147C8Cu;
label_147c8c:
    // 0x147c8c: 0x0  nop
    ctx->pc = 0x147c8cu;
    // NOP
label_147c90:
    // 0x147c90: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x147c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_147c94:
    // 0x147c94: 0xc621025c  lwc1        $f1, 0x25C($s1)
    ctx->pc = 0x147c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147c98:
    // 0x147c98: 0xc6200264  lwc1        $f0, 0x264($s1)
    ctx->pc = 0x147c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147c9c:
    // 0x147c9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x147c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_147ca0:
    // 0x147ca0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x147ca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_147ca4:
    // 0x147ca4: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x147ca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_147ca8:
    // 0x147ca8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x147ca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_147cac:
    // 0x147cac: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x147cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147cb0:
    // 0x147cb0: 0x10000052  b           . + 4 + (0x52 << 2)
label_147cb4:
    if (ctx->pc == 0x147CB4u) {
        ctx->pc = 0x147CB8u;
        goto label_147cb8;
    }
    ctx->pc = 0x147CB0u;
    {
        const bool branch_taken_0x147cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147cb0) {
            ctx->pc = 0x147DFCu;
            goto label_147dfc;
        }
    }
    ctx->pc = 0x147CB8u;
label_147cb8:
    // 0x147cb8: 0x56020041  bnel        $s0, $v0, . + 4 + (0x41 << 2)
label_147cbc:
    if (ctx->pc == 0x147CBCu) {
        ctx->pc = 0x147CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CB8u;
        // 0x147cbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147CC0u;
        goto label_147cc0;
    }
    ctx->pc = 0x147CB8u;
    {
        const bool branch_taken_0x147cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x147cb8) {
            ctx->pc = 0x147CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147CB8u;
            // 0x147cbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147DC0u;
            goto label_147dc0;
        }
    }
    ctx->pc = 0x147CC0u;
label_147cc0:
    // 0x147cc0: 0xc06a26e  jal         func_1A89B8
label_147cc4:
    if (ctx->pc == 0x147CC4u) {
        ctx->pc = 0x147CC8u;
        goto label_147cc8;
    }
    ctx->pc = 0x147CC0u;
    SET_GPR_U32(ctx, 31, 0x147CC8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147CC0u, 0x147CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CC8u;
label_147cc8:
    // 0x147cc8: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x147cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_147ccc:
    // 0x147ccc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x147cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_147cd0:
    // 0x147cd0: 0x26240370  addiu       $a0, $s1, 0x370
    ctx->pc = 0x147cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
label_147cd4:
    // 0x147cd4: 0x121083  sra         $v0, $s2, 2
    ctx->pc = 0x147cd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 2));
label_147cd8:
    // 0x147cd8: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_147cdc:
    if (ctx->pc == 0x147CDCu) {
        ctx->pc = 0x147CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CD8u;
        // 0x147cdc: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x147CE0u;
        goto label_147ce0;
    }
    ctx->pc = 0x147CD8u;
    {
        const bool branch_taken_0x147cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x147CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CD8u;
        // 0x147cdc: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cd8) {
            ctx->pc = 0x147CECu;
            goto label_147cec;
        }
    }
    ctx->pc = 0x147CE0u;
label_147ce0:
    // 0x147ce0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x147ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_147ce4:
    // 0x147ce4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x147ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_147ce8:
    // 0x147ce8: 0x24440378  addiu       $a0, $v0, 0x378
    ctx->pc = 0x147ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 888));
label_147cec:
    // 0x147cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147cf0:
    // 0x147cf0: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x147cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_147cf4:
    // 0x147cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x147cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_147cf8:
    // 0x147cf8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x147cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_147cfc:
    // 0x147cfc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_147d00:
    if (ctx->pc == 0x147D00u) {
        ctx->pc = 0x147D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CFCu;
        // 0x147d00: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D04u;
        goto label_147d04;
    }
    ctx->pc = 0x147CFCu;
    {
        const bool branch_taken_0x147cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x147D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CFCu;
        // 0x147d00: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cfc) {
            ctx->pc = 0x147D2Cu;
            goto label_147d2c;
        }
    }
    ctx->pc = 0x147D04u;
label_147d04:
    // 0x147d04: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x147d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_147d08:
    // 0x147d08: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_147d0c:
    if (ctx->pc == 0x147D0Cu) {
        ctx->pc = 0x147D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D08u;
        // 0x147d0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D10u;
        goto label_147d10;
    }
    ctx->pc = 0x147D08u;
    {
        const bool branch_taken_0x147d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d08) {
            ctx->pc = 0x147D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D08u;
            // 0x147d0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D20u;
            goto label_147d20;
        }
    }
    ctx->pc = 0x147D10u;
label_147d10:
    // 0x147d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147d14:
    // 0x147d14: 0x10000003  b           . + 4 + (0x3 << 2)
label_147d18:
    if (ctx->pc == 0x147D18u) {
        ctx->pc = 0x147D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D14u;
        // 0x147d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D1Cu;
        goto label_147d1c;
    }
    ctx->pc = 0x147D14u;
    {
        const bool branch_taken_0x147d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D14u;
        // 0x147d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d14) {
            ctx->pc = 0x147D24u;
            goto label_147d24;
        }
    }
    ctx->pc = 0x147D1Cu;
label_147d1c:
    // 0x147d1c: 0x0  nop
    ctx->pc = 0x147d1cu;
    // NOP
label_147d20:
    // 0x147d20: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x147d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_147d24:
    // 0x147d24: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_147d28:
    if (ctx->pc == 0x147D28u) {
        ctx->pc = 0x147D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D24u;
        // 0x147d28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D2Cu;
        goto label_147d2c;
    }
    ctx->pc = 0x147D24u;
    {
        const bool branch_taken_0x147d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x147d24) {
            ctx->pc = 0x147D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D24u;
            // 0x147d28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D2Cu;
            goto label_147d2c;
        }
    }
    ctx->pc = 0x147D2Cu;
label_147d2c:
    // 0x147d2c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_147d30:
    if (ctx->pc == 0x147D30u) {
        ctx->pc = 0x147D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D2Cu;
        // 0x147d30: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D34u;
        goto label_147d34;
    }
    ctx->pc = 0x147D2Cu;
    {
        const bool branch_taken_0x147d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D2Cu;
        // 0x147d30: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d2c) {
            ctx->pc = 0x147D4Cu;
            goto label_147d4c;
        }
    }
    ctx->pc = 0x147D34u;
label_147d34:
    // 0x147d34: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x147d34u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
label_147d38:
    // 0x147d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147d3c:
    // 0x147d3c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x147d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_147d40:
    // 0x147d40: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x147d40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_147d44:
    // 0x147d44: 0xc067c5c  jal         func_19F170
label_147d48:
    if (ctx->pc == 0x147D48u) {
        ctx->pc = 0x147D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D44u;
        // 0x147d48: 0x46300a  movz        $a2, $v0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D4Cu;
        goto label_147d4c;
    }
    ctx->pc = 0x147D44u;
    SET_GPR_U32(ctx, 31, 0x147D4Cu);
    ctx->pc = 0x147D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D44u;
    // 0x147d48: 0x46300a  movz        $a2, $v0, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F170u, 0x147D44u, 0x147D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D4Cu;
label_147d4c:
    // 0x147d4c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x147d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_147d50:
    // 0x147d50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x147d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_147d54:
    // 0x147d54: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_147d58:
    if (ctx->pc == 0x147D58u) {
        ctx->pc = 0x147D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D54u;
        // 0x147d58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D5Cu;
        goto label_147d5c;
    }
    ctx->pc = 0x147D54u;
    {
        const bool branch_taken_0x147d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x147D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D54u;
        // 0x147d58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d54) {
            ctx->pc = 0x147DFCu;
            goto label_147dfc;
        }
    }
    ctx->pc = 0x147D5Cu;
label_147d5c:
    // 0x147d5c: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x147d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_147d60:
    // 0x147d60: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x147d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_147d64:
    // 0x147d64: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_147d68:
    if (ctx->pc == 0x147D68u) {
        ctx->pc = 0x147D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D64u;
        // 0x147d68: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D6Cu;
        goto label_147d6c;
    }
    ctx->pc = 0x147D64u;
    {
        const bool branch_taken_0x147d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x147D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D64u;
        // 0x147d68: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d64) {
            ctx->pc = 0x147D94u;
            goto label_147d94;
        }
    }
    ctx->pc = 0x147D6Cu;
label_147d6c:
    // 0x147d6c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x147d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_147d70:
    // 0x147d70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_147d74:
    if (ctx->pc == 0x147D74u) {
        ctx->pc = 0x147D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D70u;
        // 0x147d74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D78u;
        goto label_147d78;
    }
    ctx->pc = 0x147D70u;
    {
        const bool branch_taken_0x147d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d70) {
            ctx->pc = 0x147D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D70u;
            // 0x147d74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D88u;
            goto label_147d88;
        }
    }
    ctx->pc = 0x147D78u;
label_147d78:
    // 0x147d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147d7c:
    // 0x147d7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_147d80:
    if (ctx->pc == 0x147D80u) {
        ctx->pc = 0x147D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D7Cu;
        // 0x147d80: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D84u;
        goto label_147d84;
    }
    ctx->pc = 0x147D7Cu;
    {
        const bool branch_taken_0x147d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D7Cu;
        // 0x147d80: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d7c) {
            ctx->pc = 0x147D8Cu;
            goto label_147d8c;
        }
    }
    ctx->pc = 0x147D84u;
label_147d84:
    // 0x147d84: 0x0  nop
    ctx->pc = 0x147d84u;
    // NOP
label_147d88:
    // 0x147d88: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x147d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_147d8c:
    // 0x147d8c: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
label_147d90:
    if (ctx->pc == 0x147D90u) {
        ctx->pc = 0x147D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D8Cu;
        // 0x147d90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D94u;
        goto label_147d94;
    }
    ctx->pc = 0x147D8Cu;
    {
        const bool branch_taken_0x147d8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x147d8c) {
            ctx->pc = 0x147D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D8Cu;
            // 0x147d90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D94u;
            goto label_147d94;
        }
    }
    ctx->pc = 0x147D94u;
label_147d94:
    // 0x147d94: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_147d98:
    if (ctx->pc == 0x147D98u) {
        ctx->pc = 0x147D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D94u;
        // 0x147d98: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x147D9Cu;
        goto label_147d9c;
    }
    ctx->pc = 0x147D94u;
    {
        const bool branch_taken_0x147d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D94u;
        // 0x147d98: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d94) {
            ctx->pc = 0x147DFCu;
            goto label_147dfc;
        }
    }
    ctx->pc = 0x147D9Cu;
label_147d9c:
    // 0x147d9c: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x147d9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
label_147da0:
    // 0x147da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147da4:
    // 0x147da4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x147da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_147da8:
    // 0x147da8: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x147da8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_147dac:
    // 0x147dac: 0xc067c5c  jal         func_19F170
label_147db0:
    if (ctx->pc == 0x147DB0u) {
        ctx->pc = 0x147DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DACu;
        // 0x147db0: 0x46300a  movz        $a2, $v0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147DB4u;
        goto label_147db4;
    }
    ctx->pc = 0x147DACu;
    SET_GPR_U32(ctx, 31, 0x147DB4u);
    ctx->pc = 0x147DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147DACu;
    // 0x147db0: 0x46300a  movz        $a2, $v0, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F170u, 0x147DACu, 0x147DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DB4u;
label_147db4:
    // 0x147db4: 0x10000011  b           . + 4 + (0x11 << 2)
label_147db8:
    if (ctx->pc == 0x147DB8u) {
        ctx->pc = 0x147DBCu;
        goto label_147dbc;
    }
    ctx->pc = 0x147DB4u;
    {
        const bool branch_taken_0x147db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147db4) {
            ctx->pc = 0x147DFCu;
            goto label_147dfc;
        }
    }
    ctx->pc = 0x147DBCu;
label_147dbc:
    // 0x147dbc: 0x0  nop
    ctx->pc = 0x147dbcu;
    // NOP
label_147dc0:
    // 0x147dc0: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_147dc4:
    if (ctx->pc == 0x147DC4u) {
        ctx->pc = 0x147DC8u;
        goto label_147dc8;
    }
    ctx->pc = 0x147DC0u;
    {
        const bool branch_taken_0x147dc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x147dc0) {
            ctx->pc = 0x147DFCu;
            goto label_147dfc;
        }
    }
    ctx->pc = 0x147DC8u;
label_147dc8:
    // 0x147dc8: 0xc06a26e  jal         func_1A89B8
label_147dcc:
    if (ctx->pc == 0x147DCCu) {
        ctx->pc = 0x147DD0u;
        goto label_147dd0;
    }
    ctx->pc = 0x147DC8u;
    SET_GPR_U32(ctx, 31, 0x147DD0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147DC8u, 0x147DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DD0u;
label_147dd0:
    // 0x147dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_147dd4:
    // 0x147dd4: 0xc06a26e  jal         func_1A89B8
label_147dd8:
    if (ctx->pc == 0x147DD8u) {
        ctx->pc = 0x147DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DD4u;
        // 0x147dd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147DDCu;
        goto label_147ddc;
    }
    ctx->pc = 0x147DD4u;
    SET_GPR_U32(ctx, 31, 0x147DDCu);
    ctx->pc = 0x147DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147DD4u;
    // 0x147dd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147DD4u, 0x147DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DDCu;
label_147ddc:
    // 0x147ddc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x147ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_147de0:
    // 0x147de0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x147de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_147de4:
    // 0x147de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_147de8:
    // 0x147de8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x147de8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_147dec:
    // 0x147dec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_147df0:
    // 0x147df0: 0xe6210264  swc1        $f1, 0x264($s1)
    ctx->pc = 0x147df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
label_147df4:
    // 0x147df4: 0xc051d3a  jal         func_1474E8
label_147df8:
    if (ctx->pc == 0x147DF8u) {
        ctx->pc = 0x147DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DF4u;
        // 0x147df8: 0xe620025c  swc1        $f0, 0x25C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 604), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x147DFCu;
        goto label_147dfc;
    }
    ctx->pc = 0x147DF4u;
    SET_GPR_U32(ctx, 31, 0x147DFCu);
    ctx->pc = 0x147DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147DF4u;
    // 0x147df8: 0xe620025c  swc1        $f0, 0x25C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 604), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1474E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1474E8u, 0x147DF4u, 0x147DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DFCu;
label_147dfc:
    // 0x147dfc: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_147e00:
    if (ctx->pc == 0x147E00u) {
        ctx->pc = 0x147E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DFCu;
        // 0x147e00: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147E04u;
        goto label_147e04;
    }
    ctx->pc = 0x147DFCu;
    {
        const bool branch_taken_0x147dfc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DFCu;
        // 0x147e00: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dfc) {
            ctx->pc = 0x147E40u;
            goto label_147e40;
        }
    }
    ctx->pc = 0x147E04u;
label_147e04:
    // 0x147e04: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x147e04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_147e08:
    // 0x147e08: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x147e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_147e0c:
    // 0x147e0c: 0x8cc60208  lw          $a2, 0x208($a2)
    ctx->pc = 0x147e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
label_147e10:
    // 0x147e10: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_147e14:
    if (ctx->pc == 0x147E14u) {
        ctx->pc = 0x147E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E10u;
        // 0x147e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147E18u;
        goto label_147e18;
    }
    ctx->pc = 0x147E10u;
    {
        const bool branch_taken_0x147e10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E10u;
        // 0x147e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e10) {
            ctx->pc = 0x147E30u;
            goto label_147e30;
        }
    }
    ctx->pc = 0x147E18u;
label_147e18:
    // 0x147e18: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x147e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_147e1c:
    // 0x147e1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x147e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_147e20:
    // 0x147e20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x147e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_147e24:
    // 0x147e24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x147e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_147e28:
    // 0x147e28: 0x60f809  jalr        $v1
label_147e2c:
    if (ctx->pc == 0x147E2Cu) {
        ctx->pc = 0x147E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E28u;
        // 0x147e2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147E30u;
        goto label_147e30;
    }
    ctx->pc = 0x147E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x147E30u);
        ctx->pc = 0x147E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E28u;
        // 0x147e2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147E28u, 0x147E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x147E30u;
label_147e30:
    // 0x147e30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x147e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_147e34:
    // 0x147e34: 0x360821  addu        $at, $at, $s6
    ctx->pc = 0x147e34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 22)));
label_147e38:
    // 0x147e38: 0xac350208  sw          $s5, 0x208($at)
    ctx->pc = 0x147e38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 520), GPR_U32(ctx, 21));
label_147e3c:
    // 0x147e3c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x147e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_147e40:
    // 0x147e40: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x147e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_147e44:
    // 0x147e44: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x147e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_147e48:
    // 0x147e48: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x147e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_147e4c:
    // 0x147e4c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x147e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_147e50:
    // 0x147e50: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x147e50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_147e54:
    // 0x147e54: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x147e54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_147e58:
    // 0x147e58: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x147e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_147e5c:
    // 0x147e5c: 0x3e00008  jr          $ra
label_147e60:
    if (ctx->pc == 0x147E60u) {
        ctx->pc = 0x147E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E5Cu;
        // 0x147e60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147E64u;
        goto label_fallthrough_0x147e5c;
    }
    ctx->pc = 0x147E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E5Cu;
        // 0x147e60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x147e5c:
    ctx->pc = 0x147E64u;
}
