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

// Function: CopperMoveMotion__9ApcCopper
// Address: 0x16cca8 - 0x16d07c
void CopperMoveMotion__9ApcCopper_0x16cca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopperMoveMotion__9ApcCopper_0x16cca8");
#endif

    switch (ctx->pc) {
        case 0x16cca8u: goto label_16cca8;
        case 0x16ccacu: goto label_16ccac;
        case 0x16ccb0u: goto label_16ccb0;
        case 0x16ccb4u: goto label_16ccb4;
        case 0x16ccb8u: goto label_16ccb8;
        case 0x16ccbcu: goto label_16ccbc;
        case 0x16ccc0u: goto label_16ccc0;
        case 0x16ccc4u: goto label_16ccc4;
        case 0x16ccc8u: goto label_16ccc8;
        case 0x16ccccu: goto label_16cccc;
        case 0x16ccd0u: goto label_16ccd0;
        case 0x16ccd4u: goto label_16ccd4;
        case 0x16ccd8u: goto label_16ccd8;
        case 0x16ccdcu: goto label_16ccdc;
        case 0x16cce0u: goto label_16cce0;
        case 0x16cce4u: goto label_16cce4;
        case 0x16cce8u: goto label_16cce8;
        case 0x16ccecu: goto label_16ccec;
        case 0x16ccf0u: goto label_16ccf0;
        case 0x16ccf4u: goto label_16ccf4;
        case 0x16ccf8u: goto label_16ccf8;
        case 0x16ccfcu: goto label_16ccfc;
        case 0x16cd00u: goto label_16cd00;
        case 0x16cd04u: goto label_16cd04;
        case 0x16cd08u: goto label_16cd08;
        case 0x16cd0cu: goto label_16cd0c;
        case 0x16cd10u: goto label_16cd10;
        case 0x16cd14u: goto label_16cd14;
        case 0x16cd18u: goto label_16cd18;
        case 0x16cd1cu: goto label_16cd1c;
        case 0x16cd20u: goto label_16cd20;
        case 0x16cd24u: goto label_16cd24;
        case 0x16cd28u: goto label_16cd28;
        case 0x16cd2cu: goto label_16cd2c;
        case 0x16cd30u: goto label_16cd30;
        case 0x16cd34u: goto label_16cd34;
        case 0x16cd38u: goto label_16cd38;
        case 0x16cd3cu: goto label_16cd3c;
        case 0x16cd40u: goto label_16cd40;
        case 0x16cd44u: goto label_16cd44;
        case 0x16cd48u: goto label_16cd48;
        case 0x16cd4cu: goto label_16cd4c;
        case 0x16cd50u: goto label_16cd50;
        case 0x16cd54u: goto label_16cd54;
        case 0x16cd58u: goto label_16cd58;
        case 0x16cd5cu: goto label_16cd5c;
        case 0x16cd60u: goto label_16cd60;
        case 0x16cd64u: goto label_16cd64;
        case 0x16cd68u: goto label_16cd68;
        case 0x16cd6cu: goto label_16cd6c;
        case 0x16cd70u: goto label_16cd70;
        case 0x16cd74u: goto label_16cd74;
        case 0x16cd78u: goto label_16cd78;
        case 0x16cd7cu: goto label_16cd7c;
        case 0x16cd80u: goto label_16cd80;
        case 0x16cd84u: goto label_16cd84;
        case 0x16cd88u: goto label_16cd88;
        case 0x16cd8cu: goto label_16cd8c;
        case 0x16cd90u: goto label_16cd90;
        case 0x16cd94u: goto label_16cd94;
        case 0x16cd98u: goto label_16cd98;
        case 0x16cd9cu: goto label_16cd9c;
        case 0x16cda0u: goto label_16cda0;
        case 0x16cda4u: goto label_16cda4;
        case 0x16cda8u: goto label_16cda8;
        case 0x16cdacu: goto label_16cdac;
        case 0x16cdb0u: goto label_16cdb0;
        case 0x16cdb4u: goto label_16cdb4;
        case 0x16cdb8u: goto label_16cdb8;
        case 0x16cdbcu: goto label_16cdbc;
        case 0x16cdc0u: goto label_16cdc0;
        case 0x16cdc4u: goto label_16cdc4;
        case 0x16cdc8u: goto label_16cdc8;
        case 0x16cdccu: goto label_16cdcc;
        case 0x16cdd0u: goto label_16cdd0;
        case 0x16cdd4u: goto label_16cdd4;
        case 0x16cdd8u: goto label_16cdd8;
        case 0x16cddcu: goto label_16cddc;
        case 0x16cde0u: goto label_16cde0;
        case 0x16cde4u: goto label_16cde4;
        case 0x16cde8u: goto label_16cde8;
        case 0x16cdecu: goto label_16cdec;
        case 0x16cdf0u: goto label_16cdf0;
        case 0x16cdf4u: goto label_16cdf4;
        case 0x16cdf8u: goto label_16cdf8;
        case 0x16cdfcu: goto label_16cdfc;
        case 0x16ce00u: goto label_16ce00;
        case 0x16ce04u: goto label_16ce04;
        case 0x16ce08u: goto label_16ce08;
        case 0x16ce0cu: goto label_16ce0c;
        case 0x16ce10u: goto label_16ce10;
        case 0x16ce14u: goto label_16ce14;
        case 0x16ce18u: goto label_16ce18;
        case 0x16ce1cu: goto label_16ce1c;
        case 0x16ce20u: goto label_16ce20;
        case 0x16ce24u: goto label_16ce24;
        case 0x16ce28u: goto label_16ce28;
        case 0x16ce2cu: goto label_16ce2c;
        case 0x16ce30u: goto label_16ce30;
        case 0x16ce34u: goto label_16ce34;
        case 0x16ce38u: goto label_16ce38;
        case 0x16ce3cu: goto label_16ce3c;
        case 0x16ce40u: goto label_16ce40;
        case 0x16ce44u: goto label_16ce44;
        case 0x16ce48u: goto label_16ce48;
        case 0x16ce4cu: goto label_16ce4c;
        case 0x16ce50u: goto label_16ce50;
        case 0x16ce54u: goto label_16ce54;
        case 0x16ce58u: goto label_16ce58;
        case 0x16ce5cu: goto label_16ce5c;
        case 0x16ce60u: goto label_16ce60;
        case 0x16ce64u: goto label_16ce64;
        case 0x16ce68u: goto label_16ce68;
        case 0x16ce6cu: goto label_16ce6c;
        case 0x16ce70u: goto label_16ce70;
        case 0x16ce74u: goto label_16ce74;
        case 0x16ce78u: goto label_16ce78;
        case 0x16ce7cu: goto label_16ce7c;
        case 0x16ce80u: goto label_16ce80;
        case 0x16ce84u: goto label_16ce84;
        case 0x16ce88u: goto label_16ce88;
        case 0x16ce8cu: goto label_16ce8c;
        case 0x16ce90u: goto label_16ce90;
        case 0x16ce94u: goto label_16ce94;
        case 0x16ce98u: goto label_16ce98;
        case 0x16ce9cu: goto label_16ce9c;
        case 0x16cea0u: goto label_16cea0;
        case 0x16cea4u: goto label_16cea4;
        case 0x16cea8u: goto label_16cea8;
        case 0x16ceacu: goto label_16ceac;
        case 0x16ceb0u: goto label_16ceb0;
        case 0x16ceb4u: goto label_16ceb4;
        case 0x16ceb8u: goto label_16ceb8;
        case 0x16cebcu: goto label_16cebc;
        case 0x16cec0u: goto label_16cec0;
        case 0x16cec4u: goto label_16cec4;
        case 0x16cec8u: goto label_16cec8;
        case 0x16ceccu: goto label_16cecc;
        case 0x16ced0u: goto label_16ced0;
        case 0x16ced4u: goto label_16ced4;
        case 0x16ced8u: goto label_16ced8;
        case 0x16cedcu: goto label_16cedc;
        case 0x16cee0u: goto label_16cee0;
        case 0x16cee4u: goto label_16cee4;
        case 0x16cee8u: goto label_16cee8;
        case 0x16ceecu: goto label_16ceec;
        case 0x16cef0u: goto label_16cef0;
        case 0x16cef4u: goto label_16cef4;
        case 0x16cef8u: goto label_16cef8;
        case 0x16cefcu: goto label_16cefc;
        case 0x16cf00u: goto label_16cf00;
        case 0x16cf04u: goto label_16cf04;
        case 0x16cf08u: goto label_16cf08;
        case 0x16cf0cu: goto label_16cf0c;
        case 0x16cf10u: goto label_16cf10;
        case 0x16cf14u: goto label_16cf14;
        case 0x16cf18u: goto label_16cf18;
        case 0x16cf1cu: goto label_16cf1c;
        case 0x16cf20u: goto label_16cf20;
        case 0x16cf24u: goto label_16cf24;
        case 0x16cf28u: goto label_16cf28;
        case 0x16cf2cu: goto label_16cf2c;
        case 0x16cf30u: goto label_16cf30;
        case 0x16cf34u: goto label_16cf34;
        case 0x16cf38u: goto label_16cf38;
        case 0x16cf3cu: goto label_16cf3c;
        case 0x16cf40u: goto label_16cf40;
        case 0x16cf44u: goto label_16cf44;
        case 0x16cf48u: goto label_16cf48;
        case 0x16cf4cu: goto label_16cf4c;
        case 0x16cf50u: goto label_16cf50;
        case 0x16cf54u: goto label_16cf54;
        case 0x16cf58u: goto label_16cf58;
        case 0x16cf5cu: goto label_16cf5c;
        case 0x16cf60u: goto label_16cf60;
        case 0x16cf64u: goto label_16cf64;
        case 0x16cf68u: goto label_16cf68;
        case 0x16cf6cu: goto label_16cf6c;
        case 0x16cf70u: goto label_16cf70;
        case 0x16cf74u: goto label_16cf74;
        case 0x16cf78u: goto label_16cf78;
        case 0x16cf7cu: goto label_16cf7c;
        case 0x16cf80u: goto label_16cf80;
        case 0x16cf84u: goto label_16cf84;
        case 0x16cf88u: goto label_16cf88;
        case 0x16cf8cu: goto label_16cf8c;
        case 0x16cf90u: goto label_16cf90;
        case 0x16cf94u: goto label_16cf94;
        case 0x16cf98u: goto label_16cf98;
        case 0x16cf9cu: goto label_16cf9c;
        case 0x16cfa0u: goto label_16cfa0;
        case 0x16cfa4u: goto label_16cfa4;
        case 0x16cfa8u: goto label_16cfa8;
        case 0x16cfacu: goto label_16cfac;
        case 0x16cfb0u: goto label_16cfb0;
        case 0x16cfb4u: goto label_16cfb4;
        case 0x16cfb8u: goto label_16cfb8;
        case 0x16cfbcu: goto label_16cfbc;
        case 0x16cfc0u: goto label_16cfc0;
        case 0x16cfc4u: goto label_16cfc4;
        case 0x16cfc8u: goto label_16cfc8;
        case 0x16cfccu: goto label_16cfcc;
        case 0x16cfd0u: goto label_16cfd0;
        case 0x16cfd4u: goto label_16cfd4;
        case 0x16cfd8u: goto label_16cfd8;
        case 0x16cfdcu: goto label_16cfdc;
        case 0x16cfe0u: goto label_16cfe0;
        case 0x16cfe4u: goto label_16cfe4;
        case 0x16cfe8u: goto label_16cfe8;
        case 0x16cfecu: goto label_16cfec;
        case 0x16cff0u: goto label_16cff0;
        case 0x16cff4u: goto label_16cff4;
        case 0x16cff8u: goto label_16cff8;
        case 0x16cffcu: goto label_16cffc;
        case 0x16d000u: goto label_16d000;
        case 0x16d004u: goto label_16d004;
        case 0x16d008u: goto label_16d008;
        case 0x16d00cu: goto label_16d00c;
        case 0x16d010u: goto label_16d010;
        case 0x16d014u: goto label_16d014;
        case 0x16d018u: goto label_16d018;
        case 0x16d01cu: goto label_16d01c;
        case 0x16d020u: goto label_16d020;
        case 0x16d024u: goto label_16d024;
        case 0x16d028u: goto label_16d028;
        case 0x16d02cu: goto label_16d02c;
        case 0x16d030u: goto label_16d030;
        case 0x16d034u: goto label_16d034;
        case 0x16d038u: goto label_16d038;
        case 0x16d03cu: goto label_16d03c;
        case 0x16d040u: goto label_16d040;
        case 0x16d044u: goto label_16d044;
        case 0x16d048u: goto label_16d048;
        case 0x16d04cu: goto label_16d04c;
        case 0x16d050u: goto label_16d050;
        case 0x16d054u: goto label_16d054;
        case 0x16d058u: goto label_16d058;
        case 0x16d05cu: goto label_16d05c;
        case 0x16d060u: goto label_16d060;
        case 0x16d064u: goto label_16d064;
        case 0x16d068u: goto label_16d068;
        case 0x16d06cu: goto label_16d06c;
        case 0x16d070u: goto label_16d070;
        case 0x16d074u: goto label_16d074;
        case 0x16d078u: goto label_16d078;
        default: break;
    }

    ctx->pc = 0x16cca8u;

