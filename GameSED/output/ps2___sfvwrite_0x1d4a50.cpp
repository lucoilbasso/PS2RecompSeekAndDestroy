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

// Function: __sfvwrite
// Address: 0x1d4a50 - 0x1d4e30
void ps2___sfvwrite_0x1d4a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfvwrite_0x1d4a50");
#endif

    switch (ctx->pc) {
        case 0x1d4a50u: goto label_1d4a50;
        case 0x1d4a54u: goto label_1d4a54;
        case 0x1d4a58u: goto label_1d4a58;
        case 0x1d4a5cu: goto label_1d4a5c;
        case 0x1d4a60u: goto label_1d4a60;
        case 0x1d4a64u: goto label_1d4a64;
        case 0x1d4a68u: goto label_1d4a68;
        case 0x1d4a6cu: goto label_1d4a6c;
        case 0x1d4a70u: goto label_1d4a70;
        case 0x1d4a74u: goto label_1d4a74;
        case 0x1d4a78u: goto label_1d4a78;
        case 0x1d4a7cu: goto label_1d4a7c;
        case 0x1d4a80u: goto label_1d4a80;
        case 0x1d4a84u: goto label_1d4a84;
        case 0x1d4a88u: goto label_1d4a88;
        case 0x1d4a8cu: goto label_1d4a8c;
        case 0x1d4a90u: goto label_1d4a90;
        case 0x1d4a94u: goto label_1d4a94;
        case 0x1d4a98u: goto label_1d4a98;
        case 0x1d4a9cu: goto label_1d4a9c;
        case 0x1d4aa0u: goto label_1d4aa0;
        case 0x1d4aa4u: goto label_1d4aa4;
        case 0x1d4aa8u: goto label_1d4aa8;
        case 0x1d4aacu: goto label_1d4aac;
        case 0x1d4ab0u: goto label_1d4ab0;
        case 0x1d4ab4u: goto label_1d4ab4;
        case 0x1d4ab8u: goto label_1d4ab8;
        case 0x1d4abcu: goto label_1d4abc;
        case 0x1d4ac0u: goto label_1d4ac0;
        case 0x1d4ac4u: goto label_1d4ac4;
        case 0x1d4ac8u: goto label_1d4ac8;
        case 0x1d4accu: goto label_1d4acc;
        case 0x1d4ad0u: goto label_1d4ad0;
        case 0x1d4ad4u: goto label_1d4ad4;
        case 0x1d4ad8u: goto label_1d4ad8;
        case 0x1d4adcu: goto label_1d4adc;
        case 0x1d4ae0u: goto label_1d4ae0;
        case 0x1d4ae4u: goto label_1d4ae4;
        case 0x1d4ae8u: goto label_1d4ae8;
        case 0x1d4aecu: goto label_1d4aec;
        case 0x1d4af0u: goto label_1d4af0;
        case 0x1d4af4u: goto label_1d4af4;
        case 0x1d4af8u: goto label_1d4af8;
        case 0x1d4afcu: goto label_1d4afc;
        case 0x1d4b00u: goto label_1d4b00;
        case 0x1d4b04u: goto label_1d4b04;
        case 0x1d4b08u: goto label_1d4b08;
        case 0x1d4b0cu: goto label_1d4b0c;
        case 0x1d4b10u: goto label_1d4b10;
        case 0x1d4b14u: goto label_1d4b14;
        case 0x1d4b18u: goto label_1d4b18;
        case 0x1d4b1cu: goto label_1d4b1c;
        case 0x1d4b20u: goto label_1d4b20;
        case 0x1d4b24u: goto label_1d4b24;
        case 0x1d4b28u: goto label_1d4b28;
        case 0x1d4b2cu: goto label_1d4b2c;
        case 0x1d4b30u: goto label_1d4b30;
        case 0x1d4b34u: goto label_1d4b34;
        case 0x1d4b38u: goto label_1d4b38;
        case 0x1d4b3cu: goto label_1d4b3c;
        case 0x1d4b40u: goto label_1d4b40;
        case 0x1d4b44u: goto label_1d4b44;
        case 0x1d4b48u: goto label_1d4b48;
        case 0x1d4b4cu: goto label_1d4b4c;
        case 0x1d4b50u: goto label_1d4b50;
        case 0x1d4b54u: goto label_1d4b54;
        case 0x1d4b58u: goto label_1d4b58;
        case 0x1d4b5cu: goto label_1d4b5c;
        case 0x1d4b60u: goto label_1d4b60;
        case 0x1d4b64u: goto label_1d4b64;
        case 0x1d4b68u: goto label_1d4b68;
        case 0x1d4b6cu: goto label_1d4b6c;
        case 0x1d4b70u: goto label_1d4b70;
        case 0x1d4b74u: goto label_1d4b74;
        case 0x1d4b78u: goto label_1d4b78;
        case 0x1d4b7cu: goto label_1d4b7c;
        case 0x1d4b80u: goto label_1d4b80;
        case 0x1d4b84u: goto label_1d4b84;
        case 0x1d4b88u: goto label_1d4b88;
        case 0x1d4b8cu: goto label_1d4b8c;
        case 0x1d4b90u: goto label_1d4b90;
        case 0x1d4b94u: goto label_1d4b94;
        case 0x1d4b98u: goto label_1d4b98;
        case 0x1d4b9cu: goto label_1d4b9c;
        case 0x1d4ba0u: goto label_1d4ba0;
        case 0x1d4ba4u: goto label_1d4ba4;
        case 0x1d4ba8u: goto label_1d4ba8;
        case 0x1d4bacu: goto label_1d4bac;
        case 0x1d4bb0u: goto label_1d4bb0;
        case 0x1d4bb4u: goto label_1d4bb4;
        case 0x1d4bb8u: goto label_1d4bb8;
        case 0x1d4bbcu: goto label_1d4bbc;
        case 0x1d4bc0u: goto label_1d4bc0;
        case 0x1d4bc4u: goto label_1d4bc4;
        case 0x1d4bc8u: goto label_1d4bc8;
        case 0x1d4bccu: goto label_1d4bcc;
        case 0x1d4bd0u: goto label_1d4bd0;
        case 0x1d4bd4u: goto label_1d4bd4;
        case 0x1d4bd8u: goto label_1d4bd8;
        case 0x1d4bdcu: goto label_1d4bdc;
        case 0x1d4be0u: goto label_1d4be0;
        case 0x1d4be4u: goto label_1d4be4;
        case 0x1d4be8u: goto label_1d4be8;
        case 0x1d4becu: goto label_1d4bec;
        case 0x1d4bf0u: goto label_1d4bf0;
        case 0x1d4bf4u: goto label_1d4bf4;
        case 0x1d4bf8u: goto label_1d4bf8;
        case 0x1d4bfcu: goto label_1d4bfc;
        case 0x1d4c00u: goto label_1d4c00;
        case 0x1d4c04u: goto label_1d4c04;
        case 0x1d4c08u: goto label_1d4c08;
        case 0x1d4c0cu: goto label_1d4c0c;
        case 0x1d4c10u: goto label_1d4c10;
        case 0x1d4c14u: goto label_1d4c14;
        case 0x1d4c18u: goto label_1d4c18;
        case 0x1d4c1cu: goto label_1d4c1c;
        case 0x1d4c20u: goto label_1d4c20;
        case 0x1d4c24u: goto label_1d4c24;
        case 0x1d4c28u: goto label_1d4c28;
        case 0x1d4c2cu: goto label_1d4c2c;
        case 0x1d4c30u: goto label_1d4c30;
        case 0x1d4c34u: goto label_1d4c34;
        case 0x1d4c38u: goto label_1d4c38;
        case 0x1d4c3cu: goto label_1d4c3c;
        case 0x1d4c40u: goto label_1d4c40;
        case 0x1d4c44u: goto label_1d4c44;
        case 0x1d4c48u: goto label_1d4c48;
        case 0x1d4c4cu: goto label_1d4c4c;
        case 0x1d4c50u: goto label_1d4c50;
        case 0x1d4c54u: goto label_1d4c54;
        case 0x1d4c58u: goto label_1d4c58;
        case 0x1d4c5cu: goto label_1d4c5c;
        case 0x1d4c60u: goto label_1d4c60;
        case 0x1d4c64u: goto label_1d4c64;
        case 0x1d4c68u: goto label_1d4c68;
        case 0x1d4c6cu: goto label_1d4c6c;
        case 0x1d4c70u: goto label_1d4c70;
        case 0x1d4c74u: goto label_1d4c74;
        case 0x1d4c78u: goto label_1d4c78;
        case 0x1d4c7cu: goto label_1d4c7c;
        case 0x1d4c80u: goto label_1d4c80;
        case 0x1d4c84u: goto label_1d4c84;
        case 0x1d4c88u: goto label_1d4c88;
        case 0x1d4c8cu: goto label_1d4c8c;
        case 0x1d4c90u: goto label_1d4c90;
        case 0x1d4c94u: goto label_1d4c94;
        case 0x1d4c98u: goto label_1d4c98;
        case 0x1d4c9cu: goto label_1d4c9c;
        case 0x1d4ca0u: goto label_1d4ca0;
        case 0x1d4ca4u: goto label_1d4ca4;
        case 0x1d4ca8u: goto label_1d4ca8;
        case 0x1d4cacu: goto label_1d4cac;
        case 0x1d4cb0u: goto label_1d4cb0;
        case 0x1d4cb4u: goto label_1d4cb4;
        case 0x1d4cb8u: goto label_1d4cb8;
        case 0x1d4cbcu: goto label_1d4cbc;
        case 0x1d4cc0u: goto label_1d4cc0;
        case 0x1d4cc4u: goto label_1d4cc4;
        case 0x1d4cc8u: goto label_1d4cc8;
        case 0x1d4cccu: goto label_1d4ccc;
        case 0x1d4cd0u: goto label_1d4cd0;
        case 0x1d4cd4u: goto label_1d4cd4;
        case 0x1d4cd8u: goto label_1d4cd8;
        case 0x1d4cdcu: goto label_1d4cdc;
        case 0x1d4ce0u: goto label_1d4ce0;
        case 0x1d4ce4u: goto label_1d4ce4;
        case 0x1d4ce8u: goto label_1d4ce8;
        case 0x1d4cecu: goto label_1d4cec;
        case 0x1d4cf0u: goto label_1d4cf0;
        case 0x1d4cf4u: goto label_1d4cf4;
        case 0x1d4cf8u: goto label_1d4cf8;
        case 0x1d4cfcu: goto label_1d4cfc;
        case 0x1d4d00u: goto label_1d4d00;
        case 0x1d4d04u: goto label_1d4d04;
        case 0x1d4d08u: goto label_1d4d08;
        case 0x1d4d0cu: goto label_1d4d0c;
        case 0x1d4d10u: goto label_1d4d10;
        case 0x1d4d14u: goto label_1d4d14;
        case 0x1d4d18u: goto label_1d4d18;
        case 0x1d4d1cu: goto label_1d4d1c;
        case 0x1d4d20u: goto label_1d4d20;
        case 0x1d4d24u: goto label_1d4d24;
        case 0x1d4d28u: goto label_1d4d28;
        case 0x1d4d2cu: goto label_1d4d2c;
        case 0x1d4d30u: goto label_1d4d30;
        case 0x1d4d34u: goto label_1d4d34;
        case 0x1d4d38u: goto label_1d4d38;
        case 0x1d4d3cu: goto label_1d4d3c;
        case 0x1d4d40u: goto label_1d4d40;
        case 0x1d4d44u: goto label_1d4d44;
        case 0x1d4d48u: goto label_1d4d48;
        case 0x1d4d4cu: goto label_1d4d4c;
        case 0x1d4d50u: goto label_1d4d50;
        case 0x1d4d54u: goto label_1d4d54;
        case 0x1d4d58u: goto label_1d4d58;
        case 0x1d4d5cu: goto label_1d4d5c;
        case 0x1d4d60u: goto label_1d4d60;
        case 0x1d4d64u: goto label_1d4d64;
        case 0x1d4d68u: goto label_1d4d68;
        case 0x1d4d6cu: goto label_1d4d6c;
        case 0x1d4d70u: goto label_1d4d70;
        case 0x1d4d74u: goto label_1d4d74;
        case 0x1d4d78u: goto label_1d4d78;
        case 0x1d4d7cu: goto label_1d4d7c;
        case 0x1d4d80u: goto label_1d4d80;
        case 0x1d4d84u: goto label_1d4d84;
        case 0x1d4d88u: goto label_1d4d88;
        case 0x1d4d8cu: goto label_1d4d8c;
        case 0x1d4d90u: goto label_1d4d90;
        case 0x1d4d94u: goto label_1d4d94;
        case 0x1d4d98u: goto label_1d4d98;
        case 0x1d4d9cu: goto label_1d4d9c;
        case 0x1d4da0u: goto label_1d4da0;
        case 0x1d4da4u: goto label_1d4da4;
        case 0x1d4da8u: goto label_1d4da8;
        case 0x1d4dacu: goto label_1d4dac;
        case 0x1d4db0u: goto label_1d4db0;
        case 0x1d4db4u: goto label_1d4db4;
        case 0x1d4db8u: goto label_1d4db8;
        case 0x1d4dbcu: goto label_1d4dbc;
        case 0x1d4dc0u: goto label_1d4dc0;
        case 0x1d4dc4u: goto label_1d4dc4;
        case 0x1d4dc8u: goto label_1d4dc8;
        case 0x1d4dccu: goto label_1d4dcc;
        case 0x1d4dd0u: goto label_1d4dd0;
        case 0x1d4dd4u: goto label_1d4dd4;
        case 0x1d4dd8u: goto label_1d4dd8;
        case 0x1d4ddcu: goto label_1d4ddc;
        case 0x1d4de0u: goto label_1d4de0;
        case 0x1d4de4u: goto label_1d4de4;
        case 0x1d4de8u: goto label_1d4de8;
        case 0x1d4decu: goto label_1d4dec;
        case 0x1d4df0u: goto label_1d4df0;
        case 0x1d4df4u: goto label_1d4df4;
        case 0x1d4df8u: goto label_1d4df8;
        case 0x1d4dfcu: goto label_1d4dfc;
        case 0x1d4e00u: goto label_1d4e00;
        case 0x1d4e04u: goto label_1d4e04;
        case 0x1d4e08u: goto label_1d4e08;
        case 0x1d4e0cu: goto label_1d4e0c;
        case 0x1d4e10u: goto label_1d4e10;
        case 0x1d4e14u: goto label_1d4e14;
        case 0x1d4e18u: goto label_1d4e18;
        case 0x1d4e1cu: goto label_1d4e1c;
        case 0x1d4e20u: goto label_1d4e20;
        case 0x1d4e24u: goto label_1d4e24;
        case 0x1d4e28u: goto label_1d4e28;
        case 0x1d4e2cu: goto label_1d4e2c;
        default: break;
    }

    ctx->pc = 0x1d4a50u;

