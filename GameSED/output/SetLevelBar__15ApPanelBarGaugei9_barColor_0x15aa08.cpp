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

// Function: SetLevelBar__15ApPanelBarGaugei9_barColor
// Address: 0x15aa08 - 0x15ac44
void SetLevelBar__15ApPanelBarGaugei9_barColor_0x15aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLevelBar__15ApPanelBarGaugei9_barColor_0x15aa08");
#endif

    switch (ctx->pc) {
        case 0x15aa08u: goto label_15aa08;
        case 0x15aa0cu: goto label_15aa0c;
        case 0x15aa10u: goto label_15aa10;
        case 0x15aa14u: goto label_15aa14;
        case 0x15aa18u: goto label_15aa18;
        case 0x15aa1cu: goto label_15aa1c;
        case 0x15aa20u: goto label_15aa20;
        case 0x15aa24u: goto label_15aa24;
        case 0x15aa28u: goto label_15aa28;
        case 0x15aa2cu: goto label_15aa2c;
        case 0x15aa30u: goto label_15aa30;
        case 0x15aa34u: goto label_15aa34;
        case 0x15aa38u: goto label_15aa38;
        case 0x15aa3cu: goto label_15aa3c;
        case 0x15aa40u: goto label_15aa40;
        case 0x15aa44u: goto label_15aa44;
        case 0x15aa48u: goto label_15aa48;
        case 0x15aa4cu: goto label_15aa4c;
        case 0x15aa50u: goto label_15aa50;
        case 0x15aa54u: goto label_15aa54;
        case 0x15aa58u: goto label_15aa58;
        case 0x15aa5cu: goto label_15aa5c;
        case 0x15aa60u: goto label_15aa60;
        case 0x15aa64u: goto label_15aa64;
        case 0x15aa68u: goto label_15aa68;
        case 0x15aa6cu: goto label_15aa6c;
        case 0x15aa70u: goto label_15aa70;
        case 0x15aa74u: goto label_15aa74;
        case 0x15aa78u: goto label_15aa78;
        case 0x15aa7cu: goto label_15aa7c;
        case 0x15aa80u: goto label_15aa80;
        case 0x15aa84u: goto label_15aa84;
        case 0x15aa88u: goto label_15aa88;
        case 0x15aa8cu: goto label_15aa8c;
        case 0x15aa90u: goto label_15aa90;
        case 0x15aa94u: goto label_15aa94;
        case 0x15aa98u: goto label_15aa98;
        case 0x15aa9cu: goto label_15aa9c;
        case 0x15aaa0u: goto label_15aaa0;
        case 0x15aaa4u: goto label_15aaa4;
        case 0x15aaa8u: goto label_15aaa8;
        case 0x15aaacu: goto label_15aaac;
        case 0x15aab0u: goto label_15aab0;
        case 0x15aab4u: goto label_15aab4;
        case 0x15aab8u: goto label_15aab8;
        case 0x15aabcu: goto label_15aabc;
        case 0x15aac0u: goto label_15aac0;
        case 0x15aac4u: goto label_15aac4;
        case 0x15aac8u: goto label_15aac8;
        case 0x15aaccu: goto label_15aacc;
        case 0x15aad0u: goto label_15aad0;
        case 0x15aad4u: goto label_15aad4;
        case 0x15aad8u: goto label_15aad8;
        case 0x15aadcu: goto label_15aadc;
        case 0x15aae0u: goto label_15aae0;
        case 0x15aae4u: goto label_15aae4;
        case 0x15aae8u: goto label_15aae8;
        case 0x15aaecu: goto label_15aaec;
        case 0x15aaf0u: goto label_15aaf0;
        case 0x15aaf4u: goto label_15aaf4;
        case 0x15aaf8u: goto label_15aaf8;
        case 0x15aafcu: goto label_15aafc;
        case 0x15ab00u: goto label_15ab00;
        case 0x15ab04u: goto label_15ab04;
        case 0x15ab08u: goto label_15ab08;
        case 0x15ab0cu: goto label_15ab0c;
        case 0x15ab10u: goto label_15ab10;
        case 0x15ab14u: goto label_15ab14;
        case 0x15ab18u: goto label_15ab18;
        case 0x15ab1cu: goto label_15ab1c;
        case 0x15ab20u: goto label_15ab20;
        case 0x15ab24u: goto label_15ab24;
        case 0x15ab28u: goto label_15ab28;
        case 0x15ab2cu: goto label_15ab2c;
        case 0x15ab30u: goto label_15ab30;
        case 0x15ab34u: goto label_15ab34;
        case 0x15ab38u: goto label_15ab38;
        case 0x15ab3cu: goto label_15ab3c;
        case 0x15ab40u: goto label_15ab40;
        case 0x15ab44u: goto label_15ab44;
        case 0x15ab48u: goto label_15ab48;
        case 0x15ab4cu: goto label_15ab4c;
        case 0x15ab50u: goto label_15ab50;
        case 0x15ab54u: goto label_15ab54;
        case 0x15ab58u: goto label_15ab58;
        case 0x15ab5cu: goto label_15ab5c;
        case 0x15ab60u: goto label_15ab60;
        case 0x15ab64u: goto label_15ab64;
        case 0x15ab68u: goto label_15ab68;
        case 0x15ab6cu: goto label_15ab6c;
        case 0x15ab70u: goto label_15ab70;
        case 0x15ab74u: goto label_15ab74;
        case 0x15ab78u: goto label_15ab78;
        case 0x15ab7cu: goto label_15ab7c;
        case 0x15ab80u: goto label_15ab80;
        case 0x15ab84u: goto label_15ab84;
        case 0x15ab88u: goto label_15ab88;
        case 0x15ab8cu: goto label_15ab8c;
        case 0x15ab90u: goto label_15ab90;
        case 0x15ab94u: goto label_15ab94;
        case 0x15ab98u: goto label_15ab98;
        case 0x15ab9cu: goto label_15ab9c;
        case 0x15aba0u: goto label_15aba0;
        case 0x15aba4u: goto label_15aba4;
        case 0x15aba8u: goto label_15aba8;
        case 0x15abacu: goto label_15abac;
        case 0x15abb0u: goto label_15abb0;
        case 0x15abb4u: goto label_15abb4;
        case 0x15abb8u: goto label_15abb8;
        case 0x15abbcu: goto label_15abbc;
        case 0x15abc0u: goto label_15abc0;
        case 0x15abc4u: goto label_15abc4;
        case 0x15abc8u: goto label_15abc8;
        case 0x15abccu: goto label_15abcc;
        case 0x15abd0u: goto label_15abd0;
        case 0x15abd4u: goto label_15abd4;
        case 0x15abd8u: goto label_15abd8;
        case 0x15abdcu: goto label_15abdc;
        case 0x15abe0u: goto label_15abe0;
        case 0x15abe4u: goto label_15abe4;
        case 0x15abe8u: goto label_15abe8;
        case 0x15abecu: goto label_15abec;
        case 0x15abf0u: goto label_15abf0;
        case 0x15abf4u: goto label_15abf4;
        case 0x15abf8u: goto label_15abf8;
        case 0x15abfcu: goto label_15abfc;
        case 0x15ac00u: goto label_15ac00;
        case 0x15ac04u: goto label_15ac04;
        case 0x15ac08u: goto label_15ac08;
        case 0x15ac0cu: goto label_15ac0c;
        case 0x15ac10u: goto label_15ac10;
        case 0x15ac14u: goto label_15ac14;
        case 0x15ac18u: goto label_15ac18;
        case 0x15ac1cu: goto label_15ac1c;
        case 0x15ac20u: goto label_15ac20;
        case 0x15ac24u: goto label_15ac24;
        case 0x15ac28u: goto label_15ac28;
        case 0x15ac2cu: goto label_15ac2c;
        case 0x15ac30u: goto label_15ac30;
        case 0x15ac34u: goto label_15ac34;
        case 0x15ac38u: goto label_15ac38;
        case 0x15ac3cu: goto label_15ac3c;
        case 0x15ac40u: goto label_15ac40;
        default: break;
    }

    ctx->pc = 0x15aa08u;

