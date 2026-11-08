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

// Function: __cp_pop_exception
// Address: 0x1ccc48 - 0x1ccd70
void ps2___cp_pop_exception_0x1ccc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___cp_pop_exception_0x1ccc48");
#endif

    switch (ctx->pc) {
        case 0x1ccc48u: goto label_1ccc48;
        case 0x1ccc4cu: goto label_1ccc4c;
        case 0x1ccc50u: goto label_1ccc50;
        case 0x1ccc54u: goto label_1ccc54;
        case 0x1ccc58u: goto label_1ccc58;
        case 0x1ccc5cu: goto label_1ccc5c;
        case 0x1ccc60u: goto label_1ccc60;
        case 0x1ccc64u: goto label_1ccc64;
        case 0x1ccc68u: goto label_1ccc68;
        case 0x1ccc6cu: goto label_1ccc6c;
        case 0x1ccc70u: goto label_1ccc70;
        case 0x1ccc74u: goto label_1ccc74;
        case 0x1ccc78u: goto label_1ccc78;
        case 0x1ccc7cu: goto label_1ccc7c;
        case 0x1ccc80u: goto label_1ccc80;
        case 0x1ccc84u: goto label_1ccc84;
        case 0x1ccc88u: goto label_1ccc88;
        case 0x1ccc8cu: goto label_1ccc8c;
        case 0x1ccc90u: goto label_1ccc90;
        case 0x1ccc94u: goto label_1ccc94;
        case 0x1ccc98u: goto label_1ccc98;
        case 0x1ccc9cu: goto label_1ccc9c;
        case 0x1ccca0u: goto label_1ccca0;
        case 0x1ccca4u: goto label_1ccca4;
        case 0x1ccca8u: goto label_1ccca8;
        case 0x1cccacu: goto label_1cccac;
        case 0x1cccb0u: goto label_1cccb0;
        case 0x1cccb4u: goto label_1cccb4;
        case 0x1cccb8u: goto label_1cccb8;
        case 0x1cccbcu: goto label_1cccbc;
        case 0x1cccc0u: goto label_1cccc0;
        case 0x1cccc4u: goto label_1cccc4;
        case 0x1cccc8u: goto label_1cccc8;
        case 0x1cccccu: goto label_1ccccc;
        case 0x1cccd0u: goto label_1cccd0;
        case 0x1cccd4u: goto label_1cccd4;
        case 0x1cccd8u: goto label_1cccd8;
        case 0x1cccdcu: goto label_1cccdc;
        case 0x1ccce0u: goto label_1ccce0;
        case 0x1ccce4u: goto label_1ccce4;
        case 0x1ccce8u: goto label_1ccce8;
        case 0x1cccecu: goto label_1cccec;
        case 0x1cccf0u: goto label_1cccf0;
        case 0x1cccf4u: goto label_1cccf4;
        case 0x1cccf8u: goto label_1cccf8;
        case 0x1cccfcu: goto label_1cccfc;
        case 0x1ccd00u: goto label_1ccd00;
        case 0x1ccd04u: goto label_1ccd04;
        case 0x1ccd08u: goto label_1ccd08;
        case 0x1ccd0cu: goto label_1ccd0c;
        case 0x1ccd10u: goto label_1ccd10;
        case 0x1ccd14u: goto label_1ccd14;
        case 0x1ccd18u: goto label_1ccd18;
        case 0x1ccd1cu: goto label_1ccd1c;
        case 0x1ccd20u: goto label_1ccd20;
        case 0x1ccd24u: goto label_1ccd24;
        case 0x1ccd28u: goto label_1ccd28;
        case 0x1ccd2cu: goto label_1ccd2c;
        case 0x1ccd30u: goto label_1ccd30;
        case 0x1ccd34u: goto label_1ccd34;
        case 0x1ccd38u: goto label_1ccd38;
        case 0x1ccd3cu: goto label_1ccd3c;
        case 0x1ccd40u: goto label_1ccd40;
        case 0x1ccd44u: goto label_1ccd44;
        case 0x1ccd48u: goto label_1ccd48;
        case 0x1ccd4cu: goto label_1ccd4c;
        case 0x1ccd50u: goto label_1ccd50;
        case 0x1ccd54u: goto label_1ccd54;
        case 0x1ccd58u: goto label_1ccd58;
        case 0x1ccd5cu: goto label_1ccd5c;
        case 0x1ccd60u: goto label_1ccd60;
        case 0x1ccd64u: goto label_1ccd64;
        case 0x1ccd68u: goto label_1ccd68;
        case 0x1ccd6cu: goto label_1ccd6c;
        default: break;
    }

    ctx->pc = 0x1ccc48u;

label_1ccc48:
    // 0x1ccc48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ccc4c:
    // 0x1ccc4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ccc50:
    // 0x1ccc50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1ccc54:
    // 0x1ccc54: 0xc0734a6  jal         func_1CD298