label_1d4a50:
    // 0x1d4a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d4a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d4a54:
    // 0x1d4a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a58:
    // 0x1d4a58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d4a5c:
    // 0x1d4a5c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d4a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1d4a60:
    // 0x1d4a60: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1d4a60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a64:
    // 0x1d4a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d4a68:
    // 0x1d4a68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d4a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d4a6c:
    // 0x1d4a6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d4a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d4a70:
    // 0x1d4a70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d4a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d4a74:
    // 0x1d4a74: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d4a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1d4a78:
    // 0x1d4a78: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d4a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1d4a7c:
    // 0x1d4a7c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d4a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d4a80:
    // 0x1d4a80: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x1d4a80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1d4a84:
    // 0x1d4a84: 0x124000df  beqz        $s2, . + 4 + (0xDF << 2)
label_1d4a88:
    if (ctx->pc == 0x1D4A88u) {
        ctx->pc = 0x1D4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A84u;
        // 0x1d4a88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A8Cu;
        goto label_1d4a8c;
    }
    ctx->pc = 0x1D4A84u;
    {
        const bool branch_taken_0x1d4a84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A84u;
        // 0x1d4a88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a84) {
            ctx->pc = 0x1D4E04u;
            goto label_1d4e04;
        }
    }
    ctx->pc = 0x1D4A8Cu;
