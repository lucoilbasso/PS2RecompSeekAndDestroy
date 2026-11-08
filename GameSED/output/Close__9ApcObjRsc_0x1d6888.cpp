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

// Function: Close__9ApcObjRsc
// Address: 0x1d6888 - 0x1d6c48
void Close__9ApcObjRsc_0x1d6888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Close__9ApcObjRsc_0x1d6888");
#endif

    switch (ctx->pc) {
        case 0x1d6888u: goto label_1d6888;
        case 0x1d688cu: goto label_1d688c;
        case 0x1d6890u: goto label_1d6890;
        case 0x1d6894u: goto label_1d6894;
        case 0x1d6898u: goto label_1d6898;
        case 0x1d689cu: goto label_1d689c;
        case 0x1d68a0u: goto label_1d68a0;
        case 0x1d68a4u: goto label_1d68a4;
        case 0x1d68a8u: goto label_1d68a8;
        case 0x1d68acu: goto label_1d68ac;
        case 0x1d68b0u: goto label_1d68b0;
        case 0x1d68b4u: goto label_1d68b4;
        case 0x1d68b8u: goto label_1d68b8;
        case 0x1d68bcu: goto label_1d68bc;
        case 0x1d68c0u: goto label_1d68c0;
        case 0x1d68c4u: goto label_1d68c4;
        case 0x1d68c8u: goto label_1d68c8;
        case 0x1d68ccu: goto label_1d68cc;
        case 0x1d68d0u: goto label_1d68d0;
        case 0x1d68d4u: goto label_1d68d4;
        case 0x1d68d8u: goto label_1d68d8;
        case 0x1d68dcu: goto label_1d68dc;
        case 0x1d68e0u: goto label_1d68e0;
        case 0x1d68e4u: goto label_1d68e4;
        case 0x1d68e8u: goto label_1d68e8;
        case 0x1d68ecu: goto label_1d68ec;
        case 0x1d68f0u: goto label_1d68f0;
        case 0x1d68f4u: goto label_1d68f4;
        case 0x1d68f8u: goto label_1d68f8;
        case 0x1d68fcu: goto label_1d68fc;
        case 0x1d6900u: goto label_1d6900;
        case 0x1d6904u: goto label_1d6904;
        case 0x1d6908u: goto label_1d6908;
        case 0x1d690cu: goto label_1d690c;
        case 0x1d6910u: goto label_1d6910;
        case 0x1d6914u: goto label_1d6914;
        case 0x1d6918u: goto label_1d6918;
        case 0x1d691cu: goto label_1d691c;
        case 0x1d6920u: goto label_1d6920;
        case 0x1d6924u: goto label_1d6924;
        case 0x1d6928u: goto label_1d6928;
        case 0x1d692cu: goto label_1d692c;
        case 0x1d6930u: goto label_1d6930;
        case 0x1d6934u: goto label_1d6934;
        case 0x1d6938u: goto label_1d6938;
        case 0x1d693cu: goto label_1d693c;
        case 0x1d6940u: goto label_1d6940;
        case 0x1d6944u: goto label_1d6944;
        case 0x1d6948u: goto label_1d6948;
        case 0x1d694cu: goto label_1d694c;
        case 0x1d6950u: goto label_1d6950;
        case 0x1d6954u: goto label_1d6954;
        case 0x1d6958u: goto label_1d6958;
        case 0x1d695cu: goto label_1d695c;
        case 0x1d6960u: goto label_1d6960;
        case 0x1d6964u: goto label_1d6964;
        case 0x1d6968u: goto label_1d6968;
        case 0x1d696cu: goto label_1d696c;
        case 0x1d6970u: goto label_1d6970;
        case 0x1d6974u: goto label_1d6974;
        case 0x1d6978u: goto label_1d6978;
        case 0x1d697cu: goto label_1d697c;
        case 0x1d6980u: goto label_1d6980;
        case 0x1d6984u: goto label_1d6984;
        case 0x1d6988u: goto label_1d6988;
        case 0x1d698cu: goto label_1d698c;
        case 0x1d6990u: goto label_1d6990;
        case 0x1d6994u: goto label_1d6994;
        case 0x1d6998u: goto label_1d6998;
        case 0x1d699cu: goto label_1d699c;
        case 0x1d69a0u: goto label_1d69a0;
        case 0x1d69a4u: goto label_1d69a4;
        case 0x1d69a8u: goto label_1d69a8;
        case 0x1d69acu: goto label_1d69ac;
        case 0x1d69b0u: goto label_1d69b0;
        case 0x1d69b4u: goto label_1d69b4;
        case 0x1d69b8u: goto label_1d69b8;
        case 0x1d69bcu: goto label_1d69bc;
        case 0x1d69c0u: goto label_1d69c0;
        case 0x1d69c4u: goto label_1d69c4;
        case 0x1d69c8u: goto label_1d69c8;
        case 0x1d69ccu: goto label_1d69cc;
        case 0x1d69d0u: goto label_1d69d0;
        case 0x1d69d4u: goto label_1d69d4;
        case 0x1d69d8u: goto label_1d69d8;
        case 0x1d69dcu: goto label_1d69dc;
        case 0x1d69e0u: goto label_1d69e0;
        case 0x1d69e4u: goto label_1d69e4;
        case 0x1d69e8u: goto label_1d69e8;
        case 0x1d69ecu: goto label_1d69ec;
        case 0x1d69f0u: goto label_1d69f0;
        case 0x1d69f4u: goto label_1d69f4;
        case 0x1d69f8u: goto label_1d69f8;
        case 0x1d69fcu: goto label_1d69fc;
        case 0x1d6a00u: goto label_1d6a00;
        case 0x1d6a04u: goto label_1d6a04;
        case 0x1d6a08u: goto label_1d6a08;
        case 0x1d6a0cu: goto label_1d6a0c;
        case 0x1d6a10u: goto label_1d6a10;
        case 0x1d6a14u: goto label_1d6a14;
        case 0x1d6a18u: goto label_1d6a18;
        case 0x1d6a1cu: goto label_1d6a1c;
        case 0x1d6a20u: goto label_1d6a20;
        case 0x1d6a24u: goto label_1d6a24;
        case 0x1d6a28u: goto label_1d6a28;
        case 0x1d6a2cu: goto label_1d6a2c;
        case 0x1d6a30u: goto label_1d6a30;
        case 0x1d6a34u: goto label_1d6a34;
        case 0x1d6a38u: goto label_1d6a38;
        case 0x1d6a3cu: goto label_1d6a3c;
        case 0x1d6a40u: goto label_1d6a40;
        case 0x1d6a44u: goto label_1d6a44;
        case 0x1d6a48u: goto label_1d6a48;
        case 0x1d6a4cu: goto label_1d6a4c;
        case 0x1d6a50u: goto label_1d6a50;
        case 0x1d6a54u: goto label_1d6a54;
        case 0x1d6a58u: goto label_1d6a58;
        case 0x1d6a5cu: goto label_1d6a5c;
        case 0x1d6a60u: goto label_1d6a60;
        case 0x1d6a64u: goto label_1d6a64;
        case 0x1d6a68u: goto label_1d6a68;
        case 0x1d6a6cu: goto label_1d6a6c;
        case 0x1d6a70u: goto label_1d6a70;
        case 0x1d6a74u: goto label_1d6a74;
        case 0x1d6a78u: goto label_1d6a78;
        case 0x1d6a7cu: goto label_1d6a7c;
        case 0x1d6a80u: goto label_1d6a80;
        case 0x1d6a84u: goto label_1d6a84;
        case 0x1d6a88u: goto label_1d6a88;
        case 0x1d6a8cu: goto label_1d6a8c;
        case 0x1d6a90u: goto label_1d6a90;
        case 0x1d6a94u: goto label_1d6a94;
        case 0x1d6a98u: goto label_1d6a98;
        case 0x1d6a9cu: goto label_1d6a9c;
        case 0x1d6aa0u: goto label_1d6aa0;
        case 0x1d6aa4u: goto label_1d6aa4;
        case 0x1d6aa8u: goto label_1d6aa8;
        case 0x1d6aacu: goto label_1d6aac;
        case 0x1d6ab0u: goto label_1d6ab0;
        case 0x1d6ab4u: goto label_1d6ab4;
        case 0x1d6ab8u: goto label_1d6ab8;
        case 0x1d6abcu: goto label_1d6abc;
        case 0x1d6ac0u: goto label_1d6ac0;
        case 0x1d6ac4u: goto label_1d6ac4;
        case 0x1d6ac8u: goto label_1d6ac8;
        case 0x1d6accu: goto label_1d6acc;
        case 0x1d6ad0u: goto label_1d6ad0;
        case 0x1d6ad4u: goto label_1d6ad4;
        case 0x1d6ad8u: goto label_1d6ad8;
        case 0x1d6adcu: goto label_1d6adc;
        case 0x1d6ae0u: goto label_1d6ae0;
        case 0x1d6ae4u: goto label_1d6ae4;
        case 0x1d6ae8u: goto label_1d6ae8;
        case 0x1d6aecu: goto label_1d6aec;
        case 0x1d6af0u: goto label_1d6af0;
        case 0x1d6af4u: goto label_1d6af4;
        case 0x1d6af8u: goto label_1d6af8;
        case 0x1d6afcu: goto label_1d6afc;
        case 0x1d6b00u: goto label_1d6b00;
        case 0x1d6b04u: goto label_1d6b04;
        case 0x1d6b08u: goto label_1d6b08;
        case 0x1d6b0cu: goto label_1d6b0c;
        case 0x1d6b10u: goto label_1d6b10;
        case 0x1d6b14u: goto label_1d6b14;
        case 0x1d6b18u: goto label_1d6b18;
        case 0x1d6b1cu: goto label_1d6b1c;
        case 0x1d6b20u: goto label_1d6b20;
        case 0x1d6b24u: goto label_1d6b24;
        case 0x1d6b28u: goto label_1d6b28;
        case 0x1d6b2cu: goto label_1d6b2c;
        case 0x1d6b30u: goto label_1d6b30;
        case 0x1d6b34u: goto label_1d6b34;
        case 0x1d6b38u: goto label_1d6b38;
        case 0x1d6b3cu: goto label_1d6b3c;
        case 0x1d6b40u: goto label_1d6b40;
        case 0x1d6b44u: goto label_1d6b44;
        case 0x1d6b48u: goto label_1d6b48;
        case 0x1d6b4cu: goto label_1d6b4c;
        case 0x1d6b50u: goto label_1d6b50;
        case 0x1d6b54u: goto label_1d6b54;
        case 0x1d6b58u: goto label_1d6b58;
        case 0x1d6b5cu: goto label_1d6b5c;
        case 0x1d6b60u: goto label_1d6b60;
        case 0x1d6b64u: goto label_1d6b64;
        case 0x1d6b68u: goto label_1d6b68;
        case 0x1d6b6cu: goto label_1d6b6c;
        case 0x1d6b70u: goto label_1d6b70;
        case 0x1d6b74u: goto label_1d6b74;
        case 0x1d6b78u: goto label_1d6b78;
        case 0x1d6b7cu: goto label_1d6b7c;
        case 0x1d6b80u: goto label_1d6b80;
        case 0x1d6b84u: goto label_1d6b84;
        case 0x1d6b88u: goto label_1d6b88;
        case 0x1d6b8cu: goto label_1d6b8c;
        case 0x1d6b90u: goto label_1d6b90;
        case 0x1d6b94u: goto label_1d6b94;
        case 0x1d6b98u: goto label_1d6b98;
        case 0x1d6b9cu: goto label_1d6b9c;
        case 0x1d6ba0u: goto label_1d6ba0;
        case 0x1d6ba4u: goto label_1d6ba4;
        case 0x1d6ba8u: goto label_1d6ba8;
        case 0x1d6bacu: goto label_1d6bac;
        case 0x1d6bb0u: goto label_1d6bb0;
        case 0x1d6bb4u: goto label_1d6bb4;
        case 0x1d6bb8u: goto label_1d6bb8;
        case 0x1d6bbcu: goto label_1d6bbc;
        case 0x1d6bc0u: goto label_1d6bc0;
        case 0x1d6bc4u: goto label_1d6bc4;
        case 0x1d6bc8u: goto label_1d6bc8;
        case 0x1d6bccu: goto label_1d6bcc;
        case 0x1d6bd0u: goto label_1d6bd0;
        case 0x1d6bd4u: goto label_1d6bd4;
        case 0x1d6bd8u: goto label_1d6bd8;
        case 0x1d6bdcu: goto label_1d6bdc;
        case 0x1d6be0u: goto label_1d6be0;
        case 0x1d6be4u: goto label_1d6be4;
        case 0x1d6be8u: goto label_1d6be8;
        case 0x1d6becu: goto label_1d6bec;
        case 0x1d6bf0u: goto label_1d6bf0;
        case 0x1d6bf4u: goto label_1d6bf4;
        case 0x1d6bf8u: goto label_1d6bf8;
        case 0x1d6bfcu: goto label_1d6bfc;
        case 0x1d6c00u: goto label_1d6c00;
        case 0x1d6c04u: goto label_1d6c04;
        case 0x1d6c08u: goto label_1d6c08;
        case 0x1d6c0cu: goto label_1d6c0c;
        case 0x1d6c10u: goto label_1d6c10;
        case 0x1d6c14u: goto label_1d6c14;
        case 0x1d6c18u: goto label_1d6c18;
        case 0x1d6c1cu: goto label_1d6c1c;
        case 0x1d6c20u: goto label_1d6c20;
        case 0x1d6c24u: goto label_1d6c24;
        case 0x1d6c28u: goto label_1d6c28;
        case 0x1d6c2cu: goto label_1d6c2c;
        case 0x1d6c30u: goto label_1d6c30;
        case 0x1d6c34u: goto label_1d6c34;
        case 0x1d6c38u: goto label_1d6c38;
        case 0x1d6c3cu: goto label_1d6c3c;
        case 0x1d6c40u: goto label_1d6c40;
        case 0x1d6c44u: goto label_1d6c44;
        default: break;
    }

    ctx->pc = 0x1d6888u;

