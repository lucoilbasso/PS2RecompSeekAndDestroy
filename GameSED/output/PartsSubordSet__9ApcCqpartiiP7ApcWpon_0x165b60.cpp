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

// Function: PartsSubordSet__9ApcCqpartiiP7ApcWpon
// Address: 0x165b60 - 0x165de4
void PartsSubordSet__9ApcCqpartiiP7ApcWpon_0x165b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsSubordSet__9ApcCqpartiiP7ApcWpon_0x165b60");
#endif

    switch (ctx->pc) {
        case 0x165b60u: goto label_165b60;
        case 0x165b64u: goto label_165b64;
        case 0x165b68u: goto label_165b68;
        case 0x165b6cu: goto label_165b6c;
        case 0x165b70u: goto label_165b70;
        case 0x165b74u: goto label_165b74;
        case 0x165b78u: goto label_165b78;
        case 0x165b7cu: goto label_165b7c;
        case 0x165b80u: goto label_165b80;
        case 0x165b84u: goto label_165b84;
        case 0x165b88u: goto label_165b88;
        case 0x165b8cu: goto label_165b8c;
        case 0x165b90u: goto label_165b90;
        case 0x165b94u: goto label_165b94;
        case 0x165b98u: goto label_165b98;
        case 0x165b9cu: goto label_165b9c;
        case 0x165ba0u: goto label_165ba0;
        case 0x165ba4u: goto label_165ba4;
        case 0x165ba8u: goto label_165ba8;
        case 0x165bacu: goto label_165bac;
        case 0x165bb0u: goto label_165bb0;
        case 0x165bb4u: goto label_165bb4;
        case 0x165bb8u: goto label_165bb8;
        case 0x165bbcu: goto label_165bbc;
        case 0x165bc0u: goto label_165bc0;
        case 0x165bc4u: goto label_165bc4;
        case 0x165bc8u: goto label_165bc8;
        case 0x165bccu: goto label_165bcc;
        case 0x165bd0u: goto label_165bd0;
        case 0x165bd4u: goto label_165bd4;
        case 0x165bd8u: goto label_165bd8;
        case 0x165bdcu: goto label_165bdc;
        case 0x165be0u: goto label_165be0;
        case 0x165be4u: goto label_165be4;
        case 0x165be8u: goto label_165be8;
        case 0x165becu: goto label_165bec;
        case 0x165bf0u: goto label_165bf0;
        case 0x165bf4u: goto label_165bf4;
        case 0x165bf8u: goto label_165bf8;
        case 0x165bfcu: goto label_165bfc;
        case 0x165c00u: goto label_165c00;
        case 0x165c04u: goto label_165c04;
        case 0x165c08u: goto label_165c08;
        case 0x165c0cu: goto label_165c0c;
        case 0x165c10u: goto label_165c10;
        case 0x165c14u: goto label_165c14;
        case 0x165c18u: goto label_165c18;
        case 0x165c1cu: goto label_165c1c;
        case 0x165c20u: goto label_165c20;
        case 0x165c24u: goto label_165c24;
        case 0x165c28u: goto label_165c28;
        case 0x165c2cu: goto label_165c2c;
        case 0x165c30u: goto label_165c30;
        case 0x165c34u: goto label_165c34;
        case 0x165c38u: goto label_165c38;
        case 0x165c3cu: goto label_165c3c;
        case 0x165c40u: goto label_165c40;
        case 0x165c44u: goto label_165c44;
        case 0x165c48u: goto label_165c48;
        case 0x165c4cu: goto label_165c4c;
        case 0x165c50u: goto label_165c50;
        case 0x165c54u: goto label_165c54;
        case 0x165c58u: goto label_165c58;
        case 0x165c5cu: goto label_165c5c;
        case 0x165c60u: goto label_165c60;
        case 0x165c64u: goto label_165c64;
        case 0x165c68u: goto label_165c68;
        case 0x165c6cu: goto label_165c6c;
        case 0x165c70u: goto label_165c70;
        case 0x165c74u: goto label_165c74;
        case 0x165c78u: goto label_165c78;
        case 0x165c7cu: goto label_165c7c;
        case 0x165c80u: goto label_165c80;
        case 0x165c84u: goto label_165c84;
        case 0x165c88u: goto label_165c88;
        case 0x165c8cu: goto label_165c8c;
        case 0x165c90u: goto label_165c90;
        case 0x165c94u: goto label_165c94;
        case 0x165c98u: goto label_165c98;
        case 0x165c9cu: goto label_165c9c;
        case 0x165ca0u: goto label_165ca0;
        case 0x165ca4u: goto label_165ca4;
        case 0x165ca8u: goto label_165ca8;
        case 0x165cacu: goto label_165cac;
        case 0x165cb0u: goto label_165cb0;
        case 0x165cb4u: goto label_165cb4;
        case 0x165cb8u: goto label_165cb8;
        case 0x165cbcu: goto label_165cbc;
        case 0x165cc0u: goto label_165cc0;
        case 0x165cc4u: goto label_165cc4;
        case 0x165cc8u: goto label_165cc8;
        case 0x165cccu: goto label_165ccc;
        case 0x165cd0u: goto label_165cd0;
        case 0x165cd4u: goto label_165cd4;
        case 0x165cd8u: goto label_165cd8;
        case 0x165cdcu: goto label_165cdc;
        case 0x165ce0u: goto label_165ce0;
        case 0x165ce4u: goto label_165ce4;
        case 0x165ce8u: goto label_165ce8;
        case 0x165cecu: goto label_165cec;
        case 0x165cf0u: goto label_165cf0;
        case 0x165cf4u: goto label_165cf4;
        case 0x165cf8u: goto label_165cf8;
        case 0x165cfcu: goto label_165cfc;
        case 0x165d00u: goto label_165d00;
        case 0x165d04u: goto label_165d04;
        case 0x165d08u: goto label_165d08;
        case 0x165d0cu: goto label_165d0c;
        case 0x165d10u: goto label_165d10;
        case 0x165d14u: goto label_165d14;
        case 0x165d18u: goto label_165d18;
        case 0x165d1cu: goto label_165d1c;
        case 0x165d20u: goto label_165d20;
        case 0x165d24u: goto label_165d24;
        case 0x165d28u: goto label_165d28;
        case 0x165d2cu: goto label_165d2c;
        case 0x165d30u: goto label_165d30;
        case 0x165d34u: goto label_165d34;
        case 0x165d38u: goto label_165d38;
        case 0x165d3cu: goto label_165d3c;
        case 0x165d40u: goto label_165d40;
        case 0x165d44u: goto label_165d44;
        case 0x165d48u: goto label_165d48;
        case 0x165d4cu: goto label_165d4c;
        case 0x165d50u: goto label_165d50;
        case 0x165d54u: goto label_165d54;
        case 0x165d58u: goto label_165d58;
        case 0x165d5cu: goto label_165d5c;
        case 0x165d60u: goto label_165d60;
        case 0x165d64u: goto label_165d64;
        case 0x165d68u: goto label_165d68;
        case 0x165d6cu: goto label_165d6c;
        case 0x165d70u: goto label_165d70;
        case 0x165d74u: goto label_165d74;
        case 0x165d78u: goto label_165d78;
        case 0x165d7cu: goto label_165d7c;
        case 0x165d80u: goto label_165d80;
        case 0x165d84u: goto label_165d84;
        case 0x165d88u: goto label_165d88;
        case 0x165d8cu: goto label_165d8c;
        case 0x165d90u: goto label_165d90;
        case 0x165d94u: goto label_165d94;
        case 0x165d98u: goto label_165d98;
        case 0x165d9cu: goto label_165d9c;
        case 0x165da0u: goto label_165da0;
        case 0x165da4u: goto label_165da4;
        case 0x165da8u: goto label_165da8;
        case 0x165dacu: goto label_165dac;
        case 0x165db0u: goto label_165db0;
        case 0x165db4u: goto label_165db4;
        case 0x165db8u: goto label_165db8;
        case 0x165dbcu: goto label_165dbc;
        case 0x165dc0u: goto label_165dc0;
        case 0x165dc4u: goto label_165dc4;
        case 0x165dc8u: goto label_165dc8;
        case 0x165dccu: goto label_165dcc;
        case 0x165dd0u: goto label_165dd0;
        case 0x165dd4u: goto label_165dd4;
        case 0x165dd8u: goto label_165dd8;
        case 0x165ddcu: goto label_165ddc;
        case 0x165de0u: goto label_165de0;
        default: break;
    }

    ctx->pc = 0x165b60u;

