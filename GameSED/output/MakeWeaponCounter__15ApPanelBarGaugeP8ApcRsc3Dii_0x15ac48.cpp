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

// Function: MakeWeaponCounter__15ApPanelBarGaugeP8ApcRsc3Dii
// Address: 0x15ac48 - 0x15aea4
void MakeWeaponCounter__15ApPanelBarGaugeP8ApcRsc3Dii_0x15ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeWeaponCounter__15ApPanelBarGaugeP8ApcRsc3Dii_0x15ac48");
#endif

    switch (ctx->pc) {
        case 0x15ac48u: goto label_15ac48;
        case 0x15ac4cu: goto label_15ac4c;
        case 0x15ac50u: goto label_15ac50;
        case 0x15ac54u: goto label_15ac54;
        case 0x15ac58u: goto label_15ac58;
        case 0x15ac5cu: goto label_15ac5c;
        case 0x15ac60u: goto label_15ac60;
        case 0x15ac64u: goto label_15ac64;
        case 0x15ac68u: goto label_15ac68;
        case 0x15ac6cu: goto label_15ac6c;
        case 0x15ac70u: goto label_15ac70;
        case 0x15ac74u: goto label_15ac74;
        case 0x15ac78u: goto label_15ac78;
        case 0x15ac7cu: goto label_15ac7c;
        case 0x15ac80u: goto label_15ac80;
        case 0x15ac84u: goto label_15ac84;
        case 0x15ac88u: goto label_15ac88;
        case 0x15ac8cu: goto label_15ac8c;
        case 0x15ac90u: goto label_15ac90;
        case 0x15ac94u: goto label_15ac94;
        case 0x15ac98u: goto label_15ac98;
        case 0x15ac9cu: goto label_15ac9c;
        case 0x15aca0u: goto label_15aca0;
        case 0x15aca4u: goto label_15aca4;
        case 0x15aca8u: goto label_15aca8;
        case 0x15acacu: goto label_15acac;
        case 0x15acb0u: goto label_15acb0;
        case 0x15acb4u: goto label_15acb4;
        case 0x15acb8u: goto label_15acb8;
        case 0x15acbcu: goto label_15acbc;
        case 0x15acc0u: goto label_15acc0;
        case 0x15acc4u: goto label_15acc4;
        case 0x15acc8u: goto label_15acc8;
        case 0x15acccu: goto label_15accc;
        case 0x15acd0u: goto label_15acd0;
        case 0x15acd4u: goto label_15acd4;
        case 0x15acd8u: goto label_15acd8;
        case 0x15acdcu: goto label_15acdc;
        case 0x15ace0u: goto label_15ace0;
        case 0x15ace4u: goto label_15ace4;
        case 0x15ace8u: goto label_15ace8;
        case 0x15acecu: goto label_15acec;
        case 0x15acf0u: goto label_15acf0;
        case 0x15acf4u: goto label_15acf4;
        case 0x15acf8u: goto label_15acf8;
        case 0x15acfcu: goto label_15acfc;
        case 0x15ad00u: goto label_15ad00;
        case 0x15ad04u: goto label_15ad04;
        case 0x15ad08u: goto label_15ad08;
        case 0x15ad0cu: goto label_15ad0c;
        case 0x15ad10u: goto label_15ad10;
        case 0x15ad14u: goto label_15ad14;
        case 0x15ad18u: goto label_15ad18;
        case 0x15ad1cu: goto label_15ad1c;
        case 0x15ad20u: goto label_15ad20;
        case 0x15ad24u: goto label_15ad24;
        case 0x15ad28u: goto label_15ad28;
        case 0x15ad2cu: goto label_15ad2c;
        case 0x15ad30u: goto label_15ad30;
        case 0x15ad34u: goto label_15ad34;
        case 0x15ad38u: goto label_15ad38;
        case 0x15ad3cu: goto label_15ad3c;
        case 0x15ad40u: goto label_15ad40;
        case 0x15ad44u: goto label_15ad44;
        case 0x15ad48u: goto label_15ad48;
        case 0x15ad4cu: goto label_15ad4c;
        case 0x15ad50u: goto label_15ad50;
        case 0x15ad54u: goto label_15ad54;
        case 0x15ad58u: goto label_15ad58;
        case 0x15ad5cu: goto label_15ad5c;
        case 0x15ad60u: goto label_15ad60;
        case 0x15ad64u: goto label_15ad64;
        case 0x15ad68u: goto label_15ad68;
        case 0x15ad6cu: goto label_15ad6c;
        case 0x15ad70u: goto label_15ad70;
        case 0x15ad74u: goto label_15ad74;
        case 0x15ad78u: goto label_15ad78;
        case 0x15ad7cu: goto label_15ad7c;
        case 0x15ad80u: goto label_15ad80;
        case 0x15ad84u: goto label_15ad84;
        case 0x15ad88u: goto label_15ad88;
        case 0x15ad8cu: goto label_15ad8c;
        case 0x15ad90u: goto label_15ad90;
        case 0x15ad94u: goto label_15ad94;
        case 0x15ad98u: goto label_15ad98;
        case 0x15ad9cu: goto label_15ad9c;
        case 0x15ada0u: goto label_15ada0;
        case 0x15ada4u: goto label_15ada4;
        case 0x15ada8u: goto label_15ada8;
        case 0x15adacu: goto label_15adac;
        case 0x15adb0u: goto label_15adb0;
        case 0x15adb4u: goto label_15adb4;
        case 0x15adb8u: goto label_15adb8;
        case 0x15adbcu: goto label_15adbc;
        case 0x15adc0u: goto label_15adc0;
        case 0x15adc4u: goto label_15adc4;
        case 0x15adc8u: goto label_15adc8;
        case 0x15adccu: goto label_15adcc;
        case 0x15add0u: goto label_15add0;
        case 0x15add4u: goto label_15add4;
        case 0x15add8u: goto label_15add8;
        case 0x15addcu: goto label_15addc;
        case 0x15ade0u: goto label_15ade0;
        case 0x15ade4u: goto label_15ade4;
        case 0x15ade8u: goto label_15ade8;
        case 0x15adecu: goto label_15adec;
        case 0x15adf0u: goto label_15adf0;
        case 0x15adf4u: goto label_15adf4;
        case 0x15adf8u: goto label_15adf8;
        case 0x15adfcu: goto label_15adfc;
        case 0x15ae00u: goto label_15ae00;
        case 0x15ae04u: goto label_15ae04;
        case 0x15ae08u: goto label_15ae08;
        case 0x15ae0cu: goto label_15ae0c;
        case 0x15ae10u: goto label_15ae10;
        case 0x15ae14u: goto label_15ae14;
        case 0x15ae18u: goto label_15ae18;
        case 0x15ae1cu: goto label_15ae1c;
        case 0x15ae20u: goto label_15ae20;
        case 0x15ae24u: goto label_15ae24;
        case 0x15ae28u: goto label_15ae28;
        case 0x15ae2cu: goto label_15ae2c;
        case 0x15ae30u: goto label_15ae30;
        case 0x15ae34u: goto label_15ae34;
        case 0x15ae38u: goto label_15ae38;
        case 0x15ae3cu: goto label_15ae3c;
        case 0x15ae40u: goto label_15ae40;
        case 0x15ae44u: goto label_15ae44;
        case 0x15ae48u: goto label_15ae48;
        case 0x15ae4cu: goto label_15ae4c;
        case 0x15ae50u: goto label_15ae50;
        case 0x15ae54u: goto label_15ae54;
        case 0x15ae58u: goto label_15ae58;
        case 0x15ae5cu: goto label_15ae5c;
        case 0x15ae60u: goto label_15ae60;
        case 0x15ae64u: goto label_15ae64;
        case 0x15ae68u: goto label_15ae68;
        case 0x15ae6cu: goto label_15ae6c;
        case 0x15ae70u: goto label_15ae70;
        case 0x15ae74u: goto label_15ae74;
        case 0x15ae78u: goto label_15ae78;
        case 0x15ae7cu: goto label_15ae7c;
        case 0x15ae80u: goto label_15ae80;
        case 0x15ae84u: goto label_15ae84;
        case 0x15ae88u: goto label_15ae88;
        case 0x15ae8cu: goto label_15ae8c;
        case 0x15ae90u: goto label_15ae90;
        case 0x15ae94u: goto label_15ae94;
        case 0x15ae98u: goto label_15ae98;
        case 0x15ae9cu: goto label_15ae9c;
        case 0x15aea0u: goto label_15aea0;
        default: break;
    }

    ctx->pc = 0x15ac48u;

