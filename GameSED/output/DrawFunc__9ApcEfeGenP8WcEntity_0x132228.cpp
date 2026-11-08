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

// Function: DrawFunc__9ApcEfeGenP8WcEntity
// Address: 0x132228 - 0x1322b0
void DrawFunc__9ApcEfeGenP8WcEntity_0x132228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__9ApcEfeGenP8WcEntity_0x132228");
#endif

    switch (ctx->pc) {
        case 0x132228u: goto label_132228;
        case 0x13222cu: goto label_13222c;
        case 0x132230u: goto label_132230;
        case 0x132234u: goto label_132234;
        case 0x132238u: goto label_132238;
        case 0x13223cu: goto label_13223c;
        case 0x132240u: goto label_132240;
        case 0x132244u: goto label_132244;
        case 0x132248u: goto label_132248;
        case 0x13224cu: goto label_13224c;
        case 0x132250u: goto label_132250;
        case 0x132254u: goto label_132254;
        case 0x132258u: goto label_132258;
        case 0x13225cu: goto label_13225c;
        case 0x132260u: goto label_132260;
        case 0x132264u: goto label_132264;
        case 0x132268u: goto label_132268;
        case 0x13226cu: goto label_13226c;
        case 0x132270u: goto label_132270;
        case 0x132274u: goto label_132274;
        case 0x132278u: goto label_132278;
        case 0x13227cu: goto label_13227c;
        case 0x132280u: goto label_132280;
        case 0x132284u: goto label_132284;
        case 0x132288u: goto label_132288;
        case 0x13228cu: goto label_13228c;
        case 0x132290u: goto label_132290;
        case 0x132294u: goto label_132294;
        case 0x132298u: goto label_132298;
        case 0x13229cu: goto label_13229c;
        case 0x1322a0u: goto label_1322a0;
        case 0x1322a4u: goto label_1322a4;
        case 0x1322a8u: goto label_1322a8;
        case 0x1322acu: goto label_1322ac;
        default: break;
    }

    ctx->pc = 0x132228u;

label_132228:
    // 0x132228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13222c:
    // 0x13222c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13222cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_132230:
    // 0x132230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132234:
    // 0x132234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_132238:
    // 0x132238: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x132238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13223c:
    // 0x13223c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_132240:
    // 0x132240: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x132240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_132244:
    // 0x132244: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x132244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_132248:
    // 0x132248: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x132248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13224c:
    // 0x13224c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13224cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_132250:
    // 0x132250: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x132250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_132254:
    // 0x132254: 0x60f809  jalr        $v1
label_132258:
    if (ctx->pc == 0x132258u) {
        ctx->pc = 0x132258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132254u;
        // 0x132258: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13225Cu;
        goto label_13225c;
    }
    ctx->pc = 0x132254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13225Cu);
        ctx->pc = 0x132258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132254u;
        // 0x132258: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132254u, 0x13225Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13225Cu;
label_13225c:
    // 0x13225c: 0x8e06018c  lw          $a2, 0x18C($s0)
    ctx->pc = 0x13225cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
label_132260:
    // 0x132260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132264:
    // 0x132264: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x132264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_132268:
    // 0x132268: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x132268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13226c:
    // 0x13226c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13226cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_132270:
    // 0x132270: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x132270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_132274:
    // 0x132274: 0x60f809  jalr        $v1
label_132278:
    if (ctx->pc == 0x132278u) {
        ctx->pc = 0x132278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132274u;
        // 0x132278: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13227Cu;
        goto label_13227c;
    }
    ctx->pc = 0x132274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13227Cu);
        ctx->pc = 0x132278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132274u;
        // 0x132278: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132274u, 0x13227Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13227Cu;
label_13227c:
    // 0x13227c: 0x8e060188  lw          $a2, 0x188($s0)
    ctx->pc = 0x13227cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_132280:
    // 0x132280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132284:
    // 0x132284: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x132284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_132288:
    // 0x132288: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x132288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13228c:
    // 0x13228c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13228cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_132290:
    // 0x132290: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x132290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_132294:
    // 0x132294: 0x60f809  jalr        $v1
label_132298:
    if (ctx->pc == 0x132298u) {
        ctx->pc = 0x132298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132294u;
        // 0x132298: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13229Cu;
        goto label_13229c;
    }
    ctx->pc = 0x132294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13229Cu);
        ctx->pc = 0x132298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132294u;
        // 0x132298: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132294u, 0x13229Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13229Cu;
label_13229c:
    // 0x13229c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13229cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1322a0:
    // 0x1322a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1322a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1322a4:
    // 0x1322a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1322a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1322a8:
    // 0x1322a8: 0x3e00008  jr          $ra
label_1322ac:
    if (ctx->pc == 0x1322ACu) {
        ctx->pc = 0x1322ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322A8u;
        // 0x1322ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322B0u;
        goto label_fallthrough_0x1322a8;
    }
    ctx->pc = 0x1322A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1322ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322A8u;
        // 0x1322ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1322a8:
    ctx->pc = 0x1322B0u;
}