label_15aa08:
    // 0x15aa08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15aa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15aa0c:
    // 0x15aa0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15aa10:
    // 0x15aa10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15aa10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15aa14:
    // 0x15aa14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15aa18:
    // 0x15aa18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15aa18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15aa1c:
    // 0x15aa1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15aa20:
    // 0x15aa20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_15aa24:
    // 0x15aa24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15aa28:
    // 0x15aa28: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x15aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15aa2c:
    // 0x15aa2c: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x15aa2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15aa30:
    // 0x15aa30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15aa34:
    // 0x15aa34: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x15aa34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15aa38:
    // 0x15aa38: 0x70009030  pmfhl.lw    $s2
    ctx->pc = 0x15aa38u;
    SET_GPR_VEC(ctx, 18, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_15aa3c:
    // 0x15aa3c: 0x1293fb  dsra        $s2, $s2, 15
    ctx->pc = 0x15aa3cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> 15);
label_15aa40:
    // 0x15aa40: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x15aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_15aa44:
    // 0x15aa44: 0x1223000b  beq         $s1, $v1, . + 4 + (0xB << 2)
label_15aa48:
    if (ctx->pc == 0x15AA48u) {
        ctx->pc = 0x15AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA44u;
        // 0x15aa48: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA4Cu;
        goto label_15aa4c;
    }
    ctx->pc = 0x15AA44u;
    {
        const bool branch_taken_0x15aa44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA44u;
        // 0x15aa48: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa44) {
            ctx->pc = 0x15AA74u;
            goto label_15aa74;
        }
    }
    ctx->pc = 0x15AA4Cu;