label_15ac48:
    // 0x15ac48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_15ac4c:
    // 0x15ac4c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x15ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_15ac50:
    // 0x15ac50: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x15ac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_15ac54:
    // 0x15ac54: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x15ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_15ac58:
    // 0x15ac58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15ac58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ac5c:
    // 0x15ac5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x15ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_15ac60:
    // 0x15ac60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15ac60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15ac64:
    // 0x15ac64: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x15ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_15ac68:
    // 0x15ac68: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x15ac68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15ac6c:
    // 0x15ac6c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x15ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_15ac70:
    // 0x15ac70: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15ac74:
    // 0x15ac74: 0x8cb00024  lw          $s0, 0x24($a1)
    ctx->pc = 0x15ac74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_15ac78:
    // 0x15ac78: 0xc06bd28  jal         func_1AF4A0
label_15ac7c:
    if (ctx->pc == 0x15AC7Cu) {
        ctx->pc = 0x15AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC78u;
        // 0x15ac7c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC80u;
        goto label_15ac80;
    }
    ctx->pc = 0x15AC78u;
    SET_GPR_U32(ctx, 31, 0x15AC80u);
    ctx->pc = 0x15AC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AC78u;
    // 0x15ac7c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15AC78u, 0x15AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC80u;
label_15ac80:
    // 0x15ac80: 0xc06bd20  jal         func_1AF480