label_1d4a8c:
    // 0x1d4a8c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1d4a8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1d4a90:
    // 0x1d4a90: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d4a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1d4a94:
    // 0x1d4a94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d4a98:
    if (ctx->pc == 0x1D4A98u) {
        ctx->pc = 0x1D4A9Cu;
        goto label_1d4a9c;
    }
    ctx->pc = 0x1D4A94u;
    {
        const bool branch_taken_0x1d4a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a94) {
            ctx->pc = 0x1D4AA8u;
            goto label_1d4aa8;
        }
    }
    ctx->pc = 0x1D4A9Cu;
label_1d4a9c:
    // 0x1d4a9c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d4aa0:
    // 0x1d4aa0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1d4aa4:
    if (ctx->pc == 0x1D4AA4u) {
        ctx->pc = 0x1D4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AA0u;
        // 0x1d4aa4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AA8u;
        goto label_1d4aa8;
    }
    ctx->pc = 0x1D4AA0u;
    {
        const bool branch_taken_0x1d4aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AA0u;
        // 0x1d4aa4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aa0) {
            ctx->pc = 0x1D4AC0u;
            goto label_1d4ac0;
        }
    }
    ctx->pc = 0x1D4AA8u;
label_1d4aa8:
    // 0x1d4aa8: 0xc074b22  jal         func_1D2C88
label_1d4aac:
    if (ctx->pc == 0x1D4AACu) {
        ctx->pc = 0x1D4AB0u;
        goto label_1d4ab0;
    }
    ctx->pc = 0x1D4AA8u;
    SET_GPR_U32(ctx, 31, 0x1D4AB0u);
    ctx->pc = 0x1D2C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2C88u, 0x1D4AA8u, 0x1D4AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AB0u;
label_1d4ab0:
    // 0x1d4ab0: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
label_1d4ab4:
    if (ctx->pc == 0x1D4AB4u) {
        ctx->pc = 0x1D4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AB0u;
        // 0x1d4ab4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AB8u;
        goto label_1d4ab8;
    }
    ctx->pc = 0x1D4AB0u;
    {
        const bool branch_taken_0x1d4ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AB0u;
        // 0x1d4ab4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ab0) {
            ctx->pc = 0x1D4E04u;
            goto label_1d4e04;
        }
    }
    ctx->pc = 0x1D4AB8u;
label_1d4ab8:
    // 0x1d4ab8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1d4ab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1d4abc:
    // 0x1d4abc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d4abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1d4ac0:
    // 0x1d4ac0: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1d4ac4:
    // 0x1d4ac4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1d4ac8:
    if (ctx->pc == 0x1D4AC8u) {
        ctx->pc = 0x1D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AC4u;
        // 0x1d4ac8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4ACCu;
        goto label_1d4acc;
    }
    ctx->pc = 0x1D4AC4u;
    {
        const bool branch_taken_0x1d4ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AC4u;
        // 0x1d4ac8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ac4) {
            ctx->pc = 0x1D4B40u;
            goto label_1d4b40;
        }
    }
    ctx->pc = 0x1D4ACCu;
label_1d4acc:
    // 0x1d4acc: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1d4ad0:
    // 0x1d4ad0: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_1d4ad4:
    if (ctx->pc == 0x1D4AD4u) {
        ctx->pc = 0x1D4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AD0u;
        // 0x1d4ad4: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AD8u;
        goto label_1d4ad8;
    }
    ctx->pc = 0x1D4AD0u;
    {
        const bool branch_taken_0x1d4ad0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ad0) {
            ctx->pc = 0x1D4AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4AD0u;
            // 0x1d4ad4: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4AF8u;
            goto label_1d4af8;
        }
    }
    ctx->pc = 0x1D4AD8u;
label_1d4ad8:
    // 0x1d4ad8: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1d4ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1d4adc:
    // 0x1d4adc: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1d4adcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1d4ae0:
    // 0x1d4ae0: 0x0  nop
    ctx->pc = 0x1d4ae0u;
    // NOP
