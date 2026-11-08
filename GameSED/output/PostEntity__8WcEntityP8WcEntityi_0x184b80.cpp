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

// Function: PostEntity__8WcEntityP8WcEntityi
// Address: 0x184b80 - 0x184d0c
void PostEntity__8WcEntityP8WcEntityi_0x184b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PostEntity__8WcEntityP8WcEntityi_0x184b80");
#endif

    switch (ctx->pc) {
        case 0x184b80u: goto label_184b80;
        case 0x184b84u: goto label_184b84;
        case 0x184b88u: goto label_184b88;
        case 0x184b8cu: goto label_184b8c;
        case 0x184b90u: goto label_184b90;
        case 0x184b94u: goto label_184b94;
        case 0x184b98u: goto label_184b98;
        case 0x184b9cu: goto label_184b9c;
        case 0x184ba0u: goto label_184ba0;
        case 0x184ba4u: goto label_184ba4;
        case 0x184ba8u: goto label_184ba8;
        case 0x184bacu: goto label_184bac;
        case 0x184bb0u: goto label_184bb0;
        case 0x184bb4u: goto label_184bb4;
        case 0x184bb8u: goto label_184bb8;
        case 0x184bbcu: goto label_184bbc;
        case 0x184bc0u: goto label_184bc0;
        case 0x184bc4u: goto label_184bc4;
        case 0x184bc8u: goto label_184bc8;
        case 0x184bccu: goto label_184bcc;
        case 0x184bd0u: goto label_184bd0;
        case 0x184bd4u: goto label_184bd4;
        case 0x184bd8u: goto label_184bd8;
        case 0x184bdcu: goto label_184bdc;
        case 0x184be0u: goto label_184be0;
        case 0x184be4u: goto label_184be4;
        case 0x184be8u: goto label_184be8;
        case 0x184becu: goto label_184bec;
        case 0x184bf0u: goto label_184bf0;
        case 0x184bf4u: goto label_184bf4;
        case 0x184bf8u: goto label_184bf8;
        case 0x184bfcu: goto label_184bfc;
        case 0x184c00u: goto label_184c00;
        case 0x184c04u: goto label_184c04;
        case 0x184c08u: goto label_184c08;
        case 0x184c0cu: goto label_184c0c;
        case 0x184c10u: goto label_184c10;
        case 0x184c14u: goto label_184c14;
        case 0x184c18u: goto label_184c18;
        case 0x184c1cu: goto label_184c1c;
        case 0x184c20u: goto label_184c20;
        case 0x184c24u: goto label_184c24;
        case 0x184c28u: goto label_184c28;
        case 0x184c2cu: goto label_184c2c;
        case 0x184c30u: goto label_184c30;
        case 0x184c34u: goto label_184c34;
        case 0x184c38u: goto label_184c38;
        case 0x184c3cu: goto label_184c3c;
        case 0x184c40u: goto label_184c40;
        case 0x184c44u: goto label_184c44;
        case 0x184c48u: goto label_184c48;
        case 0x184c4cu: goto label_184c4c;
        case 0x184c50u: goto label_184c50;
        case 0x184c54u: goto label_184c54;
        case 0x184c58u: goto label_184c58;
        case 0x184c5cu: goto label_184c5c;
        case 0x184c60u: goto label_184c60;
        case 0x184c64u: goto label_184c64;
        case 0x184c68u: goto label_184c68;
        case 0x184c6cu: goto label_184c6c;
        case 0x184c70u: goto label_184c70;
        case 0x184c74u: goto label_184c74;
        case 0x184c78u: goto label_184c78;
        case 0x184c7cu: goto label_184c7c;
        case 0x184c80u: goto label_184c80;
        case 0x184c84u: goto label_184c84;
        case 0x184c88u: goto label_184c88;
        case 0x184c8cu: goto label_184c8c;
        case 0x184c90u: goto label_184c90;
        case 0x184c94u: goto label_184c94;
        case 0x184c98u: goto label_184c98;
        case 0x184c9cu: goto label_184c9c;
        case 0x184ca0u: goto label_184ca0;
        case 0x184ca4u: goto label_184ca4;
        case 0x184ca8u: goto label_184ca8;
        case 0x184cacu: goto label_184cac;
        case 0x184cb0u: goto label_184cb0;
        case 0x184cb4u: goto label_184cb4;
        case 0x184cb8u: goto label_184cb8;
        case 0x184cbcu: goto label_184cbc;
        case 0x184cc0u: goto label_184cc0;
        case 0x184cc4u: goto label_184cc4;
        case 0x184cc8u: goto label_184cc8;
        case 0x184cccu: goto label_184ccc;
        case 0x184cd0u: goto label_184cd0;
        case 0x184cd4u: goto label_184cd4;
        case 0x184cd8u: goto label_184cd8;
        case 0x184cdcu: goto label_184cdc;
        case 0x184ce0u: goto label_184ce0;
        case 0x184ce4u: goto label_184ce4;
        case 0x184ce8u: goto label_184ce8;
        case 0x184cecu: goto label_184cec;
        case 0x184cf0u: goto label_184cf0;
        case 0x184cf4u: goto label_184cf4;
        case 0x184cf8u: goto label_184cf8;
        case 0x184cfcu: goto label_184cfc;
        case 0x184d00u: goto label_184d00;
        case 0x184d04u: goto label_184d04;
        case 0x184d08u: goto label_184d08;
        default: break;
    }

    ctx->pc = 0x184b80u;