label_15ac84:
    if (ctx->pc == 0x15AC84u) {
        ctx->pc = 0x15AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC80u;
        // 0x15ac84: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC88u;
        goto label_15ac88;
    }
    ctx->pc = 0x15AC80u;
    SET_GPR_U32(ctx, 31, 0x15AC88u);
    ctx->pc = 0x15AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AC80u;
    // 0x15ac84: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15AC80u, 0x15AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC88u;
label_15ac88:
    // 0x15ac88: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15ac8c:
    // 0x15ac8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ac90:
    // 0x15ac90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15ac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_15ac94:
    // 0x15ac94: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x15ac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_15ac98:
    // 0x15ac98: 0x24040166  addiu       $a0, $zero, 0x166
    ctx->pc = 0x15ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
label_15ac9c:
    // 0x15ac9c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x15ac9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15aca0:
    // 0x15aca0: 0xc0682b2  jal         func_1A0AC8
label_15aca4:
    if (ctx->pc == 0x15ACA4u) {
        ctx->pc = 0x15ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACA0u;
        // 0x15aca4: 0xffa20050  sd          $v0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACA8u;
        goto label_15aca8;
    }
    ctx->pc = 0x15ACA0u;
    SET_GPR_U32(ctx, 31, 0x15ACA8u);
    ctx->pc = 0x15ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ACA0u;
    // 0x15aca4: 0xffa20050  sd          $v0, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15ACA0u, 0x15ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACA8u;
label_15aca8:
    // 0x15aca8: 0xc0682b6  jal         func_1A0AD8
label_15acac:
    if (ctx->pc == 0x15ACACu) {
        ctx->pc = 0x15ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACA8u;
        // 0x15acac: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACB0u;
        goto label_15acb0;
    }
    ctx->pc = 0x15ACA8u;
    SET_GPR_U32(ctx, 31, 0x15ACB0u);
    ctx->pc = 0x15ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ACA8u;
    // 0x15acac: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15ACA8u, 0x15ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACB0u;
label_15acb0:
    // 0x15acb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15acb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15acb4:
    // 0x15acb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15acb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15acb8:
    // 0x15acb8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15acbc:
    // 0x15acbc: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x15acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_15acc0:
    // 0x15acc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15acc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15acc4:
    // 0x15acc4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_15acc8:
    // 0x15acc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15acc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15accc:
    // 0x15accc: 0xc063114  jal         func_18C450
label_15acd0:
    if (ctx->pc == 0x15ACD0u) {
        ctx->pc = 0x15ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACCCu;
        // 0x15acd0: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACD4u;
        goto label_15acd4;
    }
    ctx->pc = 0x15ACCCu;
    SET_GPR_U32(ctx, 31, 0x15ACD4u);
    ctx->pc = 0x15ACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ACCCu;
    // 0x15acd0: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C450u, 0x15ACCCu, 0x15ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACD4u;
label_15acd4:
    // 0x15acd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15acd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15acd8:
    // 0x15acd8: 0xc06825c  jal         func_1A0970
label_15acdc:
    if (ctx->pc == 0x15ACDCu) {
        ctx->pc = 0x15ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACD8u;
        // 0x15acdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACE0u;
        goto label_15ace0;
    }
    ctx->pc = 0x15ACD8u;
    SET_GPR_U32(ctx, 31, 0x15ACE0u);
    ctx->pc = 0x15ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ACD8u;
    // 0x15acdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15ACD8u, 0x15ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACE0u;
