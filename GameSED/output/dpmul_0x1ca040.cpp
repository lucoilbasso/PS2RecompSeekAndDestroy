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

// Function: dpmul
// Address: 0x1ca040 - 0x1ca2c4
void dpmul_0x1ca040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpmul_0x1ca040");
#endif

    switch (ctx->pc) {
        case 0x1ca078u: goto label_1ca078;
        case 0x1ca088u: goto label_1ca088;
        case 0x1ca160u: goto label_1ca160;
        case 0x1ca170u: goto label_1ca170;
        case 0x1ca180u: goto label_1ca180;
        case 0x1ca194u: goto label_1ca194;
        case 0x1ca208u: goto label_1ca208;
        case 0x1ca260u: goto label_1ca260;
        case 0x1ca29cu: goto label_1ca29c;
        default: break;
    }

    ctx->pc = 0x1ca040u;

    // 0x1ca040: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ca040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ca044: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1ca044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1ca048: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ca048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ca04c: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1ca04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1ca050: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1ca050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1ca054: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1ca054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1ca058: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1ca058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1ca05c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1ca05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1ca060: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1ca060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1ca064: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1ca064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1ca068: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1ca068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1ca06c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1ca06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1ca070: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA070u;
    SET_GPR_U32(ctx, 31, 0x1CA078u);
    ctx->pc = 0x1CA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA070u;
    // 0x1ca074: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA070u, 0x1CA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA078u;
label_1ca078:
    // 0x1ca078: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1ca078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca07c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1ca07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1ca080: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA080u;
    SET_GPR_U32(ctx, 31, 0x1CA088u);
    ctx->pc = 0x1CA084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA080u;
    // 0x1ca084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA080u, 0x1CA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA088u;
label_1ca088:
    // 0x1ca088: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ca088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca08c: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1ca08cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ca090: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CA090u;
    {
        const bool branch_taken_0x1ca090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA090u;
        // 0x1ca094: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca090) {
            ctx->pc = 0x1CA0F4u;
            goto label_1ca0f4;
        }
    }
    ctx->pc = 0x1CA098u;
    // 0x1ca098: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ca098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca09c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1ca09cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ca0a0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CA0A0u;
    {
        const bool branch_taken_0x1ca0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0a0) {
            ctx->pc = 0x1CA0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA0A0u;
            // 0x1ca0a4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA11Cu;
            goto label_1ca11c;
        }
    }
    ctx->pc = 0x1CA0A8u;
    // 0x1ca0a8: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1ca0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x1ca0ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA0ACu;
    {
        const bool branch_taken_0x1ca0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0ACu;
        // 0x1ca0b0: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0ac) {
            ctx->pc = 0x1CA0C8u;
            goto label_1ca0c8;
        }
    }
    ctx->pc = 0x1CA0B4u;
    // 0x1ca0b4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1ca0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1ca0b8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CA0B8u;
    {
        const bool branch_taken_0x1ca0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0b8) {
            ctx->pc = 0x1CA0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA0B8u;
            // 0x1ca0bc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA0F4u;
            goto label_1ca0f4;
        }
    }
    ctx->pc = 0x1CA0C0u;
    // 0x1ca0c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA0C0u;
    {
        const bool branch_taken_0x1ca0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0C0u;
        // 0x1ca0c4: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0c0) {
            ctx->pc = 0x1CA0DCu;
            goto label_1ca0dc;
        }
    }
    ctx->pc = 0x1CA0C8u;
label_1ca0c8:
    // 0x1ca0c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA0C8u;
    {
        const bool branch_taken_0x1ca0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0C8u;
        // 0x1ca0cc: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0c8) {
            ctx->pc = 0x1CA0E8u;
            goto label_1ca0e8;
        }
    }
    ctx->pc = 0x1CA0D0u;
    // 0x1ca0d0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA0D0u;
    {
        const bool branch_taken_0x1ca0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0d0) {
            ctx->pc = 0x1CA0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA0D0u;
            // 0x1ca0d4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA11Cu;
            goto label_1ca11c;
        }
    }
    ctx->pc = 0x1CA0D8u;
    // 0x1ca0d8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1ca0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1ca0dc:
    // 0x1ca0dc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1CA0DCu;
    {
        const bool branch_taken_0x1ca0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0DCu;
        // 0x1ca0e0: 0x2444bfe0  addiu       $a0, $v0, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0dc) {
            ctx->pc = 0x1CA294u;
            goto label_1ca294;
        }
    }
    ctx->pc = 0x1CA0E4u;
    // 0x1ca0e4: 0x0  nop
    ctx->pc = 0x1ca0e4u;
    // NOP