label_15aa4c:
    // 0x15aa4c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x15aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_15aa50:
    // 0x15aa50: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x15aa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_15aa54:
    // 0x15aa54: 0x2421a2a8  addiu       $at, $at, -0x5D58
    ctx->pc = 0x15aa54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294943400));
label_15aa58:
    // 0x15aa58: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x15aa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_15aa5c:
    // 0x15aa5c: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15aa60:
    // 0x15aa60: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15aa60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15aa64:
    // 0x15aa64: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15aa68:
    // 0x15aa68: 0x60f809  jalr        $v1
label_15aa6c:
    if (ctx->pc == 0x15AA6Cu) {
        ctx->pc = 0x15AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA68u;
        // 0x15aa6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA70u;
        goto label_15aa70;
    }
    ctx->pc = 0x15AA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15AA70u);
        ctx->pc = 0x15AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA68u;
        // 0x15aa6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AA68u, 0x15AA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AA70u;
label_15aa70:
    // 0x15aa70: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x15aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_15aa74:
    // 0x15aa74: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x15aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15aa78:
    // 0x15aa78: 0x1244006b  beq         $s2, $a0, . + 4 + (0x6B << 2)
label_15aa7c:
    if (ctx->pc == 0x15AA7Cu) {
        ctx->pc = 0x15AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA78u;
        // 0x15aa7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA80u;
        goto label_15aa80;
    }
    ctx->pc = 0x15AA78u;
    {
        const bool branch_taken_0x15aa78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x15AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA78u;
        // 0x15aa7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa78) {
            ctx->pc = 0x15AC28u;
            goto label_15ac28;
        }
    }
    ctx->pc = 0x15AA80u;
label_15aa80:
    // 0x15aa80: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_15aa84:
    if (ctx->pc == 0x15AA84u) {
        ctx->pc = 0x15AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA80u;
        // 0x15aa84: 0x2441023  subu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA88u;
        goto label_15aa88;
    }
    ctx->pc = 0x15AA80u;
    {
        const bool branch_taken_0x15aa80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA80u;
        // 0x15aa84: 0x2441023  subu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa80) {
            ctx->pc = 0x15AA98u;
            goto label_15aa98;
        }
    }
    ctx->pc = 0x15AA88u;
label_15aa88:
    // 0x15aa88: 0x28820ccd  slti        $v0, $a0, 0xCCD
    ctx->pc = 0x15aa88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3277) ? 1 : 0);
label_15aa8c:
    // 0x15aa8c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_15aa90:
    if (ctx->pc == 0x15AA90u) {
        ctx->pc = 0x15AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA8Cu;
        // 0x15aa90: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA94u;
        goto label_15aa94;
    }
    ctx->pc = 0x15AA8Cu;
    {
        const bool branch_taken_0x15aa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15aa8c) {
            ctx->pc = 0x15AA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15AA8Cu;
            // 0x15aa90: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15AAB0u;
            goto label_15aab0;
        }
    }
    ctx->pc = 0x15AA94u;