label_184b80:
    // 0x184b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_184b84:
    // 0x184b84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x184b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_184b88:
    // 0x184b88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x184b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184b8c:
    // 0x184b8c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x184b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_184b90:
    // 0x184b90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x184b90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184b94:
    // 0x184b94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x184b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_184b98:
    // 0x184b98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x184b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_184b9c:
    // 0x184b9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x184b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_184ba0:
    // 0x184ba0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
label_184ba4:
    if (ctx->pc == 0x184BA4u) {
        ctx->pc = 0x184BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BA0u;
        // 0x184ba4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BA8u;
        goto label_184ba8;
    }
    ctx->pc = 0x184BA0u;
    {
        const bool branch_taken_0x184ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BA0u;
        // 0x184ba4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ba0) {
            ctx->pc = 0x184BACu;
            goto label_184bac;
        }
    }
    ctx->pc = 0x184BA8u;
label_184ba8:
    // 0x184ba8: 0xae26012c  sw          $a2, 0x12C($s1)
    ctx->pc = 0x184ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 6));
label_184bac:
    // 0x184bac: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x184bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_184bb0:
    // 0x184bb0: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
label_184bb4:
    if (ctx->pc == 0x184BB4u) {
        ctx->pc = 0x184BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BB0u;
        // 0x184bb4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BB8u;
        goto label_184bb8;
    }
    ctx->pc = 0x184BB0u;
    {
        const bool branch_taken_0x184bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BB0u;
        // 0x184bb4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bb0) {
            ctx->pc = 0x184CF0u;
            goto label_184cf0;
        }
    }
    ctx->pc = 0x184BB8u;
label_184bb8:
    // 0x184bb8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x184bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_184bbc:
    // 0x184bbc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x184bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_184bc0:
    // 0x184bc0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_184bc4:
    if (ctx->pc == 0x184BC4u) {
        ctx->pc = 0x184BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BC0u;
        // 0x184bc4: 0xae340014  sw          $s4, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BC8u;
        goto label_184bc8;
    }
    ctx->pc = 0x184BC0u;
    {
        const bool branch_taken_0x184bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BC0u;
        // 0x184bc4: 0xae340014  sw          $s4, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bc0) {
            ctx->pc = 0x184C18u;
            goto label_184c18;
        }
    }
    ctx->pc = 0x184BC8u;
label_184bc8:
    // 0x184bc8: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x184bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_184bcc:
    // 0x184bcc: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x184bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_184bd0:
    // 0x184bd0: 0xae340124  sw          $s4, 0x124($s1)
    ctx->pc = 0x184bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 20));