label_165b60:
    // 0x165b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_165b64:
    // 0x165b64: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x165b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_165b68:
    // 0x165b68: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x165b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_165b6c:
    // 0x165b6c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x165b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_165b70:
    // 0x165b70: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x165b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_165b74:
    // 0x165b74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x165b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165b78:
    // 0x165b78: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x165b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_165b7c:
    // 0x165b7c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x165b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_165b80:
    // 0x165b80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x165b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_165b84:
    // 0x165b84: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x165b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_165b88:
    // 0x165b88: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x165b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_165b8c:
    // 0x165b8c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x165b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_165b90:
    // 0x165b90: 0x8e511264  lw          $s1, 0x1264($s2)
    ctx->pc = 0x165b90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
label_165b94:
    // 0x165b94: 0x12200089  beqz        $s1, . + 4 + (0x89 << 2)
label_165b98:
    if (ctx->pc == 0x165B98u) {
        ctx->pc = 0x165B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B94u;
        // 0x165b98: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165B9Cu;
        goto label_165b9c;
    }
    ctx->pc = 0x165B94u;
    {
        const bool branch_taken_0x165b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B94u;
        // 0x165b98: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b94) {
            ctx->pc = 0x165DBCu;
            goto label_165dbc;
        }
    }
    ctx->pc = 0x165B9Cu;