label_1d4ae4:
    // 0x1d4ae4: 0x0  nop
    ctx->pc = 0x1d4ae4u;
    // NOP
label_1d4ae8:
    // 0x1d4ae8: 0x0  nop
    ctx->pc = 0x1d4ae8u;
    // NOP
label_1d4aec:
    // 0x1d4aec: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_1d4af0:
    if (ctx->pc == 0x1D4AF0u) {
        ctx->pc = 0x1D4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AECu;
        // 0x1d4af0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4AF4u;
        goto label_1d4af4;
    }
    ctx->pc = 0x1D4AECu;
    {
        const bool branch_taken_0x1d4aec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AECu;
        // 0x1d4af0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aec) {
            ctx->pc = 0x1D4AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ad8;
        }
    }
    ctx->pc = 0x1D4AF4u;
label_1d4af4:
    // 0x1d4af4: 0x2e430401  sltiu       $v1, $s2, 0x401
    ctx->pc = 0x1d4af4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_1d4af8:
    // 0x1d4af8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d4afc:
    // 0x1d4afc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1d4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d4b00:
    // 0x1d4b00: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d4b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b04:
    // 0x1d4b04: 0x243300b  movn        $a2, $s2, $v1
    ctx->pc = 0x1d4b04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_1d4b08:
    // 0x1d4b08: 0x40f809  jalr        $v0
label_1d4b0c:
    if (ctx->pc == 0x1D4B0Cu) {
        ctx->pc = 0x1D4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B08u;
        // 0x1d4b0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B10u;
        goto label_1d4b10;
    }
    ctx->pc = 0x1D4B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4B10u);
        ctx->pc = 0x1D4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B08u;
        // 0x1d4b0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4B08u, 0x1D4B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4B10u;
label_1d4b10:
    // 0x1d4b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b14:
    // 0x1d4b14: 0x5a0000b8  blezl       $s0, . + 4 + (0xB8 << 2)
label_1d4b18:
    if (ctx->pc == 0x1D4B18u) {
        ctx->pc = 0x1D4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B14u;
        // 0x1d4b18: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B1Cu;
        goto label_1d4b1c;
    }
    ctx->pc = 0x1D4B14u;
    {
        const bool branch_taken_0x1d4b14 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d4b14) {
            ctx->pc = 0x1D4B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4B14u;
            // 0x1d4b18: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4DF8u;
            goto label_1d4df8;
        }
    }
    ctx->pc = 0x1D4B1Cu;
label_1d4b1c:
    // 0x1d4b1c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1d4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1d4b20:
    // 0x1d4b20: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1d4b20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1d4b24:
    // 0x1d4b24: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1d4b24u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1d4b28:
    // 0x1d4b28: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d4b2c:
    // 0x1d4b2c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1d4b30:
    if (ctx->pc == 0x1D4B30u) {
        ctx->pc = 0x1D4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B2Cu;
        // 0x1d4b30: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B34u;
        goto label_1d4b34;
    }
    ctx->pc = 0x1D4B2Cu;
    {
        const bool branch_taken_0x1d4b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B2Cu;
        // 0x1d4b30: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b2c) {
            ctx->pc = 0x1D4AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ad0;
        }
    }
    ctx->pc = 0x1D4B34u;
label_1d4b34:
    // 0x1d4b34: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_1d4b38:
    if (ctx->pc == 0x1D4B38u) {
        ctx->pc = 0x1D4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B34u;
        // 0x1d4b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B3Cu;
        goto label_1d4b3c;
    }
    ctx->pc = 0x1D4B34u;
    {
        const bool branch_taken_0x1d4b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B34u;
        // 0x1d4b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b34) {
            ctx->pc = 0x1D4E04u;
            goto label_1d4e04;
        }
    }
    ctx->pc = 0x1D4B3Cu;
label_1d4b3c:
    // 0x1d4b3c: 0x0  nop
    ctx->pc = 0x1d4b3cu;
    // NOP
label_1d4b40:
    // 0x1d4b40: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d4b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1d4b44:
    // 0x1d4b44: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_1d4b48:
    if (ctx->pc == 0x1D4B48u) {
        ctx->pc = 0x1D4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B44u;
        // 0x1d4b48: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B4Cu;
        goto label_1d4b4c;
    }
    ctx->pc = 0x1D4B44u;
    {
        const bool branch_taken_0x1d4b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B44u;
        // 0x1d4b48: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b44) {
            ctx->pc = 0x1D4C90u;
            goto label_1d4c90;
        }
    }
    ctx->pc = 0x1D4B4Cu;
label_1d4b4c:
    // 0x1d4b4c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d4b50:
    if (ctx->pc == 0x1D4B50u) {
        ctx->pc = 0x1D4B54u;
        goto label_1d4b54;
    }
    ctx->pc = 0x1D4B4Cu;
    {
        const bool branch_taken_0x1d4b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b4c) {
            ctx->pc = 0x1D4B60u;
            goto label_1d4b60;
        }
    }
    ctx->pc = 0x1D4B54u;
label_1d4b54:
    // 0x1d4b54: 0x0  nop
    ctx->pc = 0x1d4b54u;
    // NOP
label_1d4b58:
    // 0x1d4b58: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1d4b58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1d4b5c:
    // 0x1d4b5c: 0x0  nop
    ctx->pc = 0x1d4b5cu;
    // NOP
label_1d4b60:
    // 0x1d4b60: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_1d4b64:
    if (ctx->pc == 0x1D4B64u) {
        ctx->pc = 0x1D4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B60u;
        // 0x1d4b64: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B68u;
        goto label_1d4b68;
    }
    ctx->pc = 0x1D4B60u;
    {
        const bool branch_taken_0x1d4b60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B60u;
        // 0x1d4b64: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b60) {
            ctx->pc = 0x1D4B88u;
            goto label_1d4b88;
        }
    }
    ctx->pc = 0x1D4B68u;
label_1d4b68:
    // 0x1d4b68: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1d4b68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1d4b6c:
    // 0x1d4b6c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1d4b6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1d4b70:
    // 0x1d4b70: 0x0  nop
    ctx->pc = 0x1d4b70u;
    // NOP
label_1d4b74:
    // 0x1d4b74: 0x0  nop
    ctx->pc = 0x1d4b74u;
    // NOP
label_1d4b78:
    // 0x1d4b78: 0x0  nop
    ctx->pc = 0x1d4b78u;
    // NOP