label_184bd4:
    // 0x184bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184bd8:
    // 0x184bd8: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
label_184bdc:
    if (ctx->pc == 0x184BDCu) {
        ctx->pc = 0x184BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BD8u;
        // 0x184bdc: 0xae310128  sw          $s1, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BE0u;
        goto label_184be0;
    }
    ctx->pc = 0x184BD8u;
    {
        const bool branch_taken_0x184bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BD8u;
        // 0x184bdc: 0xae310128  sw          $s1, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bd8) {
            ctx->pc = 0x184CD0u;
            goto label_184cd0;
        }
    }
    ctx->pc = 0x184BE0u;
label_184be0:
    // 0x184be0: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x184be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_184be4:
    // 0x184be4: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
label_184be8:
    if (ctx->pc == 0x184BE8u) {
        ctx->pc = 0x184BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BE4u;
        // 0x184be8: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BECu;
        goto label_184bec;
    }
    ctx->pc = 0x184BE4u;
    {
        const bool branch_taken_0x184be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x184BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BE4u;
        // 0x184be8: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184be4) {
            ctx->pc = 0x184BF8u;
            goto label_184bf8;
        }
    }
    ctx->pc = 0x184BECu;
label_184bec:
    // 0x184bec: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x184becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_184bf0:
    // 0x184bf0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_184bf4:
    if (ctx->pc == 0x184BF4u) {
        ctx->pc = 0x184BF8u;
        goto label_184bf8;
    }
    ctx->pc = 0x184BF0u;
    {
        const bool branch_taken_0x184bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x184bf0) {
            ctx->pc = 0x184C04u;
            goto label_184c04;
        }
    }
    ctx->pc = 0x184BF8u;
label_184bf8:
    // 0x184bf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x184bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184bfc:
    // 0x184bfc: 0xc06182a  jal         func_1860A8
label_184c00:
    if (ctx->pc == 0x184C00u) {
        ctx->pc = 0x184C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BFCu;
        // 0x184c00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C04u;
        goto label_184c04;
    }
    ctx->pc = 0x184BFCu;
    SET_GPR_U32(ctx, 31, 0x184C04u);
    ctx->pc = 0x184C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BFCu;
    // 0x184c00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1860A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1860A8u, 0x184BFCu, 0x184C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C04u;
label_184c04:
    // 0x184c04: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_184c08:
    if (ctx->pc == 0x184C08u) {
        ctx->pc = 0x184C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C04u;
        // 0x184c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C0Cu;
        goto label_184c0c;
    }
    ctx->pc = 0x184C04u;
    {
        const bool branch_taken_0x184c04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x184C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C04u;
        // 0x184c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c04) {
            ctx->pc = 0x184BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184be0;
        }
    }
    ctx->pc = 0x184C0Cu;
label_184c0c:
    // 0x184c0c: 0x10000031  b           . + 4 + (0x31 << 2)
label_184c10:
    if (ctx->pc == 0x184C10u) {
        ctx->pc = 0x184C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C0Cu;
        // 0x184c10: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C14u;
        goto label_184c14;
    }
    ctx->pc = 0x184C0Cu;
    {
        const bool branch_taken_0x184c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C0Cu;
        // 0x184c10: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c0c) {
            ctx->pc = 0x184CD4u;
            goto label_184cd4;
        }
    }
    ctx->pc = 0x184C14u;
label_184c14:
    // 0x184c14: 0x0  nop
    ctx->pc = 0x184c14u;
    // NOP
label_184c18:
    // 0x184c18: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x184c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_184c1c:
    // 0x184c1c: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x184c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_184c20:
    // 0x184c20: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x184c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_184c24:
    // 0x184c24: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_184c28:
    if (ctx->pc == 0x184C28u) {
        ctx->pc = 0x184C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C24u;
        // 0x184c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C2Cu;
        goto label_184c2c;
    }
    ctx->pc = 0x184C24u;
    {
        const bool branch_taken_0x184c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C24u;
        // 0x184c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c24) {
            ctx->pc = 0x184C6Cu;
            goto label_184c6c;
        }
    }
    ctx->pc = 0x184C2Cu;