label_16cca8:
    // 0x16cca8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x16cca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_16ccac:
    // 0x16ccac: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x16ccacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_16ccb0:
    // 0x16ccb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16ccb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16ccb4:
    // 0x16ccb4: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x16ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_16ccb8:
    // 0x16ccb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ccb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16ccbc:
    // 0x16ccbc: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x16ccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_16ccc0:
    // 0x16ccc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16ccc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ccc4:
    // 0x16ccc4: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x16ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
label_16ccc8:
    // 0x16ccc8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16ccc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cccc:
    // 0x16cccc: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x16ccccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_16ccd0:
    // 0x16ccd0: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x16ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_16ccd4:
    // 0x16ccd4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x16ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_16ccd8:
    // 0x16ccd8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x16ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_16ccdc:
    // 0x16ccdc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x16ccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_16cce0:
    // 0x16cce0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x16cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_16cce4:
    // 0x16cce4: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x16cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_16cce8:
    // 0x16cce8: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x16cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ccec:
    // 0x16ccec: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x16ccecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_16ccf0:
    // 0x16ccf0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_16ccf4:
    if (ctx->pc == 0x16CCF4u) {
        ctx->pc = 0x16CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCF0u;
        // 0x16ccf4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCF8u;
        goto label_16ccf8;
    }
    ctx->pc = 0x16CCF0u;
    {
        const bool branch_taken_0x16ccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCF0u;
        // 0x16ccf4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccf0) {
            ctx->pc = 0x16CDD4u;
            goto label_16cdd4;
        }
    }
    ctx->pc = 0x16CCF8u;