label_165b9c:
    // 0x165b9c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_165ba0:
    if (ctx->pc == 0x165BA0u) {
        ctx->pc = 0x165BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B9Cu;
        // 0x165ba0: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165BA4u;
        goto label_165ba4;
    }
    ctx->pc = 0x165B9Cu;
    {
        const bool branch_taken_0x165b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B9Cu;
        // 0x165ba0: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b9c) {
            ctx->pc = 0x165BB0u;
            goto label_165bb0;
        }
    }
    ctx->pc = 0x165BA4u;
label_165ba4:
    // 0x165ba4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x165ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_165ba8:
    // 0x165ba8: 0x10000084  b           . + 4 + (0x84 << 2)
label_165bac:
    if (ctx->pc == 0x165BACu) {
        ctx->pc = 0x165BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BA8u;
        // 0x165bac: 0xac501234  sw          $s0, 0x1234($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4660), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165BB0u;
        goto label_165bb0;
    }
    ctx->pc = 0x165BA8u;
    {
        const bool branch_taken_0x165ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BA8u;
        // 0x165bac: 0xac501234  sw          $s0, 0x1234($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4660), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ba8) {
            ctx->pc = 0x165DBCu;
            goto label_165dbc;
        }
    }
    ctx->pc = 0x165BB0u;
label_165bb0:
    // 0x165bb0: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x165bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_165bb4:
    // 0x165bb4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x165bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_165bb8:
    // 0x165bb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x165bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_165bbc:
    // 0x165bbc: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
label_165bc0:
    if (ctx->pc == 0x165BC0u) {
        ctx->pc = 0x165BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BBCu;
        // 0x165bc0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165BC4u;
        goto label_165bc4;
    }
    ctx->pc = 0x165BBCu;
    {
        const bool branch_taken_0x165bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BBCu;
        // 0x165bc0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bbc) {
            ctx->pc = 0x165DC0u;
            goto label_165dc0;
        }
    }
    ctx->pc = 0x165BC4u;
label_165bc4:
    // 0x165bc4: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x165bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_165bc8:
    // 0x165bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165bcc:
    // 0x165bcc: 0xc04e346  jal         func_138D18
label_165bd0:
    if (ctx->pc == 0x165BD0u) {
        ctx->pc = 0x165BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BCCu;
        // 0x165bd0: 0x31160fff  andi        $s6, $t0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165BD4u;
        goto label_165bd4;
    }
    ctx->pc = 0x165BCCu;
    SET_GPR_U32(ctx, 31, 0x165BD4u);
    ctx->pc = 0x165BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BCCu;
    // 0x165bd0: 0x31160fff  andi        $s6, $t0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D18u, 0x165BCCu, 0x165BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BD4u;
label_165bd4:
    // 0x165bd4: 0x8e300170  lw          $s0, 0x170($s1)
    ctx->pc = 0x165bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_165bd8:
    // 0x165bd8: 0x8f838b2c  lw          $v1, -0x74D4($gp)
    ctx->pc = 0x165bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