label_184c2c:
    // 0x184c2c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x184c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_184c30:
    // 0x184c30: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x184c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_184c34:
    // 0x184c34: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_184c38:
    if (ctx->pc == 0x184C38u) {
        ctx->pc = 0x184C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C34u;
        // 0x184c38: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C3Cu;
        goto label_184c3c;
    }
    ctx->pc = 0x184C34u;
    {
        const bool branch_taken_0x184c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x184C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C34u;
        // 0x184c38: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c34) {
            ctx->pc = 0x184C70u;
            goto label_184c70;
        }
    }
    ctx->pc = 0x184C3Cu;
label_184c3c:
    // 0x184c3c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_184c40:
    // 0x184c40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x184c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184c44:
    // 0x184c44: 0x0  nop
    ctx->pc = 0x184c44u;
    // NOP
label_184c48:
    // 0x184c48: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x184c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_184c4c:
    // 0x184c4c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_184c50:
    if (ctx->pc == 0x184C50u) {
        ctx->pc = 0x184C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C4Cu;
        // 0x184c50: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C54u;
        goto label_184c54;
    }
    ctx->pc = 0x184C4Cu;
    {
        const bool branch_taken_0x184c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C4Cu;
        // 0x184c50: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c4c) {
            ctx->pc = 0x184C70u;
            goto label_184c70;
        }
    }
    ctx->pc = 0x184C54u;
label_184c54:
    // 0x184c54: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x184c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_184c58:
    // 0x184c58: 0x0  nop
    ctx->pc = 0x184c58u;
    // NOP
label_184c5c:
    // 0x184c5c: 0x0  nop
    ctx->pc = 0x184c5cu;
    // NOP
label_184c60:
    // 0x184c60: 0x0  nop
    ctx->pc = 0x184c60u;
    // NOP
label_184c64:
    // 0x184c64: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
label_184c68:
    if (ctx->pc == 0x184C68u) {
        ctx->pc = 0x184C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C64u;
        // 0x184c68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C6Cu;
        goto label_184c6c;
    }
    ctx->pc = 0x184C64u;
    {
        const bool branch_taken_0x184c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x184c64) {
            ctx->pc = 0x184C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184C64u;
            // 0x184c68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184c48;
        }
    }
    ctx->pc = 0x184C6Cu;
label_184c6c:
    // 0x184c6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x184c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184c70:
    // 0x184c70: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_184c74:
    if (ctx->pc == 0x184C74u) {
        ctx->pc = 0x184C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C70u;
        // 0x184c74: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C78u;
        goto label_184c78;
    }
    ctx->pc = 0x184C70u;
    {
        const bool branch_taken_0x184c70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C70u;
        // 0x184c74: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c70) {
            ctx->pc = 0x184CD0u;
            goto label_184cd0;
        }
    }
    ctx->pc = 0x184C78u;
label_184c78:
    // 0x184c78: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x184c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_184c7c:
    // 0x184c7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x184c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184c80:
    // 0x184c80: 0xae320124  sw          $s2, 0x124($s1)
    ctx->pc = 0x184c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 18));
label_184c84:
    // 0x184c84: 0xae330128  sw          $s3, 0x128($s1)
    ctx->pc = 0x184c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 19));
label_184c88:
    // 0x184c88: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_184c8c:
    if (ctx->pc == 0x184C8Cu) {
        ctx->pc = 0x184C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C88u;
        // 0x184c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C90u;
        goto label_184c90;
    }
    ctx->pc = 0x184C88u;
    {
        const bool branch_taken_0x184c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C88u;
        // 0x184c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c88) {
            ctx->pc = 0x184CD0u;
            goto label_184cd0;
        }
    }
    ctx->pc = 0x184C90u;
label_184c90:
    // 0x184c90: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x184c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_184c94:
    // 0x184c94: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
