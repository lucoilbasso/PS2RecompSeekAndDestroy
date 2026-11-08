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

// Function: DrawFunc__12ApcFieldDrawP8WcEntity
// Address: 0x13c938 - 0x13cb30
void DrawFunc__12ApcFieldDrawP8WcEntity_0x13c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__12ApcFieldDrawP8WcEntity_0x13c938");
#endif

    switch (ctx->pc) {
        case 0x13c938u: goto label_13c938;
        case 0x13c93cu: goto label_13c93c;
        case 0x13c940u: goto label_13c940;
        case 0x13c944u: goto label_13c944;
        case 0x13c948u: goto label_13c948;
        case 0x13c94cu: goto label_13c94c;
        case 0x13c950u: goto label_13c950;
        case 0x13c954u: goto label_13c954;
        case 0x13c958u: goto label_13c958;
        case 0x13c95cu: goto label_13c95c;
        case 0x13c960u: goto label_13c960;
        case 0x13c964u: goto label_13c964;
        case 0x13c968u: goto label_13c968;
        case 0x13c96cu: goto label_13c96c;
        case 0x13c970u: goto label_13c970;
        case 0x13c974u: goto label_13c974;
        case 0x13c978u: goto label_13c978;
        case 0x13c97cu: goto label_13c97c;
        case 0x13c980u: goto label_13c980;
        case 0x13c984u: goto label_13c984;
        case 0x13c988u: goto label_13c988;
        case 0x13c98cu: goto label_13c98c;
        case 0x13c990u: goto label_13c990;
        case 0x13c994u: goto label_13c994;
        case 0x13c998u: goto label_13c998;
        case 0x13c99cu: goto label_13c99c;
        case 0x13c9a0u: goto label_13c9a0;
        case 0x13c9a4u: goto label_13c9a4;
        case 0x13c9a8u: goto label_13c9a8;
        case 0x13c9acu: goto label_13c9ac;
        case 0x13c9b0u: goto label_13c9b0;
        case 0x13c9b4u: goto label_13c9b4;
        case 0x13c9b8u: goto label_13c9b8;
        case 0x13c9bcu: goto label_13c9bc;
        case 0x13c9c0u: goto label_13c9c0;
        case 0x13c9c4u: goto label_13c9c4;
        case 0x13c9c8u: goto label_13c9c8;
        case 0x13c9ccu: goto label_13c9cc;
        case 0x13c9d0u: goto label_13c9d0;
        case 0x13c9d4u: goto label_13c9d4;
        case 0x13c9d8u: goto label_13c9d8;
        case 0x13c9dcu: goto label_13c9dc;
        case 0x13c9e0u: goto label_13c9e0;
        case 0x13c9e4u: goto label_13c9e4;
        case 0x13c9e8u: goto label_13c9e8;
        case 0x13c9ecu: goto label_13c9ec;
        case 0x13c9f0u: goto label_13c9f0;
        case 0x13c9f4u: goto label_13c9f4;
        case 0x13c9f8u: goto label_13c9f8;
        case 0x13c9fcu: goto label_13c9fc;
        case 0x13ca00u: goto label_13ca00;
        case 0x13ca04u: goto label_13ca04;
        case 0x13ca08u: goto label_13ca08;
        case 0x13ca0cu: goto label_13ca0c;
        case 0x13ca10u: goto label_13ca10;
        case 0x13ca14u: goto label_13ca14;
        case 0x13ca18u: goto label_13ca18;
        case 0x13ca1cu: goto label_13ca1c;
        case 0x13ca20u: goto label_13ca20;
        case 0x13ca24u: goto label_13ca24;
        case 0x13ca28u: goto label_13ca28;
        case 0x13ca2cu: goto label_13ca2c;
        case 0x13ca30u: goto label_13ca30;
        case 0x13ca34u: goto label_13ca34;
        case 0x13ca38u: goto label_13ca38;
        case 0x13ca3cu: goto label_13ca3c;
        case 0x13ca40u: goto label_13ca40;
        case 0x13ca44u: goto label_13ca44;
        case 0x13ca48u: goto label_13ca48;
        case 0x13ca4cu: goto label_13ca4c;
        case 0x13ca50u: goto label_13ca50;
        case 0x13ca54u: goto label_13ca54;
        case 0x13ca58u: goto label_13ca58;
        case 0x13ca5cu: goto label_13ca5c;
        case 0x13ca60u: goto label_13ca60;
        case 0x13ca64u: goto label_13ca64;
        case 0x13ca68u: goto label_13ca68;
        case 0x13ca6cu: goto label_13ca6c;
        case 0x13ca70u: goto label_13ca70;
        case 0x13ca74u: goto label_13ca74;
        case 0x13ca78u: goto label_13ca78;
        case 0x13ca7cu: goto label_13ca7c;
        case 0x13ca80u: goto label_13ca80;
        case 0x13ca84u: goto label_13ca84;
        case 0x13ca88u: goto label_13ca88;
        case 0x13ca8cu: goto label_13ca8c;
        case 0x13ca90u: goto label_13ca90;
        case 0x13ca94u: goto label_13ca94;
        case 0x13ca98u: goto label_13ca98;
        case 0x13ca9cu: goto label_13ca9c;
        case 0x13caa0u: goto label_13caa0;
        case 0x13caa4u: goto label_13caa4;
        case 0x13caa8u: goto label_13caa8;
        case 0x13caacu: goto label_13caac;
        case 0x13cab0u: goto label_13cab0;
        case 0x13cab4u: goto label_13cab4;
        case 0x13cab8u: goto label_13cab8;
        case 0x13cabcu: goto label_13cabc;
        case 0x13cac0u: goto label_13cac0;
        case 0x13cac4u: goto label_13cac4;
        case 0x13cac8u: goto label_13cac8;
        case 0x13caccu: goto label_13cacc;
        case 0x13cad0u: goto label_13cad0;
        case 0x13cad4u: goto label_13cad4;
        case 0x13cad8u: goto label_13cad8;
        case 0x13cadcu: goto label_13cadc;
        case 0x13cae0u: goto label_13cae0;
        case 0x13cae4u: goto label_13cae4;
        case 0x13cae8u: goto label_13cae8;
        case 0x13caecu: goto label_13caec;
        case 0x13caf0u: goto label_13caf0;
        case 0x13caf4u: goto label_13caf4;
        case 0x13caf8u: goto label_13caf8;
        case 0x13cafcu: goto label_13cafc;
        case 0x13cb00u: goto label_13cb00;
        case 0x13cb04u: goto label_13cb04;
        case 0x13cb08u: goto label_13cb08;
        case 0x13cb0cu: goto label_13cb0c;
        case 0x13cb10u: goto label_13cb10;
        case 0x13cb14u: goto label_13cb14;
        case 0x13cb18u: goto label_13cb18;
        case 0x13cb1cu: goto label_13cb1c;
        case 0x13cb20u: goto label_13cb20;
        case 0x13cb24u: goto label_13cb24;
        case 0x13cb28u: goto label_13cb28;
        case 0x13cb2cu: goto label_13cb2c;
        default: break;
    }

    ctx->pc = 0x13c938u;