label_1d6888:
    // 0x1d6888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d688c:
    // 0x1d688c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d688cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d6890:
    // 0x1d6890: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d6890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6894:
    // 0x1d6894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d6898:
    // 0x1d6898: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d689c:
    // 0x1d689c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d68a0:
    // 0x1d68a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d68a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d68a4:
    // 0x1d68a4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1d68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1d68a8:
    // 0x1d68a8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1d68ac:
    if (ctx->pc == 0x1D68ACu) {
        ctx->pc = 0x1D68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68A8u;
        // 0x1d68ac: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68B0u;
        goto label_1d68b0;
    }
    ctx->pc = 0x1D68A8u;
    {
        const bool branch_taken_0x1d68a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d68a8) {
            ctx->pc = 0x1D68ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D68A8u;
            // 0x1d68ac: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6908u;
            goto label_1d6908;
        }
    }
    ctx->pc = 0x1D68B0u;
label_1d68b0:
    // 0x1d68b0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1d68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1d68b4:
    // 0x1d68b4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_1d68b8:
    if (ctx->pc == 0x1D68B8u) {
        ctx->pc = 0x1D68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68B4u;
        // 0x1d68b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68BCu;
        goto label_1d68bc;
    }
    ctx->pc = 0x1D68B4u;
    {
        const bool branch_taken_0x1d68b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68B4u;
        // 0x1d68b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68b4) {
            ctx->pc = 0x1D68F8u;
            goto label_1d68f8;
        }
    }
    ctx->pc = 0x1D68BCu;