label_15ace0:
    // 0x15ace0: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x15ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_15ace4:
    // 0x15ace4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x15ace4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15ace8:
    // 0x15ace8: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x15ace8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_15acec:
    // 0x15acec: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x15acecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_15acf0:
    // 0x15acf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15acf4:
    // 0x15acf4: 0x24050301  addiu       $a1, $zero, 0x301
    ctx->pc = 0x15acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_15acf8:
    // 0x15acf8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15acf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15acfc:
    // 0x15acfc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x15acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_15ad00:
    // 0x15ad00: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x15ad00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_15ad04:
    // 0x15ad04: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x15ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_15ad08:
    // 0x15ad08: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x15ad08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_15ad0c:
    // 0x15ad0c: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x15ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_15ad10:
    // 0x15ad10: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x15ad10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_15ad14:
    // 0x15ad14: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x15ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_15ad18:
    // 0x15ad18: 0xde230020  ld          $v1, 0x20($s1)
    ctx->pc = 0x15ad18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_15ad1c:
    // 0x15ad1c: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x15ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_15ad20:
    // 0x15ad20: 0xde220028  ld          $v0, 0x28($s1)
    ctx->pc = 0x15ad20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 40)));
label_15ad24:
    // 0x15ad24: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x15ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_15ad28:
    // 0x15ad28: 0xde230030  ld          $v1, 0x30($s1)
    ctx->pc = 0x15ad28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 48)));
label_15ad2c:
    // 0x15ad2c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x15ad2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
label_15ad30:
    // 0x15ad30: 0xde220038  ld          $v0, 0x38($s1)
    ctx->pc = 0x15ad30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
label_15ad34:
    // 0x15ad34: 0xafa80044  sw          $t0, 0x44($sp)
    ctx->pc = 0x15ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
label_15ad38:
    // 0x15ad38: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x15ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
label_15ad3c:
    // 0x15ad3c: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x15ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
label_15ad40:
    // 0x15ad40: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x15ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
label_15ad44:
    // 0x15ad44: 0xc0631a2  jal         func_18C688
label_15ad48:
    if (ctx->pc == 0x15AD48u) {
        ctx->pc = 0x15AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD44u;
        // 0x15ad48: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD4Cu;
        goto label_15ad4c;
    }
    ctx->pc = 0x15AD44u;
    SET_GPR_U32(ctx, 31, 0x15AD4Cu);
    ctx->pc = 0x15AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD44u;
    // 0x15ad48: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C688u, 0x15AD44u, 0x15AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD4Cu;
label_15ad4c:
    // 0x15ad4c: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x15ad4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_15ad50:
    // 0x15ad50: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x15ad50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_15ad54:
    // 0x15ad54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ad54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ad58:
    // 0x15ad58: 0x24e70150  addiu       $a3, $a3, 0x150
    ctx->pc = 0x15ad58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
label_15ad5c:
    // 0x15ad5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15ad5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_15ad60:
    // 0x15ad60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15ad60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15ad64:
    // 0x15ad64: 0x94e20052  lhu         $v0, 0x52($a3)
    ctx->pc = 0x15ad64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
label_15ad68:
    // 0x15ad68: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x15ad68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_15ad6c:
    // 0x15ad6c: 0xc4e5006c  lwc1        $f5, 0x6C($a3)
    ctx->pc = 0x15ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_15ad70:
    // 0x15ad70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ad70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15ad74:
    // 0x15ad74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15ad74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15ad78:
    // 0x15ad78: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x15ad78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
label_15ad7c:
    // 0x15ad7c: 0x94e30054  lhu         $v1, 0x54($a3)
    ctx->pc = 0x15ad7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
label_15ad80:
    // 0x15ad80: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x15ad80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_15ad84:
    // 0x15ad84: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x15ad84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_15ad88:
    // 0x15ad88: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x15ad88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
label_15ad8c:
    // 0x15ad8c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x15ad8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_15ad90:
    // 0x15ad90: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x15ad90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_15ad94:
    // 0x15ad94: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x15ad94u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
label_15ad98:
    // 0x15ad98: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x15ad98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_15ad9c:
    // 0x15ad9c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x15ad9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_15ada0:
    // 0x15ada0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15ada0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_15ada4:
    // 0x15ada4: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x15ada4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_15ada8:
    // 0x15ada8: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x15ada8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_15adac:
    // 0x15adac: 0xe4e30064  swc1        $f3, 0x64($a3)
    ctx->pc = 0x15adacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
label_15adb0:
    // 0x15adb0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x15adb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_15adb4:
    // 0x15adb4: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x15adb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