label_13c938:
    // 0x13c938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13c93c:
    // 0x13c93c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c940:
    // 0x13c940: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13c940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13c944:
    // 0x13c944: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13c944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c948:
    // 0x13c948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c94c:
    // 0x13c94c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x13c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_13c950:
    // 0x13c950: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13c950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13c954:
    // 0x13c954: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13c954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_13c958:
    // 0x13c958: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_13c95c:
    // 0x13c95c: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x13c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_13c960:
    // 0x13c960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c964:
    // 0x13c964: 0xc06a202  jal         func_1A8808
label_13c968:
    if (ctx->pc == 0x13C968u) {
        ctx->pc = 0x13C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C964u;
        // 0x13c968: 0x8c5401e4  lw          $s4, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C96Cu;
        goto label_13c96c;
    }
    ctx->pc = 0x13C964u;
    SET_GPR_U32(ctx, 31, 0x13C96Cu);
    ctx->pc = 0x13C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C964u;
    // 0x13c968: 0x8c5401e4  lw          $s4, 0x1E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x13C964u, 0x13C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C96Cu;
label_13c96c:
    // 0x13c96c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13c970:
    if (ctx->pc == 0x13C970u) {
        ctx->pc = 0x13C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C96Cu;
        // 0x13c970: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C974u;
        goto label_13c974;
    }
    ctx->pc = 0x13C96Cu;
    {
        const bool branch_taken_0x13c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C96Cu;
        // 0x13c970: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c96c) {
            ctx->pc = 0x13C984u;
            goto label_13c984;
        }
    }
    ctx->pc = 0x13C974u;