label_1d68bc:
    // 0x1d68bc: 0x0  nop
    ctx->pc = 0x1d68bcu;
    // NOP
label_1d68c0:
    // 0x1d68c0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1d68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1d68c4:
    // 0x1d68c4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1d68c8:
    // 0x1d68c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d68c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d68cc:
    // 0x1d68cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d68d0:
    // 0x1d68d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d68d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d68d4:
    // 0x1d68d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d68d8:
    // 0x1d68d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d68dc:
    if (ctx->pc == 0x1D68DCu) {
        ctx->pc = 0x1D68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68D8u;
        // 0x1d68dc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68E0u;
        goto label_1d68e0;
    }
    ctx->pc = 0x1D68D8u;
    {
        const bool branch_taken_0x1d68d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68D8u;
        // 0x1d68dc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68d8) {
            ctx->pc = 0x1D68E8u;
            goto label_1d68e8;
        }
    }
    ctx->pc = 0x1D68E0u;
label_1d68e0:
    // 0x1d68e0: 0xc067f04  jal         func_19FC10
label_1d68e4:
    if (ctx->pc == 0x1D68E4u) {
        ctx->pc = 0x1D68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68E0u;
        // 0x1d68e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68E8u;
        goto label_1d68e8;
    }
    ctx->pc = 0x1D68E0u;
    SET_GPR_U32(ctx, 31, 0x1D68E8u);
    ctx->pc = 0x1D68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68E0u;
    // 0x1d68e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D68E0u, 0x1D68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68E8u;
label_1d68e8:
    // 0x1d68e8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1d68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1d68ec:
    // 0x1d68ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d68ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d68f0:
    // 0x1d68f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1d68f4:
    if (ctx->pc == 0x1D68F4u) {
        ctx->pc = 0x1D68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68F0u;
        // 0x1d68f4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68F8u;
        goto label_1d68f8;
    }
    ctx->pc = 0x1D68F0u;
    {
        const bool branch_taken_0x1d68f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68F0u;
        // 0x1d68f4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68f0) {
            ctx->pc = 0x1D68C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d68c0;
        }
    }
    ctx->pc = 0x1D68F8u;