label_1ca0e8:
    // 0x1ca0e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA0E8u;
    {
        const bool branch_taken_0x1ca0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0E8u;
        // 0x1ca0ec: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0e8) {
            ctx->pc = 0x1CA110u;
            goto label_1ca110;
        }
    }
    ctx->pc = 0x1CA0F0u;
    // 0x1ca0f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ca0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ca0f4:
    // 0x1ca0f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0f8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ca0fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1ca0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1ca100: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ca100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ca104: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1CA104u;
    {
        const bool branch_taken_0x1ca104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA104u;
        // 0x1ca108: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca104) {
            ctx->pc = 0x1CA294u;
            goto label_1ca294;
        }
    }
    ctx->pc = 0x1CA10Cu;
    // 0x1ca10c: 0x0  nop
    ctx->pc = 0x1ca10cu;
    // NOP
label_1ca110:
    // 0x1ca110: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA110u;
    {
        const bool branch_taken_0x1ca110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA110u;
        // 0x1ca114: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca110) {
            ctx->pc = 0x1CA138u;
            goto label_1ca138;
        }
    }
    ctx->pc = 0x1CA118u;
    // 0x1ca118: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1ca118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1ca11c:
    // 0x1ca11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca120: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ca120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ca124: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1ca124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1ca128: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ca128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ca12c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1CA12Cu;
    {
        const bool branch_taken_0x1ca12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA12Cu;
        // 0x1ca130: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca12c) {
            ctx->pc = 0x1CA294u;
            goto label_1ca294;
        }
    }
    ctx->pc = 0x1CA134u;
    // 0x1ca134: 0x0  nop
    ctx->pc = 0x1ca134u;
    // NOP
label_1ca138:
    // 0x1ca138: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x1ca138u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca13c: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x1ca13cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x1ca140: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ca140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca144: 0x2758024  and         $s0, $s3, $s5
    ctx->pc = 0x1ca144u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x1ca148: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x1ca148u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x1ca14c: 0x255b024  and         $s6, $s2, $s5
    ctx->pc = 0x1ca14cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & GPR_U64(ctx, 21));
    // 0x1ca150: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1ca150u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1ca154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca158: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1CA158u;
    SET_GPR_U32(ctx, 31, 0x1CA160u);
    ctx->pc = 0x1CA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA158u;
    // 0x1ca15c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1CA158u, 0x1CA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA160u;
label_1ca160:
    // 0x1ca160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca168: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1CA168u;
    SET_GPR_U32(ctx, 31, 0x1CA170u);
    ctx->pc = 0x1CA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA168u;
    // 0x1ca16c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1CA168u, 0x1CA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA170u;
label_1ca170:
    // 0x1ca170: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca174: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ca174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca178: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1CA178u;
    SET_GPR_U32(ctx, 31, 0x1CA180u);
    ctx->pc = 0x1CA17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA178u;
    // 0x1ca17c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1CA178u, 0x1CA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA180u;
label_1ca180:
    // 0x1ca180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ca184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca188: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ca188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca18c: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1CA18Cu;
    SET_GPR_U32(ctx, 31, 0x1CA194u);
    ctx->pc = 0x1CA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA18Cu;
    // 0x1ca190: 0x230802d  daddu       $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1CA18Cu, 0x1CA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA194u;