label_16ccf8:
    // 0x16ccf8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16ccfc:
    // 0x16ccfc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16cd00:
    // 0x16cd00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16cd04:
    // 0x16cd04: 0x8c637480  lw          $v1, 0x7480($v1)
    ctx->pc = 0x16cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29824)));
label_16cd08:
    // 0x16cd08: 0x600008  jr          $v1
label_16cd0c:
    if (ctx->pc == 0x16CD0Cu) {
        ctx->pc = 0x16CD10u;
        goto label_16cd10;
    }
    ctx->pc = 0x16CD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CD10u: goto label_16cd10;
            case 0x16CD18u: goto label_16cd18;
            case 0x16CD20u: goto label_16cd20;
            case 0x16CD70u: goto label_16cd70;
            case 0x16CDD4u: goto label_16cdd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CD08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16CD10u;
label_16cd10:
    // 0x16cd10: 0x10000030  b           . + 4 + (0x30 << 2)
label_16cd14:
    if (ctx->pc == 0x16CD14u) {
        ctx->pc = 0x16CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD10u;
        // 0x16cd14: 0x26350270  addiu       $s5, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD18u;
        goto label_16cd18;
    }
    ctx->pc = 0x16CD10u;
    {
        const bool branch_taken_0x16cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD10u;
        // 0x16cd14: 0x26350270  addiu       $s5, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd10) {
            ctx->pc = 0x16CDD4u;
            goto label_16cdd4;
        }
    }
    ctx->pc = 0x16CD18u;