label_1ccc58:
    if (ctx->pc == 0x1CCC58u) {
        ctx->pc = 0x1CCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC54u;
        // 0x1ccc58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC5Cu;
        goto label_1ccc5c;
    }
    ctx->pc = 0x1CCC54u;
    SET_GPR_U32(ctx, 31, 0x1CCC5Cu);
    ctx->pc = 0x1CCC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC54u;
    // 0x1ccc58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD298u, 0x1CCC54u, 0x1CCC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC5Cu;
label_1ccc5c:
    // 0x1ccc5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc60:
    // 0x1ccc60: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x1ccc60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1ccc64:
    // 0x1ccc64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ccc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ccc68:
    // 0x1ccc68: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ccc68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc6c:
    // 0x1ccc6c: 0x6445ffff  daddiu      $a1, $v0, -0x1
    ctx->pc = 0x1ccc6cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_1ccc70:
    // 0x1ccc70: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_1ccc74:
    if (ctx->pc == 0x1CCC74u) {
        ctx->pc = 0x1CCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC70u;
        // 0x1ccc74: 0xfe050020  sd          $a1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC78u;
        goto label_1ccc78;
    }
    ctx->pc = 0x1CCC70u;
    {
        const bool branch_taken_0x1ccc70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC70u;
        // 0x1ccc74: 0xfe050020  sd          $a1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc70) {
            ctx->pc = 0x1CCC84u;
            goto label_1ccc84;
        }
    }
    ctx->pc = 0x1CCC78u;
label_1ccc78:
    // 0x1ccc78: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1ccc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ccc7c:
    // 0x1ccc7c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_1ccc80:
    if (ctx->pc == 0x1CCC80u) {
        ctx->pc = 0x1CCC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC7Cu;
        // 0x1ccc80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC84u;
        goto label_1ccc84;
    }
    ctx->pc = 0x1CCC7Cu;
    {
        const bool branch_taken_0x1ccc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc7c) {
            ctx->pc = 0x1CCC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCC7Cu;
            // 0x1ccc80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD64u;
            goto label_1ccd64;
        }
    }
    ctx->pc = 0x1CCC84u;
label_1ccc84:
    // 0x1ccc84: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_1ccc88:
    if (ctx->pc == 0x1CCC88u) {
        ctx->pc = 0x1CCC8Cu;
        goto label_1ccc8c;
    }
    ctx->pc = 0x1CCC84u;
    {
        const bool branch_taken_0x1ccc84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc84) {
            ctx->pc = 0x1CCD04u;
            goto label_1ccd04;
        }
    }
    ctx->pc = 0x1CCC8Cu;
label_1ccc8c:
    // 0x1ccc8c: 0x56030035  bnel        $s0, $v1, . + 4 + (0x35 << 2)
label_1ccc90:
    if (ctx->pc == 0x1CCC90u) {
        ctx->pc = 0x1CCC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC8Cu;
        // 0x1ccc90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC94u;
        goto label_1ccc94;
    }
    ctx->pc = 0x1CCC8Cu;
    {
        const bool branch_taken_0x1ccc8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ccc8c) {
            ctx->pc = 0x1CCC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCC8Cu;
            // 0x1ccc90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD64u;
            goto label_1ccd64;
        }
    }
    ctx->pc = 0x1CCC94u;
label_1ccc94:
    // 0x1ccc94: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1ccc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ccc98:
    // 0x1ccc98: 0x50a00032  beql        $a1, $zero, . + 4 + (0x32 << 2)
label_1ccc9c:
    if (ctx->pc == 0x1CCC9Cu) {
        ctx->pc = 0x1CCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC98u;
        // 0x1ccc9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCA0u;
        goto label_1ccca0;
    }
    ctx->pc = 0x1CCC98u;
    {
        const bool branch_taken_0x1ccc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc98) {
            ctx->pc = 0x1CCC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCC98u;
            // 0x1ccc9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD64u;
            goto label_1ccd64;
        }
    }
    ctx->pc = 0x1CCCA0u;
label_1ccca0:
    // 0x1ccca0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1ccca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1ccca4:
    // 0x1ccca4: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_1ccca8:
    if (ctx->pc == 0x1CCCA8u) {
        ctx->pc = 0x1CCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCA4u;
        // 0x1ccca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCACu;
        goto label_1cccac;
    }
    ctx->pc = 0x1CCCA4u;
    {
        const bool branch_taken_0x1ccca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccca4) {
            ctx->pc = 0x1CCCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCCA4u;
            // 0x1ccca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD64u;
            goto label_1ccd64;
        }
    }
    ctx->pc = 0x1CCCACu;