label_165bdc:
    // 0x165bdc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x165bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165be0:
    // 0x165be0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_165be4:
    if (ctx->pc == 0x165BE4u) {
        ctx->pc = 0x165BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BE0u;
        // 0x165be4: 0x8e551264  lw          $s5, 0x1264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165BE8u;
        goto label_165be8;
    }
    ctx->pc = 0x165BE0u;
    {
        const bool branch_taken_0x165be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BE0u;
        // 0x165be4: 0x8e551264  lw          $s5, 0x1264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165be0) {
            ctx->pc = 0x165C28u;
            goto label_165c28;
        }
    }
    ctx->pc = 0x165BE8u;
label_165be8:
    // 0x165be8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x165be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
label_165bec:
    // 0x165bec: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x165becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_165bf0:
    // 0x165bf0: 0x8c63026c  lw          $v1, 0x26C($v1)
    ctx->pc = 0x165bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_165bf4:
    // 0x165bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165bf8:
    // 0x165bf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x165bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_165bfc:
    // 0x165bfc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x165bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_165c00:
    // 0x165c00: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x165c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_165c04:
    // 0x165c04: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x165c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_165c08:
    // 0x165c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165c0c:
    // 0x165c0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x165c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165c10:
    // 0x165c10: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x165c10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
label_165c14:
    // 0x165c14: 0xc055bb0  jal         func_156EC0
label_165c18:
    if (ctx->pc == 0x165C18u) {
        ctx->pc = 0x165C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C14u;
        // 0x165c18: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C1Cu;
        goto label_165c1c;
    }
    ctx->pc = 0x165C14u;
    SET_GPR_U32(ctx, 31, 0x165C1Cu);
    ctx->pc = 0x165C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C14u;
    // 0x165c18: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x165C14u, 0x165C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C1Cu;
label_165c1c:
    // 0x165c1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_165c20:
    // 0x165c20: 0x10000010  b           . + 4 + (0x10 << 2)
label_165c24:
    if (ctx->pc == 0x165C24u) {
        ctx->pc = 0x165C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C20u;
        // 0x165c24: 0xae22026c  sw          $v0, 0x26C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C28u;
        goto label_165c28;
    }
    ctx->pc = 0x165C20u;
    {
        const bool branch_taken_0x165c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C20u;
        // 0x165c24: 0xae22026c  sw          $v0, 0x26C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c20) {
            ctx->pc = 0x165C64u;
            goto label_165c64;
        }
    }
    ctx->pc = 0x165C28u;
label_165c28:
    // 0x165c28: 0xc0682b2  jal         func_1A0AC8
label_165c2c:
    if (ctx->pc == 0x165C2Cu) {
        ctx->pc = 0x165C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C28u;
        // 0x165c2c: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C30u;
        goto label_165c30;
    }
    ctx->pc = 0x165C28u;
    SET_GPR_U32(ctx, 31, 0x165C30u);
    ctx->pc = 0x165C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C28u;
    // 0x165c2c: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x165C28u, 0x165C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C30u;
label_165c30:
    // 0x165c30: 0xc0682b6  jal         func_1A0AD8
label_165c34:
    if (ctx->pc == 0x165C34u) {
        ctx->pc = 0x165C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C30u;
        // 0x165c34: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C38u;
        goto label_165c38;
    }
    ctx->pc = 0x165C30u;
    SET_GPR_U32(ctx, 31, 0x165C38u);
    ctx->pc = 0x165C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C30u;
    // 0x165c34: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x165C30u, 0x165C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C38u;
label_165c38:
    // 0x165c38: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x165c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_165c3c:
    // 0x165c3c: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x165c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
label_165c40:
    // 0x165c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165c44:
    // 0x165c44: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x165c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_165c48:
    // 0x165c48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165c4c:
    // 0x165c4c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x165c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_165c50:
    // 0x165c50: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x165c50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_165c54:
    // 0x165c54: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x165c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_165c58:
    // 0x165c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165c5c:
    // 0x165c5c: 0xc055bb0  jal         func_156EC0
label_165c60:
    if (ctx->pc == 0x165C60u) {
        ctx->pc = 0x165C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C5Cu;
        // 0x165c60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C64u;
        goto label_165c64;
    }
    ctx->pc = 0x165C5Cu;
    SET_GPR_U32(ctx, 31, 0x165C64u);
    ctx->pc = 0x165C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C5Cu;
    // 0x165c60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x165C5Cu, 0x165C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C64u;
label_165c64:
    // 0x165c64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165c68:
    // 0x165c68: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x165c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165c6c:
    // 0x165c6c: 0xc06825c  jal         func_1A0970