label_15aa94:
    // 0x15aa94: 0x2441023  subu        $v0, $s2, $a0
    ctx->pc = 0x15aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_15aa98:
    // 0x15aa98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15aa9c:
    if (ctx->pc == 0x15AA9Cu) {
        ctx->pc = 0x15AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA98u;
        // 0x15aa9c: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAA0u;
        goto label_15aaa0;
    }
    ctx->pc = 0x15AA98u;
    {
        const bool branch_taken_0x15aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA98u;
        // 0x15aa9c: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa98) {
            ctx->pc = 0x15AAA8u;
            goto label_15aaa8;
        }
    }
    ctx->pc = 0x15AAA0u;
label_15aaa0:
    // 0x15aaa0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15aaa4:
    // 0x15aaa4: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x15aaa4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_15aaa8:
    // 0x15aaa8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x15aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15aaac:
    // 0x15aaac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x15aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_15aab0:
    // 0x15aab0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15aab4:
    // 0x15aab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15aab8:
    if (ctx->pc == 0x15AAB8u) {
        ctx->pc = 0x15AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAB4u;
        // 0x15aab8: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AABCu;
        goto label_15aabc;
    }
    ctx->pc = 0x15AAB4u;
    {
        const bool branch_taken_0x15aab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAB4u;
        // 0x15aab8: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aab4) {
            ctx->pc = 0x15AAC8u;
            goto label_15aac8;
        }
    }
    ctx->pc = 0x15AABCu;
label_15aabc:
    // 0x15aabc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15aac0:
    // 0x15aac0: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x15aac0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15aac4:
    // 0x15aac4: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x15aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_15aac8:
    // 0x15aac8: 0xc660017c  lwc1        $f0, 0x17C($s3)
    ctx->pc = 0x15aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15aacc:
    // 0x15aacc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15aaccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15aad0:
    // 0x15aad0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x15aad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_15aad4:
    // 0x15aad4: 0x26680150  addiu       $t0, $s3, 0x150
    ctx->pc = 0x15aad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_15aad8:
    // 0x15aad8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x15aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15aadc:
    // 0x15aadc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15aadcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_15aae0:
    // 0x15aae0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15aae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15aae4:
    // 0x15aae4: 0x9503000e  lhu         $v1, 0xE($t0)
    ctx->pc = 0x15aae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
label_15aae8:
    // 0x15aae8: 0xe5020028  swc1        $f2, 0x28($t0)
    ctx->pc = 0x15aae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
label_15aaec:
    // 0x15aaec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15aaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15aaf0:
    // 0x15aaf0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15aaf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15aaf4:
    // 0x15aaf4: 0x1064003c  beq         $v1, $a0, . + 4 + (0x3C << 2)
label_15aaf8:
    if (ctx->pc == 0x15AAF8u) {
        ctx->pc = 0x15AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAF4u;
        // 0x15aaf8: 0xe501002c  swc1        $f1, 0x2C($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAFCu;
        goto label_15aafc;
    }
    ctx->pc = 0x15AAF4u;
    {
        const bool branch_taken_0x15aaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x15AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAF4u;
        // 0x15aaf8: 0xe501002c  swc1        $f1, 0x2C($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaf4) {
            ctx->pc = 0x15ABE8u;
            goto label_15abe8;
        }
    }
    ctx->pc = 0x15AAFCu;
label_15aafc:
    // 0x15aafc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x15aafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_15ab00:
    // 0x15ab00: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_15ab04:
    if (ctx->pc == 0x15AB04u) {
        ctx->pc = 0x15AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB00u;
        // 0x15ab04: 0xa503000e  sh          $v1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB08u;
        goto label_15ab08;
    }
    ctx->pc = 0x15AB00u;
    {
        const bool branch_taken_0x15ab00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB00u;
        // 0x15ab04: 0xa503000e  sh          $v1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab00) {
            ctx->pc = 0x15AB7Cu;
            goto label_15ab7c;
        }
    }
    ctx->pc = 0x15AB08u;
label_15ab08:
    // 0x15ab08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15ab0c:
    // 0x15ab0c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15ab10:
    // 0x15ab10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15ab14:
    // 0x15ab14: 0x8c636e60  lw          $v1, 0x6E60($v1)
    ctx->pc = 0x15ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28256)));
label_15ab18:
    // 0x15ab18: 0x600008  jr          $v1