label_16cd18:
    // 0x16cd18: 0x1000002e  b           . + 4 + (0x2E << 2)
label_16cd1c:
    if (ctx->pc == 0x16CD1Cu) {
        ctx->pc = 0x16CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD18u;
        // 0x16cd1c: 0x26330270  addiu       $s3, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD20u;
        goto label_16cd20;
    }
    ctx->pc = 0x16CD18u;
    {
        const bool branch_taken_0x16cd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD18u;
        // 0x16cd1c: 0x26330270  addiu       $s3, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd18) {
            ctx->pc = 0x16CDD4u;
            goto label_16cdd4;
        }
    }
    ctx->pc = 0x16CD20u;
label_16cd20:
    // 0x16cd20: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x16cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_16cd24:
    // 0x16cd24: 0x8c500074  lw          $s0, 0x74($v0)
    ctx->pc = 0x16cd24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_16cd28:
    // 0x16cd28: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
label_16cd2c:
    if (ctx->pc == 0x16CD2Cu) {
        ctx->pc = 0x16CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD28u;
        // 0x16cd2c: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD30u;
        goto label_16cd30;
    }
    ctx->pc = 0x16CD28u;
    {
        const bool branch_taken_0x16cd28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd28) {
            ctx->pc = 0x16CD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CD28u;
            // 0x16cd2c: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CDD4u;
            goto label_16cdd4;
        }
    }
    ctx->pc = 0x16CD30u;
label_16cd30:
    // 0x16cd30: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_16cd34:
    // 0x16cd34: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16cd34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16cd38:
    // 0x16cd38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16cd3c:
    // 0x16cd3c: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x16cd3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_16cd40:
    // 0x16cd40: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x16cd40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_16cd44:
    // 0x16cd44: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16cd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_16cd48:
    // 0x16cd48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16cd4c:
    if (ctx->pc == 0x16CD4Cu) {
        ctx->pc = 0x16CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD48u;
        // 0x16cd4c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD50u;
        goto label_16cd50;
    }
    ctx->pc = 0x16CD48u;
    {
        const bool branch_taken_0x16cd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD48u;
        // 0x16cd4c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd48) {
            ctx->pc = 0x16CD58u;
            goto label_16cd58;
        }
    }
    ctx->pc = 0x16CD50u;
label_16cd50:
    // 0x16cd50: 0xc061920  jal         func_186480
label_16cd54:
    if (ctx->pc == 0x16CD54u) {
        ctx->pc = 0x16CD58u;
        goto label_16cd58;
    }
    ctx->pc = 0x16CD50u;
    SET_GPR_U32(ctx, 31, 0x16CD58u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16CD50u, 0x16CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD58u;
label_16cd58:
    // 0x16cd58: 0xc061422  jal         func_185088
label_16cd5c:
    if (ctx->pc == 0x16CD5Cu) {
        ctx->pc = 0x16CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD58u;
        // 0x16cd5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD60u;
        goto label_16cd60;
    }
    ctx->pc = 0x16CD58u;
    SET_GPR_U32(ctx, 31, 0x16CD60u);
    ctx->pc = 0x16CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD58u;
    // 0x16cd5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16CD58u, 0x16CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD60u;
label_16cd60:
    // 0x16cd60: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x16cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
label_16cd64:
    // 0x16cd64: 0x10000011  b           . + 4 + (0x11 << 2)
label_16cd68:
    if (ctx->pc == 0x16CD68u) {
        ctx->pc = 0x16CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD64u;
        // 0x16cd68: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD6Cu;
        goto label_16cd6c;
    }
    ctx->pc = 0x16CD64u;
    {
        const bool branch_taken_0x16cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD64u;
        // 0x16cd68: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd64) {
            ctx->pc = 0x16CDACu;
            goto label_16cdac;
        }
    }
    ctx->pc = 0x16CD6Cu;