label_165c70:
    if (ctx->pc == 0x165C70u) {
        ctx->pc = 0x165C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C6Cu;
        // 0x165c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C74u;
        goto label_165c74;
    }
    ctx->pc = 0x165C6Cu;
    SET_GPR_U32(ctx, 31, 0x165C74u);
    ctx->pc = 0x165C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C6Cu;
    // 0x165c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x165C6Cu, 0x165C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C74u;
label_165c74:
    // 0x165c74: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x165c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_165c78:
    // 0x165c78: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_165c7c:
    if (ctx->pc == 0x165C7Cu) {
        ctx->pc = 0x165C80u;
        goto label_165c80;
    }
    ctx->pc = 0x165C78u;
    {
        const bool branch_taken_0x165c78 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x165c78) {
            ctx->pc = 0x165C98u;
            goto label_165c98;
        }
    }
    ctx->pc = 0x165C80u;
label_165c80:
    // 0x165c80: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x165c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_165c84:
    // 0x165c84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_165c88:
    if (ctx->pc == 0x165C88u) {
        ctx->pc = 0x165C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C84u;
        // 0x165c88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C8Cu;
        goto label_165c8c;
    }
    ctx->pc = 0x165C84u;
    {
        const bool branch_taken_0x165c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C84u;
        // 0x165c88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c84) {
            ctx->pc = 0x165C98u;
            goto label_165c98;
        }
    }
    ctx->pc = 0x165C8Cu;
label_165c8c:
    // 0x165c8c: 0x8e0801b4  lw          $t0, 0x1B4($s0)
    ctx->pc = 0x165c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_165c90:
    // 0x165c90: 0xc041228  jal         func_1048A0
label_165c94:
    if (ctx->pc == 0x165C94u) {
        ctx->pc = 0x165C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C90u;
        // 0x165c94: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165C98u;
        goto label_165c98;
    }
    ctx->pc = 0x165C90u;
    SET_GPR_U32(ctx, 31, 0x165C98u);
    ctx->pc = 0x165C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C90u;
    // 0x165c94: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x165C90u, 0x165C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C98u;
label_165c98:
    // 0x165c98: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_165c9c:
    if (ctx->pc == 0x165C9Cu) {
        ctx->pc = 0x165C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C98u;
        // 0x165c9c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CA0u;
        goto label_165ca0;
    }
    ctx->pc = 0x165C98u;
    {
        const bool branch_taken_0x165c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C98u;
        // 0x165c9c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c98) {
            ctx->pc = 0x165CC0u;
            goto label_165cc0;
        }
    }
    ctx->pc = 0x165CA0u;
label_165ca0:
    // 0x165ca0: 0x86040264  lh          $a0, 0x264($s0)
    ctx->pc = 0x165ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 612)));
label_165ca4:
    // 0x165ca4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x165ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_165ca8:
    // 0x165ca8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x165ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_165cac:
    // 0x165cac: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_165cb0:
    if (ctx->pc == 0x165CB0u) {
        ctx->pc = 0x165CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CACu;
        // 0x165cb0: 0xac501234  sw          $s0, 0x1234($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4660), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CB4u;
        goto label_165cb4;
    }
    ctx->pc = 0x165CACu;
    {
        const bool branch_taken_0x165cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x165CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CACu;
        // 0x165cb0: 0xac501234  sw          $s0, 0x1234($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4660), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cac) {
            ctx->pc = 0x165DBCu;
            goto label_165dbc;
        }
    }
    ctx->pc = 0x165CB4u;
label_165cb4:
    // 0x165cb4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x165cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_165cb8:
    // 0x165cb8: 0x50820041  beql        $a0, $v0, . + 4 + (0x41 << 2)
label_165cbc:
    if (ctx->pc == 0x165CBCu) {
        ctx->pc = 0x165CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CB8u;
        // 0x165cbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CC0u;
        goto label_165cc0;
    }
    ctx->pc = 0x165CB8u;
    {
        const bool branch_taken_0x165cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x165cb8) {
            ctx->pc = 0x165CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165CB8u;
            // 0x165cbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DC0u;
            goto label_165dc0;
        }
    }
    ctx->pc = 0x165CC0u;
label_165cc0:
    // 0x165cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165cc4:
    // 0x165cc4: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