label_1d68f8:
    // 0x1d68f8: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1d68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1d68fc:
    // 0x1d68fc: 0xc067f04  jal         func_19FC10
label_1d6900:
    if (ctx->pc == 0x1D6900u) {
        ctx->pc = 0x1D6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68FCu;
        // 0x1d6900: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6904u;
        goto label_1d6904;
    }
    ctx->pc = 0x1D68FCu;
    SET_GPR_U32(ctx, 31, 0x1D6904u);
    ctx->pc = 0x1D6900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68FCu;
    // 0x1d6900: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D68FCu, 0x1D6904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6904u;
label_1d6904:
    // 0x1d6904: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1d6904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1d6908:
    // 0x1d6908: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_1d690c:
    if (ctx->pc == 0x1D690Cu) {
        ctx->pc = 0x1D690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6908u;
        // 0x1d690c: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6910u;
        goto label_1d6910;
    }
    ctx->pc = 0x1D6908u;
    {
        const bool branch_taken_0x1d6908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6908) {
            ctx->pc = 0x1D690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6908u;
            // 0x1d690c: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6978u;
            goto label_1d6978;
        }
    }
    ctx->pc = 0x1D6910u;
label_1d6910:
    // 0x1d6910: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1d6910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1d6914:
    // 0x1d6914: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_1d6918:
    if (ctx->pc == 0x1D6918u) {
        ctx->pc = 0x1D6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6914u;
        // 0x1d6918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D691Cu;
        goto label_1d691c;
    }
    ctx->pc = 0x1D6914u;
    {
        const bool branch_taken_0x1d6914 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6914u;
        // 0x1d6918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6914) {
            ctx->pc = 0x1D6968u;
            goto label_1d6968;
        }
    }
    ctx->pc = 0x1D691Cu;
label_1d691c:
    // 0x1d691c: 0x0  nop
    ctx->pc = 0x1d691cu;
    // NOP
label_1d6920:
    // 0x1d6920: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1d6924:
    // 0x1d6924: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1d6924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1d6928:
    // 0x1d6928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d692c:
    // 0x1d692c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d692cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6930:
    // 0x1d6930: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d6930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6934:
    // 0x1d6934: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d6938:
    if (ctx->pc == 0x1D6938u) {
        ctx->pc = 0x1D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6934u;
        // 0x1d6938: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D693Cu;
        goto label_1d693c;
    }
    ctx->pc = 0x1D6934u;
    {
        const bool branch_taken_0x1d6934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6934u;
        // 0x1d6938: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6934) {
            ctx->pc = 0x1D6958u;
            goto label_1d6958;
        }
    }
    ctx->pc = 0x1D693Cu;
label_1d693c:
    // 0x1d693c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6940:
    // 0x1d6940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6944:
    // 0x1d6944: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6948:
    // 0x1d6948: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d694c:
    // 0x1d694c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6950:
    // 0x1d6950: 0x60f809  jalr        $v1
label_1d6954:
    if (ctx->pc == 0x1D6954u) {
        ctx->pc = 0x1D6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6950u;
        // 0x1d6954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6958u;
        goto label_1d6958;
    }
    ctx->pc = 0x1D6950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6958u);
        ctx->pc = 0x1D6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6950u;
        // 0x1d6954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6950u, 0x1D6958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6958u;
label_1d6958:
    // 0x1d6958: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1d6958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1d695c:
    // 0x1d695c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d695cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d6960:
    // 0x1d6960: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1d6964:
    if (ctx->pc == 0x1D6964u) {
        ctx->pc = 0x1D6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6960u;
        // 0x1d6964: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6968u;
        goto label_1d6968;
    }
    ctx->pc = 0x1D6960u;
    {
        const bool branch_taken_0x1d6960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6960u;
        // 0x1d6964: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6960) {
            ctx->pc = 0x1D6920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6920;
        }
    }
    ctx->pc = 0x1D6968u;
label_1d6968:
    // 0x1d6968: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1d6968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1d696c:
    // 0x1d696c: 0xc067f04  jal         func_19FC10
label_1d6970:
    if (ctx->pc == 0x1D6970u) {
        ctx->pc = 0x1D6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D696Cu;
        // 0x1d6970: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6974u;
        goto label_1d6974;
    }
    ctx->pc = 0x1D696Cu;
    SET_GPR_U32(ctx, 31, 0x1D6974u);
    ctx->pc = 0x1D6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D696Cu;
    // 0x1d6970: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D696Cu, 0x1D6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6974u;
label_1d6974:
    // 0x1d6974: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1d6974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1d6978:
    // 0x1d6978: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_1d697c:
    if (ctx->pc == 0x1D697Cu) {
        ctx->pc = 0x1D697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6978u;
        // 0x1d697c: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6980u;
        goto label_1d6980;
    }
    ctx->pc = 0x1D6978u;
    {
        const bool branch_taken_0x1d6978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6978) {
            ctx->pc = 0x1D697Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6978u;
            // 0x1d697c: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D69ECu;
            goto label_1d69ec;
        }
    }
    ctx->pc = 0x1D6980u;
label_1d6980:
    // 0x1d6980: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1d6980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1d6984:
    // 0x1d6984: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_1d6988:
    if (ctx->pc == 0x1D6988u) {
        ctx->pc = 0x1D6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6984u;
        // 0x1d6988: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D698Cu;
        goto label_1d698c;
    }
    ctx->pc = 0x1D6984u;
    {
        const bool branch_taken_0x1d6984 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6984u;
        // 0x1d6988: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6984) {
            ctx->pc = 0x1D69DCu;
            goto label_1d69dc;
        }
    }
    ctx->pc = 0x1D698Cu;
label_1d698c:
    // 0x1d698c: 0x0  nop
    ctx->pc = 0x1d698cu;
    // NOP