label_16cd6c:
    // 0x16cd6c: 0x0  nop
    ctx->pc = 0x16cd6cu;
    // NOP
label_16cd70:
    // 0x16cd70: 0x8e340264  lw          $s4, 0x264($s1)
    ctx->pc = 0x16cd70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_16cd74:
    // 0x16cd74: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16cd74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16cd78:
    // 0x16cd78: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x16cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_16cd7c:
    // 0x16cd7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16cd80:
    // 0x16cd80: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x16cd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_16cd84:
    // 0x16cd84: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16cd84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_16cd88:
    // 0x16cd88: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16cd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_16cd8c:
    // 0x16cd8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16cd90:
    if (ctx->pc == 0x16CD90u) {
        ctx->pc = 0x16CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD8Cu;
        // 0x16cd90: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD94u;
        goto label_16cd94;
    }
    ctx->pc = 0x16CD8Cu;
    {
        const bool branch_taken_0x16cd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD8Cu;
        // 0x16cd90: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd8c) {
            ctx->pc = 0x16CD9Cu;
            goto label_16cd9c;
        }
    }
    ctx->pc = 0x16CD94u;
label_16cd94:
    // 0x16cd94: 0xc061920  jal         func_186480
label_16cd98:
    if (ctx->pc == 0x16CD98u) {
        ctx->pc = 0x16CD9Cu;
        goto label_16cd9c;
    }
    ctx->pc = 0x16CD94u;
    SET_GPR_U32(ctx, 31, 0x16CD9Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16CD94u, 0x16CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD9Cu;
label_16cd9c:
    // 0x16cd9c: 0xc061422  jal         func_185088
label_16cda0:
    if (ctx->pc == 0x16CDA0u) {
        ctx->pc = 0x16CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD9Cu;
        // 0x16cda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDA4u;
        goto label_16cda4;
    }
    ctx->pc = 0x16CD9Cu;
    SET_GPR_U32(ctx, 31, 0x16CDA4u);
    ctx->pc = 0x16CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD9Cu;
    // 0x16cda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16CD9Cu, 0x16CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CDA4u;
label_16cda4:
    // 0x16cda4: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x16cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_16cda8:
    // 0x16cda8: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x16cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_16cdac:
    // 0x16cdac: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x16cdacu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16cdb0:
    // 0x16cdb0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16cdb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16cdb4:
    // 0x16cdb4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x16cdb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_16cdb8:
    // 0x16cdb8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x16cdb8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_16cdbc:
    // 0x16cdbc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x16cdbcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_16cdc0:
    // 0x16cdc0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16cdc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_16cdc4:
    // 0x16cdc4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16cdc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_16cdc8:
    // 0x16cdc8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16cdc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_16cdcc:
    // 0x16cdcc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16cdccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_16cdd0:
    // 0x16cdd0: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x16cdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_16cdd4:
    // 0x16cdd4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_16cdd8:
    if (ctx->pc == 0x16CDD8u) {
        ctx->pc = 0x16CDDCu;
        goto label_16cddc;
    }
    ctx->pc = 0x16CDD4u;
    {
        const bool branch_taken_0x16cdd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cdd4) {
            ctx->pc = 0x16CDF8u;
            goto label_16cdf8;
        }
    }
    ctx->pc = 0x16CDDCu;
label_16cddc:
    // 0x16cddc: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x16cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_16cde0:
    // 0x16cde0: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x16cde0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16cde4:
    // 0x16cde4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x16cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_16cde8:
    // 0x16cde8: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x16cde8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_16cdec:
    // 0x16cdec: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x16cdecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16cdf0:
    // 0x16cdf0: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16cdf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_16cdf4:
    // 0x16cdf4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x16cdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16cdf8:
    // 0x16cdf8: 0x12a00040  beqz        $s5, . + 4 + (0x40 << 2)
label_16cdfc:
    if (ctx->pc == 0x16CDFCu) {
        ctx->pc = 0x16CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDF8u;
        // 0x16cdfc: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE00u;
        goto label_16ce00;
    }
    ctx->pc = 0x16CDF8u;
    {
        const bool branch_taken_0x16cdf8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDF8u;
        // 0x16cdfc: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdf8) {
            ctx->pc = 0x16CEFCu;
            goto label_16cefc;
        }
    }
    ctx->pc = 0x16CE00u;
label_16ce00:
    // 0x16ce00: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x16ce00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_16ce04:
    // 0x16ce04: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16ce04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16ce08:
    // 0x16ce08: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x16ce08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16ce0c:
    // 0x16ce0c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16ce0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16ce10:
    // 0x16ce10: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16ce10u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_16ce14:
    // 0x16ce14: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ce14u;
    // VWAITQ (Q already resolved in this runtime)
label_16ce18:
    // 0x16ce18: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16ce18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16ce1c:
    // 0x16ce1c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16ce1cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_16ce20:
    // 0x16ce20: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16ce20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16ce24:
    // 0x16ce24: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x16ce24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16ce28:
    // 0x16ce28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16ce28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_16ce2c:
    // 0x16ce2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ce2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16ce30:
    // 0x16ce30: 0x4a0003bf  vwaitq
    ctx->pc = 0x16ce30u;
    // VWAITQ (Q already resolved in this runtime)