label_184c98:
    if (ctx->pc == 0x184C98u) {
        ctx->pc = 0x184C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C94u;
        // 0x184c98: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C9Cu;
        goto label_184c9c;
    }
    ctx->pc = 0x184C94u;
    {
        const bool branch_taken_0x184c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x184C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C94u;
        // 0x184c98: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c94) {
            ctx->pc = 0x184CB8u;
            goto label_184cb8;
        }
    }
    ctx->pc = 0x184C9Cu;
label_184c9c:
    // 0x184c9c: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x184c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_184ca0:
    // 0x184ca0: 0x0  nop
    ctx->pc = 0x184ca0u;
    // NOP
label_184ca4:
    // 0x184ca4: 0x0  nop
    ctx->pc = 0x184ca4u;
    // NOP
label_184ca8:
    // 0x184ca8: 0x0  nop
    ctx->pc = 0x184ca8u;
    // NOP
label_184cac:
    // 0x184cac: 0x1053fff6  beq         $v0, $s3, . + 4 + (-0xA << 2)
label_184cb0:
    if (ctx->pc == 0x184CB0u) {
        ctx->pc = 0x184CB4u;
        goto label_184cb4;
    }
    ctx->pc = 0x184CACu;
    {
        const bool branch_taken_0x184cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x184cac) {
            ctx->pc = 0x184C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184c88;
        }
    }
    ctx->pc = 0x184CB4u;
label_184cb4:
    // 0x184cb4: 0x0  nop
    ctx->pc = 0x184cb4u;
    // NOP
label_184cb8:
    // 0x184cb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x184cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184cbc:
    // 0x184cbc: 0xc06182a  jal         func_1860A8
label_184cc0:
    if (ctx->pc == 0x184CC0u) {
        ctx->pc = 0x184CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CBCu;
        // 0x184cc0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CC4u;
        goto label_184cc4;
    }
    ctx->pc = 0x184CBCu;
    SET_GPR_U32(ctx, 31, 0x184CC4u);
    ctx->pc = 0x184CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CBCu;
    // 0x184cc0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1860A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1860A8u, 0x184CBCu, 0x184CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CC4u;
label_184cc4:
    // 0x184cc4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_184cc8:
    if (ctx->pc == 0x184CC8u) {
        ctx->pc = 0x184CCCu;
        goto label_184ccc;
    }
    ctx->pc = 0x184CC4u;
    {
        const bool branch_taken_0x184cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184cc4) {
            ctx->pc = 0x184C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184c88;
        }
    }
    ctx->pc = 0x184CCCu;
label_184ccc:
    // 0x184ccc: 0x0  nop
    ctx->pc = 0x184cccu;
    // NOP
label_184cd0:
    // 0x184cd0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x184cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_184cd4:
    // 0x184cd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x184cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184cd8:
    // 0x184cd8: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x184cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_184cdc:
    // 0x184cdc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x184cdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_184ce0:
    // 0x184ce0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x184ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_184ce4:
    // 0x184ce4: 0x60f809  jalr        $v1
label_184ce8:
    if (ctx->pc == 0x184CE8u) {
        ctx->pc = 0x184CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CE4u;
        // 0x184ce8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CECu;
        goto label_184cec;
    }
    ctx->pc = 0x184CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x184CECu);
        ctx->pc = 0x184CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CE4u;
        // 0x184ce8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184CE4u, 0x184CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184CECu;
label_184cec:
    // 0x184cec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x184cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_184cf0:
    // 0x184cf0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x184cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_184cf4:
    // 0x184cf4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x184cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_184cf8:
    // 0x184cf8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x184cf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_184cfc:
    // 0x184cfc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x184cfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_184d00:
    // 0x184d00: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x184d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_184d04:
    // 0x184d04: 0x3e00008  jr          $ra
label_184d08:
    if (ctx->pc == 0x184D08u) {
        ctx->pc = 0x184D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D04u;
        // 0x184d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D0Cu;
        goto label_fallthrough_0x184d04;
    }
    ctx->pc = 0x184D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D04u;
        // 0x184d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x184d04:
    ctx->pc = 0x184D0Cu;
}
