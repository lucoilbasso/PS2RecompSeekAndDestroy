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

// Function: SetupLevelBar__15ApPanelBarGaugeP8WcSpriteiii
// Address: 0x160b98 - 0x160c70
void SetupLevelBar__15ApPanelBarGaugeP8WcSpriteiii_0x160b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupLevelBar__15ApPanelBarGaugeP8WcSpriteiii_0x160b98");
#endif

    switch (ctx->pc) {
        case 0x160b98u: goto label_160b98;
        case 0x160b9cu: goto label_160b9c;
        case 0x160ba0u: goto label_160ba0;
        case 0x160ba4u: goto label_160ba4;
        case 0x160ba8u: goto label_160ba8;
        case 0x160bacu: goto label_160bac;
        case 0x160bb0u: goto label_160bb0;
        case 0x160bb4u: goto label_160bb4;
        case 0x160bb8u: goto label_160bb8;
        case 0x160bbcu: goto label_160bbc;
        case 0x160bc0u: goto label_160bc0;
        case 0x160bc4u: goto label_160bc4;
        case 0x160bc8u: goto label_160bc8;
        case 0x160bccu: goto label_160bcc;
        case 0x160bd0u: goto label_160bd0;
        case 0x160bd4u: goto label_160bd4;
        case 0x160bd8u: goto label_160bd8;
        case 0x160bdcu: goto label_160bdc;
        case 0x160be0u: goto label_160be0;
        case 0x160be4u: goto label_160be4;
        case 0x160be8u: goto label_160be8;
        case 0x160becu: goto label_160bec;
        case 0x160bf0u: goto label_160bf0;
        case 0x160bf4u: goto label_160bf4;
        case 0x160bf8u: goto label_160bf8;
        case 0x160bfcu: goto label_160bfc;
        case 0x160c00u: goto label_160c00;
        case 0x160c04u: goto label_160c04;
        case 0x160c08u: goto label_160c08;
        case 0x160c0cu: goto label_160c0c;
        case 0x160c10u: goto label_160c10;
        case 0x160c14u: goto label_160c14;
        case 0x160c18u: goto label_160c18;
        case 0x160c1cu: goto label_160c1c;
        case 0x160c20u: goto label_160c20;
        case 0x160c24u: goto label_160c24;
        case 0x160c28u: goto label_160c28;
        case 0x160c2cu: goto label_160c2c;
        case 0x160c30u: goto label_160c30;
        case 0x160c34u: goto label_160c34;
        case 0x160c38u: goto label_160c38;
        case 0x160c3cu: goto label_160c3c;
        case 0x160c40u: goto label_160c40;
        case 0x160c44u: goto label_160c44;
        case 0x160c48u: goto label_160c48;
        case 0x160c4cu: goto label_160c4c;
        case 0x160c50u: goto label_160c50;
        case 0x160c54u: goto label_160c54;
        case 0x160c58u: goto label_160c58;
        case 0x160c5cu: goto label_160c5c;
        case 0x160c60u: goto label_160c60;
        case 0x160c64u: goto label_160c64;
        case 0x160c68u: goto label_160c68;
        case 0x160c6cu: goto label_160c6c;
        default: break;
    }

    ctx->pc = 0x160b98u;

label_160b98:
    // 0x160b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x160b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_160b9c:
    // 0x160b9c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x160b9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_160ba0:
    // 0x160ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x160ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_160ba4:
    // 0x160ba4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x160ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_160ba8:
    // 0x160ba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x160ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_160bac:
    // 0x160bac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x160bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_160bb0:
    // 0x160bb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x160bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_160bb4:
    // 0x160bb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x160bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160bb8:
    // 0x160bb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x160bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_160bbc:
    // 0x160bbc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x160bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_160bc0:
    // 0x160bc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x160bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_160bc4:
    // 0x160bc4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x160bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_160bc8:
    // 0x160bc8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x160bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_160bcc:
    // 0x160bcc: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x160bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_160bd0:
    // 0x160bd0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x160bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_160bd4:
    // 0x160bd4: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x160bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_160bd8:
    // 0x160bd8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160bdc:
    // 0x160bdc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x160bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160be0:
    // 0x160be0: 0xc0f809  jalr        $a2