label_1d6990:
    // 0x1d6990: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1d6990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1d6994:
    // 0x1d6994: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1d6994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1d6998:
    // 0x1d6998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d699c:
    // 0x1d699c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d699cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d69a0:
    // 0x1d69a0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d69a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d69a4:
    // 0x1d69a4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d69a8:
    if (ctx->pc == 0x1D69A8u) {
        ctx->pc = 0x1D69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69A4u;
        // 0x1d69a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69ACu;
        goto label_1d69ac;
    }
    ctx->pc = 0x1D69A4u;
    {
        const bool branch_taken_0x1d69a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69A4u;
        // 0x1d69a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69a4) {
            ctx->pc = 0x1D69C8u;
            goto label_1d69c8;
        }
    }
    ctx->pc = 0x1D69ACu;
label_1d69ac:
    // 0x1d69ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d69acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d69b0:
    // 0x1d69b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d69b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d69b4:
    // 0x1d69b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d69b8:
    // 0x1d69b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d69b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d69bc:
    // 0x1d69bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d69c0:
    // 0x1d69c0: 0x60f809  jalr        $v1
label_1d69c4:
    if (ctx->pc == 0x1D69C4u) {
        ctx->pc = 0x1D69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69C0u;
        // 0x1d69c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69C8u;
        goto label_1d69c8;
    }
    ctx->pc = 0x1D69C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D69C8u);
        ctx->pc = 0x1D69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69C0u;
        // 0x1d69c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D69C0u, 0x1D69C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D69C8u;
label_1d69c8:
    // 0x1d69c8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1d69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1d69cc:
    // 0x1d69cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d69ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1d69d0:
    // 0x1d69d0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d69d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d69d4:
    // 0x1d69d4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1d69d8:
    if (ctx->pc == 0x1D69D8u) {
        ctx->pc = 0x1D69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69D4u;
        // 0x1d69d8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69DCu;
        goto label_1d69dc;
    }
    ctx->pc = 0x1D69D4u;
    {
        const bool branch_taken_0x1d69d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69D4u;
        // 0x1d69d8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69d4) {
            ctx->pc = 0x1D6990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6990;
        }
    }
    ctx->pc = 0x1D69DCu;
label_1d69dc:
    // 0x1d69dc: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1d69dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1d69e0:
    // 0x1d69e0: 0xc067f04  jal         func_19FC10
label_1d69e4:
    if (ctx->pc == 0x1D69E4u) {
        ctx->pc = 0x1D69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69E0u;
        // 0x1d69e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69E8u;
        goto label_1d69e8;
    }
    ctx->pc = 0x1D69E0u;
    SET_GPR_U32(ctx, 31, 0x1D69E8u);
    ctx->pc = 0x1D69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69E0u;
    // 0x1d69e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D69E0u, 0x1D69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69E8u;
label_1d69e8:
    // 0x1d69e8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1d69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1d69ec:
    // 0x1d69ec: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_1d69f0:
    if (ctx->pc == 0x1D69F0u) {
        ctx->pc = 0x1D69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69ECu;
        // 0x1d69f0: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69F4u;
        goto label_1d69f4;
    }
    ctx->pc = 0x1D69ECu;
    {
        const bool branch_taken_0x1d69ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d69ec) {
            ctx->pc = 0x1D69F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D69ECu;
            // 0x1d69f0: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6A78u;
            goto label_1d6a78;
        }
    }
    ctx->pc = 0x1D69F4u;
label_1d69f4:
    // 0x1d69f4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1d69f8:
    // 0x1d69f8: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_1d69fc:
    if (ctx->pc == 0x1D69FCu) {
        ctx->pc = 0x1D69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69F8u;
        // 0x1d69fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A00u;
        goto label_1d6a00;
    }
    ctx->pc = 0x1D69F8u;
    {
        const bool branch_taken_0x1d69f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69F8u;
        // 0x1d69fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69f8) {
            ctx->pc = 0x1D6A68u;
            goto label_1d6a68;
        }
    }
    ctx->pc = 0x1D6A00u;
label_1d6a00:
    // 0x1d6a00: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1d6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1d6a04:
    // 0x1d6a04: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1d6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1d6a08:
    // 0x1d6a08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d6a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d6a0c:
    // 0x1d6a0c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d6a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6a10:
    // 0x1d6a10: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d6a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d6a14:
    // 0x1d6a14: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1d6a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d6a18:
    // 0x1d6a18: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d6a1c:
    if (ctx->pc == 0x1D6A1Cu) {
        ctx->pc = 0x1D6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A18u;
        // 0x1d6a1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A20u;
        goto label_1d6a20;
    }
    ctx->pc = 0x1D6A18u;
    {
        const bool branch_taken_0x1d6a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A18u;
        // 0x1d6a1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a18) {
            ctx->pc = 0x1D6A28u;
            goto label_1d6a28;
        }
    }
    ctx->pc = 0x1D6A20u;
label_1d6a20:
    // 0x1d6a20: 0xc067f04  jal         func_19FC10
label_1d6a24:
    if (ctx->pc == 0x1D6A24u) {
        ctx->pc = 0x1D6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A20u;
        // 0x1d6a24: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A28u;
        goto label_1d6a28;
    }
    ctx->pc = 0x1D6A20u;
    SET_GPR_U32(ctx, 31, 0x1D6A28u);
    ctx->pc = 0x1D6A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A20u;
    // 0x1d6a24: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6A20u, 0x1D6A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A28u;
label_1d6a28:
    // 0x1d6a28: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d6a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d6a2c:
    // 0x1d6a2c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d6a30:
    if (ctx->pc == 0x1D6A30u) {
        ctx->pc = 0x1D6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A2Cu;
        // 0x1d6a30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A34u;
        goto label_1d6a34;
    }
    ctx->pc = 0x1D6A2Cu;
    {
        const bool branch_taken_0x1d6a2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A2Cu;
        // 0x1d6a30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a2c) {
            ctx->pc = 0x1D6A4Cu;
            goto label_1d6a4c;
        }
    }
    ctx->pc = 0x1D6A34u;
label_1d6a34:
    // 0x1d6a34: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6a38:
    // 0x1d6a38: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6a3c:
    // 0x1d6a3c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6a40:
    // 0x1d6a40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6a44:
    // 0x1d6a44: 0x60f809  jalr        $v1