label_13c974:
    // 0x13c974: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_13c978:
    // 0x13c978: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_13c97c:
    // 0x13c97c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_13c980:
    if (ctx->pc == 0x13C980u) {
        ctx->pc = 0x13C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C97Cu;
        // 0x13c980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C984u;
        goto label_13c984;
    }
    ctx->pc = 0x13C97Cu;
    {
        const bool branch_taken_0x13c97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C97Cu;
        // 0x13c980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c97c) {
            ctx->pc = 0x13C990u;
            goto label_13c990;
        }
    }
    ctx->pc = 0x13C984u;
label_13c984:
    // 0x13c984: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x13c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_13c988:
    // 0x13c988: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x13c988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_13c98c:
    // 0x13c98c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x13c98cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13c990:
    // 0x13c990: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
label_13c994:
    if (ctx->pc == 0x13C994u) {
        ctx->pc = 0x13C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C990u;
        // 0x13c994: 0x26910170  addiu       $s1, $s4, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C998u;
        goto label_13c998;
    }
    ctx->pc = 0x13C990u;
    {
        const bool branch_taken_0x13c990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C990u;
        // 0x13c994: 0x26910170  addiu       $s1, $s4, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c990) {
            ctx->pc = 0x13CB10u;
            goto label_13cb10;
        }
    }
    ctx->pc = 0x13C998u;
label_13c998:
    // 0x13c998: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13c99c:
    // 0x13c99c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_13c9a0:
    if (ctx->pc == 0x13C9A0u) {
        ctx->pc = 0x13C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C99Cu;
        // 0x13c9a0: 0x8e530150  lw          $s3, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9A4u;
        goto label_13c9a4;
    }
    ctx->pc = 0x13C99Cu;
    {
        const bool branch_taken_0x13c99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C99Cu;
        // 0x13c9a0: 0x8e530150  lw          $s3, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c99c) {
            ctx->pc = 0x13CA10u;
            goto label_13ca10;
        }
    }
    ctx->pc = 0x13C9A4u;
label_13c9a4:
    // 0x13c9a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13c9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c9a8:
    // 0x13c9a8: 0xc05dd18  jal         func_177460
label_13c9ac:
    if (ctx->pc == 0x13C9ACu) {
        ctx->pc = 0x13C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9A8u;
        // 0x13c9ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9B0u;
        goto label_13c9b0;
    }
    ctx->pc = 0x13C9A8u;
    SET_GPR_U32(ctx, 31, 0x13C9B0u);
    ctx->pc = 0x13C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C9A8u;
    // 0x13c9ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13C9A8u, 0x13C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9B0u;
label_13c9b0:
    // 0x13c9b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13c9b4:
    // 0x13c9b4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_13c9b8:
    if (ctx->pc == 0x13C9B8u) {
        ctx->pc = 0x13C9BCu;
        goto label_13c9bc;
    }
    ctx->pc = 0x13C9B4u;
    {
        const bool branch_taken_0x13c9b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13c9b4) {
            ctx->pc = 0x13CA08u;
            goto label_13ca08;
        }
    }
    ctx->pc = 0x13C9BCu;
label_13c9bc:
    // 0x13c9bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_13c9c0:
    // 0x13c9c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13c9c4:
    // 0x13c9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13c9c8:
    // 0x13c9c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13c9cc:
    // 0x13c9cc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_13c9d0:
    if (ctx->pc == 0x13C9D0u) {
        ctx->pc = 0x13C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9CCu;
        // 0x13c9d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9D4u;
        goto label_13c9d4;
    }
    ctx->pc = 0x13C9CCu;
    {
        const bool branch_taken_0x13c9cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9CCu;
        // 0x13c9d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9cc) {
            ctx->pc = 0x13C9F8u;
            goto label_13c9f8;
        }
    }
    ctx->pc = 0x13C9D4u;
label_13c9d4:
    // 0x13c9d4: 0x8cc20248  lw          $v0, 0x248($a2)
    ctx->pc = 0x13c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
label_13c9d8:
    // 0x13c9d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13c9dc:
    if (ctx->pc == 0x13C9DCu) {
        ctx->pc = 0x13C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9D8u;
        // 0x13c9dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9E0u;
        goto label_13c9e0;
    }
    ctx->pc = 0x13C9D8u;
    {
        const bool branch_taken_0x13c9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9D8u;
        // 0x13c9dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9d8) {
            ctx->pc = 0x13C9F8u;
            goto label_13c9f8;
        }
    }
    ctx->pc = 0x13C9E0u;