label_1d4b7c:
    // 0x1d4b7c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_1d4b80:
    if (ctx->pc == 0x1D4B80u) {
        ctx->pc = 0x1D4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B7Cu;
        // 0x1d4b80: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B84u;
        goto label_1d4b84;
    }
    ctx->pc = 0x1D4B7Cu;
    {
        const bool branch_taken_0x1d4b7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B7Cu;
        // 0x1d4b80: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b7c) {
            ctx->pc = 0x1D4B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D4B84u;
label_1d4b84:
    // 0x1d4b84: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1d4b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1d4b88:
    // 0x1d4b88: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d4b8c:
    if (ctx->pc == 0x1D4B8Cu) {
        ctx->pc = 0x1D4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B88u;
        // 0x1d4b8c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B90u;
        goto label_1d4b90;
    }
    ctx->pc = 0x1D4B88u;
    {
        const bool branch_taken_0x1d4b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B88u;
        // 0x1d4b8c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b88) {
            ctx->pc = 0x1D4BC0u;
            goto label_1d4bc0;
        }
    }
    ctx->pc = 0x1D4B90u;
label_1d4b90:
    // 0x1d4b90: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1d4b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1d4b94:
    // 0x1d4b94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4b98:
    // 0x1d4b98: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x1d4b98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_1d4b9c:
    // 0x1d4b9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ba0:
    // 0x1d4ba0: 0xc075487  jal         func_1D521C
label_1d4ba4:
    if (ctx->pc == 0x1D4BA4u) {
        ctx->pc = 0x1D4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BA0u;
        // 0x1d4ba4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BA8u;
        goto label_1d4ba8;
    }
    ctx->pc = 0x1D4BA0u;
    SET_GPR_U32(ctx, 31, 0x1D4BA8u);
    ctx->pc = 0x1D4BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BA0u;
    // 0x1d4ba4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D521Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D521Cu, 0x1D4BA0u, 0x1D4BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BA8u;
label_1d4ba8:
    // 0x1d4ba8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d4bac:
    // 0x1d4bac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4bb0:
    // 0x1d4bb0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d4bb4:
    // 0x1d4bb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d4bb8:
    // 0x1d4bb8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1d4bbc:
    if (ctx->pc == 0x1D4BBCu) {
        ctx->pc = 0x1D4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BB8u;
        // 0x1d4bbc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BC0u;
        goto label_1d4bc0;
    }
    ctx->pc = 0x1D4BB8u;
    {
        const bool branch_taken_0x1d4bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BB8u;
        // 0x1d4bbc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bb8) {
            ctx->pc = 0x1D4C64u;
            goto label_1d4c64;
        }
    }
    ctx->pc = 0x1D4BC0u;
label_1d4bc0:
    // 0x1d4bc0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4bc4:
    // 0x1d4bc4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d4bc8:
    // 0x1d4bc8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1d4bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d4bcc:
    // 0x1d4bcc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1d4bd0:
    if (ctx->pc == 0x1D4BD0u) {
        ctx->pc = 0x1D4BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BCCu;
        // 0x1d4bd0: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BD4u;
        goto label_1d4bd4;
    }
    ctx->pc = 0x1D4BCCu;
    {
        const bool branch_taken_0x1d4bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4bcc) {
            ctx->pc = 0x1D4BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4BCCu;
            // 0x1d4bd0: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C10u;
            goto label_1d4c10;
        }
    }
    ctx->pc = 0x1D4BD4u;
label_1d4bd4:
    // 0x1d4bd4: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1d4bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1d4bd8:
    // 0x1d4bd8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1d4bdc:
    if (ctx->pc == 0x1D4BDCu) {
        ctx->pc = 0x1D4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BD8u;
        // 0x1d4bdc: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BE0u;
        goto label_1d4be0;
    }
    ctx->pc = 0x1D4BD8u;
    {
        const bool branch_taken_0x1d4bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4bd8) {
            ctx->pc = 0x1D4BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4BD8u;
            // 0x1d4bdc: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C10u;
            goto label_1d4c10;
        }
    }
    ctx->pc = 0x1D4BE0u;
label_1d4be0:
    // 0x1d4be0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4be4:
    // 0x1d4be4: 0xc075487  jal         func_1D521C
label_1d4be8:
    if (ctx->pc == 0x1D4BE8u) {
        ctx->pc = 0x1D4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BE4u;
        // 0x1d4be8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BECu;
        goto label_1d4bec;
    }
    ctx->pc = 0x1D4BE4u;
    SET_GPR_U32(ctx, 31, 0x1D4BECu);
    ctx->pc = 0x1D4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BE4u;
    // 0x1d4be8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D521Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D521Cu, 0x1D4BE4u, 0x1D4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BECu;
label_1d4bec:
    // 0x1d4bec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d4becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4bf0:
    // 0x1d4bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bf4:
    // 0x1d4bf4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d4bf8:
    // 0x1d4bf8: 0xc07508c  jal         func_1D4230
label_1d4bfc:
    if (ctx->pc == 0x1D4BFCu) {
        ctx->pc = 0x1D4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BF8u;
        // 0x1d4bfc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C00u;
        goto label_1d4c00;
    }
    ctx->pc = 0x1D4BF8u;
    SET_GPR_U32(ctx, 31, 0x1D4C00u);
    ctx->pc = 0x1D4BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BF8u;
    // 0x1d4bfc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D4BF8u, 0x1D4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C00u;
label_1d4c00:
    // 0x1d4c00: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_1d4c04:
    if (ctx->pc == 0x1D4C04u) {
        ctx->pc = 0x1D4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C00u;
        // 0x1d4c04: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C08u;
        goto label_1d4c08;
    }
    ctx->pc = 0x1D4C00u;
    {
        const bool branch_taken_0x1d4c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c00) {
            ctx->pc = 0x1D4C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C00u;
            // 0x1d4c04: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C70u;
            goto label_1d4c70;
        }
    }
    ctx->pc = 0x1D4C08u;
label_1d4c08:
    // 0x1d4c08: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1d4c0c:
    if (ctx->pc == 0x1D4C0Cu) {
        ctx->pc = 0x1D4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C08u;
        // 0x1d4c0c: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C10u;
        goto label_1d4c10;
    }
    ctx->pc = 0x1D4C08u;
    {
        const bool branch_taken_0x1d4c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C08u;
        // 0x1d4c0c: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c08) {
            ctx->pc = 0x1D4DF8u;
            goto label_1d4df8;
        }
    }
    ctx->pc = 0x1D4C10u;
label_1d4c10:
    // 0x1d4c10: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1d4c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1d4c14:
    // 0x1d4c14: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1d4c18:
    if (ctx->pc == 0x1D4C18u) {
        ctx->pc = 0x1D4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C14u;
        // 0x1d4c18: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C1Cu;
        goto label_1d4c1c;
    }
    ctx->pc = 0x1D4C14u;
    {
        const bool branch_taken_0x1d4c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c14) {
            ctx->pc = 0x1D4C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C14u;
            // 0x1d4c18: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C48u;
            goto label_1d4c48;
        }
    }
    ctx->pc = 0x1D4C1Cu;
label_1d4c1c:
    // 0x1d4c1c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d4c20:
    // 0x1d4c20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d4c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c24:
    // 0x1d4c24: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1d4c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d4c28:
    // 0x1d4c28: 0x40f809  jalr        $v0