label_16ce34:
    // 0x16ce34: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16ce34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16ce38:
    // 0x16ce38: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16ce38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_16ce3c:
    // 0x16ce3c: 0xc7808488  lwc1        $f0, -0x7B78($gp)
    ctx->pc = 0x16ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ce40:
    // 0x16ce40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16ce40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ce44:
    // 0x16ce44: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_16ce48:
    if (ctx->pc == 0x16CE48u) {
        ctx->pc = 0x16CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE44u;
        // 0x16ce48: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE4Cu;
        goto label_16ce4c;
    }
    ctx->pc = 0x16CE44u;
    {
        const bool branch_taken_0x16ce44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE44u;
        // 0x16ce48: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce44) {
            ctx->pc = 0x16CEE8u;
            goto label_16cee8;
        }
    }
    ctx->pc = 0x16CE4Cu;
label_16ce4c:
    // 0x16ce4c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x16ce4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ce50:
    // 0x16ce50: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_16ce54:
    if (ctx->pc == 0x16CE54u) {
        ctx->pc = 0x16CE58u;
        goto label_16ce58;
    }
    ctx->pc = 0x16CE50u;
    {
        const bool branch_taken_0x16ce50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ce50) {
            ctx->pc = 0x16CE78u;
            goto label_16ce78;
        }
    }
    ctx->pc = 0x16CE58u;
label_16ce58:
    // 0x16ce58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ce58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16ce5c:
    // 0x16ce5c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16ce5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16ce60:
    // 0x16ce60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16ce60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_16ce64:
    // 0x16ce64: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16ce64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16ce68:
    // 0x16ce68: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_16ce6c:
    // 0x16ce6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_16ce70:
    if (ctx->pc == 0x16CE70u) {
        ctx->pc = 0x16CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE6Cu;
        // 0x16ce70: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE74u;
        goto label_16ce74;
    }
    ctx->pc = 0x16CE6Cu;
    {
        const bool branch_taken_0x16ce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE6Cu;
        // 0x16ce70: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce6c) {
            ctx->pc = 0x16CE84u;
            goto label_16ce84;
        }
    }
    ctx->pc = 0x16CE74u;
label_16ce74:
    // 0x16ce74: 0x0  nop
    ctx->pc = 0x16ce74u;
    // NOP
label_16ce78:
    // 0x16ce78: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x16ce78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_16ce7c:
    // 0x16ce7c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_16ce80:
    // 0x16ce80: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16ce80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16ce84:
    // 0x16ce84: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x16ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16ce88:
    // 0x16ce88: 0x26220290  addiu       $v0, $s1, 0x290
    ctx->pc = 0x16ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
label_16ce8c:
    // 0x16ce8c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ce8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16ce90:
    // 0x16ce90: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16ce90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16ce94:
    // 0x16ce94: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16ce94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16ce98:
    // 0x16ce98: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x16ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_16ce9c:
    // 0x16ce9c: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x16ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_16cea0:
    // 0x16cea0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16cea4:
    // 0x16cea4: 0xc061468  jal         func_1851A0
label_16cea8:
    if (ctx->pc == 0x16CEA8u) {
        ctx->pc = 0x16CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEA4u;
        // 0x16cea8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CEACu;
        goto label_16ceac;
    }
    ctx->pc = 0x16CEA4u;
    SET_GPR_U32(ctx, 31, 0x16CEACu);
    ctx->pc = 0x16CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CEA4u;
    // 0x16cea8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x16CEA4u, 0x16CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CEACu;
label_16ceac:
    // 0x16ceac: 0x3c01c2a0  lui         $at, 0xC2A0
    ctx->pc = 0x16ceacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49824 << 16));
label_16ceb0:
    // 0x16ceb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16ceb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ceb4:
    // 0x16ceb4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x16ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ceb8:
    // 0x16ceb8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x16ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16cebc:
    // 0x16cebc: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x16cebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_16cec0:
    // 0x16cec0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x16cec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_16cec4:
    // 0x16cec4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x16cec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_16cec8:
    // 0x16cec8: 0xc6210220  lwc1        $f1, 0x220($s1)
    ctx->pc = 0x16cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cecc:
    // 0x16cecc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x16ceccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_16ced0:
    // 0x16ced0: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x16ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ced4:
    // 0x16ced4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16ced4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_16ced8:
    // 0x16ced8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x16ced8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_16cedc:
    // 0x16cedc: 0xe6210220  swc1        $f1, 0x220($s1)
    ctx->pc = 0x16cedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
label_16cee0:
    // 0x16cee0: 0x10000002  b           . + 4 + (0x2 << 2)
label_16cee4:
    if (ctx->pc == 0x16CEE4u) {
        ctx->pc = 0x16CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEE0u;
        // 0x16cee4: 0xe6200228  swc1        $f0, 0x228($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CEE8u;
        goto label_16cee8;
    }
    ctx->pc = 0x16CEE0u;
    {
        const bool branch_taken_0x16cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEE0u;
        // 0x16cee4: 0xe6200228  swc1        $f0, 0x228($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cee0) {
            ctx->pc = 0x16CEECu;
            goto label_16ceec;
        }
    }
    ctx->pc = 0x16CEE8u;