label_160be4:
    if (ctx->pc == 0x160BE4u) {
        ctx->pc = 0x160BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BE0u;
        // 0x160be4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160BE8u;
        goto label_160be8;
    }
    ctx->pc = 0x160BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x160BE8u);
        ctx->pc = 0x160BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BE0u;
        // 0x160be4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160BE0u, 0x160BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160BE8u;
label_160be8:
    // 0x160be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160bec:
    // 0x160bec: 0x131043  sra         $v0, $s3, 1
    ctx->pc = 0x160becu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
label_160bf0:
    // 0x160bf0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x160bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_160bf4:
    // 0x160bf4: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x160bf4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
label_160bf8:
    // 0x160bf8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x160bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_160bfc:
    // 0x160bfc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x160bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_160c00:
    // 0x160c00: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x160c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_160c04:
    // 0x160c04: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x160c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_160c08:
    // 0x160c08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x160c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_160c0c:
    // 0x160c0c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x160c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_160c10:
    // 0x160c10: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x160c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_160c14:
    // 0x160c14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x160c14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160c18:
    // 0x160c18: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_160c1c:
    if (ctx->pc == 0x160C1Cu) {
        ctx->pc = 0x160C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C18u;
        // 0x160c1c: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C20u;
        goto label_160c20;
    }
    ctx->pc = 0x160C18u;
    {
        const bool branch_taken_0x160c18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C18u;
        // 0x160c1c: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c18) {
            ctx->pc = 0x160C34u;
            goto label_160c34;
        }
    }
    ctx->pc = 0x160C20u;
label_160c20:
    // 0x160c20: 0x91001a  div         $zero, $a0, $s1
    ctx->pc = 0x160c20u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_160c24:
    // 0x160c24: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_160c28:
    if (ctx->pc == 0x160C28u) {
        ctx->pc = 0x160C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C24u;
        // 0x160c28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C2Cu;
        goto label_160c2c;
    }
    ctx->pc = 0x160C24u;
    {
        const bool branch_taken_0x160c24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x160c24) {
            ctx->pc = 0x160C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160C24u;
            // 0x160c28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x160C2Cu;
            goto label_160c2c;
        }
    }
    ctx->pc = 0x160C2Cu;
label_160c2c:
    // 0x160c2c: 0x1012  mflo        $v0
    ctx->pc = 0x160c2cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_160c30:
    // 0x160c30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x160c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160c34:
    // 0x160c34: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_160c38:
    if (ctx->pc == 0x160C38u) {
        ctx->pc = 0x160C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C34u;
        // 0x160c38: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C3Cu;
        goto label_160c3c;
    }
    ctx->pc = 0x160C34u;
    {
        const bool branch_taken_0x160c34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C34u;
        // 0x160c38: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c34) {
            ctx->pc = 0x160C50u;
            goto label_160c50;
        }
    }
    ctx->pc = 0x160C3Cu;
label_160c3c:
    // 0x160c3c: 0xb3001a  div         $zero, $a1, $s3
    ctx->pc = 0x160c3cu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_160c40:
    // 0x160c40: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_160c44:
    if (ctx->pc == 0x160C44u) {
        ctx->pc = 0x160C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C40u;
        // 0x160c44: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C48u;
        goto label_160c48;
    }
    ctx->pc = 0x160C40u;
    {
        const bool branch_taken_0x160c40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x160c40) {
            ctx->pc = 0x160C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160C40u;
            // 0x160c44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x160C48u;
            goto label_160c48;
        }
    }
    ctx->pc = 0x160C48u;
label_160c48:
    // 0x160c48: 0x1012  mflo        $v0
    ctx->pc = 0x160c48u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_160c4c:
    // 0x160c4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x160c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160c50:
    // 0x160c50: 0xae46002c  sw          $a2, 0x2C($s2)
    ctx->pc = 0x160c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
label_160c54:
    // 0x160c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160c58:
    // 0x160c58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_160c5c:
    // 0x160c5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160c60:
    // 0x160c60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x160c60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_160c64:
    // 0x160c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x160c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_160c68:
    // 0x160c68: 0x3e00008  jr          $ra
label_160c6c:
    if (ctx->pc == 0x160C6Cu) {
        ctx->pc = 0x160C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C68u;
        // 0x160c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C70u;
        goto label_fallthrough_0x160c68;
    }
    ctx->pc = 0x160C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C68u;
        // 0x160c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x160c68:
    ctx->pc = 0x160C70u;
}