label_1d4c2c:
    if (ctx->pc == 0x1D4C2Cu) {
        ctx->pc = 0x1D4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C28u;
        // 0x1d4c2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C30u;
        goto label_1d4c30;
    }
    ctx->pc = 0x1D4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4C30u);
        ctx->pc = 0x1D4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C28u;
        // 0x1d4c2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4C28u, 0x1D4C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4C30u;
label_1d4c30:
    // 0x1d4c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c34:
    // 0x1d4c34: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_1d4c38:
    if (ctx->pc == 0x1D4C38u) {
        ctx->pc = 0x1D4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C34u;
        // 0x1d4c38: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C3Cu;
        goto label_1d4c3c;
    }
    ctx->pc = 0x1D4C34u;
    {
        const bool branch_taken_0x1d4c34 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1d4c34) {
            ctx->pc = 0x1D4C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C34u;
            // 0x1d4c38: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C70u;
            goto label_1d4c70;
        }
    }
    ctx->pc = 0x1D4C3Cu;
label_1d4c3c:
    // 0x1d4c3c: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1d4c40:
    if (ctx->pc == 0x1D4C40u) {
        ctx->pc = 0x1D4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C3Cu;
        // 0x1d4c40: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C44u;
        goto label_1d4c44;
    }
    ctx->pc = 0x1D4C3Cu;
    {
        const bool branch_taken_0x1d4c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C3Cu;
        // 0x1d4c40: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c3c) {
            ctx->pc = 0x1D4DF8u;
            goto label_1d4df8;
        }
    }
    ctx->pc = 0x1D4C44u;
label_1d4c44:
    // 0x1d4c44: 0x0  nop
    ctx->pc = 0x1d4c44u;
    // NOP
label_1d4c48:
    // 0x1d4c48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c4c:
    // 0x1d4c4c: 0xc075487  jal         func_1D521C
label_1d4c50:
    if (ctx->pc == 0x1D4C50u) {
        ctx->pc = 0x1D4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C4Cu;
        // 0x1d4c50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C54u;
        goto label_1d4c54;
    }
    ctx->pc = 0x1D4C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C54u);
    ctx->pc = 0x1D4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C4Cu;
    // 0x1d4c50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D521Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D521Cu, 0x1D4C4Cu, 0x1D4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C54u;
label_1d4c54:
    // 0x1d4c54: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d4c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d4c58:
    // 0x1d4c58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4c5c:
    // 0x1d4c5c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d4c60:
    // 0x1d4c60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d4c64:
    // 0x1d4c64: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1d4c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1d4c68:
    // 0x1d4c68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d4c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d4c6c:
    // 0x1d4c6c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1d4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1d4c70:
    // 0x1d4c70: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1d4c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1d4c74:
    // 0x1d4c74: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1d4c74u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1d4c78:
    // 0x1d4c78: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d4c7c:
    // 0x1d4c7c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_1d4c80:
    if (ctx->pc == 0x1D4C80u) {
        ctx->pc = 0x1D4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C7Cu;
        // 0x1d4c80: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C84u;
        goto label_1d4c84;
    }
    ctx->pc = 0x1D4C7Cu;
    {
        const bool branch_taken_0x1d4c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C7Cu;
        // 0x1d4c80: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c7c) {
            ctx->pc = 0x1D4B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4b58;
        }
    }
    ctx->pc = 0x1D4C84u;
label_1d4c84:
    // 0x1d4c84: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1d4c88:
    if (ctx->pc == 0x1D4C88u) {
        ctx->pc = 0x1D4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C84u;
        // 0x1d4c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C8Cu;
        goto label_1d4c8c;
    }
    ctx->pc = 0x1D4C84u;
    {
        const bool branch_taken_0x1d4c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C84u;
        // 0x1d4c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c84) {
            ctx->pc = 0x1D4E04u;
            goto label_1d4e04;
        }
    }
    ctx->pc = 0x1D4C8Cu;
label_1d4c8c:
    // 0x1d4c8c: 0x0  nop
    ctx->pc = 0x1d4c8cu;
    // NOP
label_1d4c90:
    // 0x1d4c90: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1d4c94:
    if (ctx->pc == 0x1D4C94u) {
        ctx->pc = 0x1D4C98u;
        goto label_1d4c98;
    }
    ctx->pc = 0x1D4C90u;
    {
        const bool branch_taken_0x1d4c90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c90) {
            ctx->pc = 0x1D4CBCu;
            goto label_1d4cbc;
        }
    }
    ctx->pc = 0x1D4C98u;
label_1d4c98:
    // 0x1d4c98: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d4c98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c9c:
    // 0x1d4c9c: 0x0  nop
    ctx->pc = 0x1d4c9cu;
    // NOP
label_1d4ca0:
    // 0x1d4ca0: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1d4ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1d4ca4:
    // 0x1d4ca4: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1d4ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1d4ca8:
    // 0x1d4ca8: 0x0  nop
    ctx->pc = 0x1d4ca8u;
    // NOP
label_1d4cac:
    // 0x1d4cac: 0x0  nop
    ctx->pc = 0x1d4cacu;
    // NOP
label_1d4cb0:
    // 0x1d4cb0: 0x0  nop
    ctx->pc = 0x1d4cb0u;
    // NOP
label_1d4cb4:
    // 0x1d4cb4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_1d4cb8:
    if (ctx->pc == 0x1D4CB8u) {
        ctx->pc = 0x1D4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB4u;
        // 0x1d4cb8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CBCu;
        goto label_1d4cbc;
    }
    ctx->pc = 0x1D4CB4u;
    {
        const bool branch_taken_0x1d4cb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB4u;
        // 0x1d4cb8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cb4) {
            ctx->pc = 0x1D4CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ca0;
        }
    }
    ctx->pc = 0x1D4CBCu;
label_1d4cbc:
    // 0x1d4cbc: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_1d4cc0:
    if (ctx->pc == 0x1D4CC0u) {
        ctx->pc = 0x1D4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CBCu;
        // 0x1d4cc0: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CC4u;
        goto label_1d4cc4;
    }
    ctx->pc = 0x1D4CBCu;
    {
        const bool branch_taken_0x1d4cbc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4cbc) {
            ctx->pc = 0x1D4CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4CBCu;
            // 0x1d4cc0: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4CF4u;
            goto label_1d4cf4;
        }
    }
    ctx->pc = 0x1D4CC4u;
label_1d4cc4:
    // 0x1d4cc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4cc8:
    // 0x1d4cc8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d4cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d4ccc:
    // 0x1d4ccc: 0xc07544f  jal         func_1D513C