label_16cee8:
    // 0x16cee8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16ceec:
    // 0x16ceec: 0xc6200284  lwc1        $f0, 0x284($s1)
    ctx->pc = 0x16ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cef0:
    // 0x16cef0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x16cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cef4:
    // 0x16cef4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16cef8:
    // 0x16cef8: 0xe6200284  swc1        $f0, 0x284($s1)
    ctx->pc = 0x16cef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
label_16cefc:
    // 0x16cefc: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x16cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_16cf00:
    // 0x16cf00: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16cf04:
    // 0x16cf04: 0x10460053  beq         $v0, $a2, . + 4 + (0x53 << 2)
label_16cf08:
    if (ctx->pc == 0x16CF08u) {
        ctx->pc = 0x16CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF04u;
        // 0x16cf08: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF0Cu;
        goto label_16cf0c;
    }
    ctx->pc = 0x16CF04u;
    {
        const bool branch_taken_0x16cf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x16CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF04u;
        // 0x16cf08: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf04) {
            ctx->pc = 0x16D054u;
            goto label_16d054;
        }
    }
    ctx->pc = 0x16CF0Cu;
label_16cf0c:
    // 0x16cf0c: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x16cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_16cf10:
    // 0x16cf10: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x16cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_16cf14:
    // 0x16cf14: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x16cf14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_16cf18:
    // 0x16cf18: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x16cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_16cf1c:
    // 0x16cf1c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x16cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_16cf20:
    // 0x16cf20: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16cf24:
    // 0x16cf24: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x16cf24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_16cf28:
    // 0x16cf28: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x16cf28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_16cf2c:
    // 0x16cf2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16cf2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16cf30:
    // 0x16cf30: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16cf30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_16cf34:
    // 0x16cf34: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16cf34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16cf38:
    // 0x16cf38: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16cf38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_16cf3c:
    // 0x16cf3c: 0x26240290  addiu       $a0, $s1, 0x290
    ctx->pc = 0x16cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
label_16cf40:
    // 0x16cf40: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16cf40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16cf44:
    // 0x16cf44: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x16cf44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16cf48:
    // 0x16cf48: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16cf48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16cf4c:
    // 0x16cf4c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_16cf50:
    // 0x16cf50: 0x26240280  addiu       $a0, $s1, 0x280
    ctx->pc = 0x16cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
label_16cf54:
    // 0x16cf54: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16cf54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16cf58:
    // 0x16cf58: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x16cf58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16cf5c:
    // 0x16cf5c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16cf5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_16cf60:
    // 0x16cf60: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16cf60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16cf64:
    // 0x16cf64: 0x8e220260  lw          $v0, 0x260($s1)
    ctx->pc = 0x16cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_16cf68:
    // 0x16cf68: 0x1046003b  beq         $v0, $a2, . + 4 + (0x3B << 2)
label_16cf6c:
    if (ctx->pc == 0x16CF6Cu) {
        ctx->pc = 0x16CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF68u;
        // 0x16cf6c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF70u;
        goto label_16cf70;
    }
    ctx->pc = 0x16CF68u;
    {
        const bool branch_taken_0x16cf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x16CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF68u;
        // 0x16cf6c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf68) {
            ctx->pc = 0x16D058u;
            goto label_16d058;
        }
    }
    ctx->pc = 0x16CF70u;
label_16cf70:
    // 0x16cf70: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16cf70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16cf74:
    // 0x16cf74: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x16cf74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16cf78:
    // 0x16cf78: 0x4a0002ff  vnop
    ctx->pc = 0x16cf78u;
    // NOP operation, no action needed for VU0
label_16cf7c:
    // 0x16cf7c: 0x4a0002ff  vnop
    ctx->pc = 0x16cf7cu;
    // NOP operation, no action needed for VU0
label_16cf80:
    // 0x16cf80: 0x4a0002ff  vnop
    ctx->pc = 0x16cf80u;
    // NOP operation, no action needed for VU0
label_16cf84:
    // 0x16cf84: 0x4a0002ff  vnop
    ctx->pc = 0x16cf84u;
    // NOP operation, no action needed for VU0
label_16cf88:
    // 0x16cf88: 0x4a0002ff  vnop
    ctx->pc = 0x16cf88u;
    // NOP operation, no action needed for VU0
label_16cf8c:
    // 0x16cf8c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16cf8cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
label_16cf90:
    // 0x16cf90: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x16cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_16cf94:
    // 0x16cf94: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x16cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_16cf98:
    // 0x16cf98: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_16cf9c:
    if (ctx->pc == 0x16CF9Cu) {
        ctx->pc = 0x16CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF98u;
        // 0x16cf9c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFA0u;
        goto label_16cfa0;
    }
    ctx->pc = 0x16CF98u;
    {
        const bool branch_taken_0x16cf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF98u;
        // 0x16cf9c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf98) {
            ctx->pc = 0x16D058u;
            goto label_16d058;
        }
    }
    ctx->pc = 0x16CFA0u;