label_1d6a48:
    if (ctx->pc == 0x1D6A48u) {
        ctx->pc = 0x1D6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A44u;
        // 0x1d6a48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A4Cu;
        goto label_1d6a4c;
    }
    ctx->pc = 0x1D6A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6A4Cu);
        ctx->pc = 0x1D6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A44u;
        // 0x1d6a48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A44u, 0x1D6A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6A4Cu;
label_1d6a4c:
    // 0x1d6a4c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d6a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1d6a50:
    // 0x1d6a50: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d6a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1d6a54:
    // 0x1d6a54: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1d6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1d6a58:
    // 0x1d6a58: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1d6a5c:
    // 0x1d6a5c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d6a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d6a60:
    // 0x1d6a60: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1d6a64:
    if (ctx->pc == 0x1D6A64u) {
        ctx->pc = 0x1D6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A60u;
        // 0x1d6a64: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A68u;
        goto label_1d6a68;
    }
    ctx->pc = 0x1D6A60u;
    {
        const bool branch_taken_0x1d6a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A60u;
        // 0x1d6a64: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a60) {
            ctx->pc = 0x1D6A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6a00;
        }
    }
    ctx->pc = 0x1D6A68u;
label_1d6a68:
    // 0x1d6a68: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x1d6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1d6a6c:
    // 0x1d6a6c: 0xc067f04  jal         func_19FC10
label_1d6a70:
    if (ctx->pc == 0x1D6A70u) {
        ctx->pc = 0x1D6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A6Cu;
        // 0x1d6a70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A74u;
        goto label_1d6a74;
    }
    ctx->pc = 0x1D6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A74u);
    ctx->pc = 0x1D6A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A6Cu;
    // 0x1d6a70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6A6Cu, 0x1D6A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A74u;
label_1d6a74:
    // 0x1d6a74: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1d6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1d6a78:
    // 0x1d6a78: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_1d6a7c:
    if (ctx->pc == 0x1D6A7Cu) {
        ctx->pc = 0x1D6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A78u;
        // 0x1d6a7c: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A80u;
        goto label_1d6a80;
    }
    ctx->pc = 0x1D6A78u;
    {
        const bool branch_taken_0x1d6a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6a78) {
            ctx->pc = 0x1D6A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6A78u;
            // 0x1d6a7c: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6B18u;
            goto label_1d6b18;
        }
    }
    ctx->pc = 0x1D6A80u;
label_1d6a80:
    // 0x1d6a80: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1d6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1d6a84:
    // 0x1d6a84: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_1d6a88:
    if (ctx->pc == 0x1D6A88u) {
        ctx->pc = 0x1D6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A84u;
        // 0x1d6a88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A8Cu;
        goto label_1d6a8c;
    }
    ctx->pc = 0x1D6A84u;
    {
        const bool branch_taken_0x1d6a84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A84u;
        // 0x1d6a88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a84) {
            ctx->pc = 0x1D6B08u;
            goto label_1d6b08;
        }
    }
    ctx->pc = 0x1D6A8Cu;
label_1d6a8c:
    // 0x1d6a8c: 0x0  nop
    ctx->pc = 0x1d6a8cu;
    // NOP
label_1d6a90:
    // 0x1d6a90: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1d6a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1d6a94:
    // 0x1d6a94: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1d6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1d6a98:
    // 0x1d6a98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d6a98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d6a9c:
    // 0x1d6a9c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1d6a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6aa0:
    // 0x1d6aa0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d6aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d6aa4:
    // 0x1d6aa4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d6aa8:
    if (ctx->pc == 0x1D6AA8u) {
        ctx->pc = 0x1D6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA4u;
        // 0x1d6aa8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AACu;
        goto label_1d6aac;
    }
    ctx->pc = 0x1D6AA4u;
    {
        const bool branch_taken_0x1d6aa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA4u;
        // 0x1d6aa8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6aa4) {
            ctx->pc = 0x1D6AC8u;
            goto label_1d6ac8;
        }
    }
    ctx->pc = 0x1D6AACu;
label_1d6aac:
    // 0x1d6aac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6ab0:
    // 0x1d6ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6ab4:
    // 0x1d6ab4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6ab8:
    // 0x1d6ab8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6abc:
    // 0x1d6abc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6ac0:
    // 0x1d6ac0: 0x60f809  jalr        $v1
label_1d6ac4:
    if (ctx->pc == 0x1D6AC4u) {
        ctx->pc = 0x1D6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AC0u;
        // 0x1d6ac4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AC8u;
        goto label_1d6ac8;
    }
    ctx->pc = 0x1D6AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6AC8u);
        ctx->pc = 0x1D6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AC0u;
        // 0x1d6ac4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6AC0u, 0x1D6AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6AC8u;
label_1d6ac8:
    // 0x1d6ac8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d6ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d6acc:
    // 0x1d6acc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d6ad0:
    if (ctx->pc == 0x1D6AD0u) {
        ctx->pc = 0x1D6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ACCu;
        // 0x1d6ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AD4u;
        goto label_1d6ad4;
    }
    ctx->pc = 0x1D6ACCu;
    {
        const bool branch_taken_0x1d6acc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ACCu;
        // 0x1d6ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6acc) {
            ctx->pc = 0x1D6AECu;
            goto label_1d6aec;
        }
    }
    ctx->pc = 0x1D6AD4u;
label_1d6ad4:
    // 0x1d6ad4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6ad8:
    // 0x1d6ad8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6adc:
    // 0x1d6adc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6ae0:
    // 0x1d6ae0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6ae4:
    // 0x1d6ae4: 0x60f809  jalr        $v1
label_1d6ae8:
    if (ctx->pc == 0x1D6AE8u) {
        ctx->pc = 0x1D6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AE4u;
        // 0x1d6ae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AECu;
        goto label_1d6aec;
    }
    ctx->pc = 0x1D6AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6AECu);
        ctx->pc = 0x1D6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AE4u;
        // 0x1d6ae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6AE4u, 0x1D6AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6AECu;