label_1d4cd0:
    if (ctx->pc == 0x1D4CD0u) {
        ctx->pc = 0x1D4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CCCu;
        // 0x1d4cd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CD4u;
        goto label_1d4cd4;
    }
    ctx->pc = 0x1D4CCCu;
    SET_GPR_U32(ctx, 31, 0x1D4CD4u);
    ctx->pc = 0x1D4CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4CCCu;
    // 0x1d4cd0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D513Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D513Cu, 0x1D4CCCu, 0x1D4CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CD4u;
label_1d4cd4:
    // 0x1d4cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d4cd8:
    if (ctx->pc == 0x1D4CD8u) {
        ctx->pc = 0x1D4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CD4u;
        // 0x1d4cd8: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CDCu;
        goto label_1d4cdc;
    }
    ctx->pc = 0x1D4CD4u;
    {
        const bool branch_taken_0x1d4cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CD4u;
        // 0x1d4cd8: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cd4) {
            ctx->pc = 0x1D4CE8u;
            goto label_1d4ce8;
        }
    }
    ctx->pc = 0x1D4CDCu;
label_1d4cdc:
    // 0x1d4cdc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d4ce0:
    if (ctx->pc == 0x1D4CE0u) {
        ctx->pc = 0x1D4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CDCu;
        // 0x1d4ce0: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CE4u;
        goto label_1d4ce4;
    }
    ctx->pc = 0x1D4CDCu;
    {
        const bool branch_taken_0x1d4cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CDCu;
        // 0x1d4ce0: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cdc) {
            ctx->pc = 0x1D4CECu;
            goto label_1d4cec;
        }
    }
    ctx->pc = 0x1D4CE4u;
label_1d4ce4:
    // 0x1d4ce4: 0x0  nop
    ctx->pc = 0x1d4ce4u;
    // NOP
label_1d4ce8:
    // 0x1d4ce8: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x1d4ce8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d4cec:
    // 0x1d4cec: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d4cecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4cf0:
    // 0x1d4cf0: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1d4cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4cf4:
    // 0x1d4cf4: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x1d4cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_1d4cf8:
    // 0x1d4cf8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d4cfc:
    // 0x1d4cfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d4cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d00:
    // 0x1d4d00: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d4d04:
    // 0x1d4d04: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x1d4d04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_1d4d08:
    // 0x1d4d08: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x1d4d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d4d0c:
    // 0x1d4d0c: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x1d4d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1d4d10:
    // 0x1d4d10: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1d4d14:
    if (ctx->pc == 0x1D4D14u) {
        ctx->pc = 0x1D4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D10u;
        // 0x1d4d14: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D18u;
        goto label_1d4d18;
    }
    ctx->pc = 0x1D4D10u;
    {
        const bool branch_taken_0x1d4d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D10u;
        // 0x1d4d14: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d10) {
            ctx->pc = 0x1D4D58u;
            goto label_1d4d58;
        }
    }
    ctx->pc = 0x1D4D18u;
label_1d4d18:
    // 0x1d4d18: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1d4d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1d4d1c:
    // 0x1d4d1c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1d4d20:
    if (ctx->pc == 0x1D4D20u) {
        ctx->pc = 0x1D4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D1Cu;
        // 0x1d4d20: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D24u;
        goto label_1d4d24;
    }
    ctx->pc = 0x1D4D1Cu;
    {
        const bool branch_taken_0x1d4d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d1c) {
            ctx->pc = 0x1D4D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4D1Cu;
            // 0x1d4d20: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D5Cu;
            goto label_1d4d5c;
        }
    }
    ctx->pc = 0x1D4D24u;
label_1d4d24:
    // 0x1d4d24: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1d4d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d28:
    // 0x1d4d28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d2c:
    // 0x1d4d2c: 0xc075487  jal         func_1D521C
label_1d4d30:
    if (ctx->pc == 0x1D4D30u) {
        ctx->pc = 0x1D4D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D2Cu;
        // 0x1d4d30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D34u;
        goto label_1d4d34;
    }
    ctx->pc = 0x1D4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D4D34u);
    ctx->pc = 0x1D4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D2Cu;
    // 0x1d4d30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D521Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D521Cu, 0x1D4D2Cu, 0x1D4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D34u;
label_1d4d34:
    // 0x1d4d34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4d38:
    // 0x1d4d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d3c:
    // 0x1d4d3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d4d40:
    // 0x1d4d40: 0xc07508c  jal         func_1D4230
label_1d4d44:
    if (ctx->pc == 0x1D4D44u) {
        ctx->pc = 0x1D4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D40u;
        // 0x1d4d44: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D48u;
        goto label_1d4d48;
    }
    ctx->pc = 0x1D4D40u;
    SET_GPR_U32(ctx, 31, 0x1D4D48u);
    ctx->pc = 0x1D4D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D40u;
    // 0x1d4d44: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D4D40u, 0x1D4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D48u;
label_1d4d48:
    // 0x1d4d48: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1d4d4c:
    if (ctx->pc == 0x1D4D4Cu) {
        ctx->pc = 0x1D4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D48u;
        // 0x1d4d4c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D50u;
        goto label_1d4d50;
    }
    ctx->pc = 0x1D4D48u;
    {
        const bool branch_taken_0x1d4d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D48u;
        // 0x1d4d4c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d48) {
            ctx->pc = 0x1D4DBCu;
            goto label_1d4dbc;
        }
    }
    ctx->pc = 0x1D4D50u;
label_1d4d50:
    // 0x1d4d50: 0x10000029  b           . + 4 + (0x29 << 2)
label_1d4d54:
    if (ctx->pc == 0x1D4D54u) {
        ctx->pc = 0x1D4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D50u;
        // 0x1d4d54: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D58u;
        goto label_1d4d58;
    }
    ctx->pc = 0x1D4D50u;
    {
        const bool branch_taken_0x1d4d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D50u;
        // 0x1d4d54: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d50) {
            ctx->pc = 0x1D4DF8u;
            goto label_1d4df8;
        }
    }
    ctx->pc = 0x1D4D58u;
label_1d4d58:
    // 0x1d4d58: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d4d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d5c:
    // 0x1d4d5c: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1d4d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d4d60:
    // 0x1d4d60: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1d4d64:
    if (ctx->pc == 0x1D4D64u) {
        ctx->pc = 0x1D4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D60u;
        // 0x1d4d64: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D68u;
        goto label_1d4d68;
    }
    ctx->pc = 0x1D4D60u;
    {
        const bool branch_taken_0x1d4d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d60) {
            ctx->pc = 0x1D4D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4D60u;
            // 0x1d4d64: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4D90u;
            goto label_1d4d90;
        }
    }
    ctx->pc = 0x1D4D68u;
label_1d4d68:
    // 0x1d4d68: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d4d6c:
    // 0x1d4d6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d4d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d70:
    // 0x1d4d70: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1d4d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d4d74:
    // 0x1d4d74: 0x40f809  jalr        $v0