label_15ab1c:
    if (ctx->pc == 0x15AB1Cu) {
        ctx->pc = 0x15AB20u;
        goto label_15ab20;
    }
    ctx->pc = 0x15AB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AB20u: goto label_15ab20;
            case 0x15AB48u: goto label_15ab48;
            case 0x15AB50u: goto label_15ab50;
            case 0x15AB58u: goto label_15ab58;
            case 0x15AB60u: goto label_15ab60;
            case 0x15AB70u: goto label_15ab70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AB18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15AB20u;
label_15ab20:
    // 0x15ab20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15ab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_15ab24:
    // 0x15ab24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ab28:
    // 0x15ab28: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x15ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15ab2c:
    // 0x15ab2c: 0xc502002c  lwc1        $f2, 0x2C($t0)
    ctx->pc = 0x15ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15ab30:
    // 0x15ab30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15ab30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_15ab34:
    // 0x15ab34: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15ab34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_15ab38:
    // 0x15ab38: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15ab38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15ab3c:
    // 0x15ab3c: 0x1000000f  b           . + 4 + (0xF << 2)
label_15ab40:
    if (ctx->pc == 0x15AB40u) {
        ctx->pc = 0x15AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB3Cu;
        // 0x15ab40: 0xe5020024  swc1        $f2, 0x24($t0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB44u;
        goto label_15ab44;
    }
    ctx->pc = 0x15AB3Cu;
    {
        const bool branch_taken_0x15ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB3Cu;
        // 0x15ab40: 0xe5020024  swc1        $f2, 0x24($t0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab3c) {
            ctx->pc = 0x15AB7Cu;
            goto label_15ab7c;
        }
    }
    ctx->pc = 0x15AB44u;
label_15ab44:
    // 0x15ab44: 0x0  nop
    ctx->pc = 0x15ab44u;
    // NOP
label_15ab48:
    // 0x15ab48: 0x1000000c  b           . + 4 + (0xC << 2)
label_15ab4c:
    if (ctx->pc == 0x15AB4Cu) {
        ctx->pc = 0x15AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB48u;
        // 0x15ab4c: 0xad000020  sw          $zero, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB50u;
        goto label_15ab50;
    }
    ctx->pc = 0x15AB48u;
    {
        const bool branch_taken_0x15ab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB48u;
        // 0x15ab4c: 0xad000020  sw          $zero, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab48) {
            ctx->pc = 0x15AB7Cu;
            goto label_15ab7c;
        }
    }
    ctx->pc = 0x15AB50u;
label_15ab50:
    // 0x15ab50: 0x10000009  b           . + 4 + (0x9 << 2)
label_15ab54:
    if (ctx->pc == 0x15AB54u) {
        ctx->pc = 0x15AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB50u;
        // 0x15ab54: 0xc5000028  lwc1        $f0, 0x28($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB58u;
        goto label_15ab58;
    }
    ctx->pc = 0x15AB50u;
    {
        const bool branch_taken_0x15ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB50u;
        // 0x15ab54: 0xc5000028  lwc1        $f0, 0x28($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab50) {
            ctx->pc = 0x15AB78u;
            goto label_15ab78;
        }
    }
    ctx->pc = 0x15AB58u;
label_15ab58:
    // 0x15ab58: 0x10000008  b           . + 4 + (0x8 << 2)
label_15ab5c:
    if (ctx->pc == 0x15AB5Cu) {
        ctx->pc = 0x15AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB58u;
        // 0x15ab5c: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB60u;
        goto label_15ab60;
    }
    ctx->pc = 0x15AB58u;
    {
        const bool branch_taken_0x15ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB58u;
        // 0x15ab5c: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab58) {
            ctx->pc = 0x15AB7Cu;
            goto label_15ab7c;
        }
    }
    ctx->pc = 0x15AB60u;
label_15ab60:
    // 0x15ab60: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x15ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15ab64:
    // 0x15ab64: 0x10000005  b           . + 4 + (0x5 << 2)
label_15ab68:
    if (ctx->pc == 0x15AB68u) {
        ctx->pc = 0x15AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB64u;
        // 0x15ab68: 0xe5000024  swc1        $f0, 0x24($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB6Cu;
        goto label_15ab6c;
    }
    ctx->pc = 0x15AB64u;
    {
        const bool branch_taken_0x15ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB64u;
        // 0x15ab68: 0xe5000024  swc1        $f0, 0x24($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab64) {
            ctx->pc = 0x15AB7Cu;
            goto label_15ab7c;
        }
    }
    ctx->pc = 0x15AB6Cu;