label_1d6aec:
    // 0x1d6aec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1d6af0:
    // 0x1d6af0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d6af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1d6af4:
    // 0x1d6af4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1d6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1d6af8:
    // 0x1d6af8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d6af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1d6afc:
    // 0x1d6afc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d6afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d6b00:
    // 0x1d6b00: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1d6b04:
    if (ctx->pc == 0x1D6B04u) {
        ctx->pc = 0x1D6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B00u;
        // 0x1d6b04: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B08u;
        goto label_1d6b08;
    }
    ctx->pc = 0x1D6B00u;
    {
        const bool branch_taken_0x1d6b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B00u;
        // 0x1d6b04: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b00) {
            ctx->pc = 0x1D6A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6a90;
        }
    }
    ctx->pc = 0x1D6B08u;
label_1d6b08:
    // 0x1d6b08: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x1d6b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1d6b0c:
    // 0x1d6b0c: 0xc067f04  jal         func_19FC10
label_1d6b10:
    if (ctx->pc == 0x1D6B10u) {
        ctx->pc = 0x1D6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B0Cu;
        // 0x1d6b10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B14u;
        goto label_1d6b14;
    }
    ctx->pc = 0x1D6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6B14u);
    ctx->pc = 0x1D6B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B0Cu;
    // 0x1d6b10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6B0Cu, 0x1D6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B14u;
label_1d6b14:
    // 0x1d6b14: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1d6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1d6b18:
    // 0x1d6b18: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_1d6b1c:
    if (ctx->pc == 0x1D6B1Cu) {
        ctx->pc = 0x1D6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B18u;
        // 0x1d6b1c: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B20u;
        goto label_1d6b20;
    }
    ctx->pc = 0x1D6B18u;
    {
        const bool branch_taken_0x1d6b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b18) {
            ctx->pc = 0x1D6B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6B18u;
            // 0x1d6b1c: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6BB8u;
            goto label_1d6bb8;
        }
    }
    ctx->pc = 0x1D6B20u;
label_1d6b20:
    // 0x1d6b20: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1d6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1d6b24:
    // 0x1d6b24: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_1d6b28:
    if (ctx->pc == 0x1D6B28u) {
        ctx->pc = 0x1D6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B24u;
        // 0x1d6b28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B2Cu;
        goto label_1d6b2c;
    }
    ctx->pc = 0x1D6B24u;
    {
        const bool branch_taken_0x1d6b24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B24u;
        // 0x1d6b28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b24) {
            ctx->pc = 0x1D6BA8u;
            goto label_1d6ba8;
        }
    }
    ctx->pc = 0x1D6B2Cu;
label_1d6b2c:
    // 0x1d6b2c: 0x0  nop
    ctx->pc = 0x1d6b2cu;
    // NOP
label_1d6b30:
    // 0x1d6b30: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1d6b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1d6b34:
    // 0x1d6b34: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1d6b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1d6b38:
    // 0x1d6b38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d6b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d6b3c:
    // 0x1d6b3c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1d6b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6b40:
    // 0x1d6b40: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d6b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d6b44:
    // 0x1d6b44: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d6b48:
    if (ctx->pc == 0x1D6B48u) {
        ctx->pc = 0x1D6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B44u;
        // 0x1d6b48: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B4Cu;
        goto label_1d6b4c;
    }
    ctx->pc = 0x1D6B44u;
    {
        const bool branch_taken_0x1d6b44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B44u;
        // 0x1d6b48: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b44) {
            ctx->pc = 0x1D6B68u;
            goto label_1d6b68;
        }
    }
    ctx->pc = 0x1D6B4Cu;
label_1d6b4c:
    // 0x1d6b4c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6b50:
    // 0x1d6b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6b54:
    // 0x1d6b54: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6b58:
    // 0x1d6b58: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6b58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6b5c:
    // 0x1d6b5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6b60:
    // 0x1d6b60: 0x60f809  jalr        $v1
label_1d6b64:
    if (ctx->pc == 0x1D6B64u) {
        ctx->pc = 0x1D6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B60u;
        // 0x1d6b64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B68u;
        goto label_1d6b68;
    }
    ctx->pc = 0x1D6B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6B68u);
        ctx->pc = 0x1D6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B60u;
        // 0x1d6b64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6B60u, 0x1D6B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6B68u;
label_1d6b68:
    // 0x1d6b68: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d6b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d6b6c:
    // 0x1d6b6c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d6b70:
    if (ctx->pc == 0x1D6B70u) {
        ctx->pc = 0x1D6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B6Cu;
        // 0x1d6b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B74u;
        goto label_1d6b74;
    }
    ctx->pc = 0x1D6B6Cu;
    {
        const bool branch_taken_0x1d6b6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B6Cu;
        // 0x1d6b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b6c) {
            ctx->pc = 0x1D6B8Cu;
            goto label_1d6b8c;
        }
    }
    ctx->pc = 0x1D6B74u;
label_1d6b74:
    // 0x1d6b74: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6b78:
    // 0x1d6b78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6b7c:
    // 0x1d6b7c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6b80:
    // 0x1d6b80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6b84:
    // 0x1d6b84: 0x60f809  jalr        $v1
label_1d6b88:
    if (ctx->pc == 0x1D6B88u) {
        ctx->pc = 0x1D6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B84u;
        // 0x1d6b88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6B8Cu;
        goto label_1d6b8c;
    }
    ctx->pc = 0x1D6B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6B8Cu);
        ctx->pc = 0x1D6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B84u;
        // 0x1d6b88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6B84u, 0x1D6B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6B8Cu;