label_13c9e0:
    // 0x13c9e0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13c9e4:
    // 0x13c9e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13c9e8:
    // 0x13c9e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13c9e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13c9ec:
    // 0x13c9ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13c9f0:
    // 0x13c9f0: 0x60f809  jalr        $v1
label_13c9f4:
    if (ctx->pc == 0x13C9F4u) {
        ctx->pc = 0x13C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9F0u;
        // 0x13c9f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9F8u;
        goto label_13c9f8;
    }
    ctx->pc = 0x13C9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C9F8u);
        ctx->pc = 0x13C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9F0u;
        // 0x13c9f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C9F0u, 0x13C9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C9F8u;
label_13c9f8:
    // 0x13c9f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13c9fc:
    // 0x13c9fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13c9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13ca00:
    // 0x13ca00: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_13ca04:
    if (ctx->pc == 0x13CA04u) {
        ctx->pc = 0x13CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA00u;
        // 0x13ca04: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA08u;
        goto label_13ca08;
    }
    ctx->pc = 0x13CA00u;
    {
        const bool branch_taken_0x13ca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ca00) {
            ctx->pc = 0x13CA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CA00u;
            // 0x13ca04: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c9c0;
        }
    }
    ctx->pc = 0x13CA08u;
label_13ca08:
    // 0x13ca08: 0xc05dd18  jal         func_177460
label_13ca0c:
    if (ctx->pc == 0x13CA0Cu) {
        ctx->pc = 0x13CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA08u;
        // 0x13ca0c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA10u;
        goto label_13ca10;
    }
    ctx->pc = 0x13CA08u;
    SET_GPR_U32(ctx, 31, 0x13CA10u);
    ctx->pc = 0x13CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA08u;
    // 0x13ca0c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13CA08u, 0x13CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA10u;
label_13ca10:
    // 0x13ca10: 0x26910120  addiu       $s1, $s4, 0x120
    ctx->pc = 0x13ca10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
label_13ca14:
    // 0x13ca14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13ca18:
    // 0x13ca18: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_13ca1c:
    if (ctx->pc == 0x13CA1Cu) {
        ctx->pc = 0x13CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA18u;
        // 0x13ca1c: 0x8e530150  lw          $s3, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA20u;
        goto label_13ca20;
    }
    ctx->pc = 0x13CA18u;
    {
        const bool branch_taken_0x13ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA18u;
        // 0x13ca1c: 0x8e530150  lw          $s3, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca18) {
            ctx->pc = 0x13CA90u;
            goto label_13ca90;
        }
    }
    ctx->pc = 0x13CA20u;
label_13ca20:
    // 0x13ca20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13ca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ca24:
    // 0x13ca24: 0xc05dd18  jal         func_177460
label_13ca28:
    if (ctx->pc == 0x13CA28u) {
        ctx->pc = 0x13CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA24u;
        // 0x13ca28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA2Cu;
        goto label_13ca2c;
    }
    ctx->pc = 0x13CA24u;
    SET_GPR_U32(ctx, 31, 0x13CA2Cu);
    ctx->pc = 0x13CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA24u;
    // 0x13ca28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13CA24u, 0x13CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA2Cu;
label_13ca2c:
    // 0x13ca2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13ca30:
    // 0x13ca30: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_13ca34:
    if (ctx->pc == 0x13CA34u) {
        ctx->pc = 0x13CA38u;
        goto label_13ca38;
    }
    ctx->pc = 0x13CA30u;
    {
        const bool branch_taken_0x13ca30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13ca30) {
            ctx->pc = 0x13CA88u;
            goto label_13ca88;
        }
    }
    ctx->pc = 0x13CA38u;
label_13ca38:
    // 0x13ca38: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_13ca3c:
    // 0x13ca3c: 0x0  nop
    ctx->pc = 0x13ca3cu;
    // NOP
