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

// Function: ApUnitPlayerSetUp__FiP7ApcUnit
// Address: 0x14d1c8 - 0x14d250
void ApUnitPlayerSetUp__FiP7ApcUnit_0x14d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitPlayerSetUp__FiP7ApcUnit_0x14d1c8");
#endif

    switch (ctx->pc) {
        case 0x14d1c8u: goto label_14d1c8;
        case 0x14d1ccu: goto label_14d1cc;
        case 0x14d1d0u: goto label_14d1d0;
        case 0x14d1d4u: goto label_14d1d4;
        case 0x14d1d8u: goto label_14d1d8;
        case 0x14d1dcu: goto label_14d1dc;
        case 0x14d1e0u: goto label_14d1e0;
        case 0x14d1e4u: goto label_14d1e4;
        case 0x14d1e8u: goto label_14d1e8;
        case 0x14d1ecu: goto label_14d1ec;
        case 0x14d1f0u: goto label_14d1f0;
        case 0x14d1f4u: goto label_14d1f4;
        case 0x14d1f8u: goto label_14d1f8;
        case 0x14d1fcu: goto label_14d1fc;
        case 0x14d200u: goto label_14d200;
        case 0x14d204u: goto label_14d204;
        case 0x14d208u: goto label_14d208;
        case 0x14d20cu: goto label_14d20c;
        case 0x14d210u: goto label_14d210;
        case 0x14d214u: goto label_14d214;
        case 0x14d218u: goto label_14d218;
        case 0x14d21cu: goto label_14d21c;
        case 0x14d220u: goto label_14d220;
        case 0x14d224u: goto label_14d224;
        case 0x14d228u: goto label_14d228;
        case 0x14d22cu: goto label_14d22c;
        case 0x14d230u: goto label_14d230;
        case 0x14d234u: goto label_14d234;
        case 0x14d238u: goto label_14d238;
        case 0x14d23cu: goto label_14d23c;
        case 0x14d240u: goto label_14d240;
        case 0x14d244u: goto label_14d244;
        case 0x14d248u: goto label_14d248;
        case 0x14d24cu: goto label_14d24c;
        default: break;
    }

    ctx->pc = 0x14d1c8u;

label_14d1c8:
    // 0x14d1c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14d1cc:
    // 0x14d1cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14d1d0:
    // 0x14d1d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14d1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14d1d4:
    // 0x14d1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14d1d8:
    // 0x14d1d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d1d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d1dc:
    // 0x14d1dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14d1e0:
    // 0x14d1e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14d1e4:
    // 0x14d1e4: 0xc053162  jal         func_14C588
label_14d1e8:
    if (ctx->pc == 0x14D1E8u) {
        ctx->pc = 0x14D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1E4u;
        // 0x14d1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D1ECu;
        goto label_14d1ec;
    }
    ctx->pc = 0x14D1E4u;
    SET_GPR_U32(ctx, 31, 0x14D1ECu);
    ctx->pc = 0x14D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1E4u;
    // 0x14d1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C588u, 0x14D1E4u, 0x14D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1ECu;
label_14d1ec:
    // 0x14d1ec: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14d1ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_14d1f0:
    // 0x14d1f0: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x14d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
label_14d1f4:
    // 0x14d1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d1f8:
    // 0x14d1f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_14d1fc:
    if (ctx->pc == 0x14D1FCu) {
        ctx->pc = 0x14D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1F8u;
        // 0x14d1fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D200u;
        goto label_14d200;
    }
    ctx->pc = 0x14D1F8u;
    {
        const bool branch_taken_0x14d1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1F8u;
        // 0x14d1fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1f8) {
            ctx->pc = 0x14D208u;
            goto label_14d208;
        }
    }
    ctx->pc = 0x14D200u;
label_14d200:
    // 0x14d200: 0xc0535b0  jal         func_14D6C0
label_14d204:
    if (ctx->pc == 0x14D204u) {
        ctx->pc = 0x14D208u;
        goto label_14d208;
    }
    ctx->pc = 0x14D200u;
    SET_GPR_U32(ctx, 31, 0x14D208u);
    ctx->pc = 0x14D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6C0u, 0x14D200u, 0x14D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D208u;
label_14d208:
    // 0x14d208: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14d20c:
    // 0x14d20c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x14d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_14d210:
    // 0x14d210: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14d210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14d214:
    // 0x14d214: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14d214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14d218:
    // 0x14d218: 0xa0f809  jalr        $a1
label_14d21c:
    if (ctx->pc == 0x14D21Cu) {
        ctx->pc = 0x14D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D218u;
        // 0x14d21c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D220u;
        goto label_14d220;
    }
    ctx->pc = 0x14D218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x14D220u);
        ctx->pc = 0x14D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D218u;
        // 0x14d21c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D218u, 0x14D220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D220u;
label_14d220:
    // 0x14d220: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x14d220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_14d224:
    // 0x14d224: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x14d224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14d228:
    // 0x14d228: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x14d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_14d22c:
    // 0x14d22c: 0x34630a00  ori         $v1, $v1, 0xA00
    ctx->pc = 0x14d22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2560);
label_14d230:
    // 0x14d230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14d234:
    // 0x14d234: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14d234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14d238:
    // 0x14d238: 0xae030180  sw          $v1, 0x180($s0)
    ctx->pc = 0x14d238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 3));
label_14d23c:
    // 0x14d23c: 0xac503630  sw          $s0, 0x3630($v0)
    ctx->pc = 0x14d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13872), GPR_U32(ctx, 16));
label_14d240:
    // 0x14d240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14d244:
    // 0x14d244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d248:
    // 0x14d248: 0x3e00008  jr          $ra
label_14d24c:
    if (ctx->pc == 0x14D24Cu) {
        ctx->pc = 0x14D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D248u;
        // 0x14d24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D250u;
        goto label_fallthrough_0x14d248;
    }
    ctx->pc = 0x14D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D248u;
        // 0x14d24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d248:
    ctx->pc = 0x14D250u;
}