label_1ca194:
    // 0x1ca194: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x1ca194u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca198: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x1ca198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ca19c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1ca19cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1ca1a0: 0x286302d  daddu       $a2, $s4, $a2
    ctx->pc = 0x1ca1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 6));
    // 0x1ca1a4: 0x2158024  and         $s0, $s0, $s5
    ctx->pc = 0x1ca1a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 21));
    // 0x1ca1a8: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1ca1a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1ca1ac: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1ca1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1ca1b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ca1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ca1b4: 0xd4a02b  sltu        $s4, $a2, $s4
    ctx->pc = 0x1ca1b4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1ca1b8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1ca1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca1bc: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1ca1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ca1c0: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x1ca1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x1ca1c4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1ca1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ca1c8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1ca1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1ca1cc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1ca1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ca1d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ca1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca1d4: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x1ca1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x1ca1d8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1ca1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1ca1dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1ca1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1ca1e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ca1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ca1e4: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1ca1e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca1e8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1ca1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1ca1ec: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA1ECu;
    {
        const bool branch_taken_0x1ca1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1ECu;
        // 0x1ca1f0: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1ec) {
            ctx->pc = 0x1CA234u;
            goto label_1ca234;
        }
    }
    ctx->pc = 0x1CA1F4u;
    // 0x1ca1f4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1ca1f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ca1f8: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x1ca1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1ca1fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ca1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca200: 0x528fa  dsrl        $a1, $a1, 3
    ctx->pc = 0x1ca200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    // 0x1ca204: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1ca204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1ca208:
    // 0x1ca208: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x1ca208u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x1ca20c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ca20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ca210: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ca210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ca214: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x1ca214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA218u;
    {
        const bool branch_taken_0x1ca218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA218u;
        // 0x1ca21c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca218) {
            ctx->pc = 0x1CA228u;
            goto label_1ca228;
        }
    }
    ctx->pc = 0x1CA220u;
    // 0x1ca220: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x1ca220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x1ca224: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ca224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1ca228:
    // 0x1ca228: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CA228u;
    {
        const bool branch_taken_0x1ca228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA228u;
        // 0x1ca22c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca228) {
            ctx->pc = 0x1CA208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca208;
        }
    }
    ctx->pc = 0x1CA230u;
    // 0x1ca230: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1ca230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1ca234:
    // 0x1ca234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca238: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1ca238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1ca23c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1ca23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca240: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA240u;
    {
        const bool branch_taken_0x1ca240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA240u;
        // 0x1ca244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca240) {
            ctx->pc = 0x1CA288u;
            goto label_1ca288;
        }
    }
    ctx->pc = 0x1CA248u;
    // 0x1ca248: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ca248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ca24c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1ca24cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ca250: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x1ca250u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1ca254: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca258: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ca258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca25c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x1ca25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_1ca260:
    // 0x1ca260: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x1ca260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x1ca264: 0xc81824  and         $v1, $a2, $t0
    ctx->pc = 0x1ca264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x1ca268: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x1ca268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x1ca26c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ca26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ca270: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1ca270u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1ca274: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x1ca274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca278: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CA278u;
    {
        const bool branch_taken_0x1ca278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA278u;
        // 0x1ca27c: 0x63078  dsll        $a2, $a2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca278) {
            ctx->pc = 0x1CA260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca260;
        }
    }
    ctx->pc = 0x1CA280u;
    // 0x1ca280: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1ca280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1ca284: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ca284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ca288:
    // 0x1ca288: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1ca288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1ca28c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ca28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ca290: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ca290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ca294:
    // 0x1ca294: 0xc073950  jal         func_1CE540
    ctx->pc = 0x1CA294u;
    SET_GPR_U32(ctx, 31, 0x1CA29Cu);
    ctx->pc = 0x1CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE540u, 0x1CA294u, 0x1CA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA29Cu;
label_1ca29c:
    // 0x1ca29c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1ca29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca2a0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1ca2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ca2a4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1ca2a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ca2a8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1ca2a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ca2ac: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1ca2acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca2b0: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1ca2b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ca2b4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1ca2b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca2b8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1ca2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ca2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2BCu;
        // 0x1ca2c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA2C4u;
}