label_1cccac:
    // 0x1cccac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1cccacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cccb0:
    // 0x1cccb0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1cccb4:
    if (ctx->pc == 0x1CCCB4u) {
        ctx->pc = 0x1CCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCB0u;
        // 0x1cccb4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCB8u;
        goto label_1cccb8;
    }
    ctx->pc = 0x1CCCB0u;
    {
        const bool branch_taken_0x1cccb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCB0u;
        // 0x1cccb4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccb0) {
            ctx->pc = 0x1CCCECu;
            goto label_1cccec;
        }
    }
    ctx->pc = 0x1CCCB8u;
label_1cccb8:
    // 0x1cccb8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1cccbc:
    if (ctx->pc == 0x1CCCBCu) {
        ctx->pc = 0x1CCCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCB8u;
        // 0x1cccbc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCC0u;
        goto label_1cccc0;
    }
    ctx->pc = 0x1CCCB8u;
    {
        const bool branch_taken_0x1cccb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cccb8) {
            ctx->pc = 0x1CCCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCCB8u;
            // 0x1cccbc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCCC0u;
label_1cccc0:
    // 0x1cccc0: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1cccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_1cccc4:
    // 0x1cccc4: 0x0  nop
    ctx->pc = 0x1cccc4u;
    // NOP
label_1cccc8:
    // 0x1cccc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ccccc:
    // 0x1ccccc: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_1cccd0:
    if (ctx->pc == 0x1CCCD0u) {
        ctx->pc = 0x1CCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCCCu;
        // 0x1cccd0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCD4u;
        goto label_1cccd4;
    }
    ctx->pc = 0x1CCCCCu;
    {
        const bool branch_taken_0x1ccccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccccc) {
            ctx->pc = 0x1CCCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCCCCu;
            // 0x1cccd0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCCD4u;
label_1cccd4:
    // 0x1cccd4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1cccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1cccd8:
    // 0x1cccd8: 0x0  nop
    ctx->pc = 0x1cccd8u;
    // NOP
label_1cccdc:
    // 0x1cccdc: 0x0  nop
    ctx->pc = 0x1cccdcu;
    // NOP
label_1ccce0:
    // 0x1ccce0: 0x0  nop
    ctx->pc = 0x1ccce0u;
    // NOP
label_1ccce4:
    // 0x1ccce4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_1ccce8:
    if (ctx->pc == 0x1CCCE8u) {
        ctx->pc = 0x1CCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCE4u;
        // 0x1ccce8: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCECu;
        goto label_1cccec;
    }
    ctx->pc = 0x1CCCE4u;
    {
        const bool branch_taken_0x1ccce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccce4) {
            ctx->pc = 0x1CCCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCCE4u;
            // 0x1ccce8: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cccc8;
        }
    }
    ctx->pc = 0x1CCCECu;
label_1cccec:
    // 0x1cccec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1cccecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_1cccf0:
    // 0x1cccf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cccf4:
    // 0x1cccf4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1cccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1cccf8:
    // 0x1cccf8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1cccfc:
    if (ctx->pc == 0x1CCCFCu) {
        ctx->pc = 0x1CCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCF8u;
        // 0x1cccfc: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD00u;
        goto label_1ccd00;
    }
    ctx->pc = 0x1CCCF8u;
    {
        const bool branch_taken_0x1cccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCF8u;
        // 0x1cccfc: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccf8) {
            ctx->pc = 0x1CCD60u;
            goto label_1ccd60;
        }
    }
    ctx->pc = 0x1CCD00u;
label_1ccd00:
    // 0x1ccd00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ccd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ccd04:
    // 0x1ccd04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1ccd08:
    if (ctx->pc == 0x1CCD08u) {
        ctx->pc = 0x1CCD0Cu;
        goto label_1ccd0c;
    }
    ctx->pc = 0x1CCD04u;
    {
        const bool branch_taken_0x1ccd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd04) {
            ctx->pc = 0x1CCD1Cu;
            goto label_1ccd1c;
        }
    }
    ctx->pc = 0x1CCD0Cu;
label_1ccd0c:
    // 0x1ccd0c: 0x5470fffc  bnel        $v1, $s0, . + 4 + (-0x4 << 2)
label_1ccd10:
    if (ctx->pc == 0x1CCD10u) {
        ctx->pc = 0x1CCD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD0Cu;
        // 0x1ccd10: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD14u;
        goto label_1ccd14;
    }
    ctx->pc = 0x1CCD0Cu;
    {
        const bool branch_taken_0x1ccd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1ccd0c) {
            ctx->pc = 0x1CCD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCD0Cu;
            // 0x1ccd10: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccd00;
        }
    }
    ctx->pc = 0x1CCD14u;