label_15adb8:
    // 0x15adb8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x15adb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_15adbc:
    // 0x15adbc: 0xe4e4002c  swc1        $f4, 0x2C($a3)
    ctx->pc = 0x15adbcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
label_15adc0:
    // 0x15adc0: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x15adc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_15adc4:
    // 0x15adc4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15adc4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15adc8:
    // 0x15adc8: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x15adc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_15adcc:
    // 0x15adcc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x15adccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_15add0:
    // 0x15add0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15add0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15add4:
    // 0x15add4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x15add4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15add8:
    // 0x15add8: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x15add8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15addc:
    // 0x15addc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15addcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15ade0:
    // 0x15ade0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15ade0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15ade4:
    // 0x15ade4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15ade4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15ade8:
    // 0x15ade8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15ade8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15adec:
    // 0x15adec: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15adecu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_15adf0:
    // 0x15adf0: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x15adf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15adf4:
    // 0x15adf4: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x15adf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_15adf8:
    // 0x15adf8: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x15adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15adfc:
    // 0x15adfc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15adfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15ae00:
    // 0x15ae00: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x15ae00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15ae04:
    // 0x15ae04: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x15ae04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15ae08:
    // 0x15ae08: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15ae08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15ae0c:
    // 0x15ae0c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15ae0cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15ae10:
    // 0x15ae10: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15ae10u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15ae14:
    // 0x15ae14: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15ae14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15ae18:
    // 0x15ae18: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15ae1c:
    // 0x15ae1c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15ae1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15ae20:
    // 0x15ae20: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x15ae20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_15ae24:
    // 0x15ae24: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15ae24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15ae28:
    // 0x15ae28: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15ae28u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15ae2c:
    // 0x15ae2c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x15ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15ae30:
    // 0x15ae30: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x15ae30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_15ae34:
    // 0x15ae34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ae34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ae38:
    // 0x15ae38: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15ae3c:
    // 0x15ae3c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x15ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_15ae40:
    // 0x15ae40: 0xace4012c  sw          $a0, 0x12C($a3)
    ctx->pc = 0x15ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 300), GPR_U32(ctx, 4));
label_15ae44:
    // 0x15ae44: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15ae48:
    // 0x15ae48: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x15ae48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_15ae4c:
    // 0x15ae4c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ae4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ae50:
    // 0x15ae50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ae54:
    // 0x15ae54: 0x60f809  jalr        $v1
label_15ae58:
    if (ctx->pc == 0x15AE58u) {
        ctx->pc = 0x15AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE54u;
        // 0x15ae58: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE5Cu;
        goto label_15ae5c;
    }
    ctx->pc = 0x15AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15AE5Cu);
        ctx->pc = 0x15AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE54u;
        // 0x15ae58: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AE54u, 0x15AE5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AE5Cu;
label_15ae5c:
    // 0x15ae5c: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x15ae5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_15ae60:
    // 0x15ae60: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x15ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_15ae64:
    // 0x15ae64: 0x26a6fff6  addiu       $a2, $s5, -0xA
    ctx->pc = 0x15ae64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967286));
label_15ae68:
    // 0x15ae68: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x15ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_15ae6c:
    // 0x15ae6c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15ae70:
    // 0x15ae70: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ae70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ae74:
    // 0x15ae74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ae78:
    // 0x15ae78: 0x60f809  jalr        $v1
label_15ae7c:
    if (ctx->pc == 0x15AE7Cu) {
        ctx->pc = 0x15AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE78u;
        // 0x15ae7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE80u;
        goto label_15ae80;
    }
    ctx->pc = 0x15AE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15AE80u);
        ctx->pc = 0x15AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE78u;
        // 0x15ae7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AE78u, 0x15AE80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AE80u;
label_15ae80:
    // 0x15ae80: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x15ae80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15ae84:
    // 0x15ae84: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x15ae84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_15ae88:
    // 0x15ae88: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x15ae88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15ae8c:
    // 0x15ae8c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x15ae8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_15ae90:
    // 0x15ae90: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x15ae90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_15ae94:
    // 0x15ae94: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x15ae94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_15ae98:
    // 0x15ae98: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15ae98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15ae9c:
    // 0x15ae9c: 0x3e00008  jr          $ra
label_15aea0:
    if (ctx->pc == 0x15AEA0u) {
        ctx->pc = 0x15AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE9Cu;
        // 0x15aea0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AEA4u;
        goto label_fallthrough_0x15ae9c;
    }
    ctx->pc = 0x15AE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE9Cu;
        // 0x15aea0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15ae9c:
    ctx->pc = 0x15AEA4u;
}