label_165cc8:
    if (ctx->pc == 0x165CC8u) {
        ctx->pc = 0x165CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CC4u;
        // 0x165cc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CCCu;
        goto label_165ccc;
    }
    ctx->pc = 0x165CC4u;
    {
        const bool branch_taken_0x165cc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x165CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CC4u;
        // 0x165cc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cc4) {
            ctx->pc = 0x165CE0u;
            goto label_165ce0;
        }
    }
    ctx->pc = 0x165CCCu;
label_165ccc:
    // 0x165ccc: 0x8e451264  lw          $a1, 0x1264($s2)
    ctx->pc = 0x165cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
label_165cd0:
    // 0x165cd0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x165cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_165cd4:
    // 0x165cd4: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x165cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_165cd8:
    // 0x165cd8: 0x1000000f  b           . + 4 + (0xF << 2)
label_165cdc:
    if (ctx->pc == 0x165CDCu) {
        ctx->pc = 0x165CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CD8u;
        // 0x165cdc: 0x8ca306ec  lw          $v1, 0x6EC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CE0u;
        goto label_165ce0;
    }
    ctx->pc = 0x165CD8u;
    {
        const bool branch_taken_0x165cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CD8u;
        // 0x165cdc: 0x8ca306ec  lw          $v1, 0x6EC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cd8) {
            ctx->pc = 0x165D18u;
            goto label_165d18;
        }
    }
    ctx->pc = 0x165CE0u;
label_165ce0:
    // 0x165ce0: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
label_165ce4:
    if (ctx->pc == 0x165CE4u) {
        ctx->pc = 0x165CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CE0u;
        // 0x165ce4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CE8u;
        goto label_165ce8;
    }
    ctx->pc = 0x165CE0u;
    {
        const bool branch_taken_0x165ce0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x165CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CE0u;
        // 0x165ce4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ce0) {
            ctx->pc = 0x165D00u;
            goto label_165d00;
        }
    }
    ctx->pc = 0x165CE8u;
label_165ce8:
    // 0x165ce8: 0x8e451264  lw          $a1, 0x1264($s2)
    ctx->pc = 0x165ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
label_165cec:
    // 0x165cec: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x165cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_165cf0:
    // 0x165cf0: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x165cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_165cf4:
    // 0x165cf4: 0x10000008  b           . + 4 + (0x8 << 2)
label_165cf8:
    if (ctx->pc == 0x165CF8u) {
        ctx->pc = 0x165CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CF4u;
        // 0x165cf8: 0x8ca3072c  lw          $v1, 0x72C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1836)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165CFCu;
        goto label_165cfc;
    }
    ctx->pc = 0x165CF4u;
    {
        const bool branch_taken_0x165cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CF4u;
        // 0x165cf8: 0x8ca3072c  lw          $v1, 0x72C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cf4) {
            ctx->pc = 0x165D18u;
            goto label_165d18;
        }
    }
    ctx->pc = 0x165CFCu;
label_165cfc:
    // 0x165cfc: 0x0  nop
    ctx->pc = 0x165cfcu;
    // NOP
label_165d00:
    // 0x165d00: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
label_165d04:
    if (ctx->pc == 0x165D04u) {
        ctx->pc = 0x165D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D00u;
        // 0x165d04: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D08u;
        goto label_165d08;
    }
    ctx->pc = 0x165D00u;
    {
        const bool branch_taken_0x165d00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x165d00) {
            ctx->pc = 0x165D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165D00u;
            // 0x165d04: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D20u;
            goto label_165d20;
        }
    }
    ctx->pc = 0x165D08u;
label_165d08:
    // 0x165d08: 0x8e451264  lw          $a1, 0x1264($s2)
    ctx->pc = 0x165d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
label_165d0c:
    // 0x165d0c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x165d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_165d10:
    // 0x165d10: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x165d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_165d14:
    // 0x165d14: 0x8ca3076c  lw          $v1, 0x76C($a1)
    ctx->pc = 0x165d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1900)));
label_165d18:
    // 0x165d18: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x165d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
label_165d1c:
    // 0x165d1c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_165d20:
    // 0x165d20: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x165d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_165d24:
    // 0x165d24: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x165d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_165d28:
    // 0x165d28: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