label_15ab6c:
    // 0x15ab6c: 0x0  nop
    ctx->pc = 0x15ab6cu;
    // NOP
label_15ab70:
    // 0x15ab70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ab70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ab74:
    // 0x15ab74: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15ab74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15ab78:
    // 0x15ab78: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x15ab78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15ab7c:
    // 0x15ab7c: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x15ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15ab80:
    // 0x15ab80: 0x25070030  addiu       $a3, $t0, 0x30
    ctx->pc = 0x15ab80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_15ab84:
    // 0x15ab84: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x15ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15ab88:
    // 0x15ab88: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x15ab88u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_15ab8c:
    // 0x15ab8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15ab8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15ab90:
    // 0x15ab90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15ab90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15ab94:
    // 0x15ab94: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x15ab94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15ab98:
    // 0x15ab98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15ab98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15ab9c:
    // 0x15ab9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x15ab9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15aba0:
    // 0x15aba0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15aba4:
    // 0x15aba4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15aba4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15aba8:
    // 0x15aba8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15aba8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15abac:
    // 0x15abac: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15abacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15abb0:
    // 0x15abb0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15abb4:
    // 0x15abb4: 0xc503002c  lwc1        $f3, 0x2C($t0)
    ctx->pc = 0x15abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15abb8:
    // 0x15abb8: 0x25060040  addiu       $a2, $t0, 0x40
    ctx->pc = 0x15abb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_15abbc:
    // 0x15abbc: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15abc0:
    // 0x15abc0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15abc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15abc4:
    // 0x15abc4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x15abc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15abc8:
    // 0x15abc8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x15abc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15abcc:
    // 0x15abcc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15abccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15abd0:
    // 0x15abd0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15abd0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15abd4:
    // 0x15abd4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15abd4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15abd8:
    // 0x15abd8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15abd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15abdc:
    // 0x15abdc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15abe0:
    // 0x15abe0: 0x1000000c  b           . + 4 + (0xC << 2)
label_15abe4:
    if (ctx->pc == 0x15ABE4u) {
        ctx->pc = 0x15ABE8u;
        goto label_15abe8;
    }
    ctx->pc = 0x15ABE0u;
    {
        const bool branch_taken_0x15abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15abe0) {
            ctx->pc = 0x15AC14u;
            goto label_15ac14;
        }
    }
    ctx->pc = 0x15ABE8u;
label_15abe8:
    // 0x15abe8: 0x26660190  addiu       $a2, $s3, 0x190
    ctx->pc = 0x15abe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
label_15abec:
    // 0x15abec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15abecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15abf0:
    // 0x15abf0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x15abf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15abf4:
    // 0x15abf4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15abf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15abf8:
    // 0x15abf8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x15abf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15abfc:
    // 0x15abfc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15ac00:
    // 0x15ac00: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15ac00u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15ac04:
    // 0x15ac04: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15ac04u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15ac08:
    // 0x15ac08: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15ac08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15ac0c:
    // 0x15ac0c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15ac10:
    // 0x15ac10: 0x26670180  addiu       $a3, $s3, 0x180
    ctx->pc = 0x15ac10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
label_15ac14:
    // 0x15ac14: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15ac14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15ac18:
    // 0x15ac18: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15ac18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15ac1c:
    // 0x15ac1c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15ac1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15ac20:
    // 0x15ac20: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15ac20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15ac24:
    // 0x15ac24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ac28:
    // 0x15ac28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15ac28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ac2c:
    // 0x15ac2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15ac2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15ac30:
    // 0x15ac30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15ac30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15ac34:
    // 0x15ac34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15ac34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15ac38:
    // 0x15ac38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ac38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ac3c:
    // 0x15ac3c: 0x3e00008  jr          $ra
label_15ac40:
    if (ctx->pc == 0x15AC40u) {
        ctx->pc = 0x15AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC3Cu;
        // 0x15ac40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC44u;
        goto label_fallthrough_0x15ac3c;
    }
    ctx->pc = 0x15AC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC3Cu;
        // 0x15ac40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15ac3c:
    ctx->pc = 0x15AC44u;
}