label_1ccd14:
    // 0x1ccd14: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1ccd18:
    if (ctx->pc == 0x1CCD18u) {
        ctx->pc = 0x1CCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD14u;
        // 0x1ccd18: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD1Cu;
        goto label_1ccd1c;
    }
    ctx->pc = 0x1CCD14u;
    {
        const bool branch_taken_0x1ccd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd14) {
            ctx->pc = 0x1CCD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCD14u;
            // 0x1ccd18: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD28u;
            goto label_1ccd28;
        }
    }
    ctx->pc = 0x1CCD1Cu;
label_1ccd1c:
    // 0x1ccd1c: 0xc07329a  jal         func_1CCA68
label_1ccd20:
    if (ctx->pc == 0x1CCD20u) {
        ctx->pc = 0x1CCD24u;
        goto label_1ccd24;
    }
    ctx->pc = 0x1CCD1Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD24u);
    ctx->pc = 0x1CCA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA68u, 0x1CCD1Cu, 0x1CCD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD24u;
label_1ccd24:
    // 0x1ccd24: 0x0  nop
    ctx->pc = 0x1ccd24u;
    // NOP
label_1ccd28:
    // 0x1ccd28: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1ccd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ccd2c:
    // 0x1ccd2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ccd30:
    if (ctx->pc == 0x1CCD30u) {
        ctx->pc = 0x1CCD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD2Cu;
        // 0x1ccd30: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD34u;
        goto label_1ccd34;
    }
    ctx->pc = 0x1CCD2Cu;
    {
        const bool branch_taken_0x1ccd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD2Cu;
        // 0x1ccd30: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd2c) {
            ctx->pc = 0x1CCD40u;
            goto label_1ccd40;
        }
    }
    ctx->pc = 0x1CCD34u;
label_1ccd34:
    // 0x1ccd34: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1ccd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ccd38:
    // 0x1ccd38: 0x60f809  jalr        $v1
label_1ccd3c:
    if (ctx->pc == 0x1CCD3Cu) {
        ctx->pc = 0x1CCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD38u;
        // 0x1ccd3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD40u;
        goto label_1ccd40;
    }
    ctx->pc = 0x1CCD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCD40u);
        ctx->pc = 0x1CCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD38u;
        // 0x1ccd3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD38u, 0x1CCD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCD40u;
label_1ccd40:
    // 0x1ccd40: 0xc073b56  jal         func_1CED58
label_1ccd44:
    if (ctx->pc == 0x1CCD44u) {
        ctx->pc = 0x1CCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD40u;
        // 0x1ccd44: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD48u;
        goto label_1ccd48;
    }
    ctx->pc = 0x1CCD40u;
    SET_GPR_U32(ctx, 31, 0x1CCD48u);
    ctx->pc = 0x1CCD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD40u;
    // 0x1ccd44: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED58u, 0x1CCD40u, 0x1CCD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD48u;
label_1ccd48:
    // 0x1ccd48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ccd4c:
    if (ctx->pc == 0x1CCD4Cu) {
        ctx->pc = 0x1CCD50u;
        goto label_1ccd50;
    }
    ctx->pc = 0x1CCD48u;
    {
        const bool branch_taken_0x1ccd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd48) {
            ctx->pc = 0x1CCD58u;
            goto label_1ccd58;
        }
    }
    ctx->pc = 0x1CCD50u;
label_1ccd50:
    // 0x1ccd50: 0xc0735c6  jal         func_1CD718
label_1ccd54:
    if (ctx->pc == 0x1CCD54u) {
        ctx->pc = 0x1CCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD50u;
        // 0x1ccd54: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD58u;
        goto label_1ccd58;
    }
    ctx->pc = 0x1CCD50u;
    SET_GPR_U32(ctx, 31, 0x1CCD58u);
    ctx->pc = 0x1CCD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD50u;
    // 0x1ccd54: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD718u, 0x1CCD50u, 0x1CCD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD58u;
label_1ccd58:
    // 0x1ccd58: 0xc0735c6  jal         func_1CD718
label_1ccd5c:
    if (ctx->pc == 0x1CCD5Cu) {
        ctx->pc = 0x1CCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD58u;
        // 0x1ccd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD60u;
        goto label_1ccd60;
    }
    ctx->pc = 0x1CCD58u;
    SET_GPR_U32(ctx, 31, 0x1CCD60u);
    ctx->pc = 0x1CCD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD58u;
    // 0x1ccd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD718u, 0x1CCD58u, 0x1CCD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD60u;
label_1ccd60:
    // 0x1ccd60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccd60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccd64:
    // 0x1ccd64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ccd68:
    // 0x1ccd68: 0x3e00008  jr          $ra
label_1ccd6c:
    if (ctx->pc == 0x1CCD6Cu) {
        ctx->pc = 0x1CCD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD68u;
        // 0x1ccd6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD70u;
        goto label_fallthrough_0x1ccd68;
    }
    ctx->pc = 0x1CCD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD68u;
        // 0x1ccd6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ccd68:
    ctx->pc = 0x1CCD70u;
}