label_13ca40:
    // 0x13ca40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13ca44:
    // 0x13ca44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13ca48:
    // 0x13ca48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13ca48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13ca4c:
    // 0x13ca4c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_13ca50:
    if (ctx->pc == 0x13CA50u) {
        ctx->pc = 0x13CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA4Cu;
        // 0x13ca50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA54u;
        goto label_13ca54;
    }
    ctx->pc = 0x13CA4Cu;
    {
        const bool branch_taken_0x13ca4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA4Cu;
        // 0x13ca50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca4c) {
            ctx->pc = 0x13CA78u;
            goto label_13ca78;
        }
    }
    ctx->pc = 0x13CA54u;
label_13ca54:
    // 0x13ca54: 0x8cc20248  lw          $v0, 0x248($a2)
    ctx->pc = 0x13ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
label_13ca58:
    // 0x13ca58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13ca5c:
    if (ctx->pc == 0x13CA5Cu) {
        ctx->pc = 0x13CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA58u;
        // 0x13ca5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA60u;
        goto label_13ca60;
    }
    ctx->pc = 0x13CA58u;
    {
        const bool branch_taken_0x13ca58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA58u;
        // 0x13ca5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca58) {
            ctx->pc = 0x13CA78u;
            goto label_13ca78;
        }
    }
    ctx->pc = 0x13CA60u;
label_13ca60:
    // 0x13ca60: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13ca64:
    // 0x13ca64: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13ca68:
    // 0x13ca68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13ca68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13ca6c:
    // 0x13ca6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13ca70:
    // 0x13ca70: 0x60f809  jalr        $v1
label_13ca74:
    if (ctx->pc == 0x13CA74u) {
        ctx->pc = 0x13CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA70u;
        // 0x13ca74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA78u;
        goto label_13ca78;
    }
    ctx->pc = 0x13CA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13CA78u);
        ctx->pc = 0x13CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA70u;
        // 0x13ca74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CA70u, 0x13CA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CA78u;
label_13ca78:
    // 0x13ca78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13ca7c:
    // 0x13ca7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13ca7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13ca80:
    // 0x13ca80: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_13ca84:
    if (ctx->pc == 0x13CA84u) {
        ctx->pc = 0x13CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA80u;
        // 0x13ca84: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA88u;
        goto label_13ca88;
    }
    ctx->pc = 0x13CA80u;
    {
        const bool branch_taken_0x13ca80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ca80) {
            ctx->pc = 0x13CA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CA80u;
            // 0x13ca84: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ca40;
        }
    }
    ctx->pc = 0x13CA88u;
label_13ca88:
    // 0x13ca88: 0xc05dd18  jal         func_177460
label_13ca8c:
    if (ctx->pc == 0x13CA8Cu) {
        ctx->pc = 0x13CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA88u;
        // 0x13ca8c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA90u;
        goto label_13ca90;
    }
    ctx->pc = 0x13CA88u;
    SET_GPR_U32(ctx, 31, 0x13CA90u);
    ctx->pc = 0x13CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA88u;
    // 0x13ca8c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13CA88u, 0x13CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA90u;
label_13ca90:
    // 0x13ca90: 0x269101c0  addiu       $s1, $s4, 0x1C0
    ctx->pc = 0x13ca90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
label_13ca94:
    // 0x13ca94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13ca98:
    // 0x13ca98: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_13ca9c:
    if (ctx->pc == 0x13CA9Cu) {
        ctx->pc = 0x13CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA98u;
        // 0x13ca9c: 0x8e520150  lw          $s2, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAA0u;
        goto label_13caa0;
    }
    ctx->pc = 0x13CA98u;
    {
        const bool branch_taken_0x13ca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA98u;
        // 0x13ca9c: 0x8e520150  lw          $s2, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca98) {
            ctx->pc = 0x13CB10u;
            goto label_13cb10;
        }
    }
    ctx->pc = 0x13CAA0u;
label_13caa0:
    // 0x13caa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13caa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13caa4:
    // 0x13caa4: 0xc05dd18  jal         func_177460
label_13caa8:
    if (ctx->pc == 0x13CAA8u) {
        ctx->pc = 0x13CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAA4u;
        // 0x13caa8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAACu;
        goto label_13caac;
    }
    ctx->pc = 0x13CAA4u;
    SET_GPR_U32(ctx, 31, 0x13CAACu);
    ctx->pc = 0x13CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAA4u;
    // 0x13caa8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13CAA4u, 0x13CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAACu;