label_1d4d78:
    if (ctx->pc == 0x1D4D78u) {
        ctx->pc = 0x1D4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D74u;
        // 0x1d4d78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D7Cu;
        goto label_1d4d7c;
    }
    ctx->pc = 0x1D4D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4D7Cu);
        ctx->pc = 0x1D4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D74u;
        // 0x1d4d78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4D74u, 0x1D4D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4D7Cu;
label_1d4d7c:
    // 0x1d4d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d80:
    // 0x1d4d80: 0x1e00000e  bgtz        $s0, . + 4 + (0xE << 2)
label_1d4d84:
    if (ctx->pc == 0x1D4D84u) {
        ctx->pc = 0x1D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D80u;
        // 0x1d4d84: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D88u;
        goto label_1d4d88;
    }
    ctx->pc = 0x1D4D80u;
    {
        const bool branch_taken_0x1d4d80 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1D4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D80u;
        // 0x1d4d84: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d80) {
            ctx->pc = 0x1D4DBCu;
            goto label_1d4dbc;
        }
    }
    ctx->pc = 0x1D4D88u;
label_1d4d88:
    // 0x1d4d88: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1d4d8c:
    if (ctx->pc == 0x1D4D8Cu) {
        ctx->pc = 0x1D4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D88u;
        // 0x1d4d8c: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D90u;
        goto label_1d4d90;
    }
    ctx->pc = 0x1D4D88u;
    {
        const bool branch_taken_0x1d4d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D88u;
        // 0x1d4d8c: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d88) {
            ctx->pc = 0x1D4DF8u;
            goto label_1d4df8;
        }
    }
    ctx->pc = 0x1D4D90u;
label_1d4d90:
    // 0x1d4d90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d94:
    // 0x1d4d94: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1d4d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d98:
    // 0x1d4d98: 0xc075487  jal         func_1D521C
label_1d4d9c:
    if (ctx->pc == 0x1D4D9Cu) {
        ctx->pc = 0x1D4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D98u;
        // 0x1d4d9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DA0u;
        goto label_1d4da0;
    }
    ctx->pc = 0x1D4D98u;
    SET_GPR_U32(ctx, 31, 0x1D4DA0u);
    ctx->pc = 0x1D4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D98u;
    // 0x1d4d9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D521Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D521Cu, 0x1D4D98u, 0x1D4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DA0u;
label_1d4da0:
    // 0x1d4da0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d4da4:
    // 0x1d4da4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4da8:
    // 0x1d4da8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d4dac:
    // 0x1d4dac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d4db0:
    // 0x1d4db0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1d4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1d4db4:
    // 0x1d4db4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d4db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d4db8:
    // 0x1d4db8: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x1d4db8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1d4dbc:
    // 0x1d4dbc: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
label_1d4dc0:
    if (ctx->pc == 0x1D4DC0u) {
        ctx->pc = 0x1D4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DBCu;
        // 0x1d4dc0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DC4u;
        goto label_1d4dc4;
    }
    ctx->pc = 0x1D4DBCu;
    {
        const bool branch_taken_0x1d4dbc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4dbc) {
            ctx->pc = 0x1D4DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4DBCu;
            // 0x1d4dc0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4DDCu;
            goto label_1d4ddc;
        }
    }
    ctx->pc = 0x1D4DC4u;
label_1d4dc4:
    // 0x1d4dc4: 0xc07508c  jal         func_1D4230
label_1d4dc8:
    if (ctx->pc == 0x1D4DC8u) {
        ctx->pc = 0x1D4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DC4u;
        // 0x1d4dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DCCu;
        goto label_1d4dcc;
    }
    ctx->pc = 0x1D4DC4u;
    SET_GPR_U32(ctx, 31, 0x1D4DCCu);
    ctx->pc = 0x1D4DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4DC4u;
    // 0x1d4dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D4DC4u, 0x1D4DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DCCu;
label_1d4dcc:
    // 0x1d4dcc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1d4dd0:
    if (ctx->pc == 0x1D4DD0u) {
        ctx->pc = 0x1D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DCCu;
        // 0x1d4dd0: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DD4u;
        goto label_1d4dd4;
    }
    ctx->pc = 0x1D4DCCu;
    {
        const bool branch_taken_0x1d4dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4dcc) {
            ctx->pc = 0x1D4DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4DCCu;
            // 0x1d4dd0: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4DF8u;
            goto label_1d4df8;
        }
    }
    ctx->pc = 0x1D4DD4u;
label_1d4dd4:
    // 0x1d4dd4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d4dd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4dd8:
    // 0x1d4dd8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1d4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1d4ddc:
    // 0x1d4ddc: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1d4ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1d4de0:
    // 0x1d4de0: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1d4de0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1d4de4:
    // 0x1d4de4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d4de8:
    // 0x1d4de8: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_1d4dec:
    if (ctx->pc == 0x1D4DECu) {
        ctx->pc = 0x1D4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DE8u;
        // 0x1d4dec: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DF0u;
        goto label_1d4df0;
    }
    ctx->pc = 0x1D4DE8u;
    {
        const bool branch_taken_0x1d4de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DE8u;
        // 0x1d4dec: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4de8) {
            ctx->pc = 0x1D4C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4c90;
        }
    }
    ctx->pc = 0x1D4DF0u;
label_1d4df0:
    // 0x1d4df0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d4df4:
    if (ctx->pc == 0x1D4DF4u) {
        ctx->pc = 0x1D4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DF0u;
        // 0x1d4df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DF8u;
        goto label_1d4df8;
    }
    ctx->pc = 0x1D4DF0u;
    {
        const bool branch_taken_0x1d4df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DF0u;
        // 0x1d4df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4df0) {
            ctx->pc = 0x1D4E04u;
            goto label_1d4e04;
        }
    }
    ctx->pc = 0x1D4DF8u;
label_1d4df8:
    // 0x1d4df8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4dfc:
    // 0x1d4dfc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1d4dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1d4e00:
    // 0x1d4e00: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x1d4e00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_1d4e04:
    // 0x1d4e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4e08:
    // 0x1d4e08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d4e0c:
    // 0x1d4e0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4e0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4e10:
    // 0x1d4e10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d4e10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d4e14:
    // 0x1d4e14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d4e14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4e18:
    // 0x1d4e18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d4e18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d4e1c:
    // 0x1d4e1c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d4e1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d4e20:
    // 0x1d4e20: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d4e20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d4e24:
    // 0x1d4e24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d4e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d4e28:
    // 0x1d4e28: 0x3e00008  jr          $ra
label_1d4e2c:
    if (ctx->pc == 0x1D4E2Cu) {
        ctx->pc = 0x1D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E28u;
        // 0x1d4e2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E30u;
        goto label_fallthrough_0x1d4e28;
    }
    ctx->pc = 0x1D4E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E28u;
        // 0x1d4e2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d4e28:
    ctx->pc = 0x1D4E30u;
}