label_165d2c:
    if (ctx->pc == 0x165D2Cu) {
        ctx->pc = 0x165D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D28u;
        // 0x165d2c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D30u;
        goto label_165d30;
    }
    ctx->pc = 0x165D28u;
    {
        const bool branch_taken_0x165d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d28) {
            ctx->pc = 0x165D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165D28u;
            // 0x165d2c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DC0u;
            goto label_165dc0;
        }
    }
    ctx->pc = 0x165D30u;
label_165d30:
    // 0x165d30: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x165d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_165d34:
    // 0x165d34: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x165d34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_165d38:
    // 0x165d38: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x165d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_165d3c:
    // 0x165d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165d40:
    // 0x165d40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165d44:
    // 0x165d44: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x165d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_165d48:
    // 0x165d48: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x165d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_165d4c:
    // 0x165d4c: 0xc041160  jal         func_104580
label_165d50:
    if (ctx->pc == 0x165D50u) {
        ctx->pc = 0x165D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D4Cu;
        // 0x165d50: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D54u;
        goto label_165d54;
    }
    ctx->pc = 0x165D4Cu;
    SET_GPR_U32(ctx, 31, 0x165D54u);
    ctx->pc = 0x165D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D4Cu;
    // 0x165d50: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x165D4Cu, 0x165D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D54u;
label_165d54:
    // 0x165d54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x165d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_165d58:
    // 0x165d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165d5c:
    // 0x165d5c: 0xc04112e  jal         func_1044B8
label_165d60:
    if (ctx->pc == 0x165D60u) {
        ctx->pc = 0x165D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D5Cu;
        // 0x165d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165D64u;
        goto label_165d64;
    }
    ctx->pc = 0x165D5Cu;
    SET_GPR_U32(ctx, 31, 0x165D64u);
    ctx->pc = 0x165D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D5Cu;
    // 0x165d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x165D5Cu, 0x165D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D64u;
label_165d64:
    // 0x165d64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x165d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_165d68:
    // 0x165d68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x165d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_165d6c:
    // 0x165d6c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x165d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_165d70:
    // 0x165d70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x165d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_165d74:
    // 0x165d74: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x165d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_165d78:
    // 0x165d78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x165d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_165d7c:
    // 0x165d7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x165d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_165d80:
    // 0x165d80: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x165d80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_165d84:
    // 0x165d84: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x165d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_165d88:
    // 0x165d88: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x165d88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_165d8c:
    // 0x165d8c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x165d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_165d90:
    // 0x165d90: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x165d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_165d94:
    // 0x165d94: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x165d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_165d98:
    // 0x165d98: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x165d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_165d9c:
    // 0x165d9c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x165d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_165da0:
    // 0x165da0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x165da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_165da4:
    // 0x165da4: 0x40f809  jalr        $v0
label_165da8:
    if (ctx->pc == 0x165DA8u) {
        ctx->pc = 0x165DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DA4u;
        // 0x165da8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DACu;
        goto label_165dac;
    }
    ctx->pc = 0x165DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165DACu);
        ctx->pc = 0x165DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DA4u;
        // 0x165da8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165DA4u, 0x165DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165DACu;
label_165dac:
    // 0x165dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165db0:
    // 0x165db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165db4:
    // 0x165db4: 0xc0618da  jal         func_186368
label_165db8:
    if (ctx->pc == 0x165DB8u) {
        ctx->pc = 0x165DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DB4u;
        // 0x165db8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DBCu;
        goto label_165dbc;
    }
    ctx->pc = 0x165DB4u;
    SET_GPR_U32(ctx, 31, 0x165DBCu);
    ctx->pc = 0x165DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DB4u;
    // 0x165db8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x165DB4u, 0x165DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DBCu;
label_165dbc:
    // 0x165dbc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x165dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_165dc0:
    // 0x165dc0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x165dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_165dc4:
    // 0x165dc4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x165dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_165dc8:
    // 0x165dc8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x165dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_165dcc:
    // 0x165dcc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x165dccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_165dd0:
    // 0x165dd0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x165dd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_165dd4:
    // 0x165dd4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x165dd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_165dd8:
    // 0x165dd8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x165dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_165ddc:
    // 0x165ddc: 0x3e00008  jr          $ra
label_165de0:
    if (ctx->pc == 0x165DE0u) {
        ctx->pc = 0x165DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DDCu;
        // 0x165de0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165DE4u;
        goto label_fallthrough_0x165ddc;
    }
    ctx->pc = 0x165DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DDCu;
        // 0x165de0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x165ddc:
    ctx->pc = 0x165DE4u;
}