label_13caac:
    // 0x13caac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13cab0:
    // 0x13cab0: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_13cab4:
    if (ctx->pc == 0x13CAB4u) {
        ctx->pc = 0x13CAB8u;
        goto label_13cab8;
    }
    ctx->pc = 0x13CAB0u;
    {
        const bool branch_taken_0x13cab0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cab0) {
            ctx->pc = 0x13CB08u;
            goto label_13cb08;
        }
    }
    ctx->pc = 0x13CAB8u;
label_13cab8:
    // 0x13cab8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_13cabc:
    // 0x13cabc: 0x0  nop
    ctx->pc = 0x13cabcu;
    // NOP
label_13cac0:
    // 0x13cac0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13cac4:
    // 0x13cac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13cac8:
    // 0x13cac8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13cac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cacc:
    // 0x13cacc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_13cad0:
    if (ctx->pc == 0x13CAD0u) {
        ctx->pc = 0x13CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CACCu;
        // 0x13cad0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAD4u;
        goto label_13cad4;
    }
    ctx->pc = 0x13CACCu;
    {
        const bool branch_taken_0x13cacc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CACCu;
        // 0x13cad0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cacc) {
            ctx->pc = 0x13CAF8u;
            goto label_13caf8;
        }
    }
    ctx->pc = 0x13CAD4u;
label_13cad4:
    // 0x13cad4: 0x8cc20248  lw          $v0, 0x248($a2)
    ctx->pc = 0x13cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
label_13cad8:
    // 0x13cad8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13cadc:
    if (ctx->pc == 0x13CADCu) {
        ctx->pc = 0x13CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAD8u;
        // 0x13cadc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAE0u;
        goto label_13cae0;
    }
    ctx->pc = 0x13CAD8u;
    {
        const bool branch_taken_0x13cad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAD8u;
        // 0x13cadc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cad8) {
            ctx->pc = 0x13CAF8u;
            goto label_13caf8;
        }
    }
    ctx->pc = 0x13CAE0u;
label_13cae0:
    // 0x13cae0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13cae4:
    // 0x13cae4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13cae8:
    // 0x13cae8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13cae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13caec:
    // 0x13caec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13caf0:
    // 0x13caf0: 0x60f809  jalr        $v1
label_13caf4:
    if (ctx->pc == 0x13CAF4u) {
        ctx->pc = 0x13CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAF0u;
        // 0x13caf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAF8u;
        goto label_13caf8;
    }
    ctx->pc = 0x13CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13CAF8u);
        ctx->pc = 0x13CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAF0u;
        // 0x13caf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CAF0u, 0x13CAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CAF8u;
label_13caf8:
    // 0x13caf8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13cafc:
    // 0x13cafc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13cafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13cb00:
    // 0x13cb00: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_13cb04:
    if (ctx->pc == 0x13CB04u) {
        ctx->pc = 0x13CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB00u;
        // 0x13cb04: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB08u;
        goto label_13cb08;
    }
    ctx->pc = 0x13CB00u;
    {
        const bool branch_taken_0x13cb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cb00) {
            ctx->pc = 0x13CB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CB00u;
            // 0x13cb04: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cac0;
        }
    }
    ctx->pc = 0x13CB08u;
label_13cb08:
    // 0x13cb08: 0xc05dd18  jal         func_177460
label_13cb0c:
    if (ctx->pc == 0x13CB0Cu) {
        ctx->pc = 0x13CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB08u;
        // 0x13cb0c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB10u;
        goto label_13cb10;
    }
    ctx->pc = 0x13CB08u;
    SET_GPR_U32(ctx, 31, 0x13CB10u);
    ctx->pc = 0x13CB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CB08u;
    // 0x13cb0c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13CB08u, 0x13CB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CB10u;
label_13cb10:
    // 0x13cb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13cb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cb14:
    // 0x13cb14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13cb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13cb18:
    // 0x13cb18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13cb18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13cb1c:
    // 0x13cb1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13cb1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13cb20:
    // 0x13cb20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13cb20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13cb24:
    // 0x13cb24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13cb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13cb28:
    // 0x13cb28: 0x3e00008  jr          $ra
label_13cb2c:
    if (ctx->pc == 0x13CB2Cu) {
        ctx->pc = 0x13CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB28u;
        // 0x13cb2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB30u;
        goto label_fallthrough_0x13cb28;
    }
    ctx->pc = 0x13CB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB28u;
        // 0x13cb2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13cb28:
    ctx->pc = 0x13CB30u;
}
