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

// Function: do_find_public_subobj__C14__si_type_infoiRC9type_infoPvT3
// Address: 0x1cc1e8 - 0x1cc280
void do_find_public_subobj__C14__si_type_infoiRC9type_infoPvT3_0x1cc1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("do_find_public_subobj__C14__si_type_infoiRC9type_infoPvT3_0x1cc1e8");
#endif

    switch (ctx->pc) {
        case 0x1cc1e8u: goto label_1cc1e8;
        case 0x1cc1ecu: goto label_1cc1ec;
        case 0x1cc1f0u: goto label_1cc1f0;
        case 0x1cc1f4u: goto label_1cc1f4;
        case 0x1cc1f8u: goto label_1cc1f8;
        case 0x1cc1fcu: goto label_1cc1fc;
        case 0x1cc200u: goto label_1cc200;
        case 0x1cc204u: goto label_1cc204;
        case 0x1cc208u: goto label_1cc208;
        case 0x1cc20cu: goto label_1cc20c;
        case 0x1cc210u: goto label_1cc210;
        case 0x1cc214u: goto label_1cc214;
        case 0x1cc218u: goto label_1cc218;
        case 0x1cc21cu: goto label_1cc21c;
        case 0x1cc220u: goto label_1cc220;
        case 0x1cc224u: goto label_1cc224;
        case 0x1cc228u: goto label_1cc228;
        case 0x1cc22cu: goto label_1cc22c;
        case 0x1cc230u: goto label_1cc230;
        case 0x1cc234u: goto label_1cc234;
        case 0x1cc238u: goto label_1cc238;
        case 0x1cc23cu: goto label_1cc23c;
        case 0x1cc240u: goto label_1cc240;
        case 0x1cc244u: goto label_1cc244;
        case 0x1cc248u: goto label_1cc248;
        case 0x1cc24cu: goto label_1cc24c;
        case 0x1cc250u: goto label_1cc250;
        case 0x1cc254u: goto label_1cc254;
        case 0x1cc258u: goto label_1cc258;
        case 0x1cc25cu: goto label_1cc25c;
        case 0x1cc260u: goto label_1cc260;
        case 0x1cc264u: goto label_1cc264;
        case 0x1cc268u: goto label_1cc268;
        case 0x1cc26cu: goto label_1cc26c;
        case 0x1cc270u: goto label_1cc270;
        case 0x1cc274u: goto label_1cc274;
        case 0x1cc278u: goto label_1cc278;
        case 0x1cc27cu: goto label_1cc27c;
        default: break;
    }

    ctx->pc = 0x1cc1e8u;

label_1cc1e8:
    // 0x1cc1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cc1ec:
    // 0x1cc1ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cc1f0:
    // 0x1cc1f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cc1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1f4:
    // 0x1cc1f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cc1f8:
    // 0x1cc1f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1fc:
    // 0x1cc1fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cc200:
    // 0x1cc200: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1cc200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cc204:
    // 0x1cc204: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1cc208:
    // 0x1cc208: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1cc208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cc20c:
    // 0x1cc20c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cc210:
    // 0x1cc210: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cc210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc214:
    // 0x1cc214: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cc214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1cc218:
    // 0x1cc218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc21c:
    // 0x1cc21c: 0x16930005  bne         $s4, $s3, . + 4 + (0x5 << 2)
label_1cc220:
    if (ctx->pc == 0x1CC220u) {
        ctx->pc = 0x1CC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC21Cu;
        // 0x1cc220: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC224u;
        goto label_1cc224;
    }
    ctx->pc = 0x1CC21Cu;
    {
        const bool branch_taken_0x1cc21c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x1CC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC21Cu;
        // 0x1cc220: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc21c) {
            ctx->pc = 0x1CC234u;
            goto label_1cc234;
        }
    }
    ctx->pc = 0x1CC224u;
label_1cc224:
    // 0x1cc224: 0xc072f28  jal         func_1CBCA0
label_1cc228:
    if (ctx->pc == 0x1CC228u) {
        ctx->pc = 0x1CC22Cu;
        goto label_1cc22c;
    }
    ctx->pc = 0x1CC224u;
    SET_GPR_U32(ctx, 31, 0x1CC22Cu);
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC224u, 0x1CC22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC22Cu;
label_1cc22c:
    // 0x1cc22c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1cc230:
    if (ctx->pc == 0x1CC230u) {
        ctx->pc = 0x1CC230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC22Cu;
        // 0x1cc230: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC234u;
        goto label_1cc234;
    }
    ctx->pc = 0x1CC22Cu;
    {
        const bool branch_taken_0x1cc22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC22Cu;
        // 0x1cc230: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc22c) {
            ctx->pc = 0x1CC260u;
            goto label_1cc260;
        }
    }
    ctx->pc = 0x1CC234u;
label_1cc234:
    // 0x1cc234: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x1cc234u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1cc238:
    // 0x1cc238: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc23c:
    // 0x1cc23c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc240:
    // 0x1cc240: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cc240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cc244:
    // 0x1cc244: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1cc244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1cc248:
    // 0x1cc248: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1cc248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc24c:
    // 0x1cc24c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cc24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cc250:
    // 0x1cc250: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc254:
    // 0x1cc254: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc258:
    // 0x1cc258: 0x40f809  jalr        $v0
label_1cc25c:
    if (ctx->pc == 0x1CC25Cu) {
        ctx->pc = 0x1CC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC258u;
        // 0x1cc25c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC260u;
        goto label_1cc260;
    }
    ctx->pc = 0x1CC258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC260u);
        ctx->pc = 0x1CC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC258u;
        // 0x1cc25c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC258u, 0x1CC260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC260u;
label_1cc260:
    // 0x1cc260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc264:
    // 0x1cc264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc268:
    // 0x1cc268: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc26c:
    // 0x1cc26c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc26cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc270:
    // 0x1cc270: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc270u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc274:
    // 0x1cc274: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cc278:
    // 0x1cc278: 0x3e00008  jr          $ra
label_1cc27c:
    if (ctx->pc == 0x1CC27Cu) {
        ctx->pc = 0x1CC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC278u;
        // 0x1cc27c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC280u;
        goto label_fallthrough_0x1cc278;
    }
    ctx->pc = 0x1CC278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC278u;
        // 0x1cc27c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cc278:
    ctx->pc = 0x1CC280u;
}