label_16cfa0:
    // 0x16cfa0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x16cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16cfa4:
    // 0x16cfa4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16cfa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16cfa8:
    // 0x16cfa8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16cfa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16cfac:
    // 0x16cfac: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x16cfacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16cfb0:
    // 0x16cfb0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16cfb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16cfb4:
    // 0x16cfb4: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16cfb4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_16cfb8:
    // 0x16cfb8: 0x4a0003bf  vwaitq
    ctx->pc = 0x16cfb8u;
    // VWAITQ (Q already resolved in this runtime)
label_16cfbc:
    // 0x16cfbc: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16cfbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16cfc0:
    // 0x16cfc0: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x16cfc0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_16cfc4:
    // 0x16cfc4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x16cfc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16cfc8:
    // 0x16cfc8: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x16cfc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16cfcc:
    // 0x16cfcc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16cfccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_16cfd0:
    // 0x16cfd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cfd4:
    // 0x16cfd4: 0x4a0003bf  vwaitq
    ctx->pc = 0x16cfd4u;
    // VWAITQ (Q already resolved in this runtime)
label_16cfd8:
    // 0x16cfd8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x16cfd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16cfdc:
    // 0x16cfdc: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x16cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_16cfe0:
    // 0x16cfe0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16cfe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cfe4:
    // 0x16cfe4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_16cfe8:
    if (ctx->pc == 0x16CFE8u) {
        ctx->pc = 0x16CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE4u;
        // 0x16cfe8: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFECu;
        goto label_16cfec;
    }
    ctx->pc = 0x16CFE4u;
    {
        const bool branch_taken_0x16cfe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE4u;
        // 0x16cfe8: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfe4) {
            ctx->pc = 0x16D004u;
            goto label_16d004;
        }
    }
    ctx->pc = 0x16CFECu;
label_16cfec:
    // 0x16cfec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16cfecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16cff0:
    // 0x16cff0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16cff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16cff4:
    // 0x16cff4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16cff4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_16cff8:
    // 0x16cff8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16cff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16cffc:
    // 0x16cffc: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_16d000:
    // 0x16d000: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x16d000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_16d004:
    // 0x16d004: 0xc780848c  lwc1        $f0, -0x7B74($gp)
    ctx->pc = 0x16d004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d008:
    // 0x16d008: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16d008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_16d00c:
    // 0x16d00c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16d00cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16d010:
    // 0x16d010: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16d010u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_16d014:
    // 0x16d014: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16d014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16d018:
    // 0x16d018: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x16d018u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_16d01c:
    // 0x16d01c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16d01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d020:
    // 0x16d020: 0x8e280150  lw          $t0, 0x150($s1)
    ctx->pc = 0x16d020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_16d024:
    // 0x16d024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d028:
    // 0x16d028: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d02c:
    // 0x16d02c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x16d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_16d030:
    // 0x16d030: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16d030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_16d034:
    // 0x16d034: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16d034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16d038:
    // 0x16d038: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16d03c:
    // 0x16d03c: 0x40f809  jalr        $v0
label_16d040:
    if (ctx->pc == 0x16D040u) {
        ctx->pc = 0x16D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D03Cu;
        // 0x16d040: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D044u;
        goto label_16d044;
    }
    ctx->pc = 0x16D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D044u);
        ctx->pc = 0x16D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D03Cu;
        // 0x16d040: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D03Cu, 0x16D044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D044u;
label_16d044:
    // 0x16d044: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x16d044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_16d048:
    // 0x16d048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d04c:
    // 0x16d04c: 0xc0618c2  jal         func_186308
label_16d050:
    if (ctx->pc == 0x16D050u) {
        ctx->pc = 0x16D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D04Cu;
        // 0x16d050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D054u;
        goto label_16d054;
    }
    ctx->pc = 0x16D04Cu;
    SET_GPR_U32(ctx, 31, 0x16D054u);
    ctx->pc = 0x16D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D04Cu;
    // 0x16d050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x16D04Cu, 0x16D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D054u;
label_16d054:
    // 0x16d054: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x16d054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16d058:
    // 0x16d058: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x16d058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_16d05c:
    // 0x16d05c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x16d05cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_16d060:
    // 0x16d060: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x16d060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_16d064:
    // 0x16d064: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x16d064u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_16d068:
    // 0x16d068: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x16d068u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_16d06c:
    // 0x16d06c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x16d06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_16d070:
    // 0x16d070: 0xc7b400c8  lwc1        $f20, 0xC8($sp)
    ctx->pc = 0x16d070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16d074:
    // 0x16d074: 0x3e00008  jr          $ra
label_16d078:
    if (ctx->pc == 0x16D078u) {
        ctx->pc = 0x16D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D074u;
        // 0x16d078: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D07Cu;
        goto label_fallthrough_0x16d074;
    }
    ctx->pc = 0x16D074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D074u;
        // 0x16d078: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16d074:
    ctx->pc = 0x16D07Cu;
}