label_1d6b8c:
    // 0x1d6b8c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d6b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1d6b90:
    // 0x1d6b90: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d6b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1d6b94:
    // 0x1d6b94: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1d6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1d6b98:
    // 0x1d6b98: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d6b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1d6b9c:
    // 0x1d6b9c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d6b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d6ba0:
    // 0x1d6ba0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1d6ba4:
    if (ctx->pc == 0x1D6BA4u) {
        ctx->pc = 0x1D6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BA0u;
        // 0x1d6ba4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BA8u;
        goto label_1d6ba8;
    }
    ctx->pc = 0x1D6BA0u;
    {
        const bool branch_taken_0x1d6ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BA0u;
        // 0x1d6ba4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ba0) {
            ctx->pc = 0x1D6B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6b30;
        }
    }
    ctx->pc = 0x1D6BA8u;
label_1d6ba8:
    // 0x1d6ba8: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d6ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1d6bac:
    // 0x1d6bac: 0xc067f04  jal         func_19FC10
label_1d6bb0:
    if (ctx->pc == 0x1D6BB0u) {
        ctx->pc = 0x1D6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BACu;
        // 0x1d6bb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BB4u;
        goto label_1d6bb4;
    }
    ctx->pc = 0x1D6BACu;
    SET_GPR_U32(ctx, 31, 0x1D6BB4u);
    ctx->pc = 0x1D6BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BACu;
    // 0x1d6bb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6BACu, 0x1D6BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BB4u;
label_1d6bb4:
    // 0x1d6bb4: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1d6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1d6bb8:
    // 0x1d6bb8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1d6bbc:
    if (ctx->pc == 0x1D6BBCu) {
        ctx->pc = 0x1D6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BB8u;
        // 0x1d6bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BC0u;
        goto label_1d6bc0;
    }
    ctx->pc = 0x1D6BB8u;
    {
        const bool branch_taken_0x1d6bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BB8u;
        // 0x1d6bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bb8) {
            ctx->pc = 0x1D6C30u;
            goto label_1d6c30;
        }
    }
    ctx->pc = 0x1D6BC0u;
label_1d6bc0:
    // 0x1d6bc0: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1d6bc4:
    // 0x1d6bc4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_1d6bc8:
    if (ctx->pc == 0x1D6BC8u) {
        ctx->pc = 0x1D6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BC4u;
        // 0x1d6bc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BCCu;
        goto label_1d6bcc;
    }
    ctx->pc = 0x1D6BC4u;
    {
        const bool branch_taken_0x1d6bc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BC4u;
        // 0x1d6bc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bc4) {
            ctx->pc = 0x1D6C18u;
            goto label_1d6c18;
        }
    }
    ctx->pc = 0x1D6BCCu;
label_1d6bcc:
    // 0x1d6bcc: 0x0  nop
    ctx->pc = 0x1d6bccu;
    // NOP
label_1d6bd0:
    // 0x1d6bd0: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1d6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1d6bd4:
    // 0x1d6bd4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1d6bd8:
    // 0x1d6bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6bdc:
    // 0x1d6bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6be0:
    // 0x1d6be0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d6be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6be4:
    // 0x1d6be4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d6be8:
    if (ctx->pc == 0x1D6BE8u) {
        ctx->pc = 0x1D6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BE4u;
        // 0x1d6be8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6BECu;
        goto label_1d6bec;
    }
    ctx->pc = 0x1D6BE4u;
    {
        const bool branch_taken_0x1d6be4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BE4u;
        // 0x1d6be8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6be4) {
            ctx->pc = 0x1D6C08u;
            goto label_1d6c08;
        }
    }
    ctx->pc = 0x1D6BECu;
label_1d6bec:
    // 0x1d6bec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6bf0:
    // 0x1d6bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6bf4:
    // 0x1d6bf4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6bf8:
    // 0x1d6bf8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6bfc:
    // 0x1d6bfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6c00:
    // 0x1d6c00: 0x60f809  jalr        $v1
label_1d6c04:
    if (ctx->pc == 0x1D6C04u) {
        ctx->pc = 0x1D6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C00u;
        // 0x1d6c04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C08u;
        goto label_1d6c08;
    }
    ctx->pc = 0x1D6C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6C08u);
        ctx->pc = 0x1D6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C00u;
        // 0x1d6c04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6C00u, 0x1D6C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6C08u;
label_1d6c08:
    // 0x1d6c08: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x1d6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1d6c0c:
    // 0x1d6c0c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d6c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d6c10:
    // 0x1d6c10: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1d6c14:
    if (ctx->pc == 0x1D6C14u) {
        ctx->pc = 0x1D6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C10u;
        // 0x1d6c14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C18u;
        goto label_1d6c18;
    }
    ctx->pc = 0x1D6C10u;
    {
        const bool branch_taken_0x1d6c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C10u;
        // 0x1d6c14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c10) {
            ctx->pc = 0x1D6BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6bd0;
        }
    }
    ctx->pc = 0x1D6C18u;
label_1d6c18:
    // 0x1d6c18: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x1d6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1d6c1c:
    // 0x1d6c1c: 0xc067f04  jal         func_19FC10
label_1d6c20:
    if (ctx->pc == 0x1D6C20u) {
        ctx->pc = 0x1D6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C1Cu;
        // 0x1d6c20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C24u;
        goto label_1d6c24;
    }
    ctx->pc = 0x1D6C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C24u);
    ctx->pc = 0x1D6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C1Cu;
    // 0x1d6c20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6C1Cu, 0x1D6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C24u;
label_1d6c24:
    // 0x1d6c24: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x1d6c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_1d6c28:
    // 0x1d6c28: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1d6c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_1d6c2c:
    // 0x1d6c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6c30:
    // 0x1d6c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d6c34:
    // 0x1d6c34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c38:
    // 0x1d6c38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d6c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d6c3c:
    // 0x1d6c3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d6c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6c40:
    // 0x1d6c40: 0x3e00008  jr          $ra
label_1d6c44:
    if (ctx->pc == 0x1D6C44u) {
        ctx->pc = 0x1D6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C40u;
        // 0x1d6c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6C48u;
        goto label_fallthrough_0x1d6c40;
    }
    ctx->pc = 0x1D6C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C40u;
        // 0x1d6c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d6c40:
    ctx->pc = 0x1D6C48u;
}
