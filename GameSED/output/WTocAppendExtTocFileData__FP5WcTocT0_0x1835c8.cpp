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

// Function: WTocAppendExtTocFileData__FP5WcTocT0
// Address: 0x1835c8 - 0x18370c
void WTocAppendExtTocFileData__FP5WcTocT0_0x1835c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTocAppendExtTocFileData__FP5WcTocT0_0x1835c8");
#endif

    switch (ctx->pc) {
        case 0x18361cu: goto label_18361c;
        case 0x183668u: goto label_183668;
        case 0x18369cu: goto label_18369c;
        case 0x1836c8u: goto label_1836c8;
        default: break;
    }

    ctx->pc = 0x1835c8u;

    // 0x1835c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1835c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1835cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1835ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1835d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1835d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1835d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1835d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1835d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1835dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1835dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1835e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1835e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1835e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1835e8: 0x86040028  lh          $a0, 0x28($s0)
    ctx->pc = 0x1835e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1835ec: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1835ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1835f0: 0x8602002c  lh          $v0, 0x2C($s0)
    ctx->pc = 0x1835f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1835f4: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x1835f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1835f8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1835f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1835fc: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1835FCu;
    {
        const bool branch_taken_0x1835fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1835fc) {
            ctx->pc = 0x183600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1835FCu;
            // 0x183600: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1836A8u;
            goto label_1836a8;
        }
    }
    ctx->pc = 0x183604u;
    // 0x183604: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x183604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x183608: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x183608u;
    {
        const bool branch_taken_0x183608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183608u;
        // 0x18360c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183608) {
            ctx->pc = 0x183614u;
            goto label_183614;
        }
    }
    ctx->pc = 0x183610u;
    // 0x183610: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_183614:
    // 0x183614: 0xc068086  jal         func_1A0218
    ctx->pc = 0x183614u;
    SET_GPR_U32(ctx, 31, 0x18361Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x183614u, 0x18361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18361Cu;
label_18361c:
    // 0x18361c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18361cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183620: 0x5620000d  bnel        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x183620u;
    {
        const bool branch_taken_0x183620 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x183620) {
            ctx->pc = 0x183624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183620u;
            // 0x183624: 0x86020028  lh          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183658u;
            goto label_183658;
        }
    }
    ctx->pc = 0x183628u;
    // 0x183628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18362c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18362cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183630: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x183630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x183634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x183638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18363c: 0x24a57e08  addiu       $a1, $a1, 0x7E08
    ctx->pc = 0x18363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32264));
    // 0x183640: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x183640u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183644: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x183644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183648: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18364c: 0x8068186  j           func_1A0618
    ctx->pc = 0x18364Cu;
    ctx->pc = 0x183650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18364Cu;
    // 0x183650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x183654u;
    // 0x183654: 0x0  nop
    ctx->pc = 0x183654u;
    // NOP
label_183658:
    // 0x183658: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18365c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18365Cu;
    {
        const bool branch_taken_0x18365c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18365Cu;
        // 0x183660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18365c) {
            ctx->pc = 0x183690u;
            goto label_183690;
        }
    }
    ctx->pc = 0x183664u;
    // 0x183664: 0x0  nop
    ctx->pc = 0x183664u;
    // NOP
label_183668:
    // 0x183668: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x183668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18366c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x18366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x183670: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183674: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x183674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x183678: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18367c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x18367cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x183680: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x183680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x183684: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x183684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183688: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x183688u;
    {
        const bool branch_taken_0x183688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183688u;
        // 0x18368c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183688) {
            ctx->pc = 0x183668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183668;
        }
    }
    ctx->pc = 0x183690u;
label_183690:
    // 0x183690: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x183690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183694: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x183694u;
    SET_GPR_U32(ctx, 31, 0x18369Cu);
    ctx->pc = 0x183698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183694u;
    // 0x183698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x183694u, 0x18369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18369Cu;
label_18369c:
    // 0x18369c: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x18369cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x1836a0: 0xa612002c  sh          $s2, 0x2C($s0)
    ctx->pc = 0x1836a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 18));
    // 0x1836a4: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x1836a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
label_1836a8:
    // 0x1836a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1836a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836ac: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x1836acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1836b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1836b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1836b4: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x1836b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1836b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1836b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1836bc: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1836BCu;
    {
        const bool branch_taken_0x1836bc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1836C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836BCu;
        // 0x1836c0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836bc) {
            ctx->pc = 0x1836F0u;
            goto label_1836f0;
        }
    }
    ctx->pc = 0x1836C4u;
    // 0x1836c4: 0x0  nop
    ctx->pc = 0x1836c4u;
    // NOP
label_1836c8:
    // 0x1836c8: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1836c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1836cc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1836ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1836d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1836d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1836d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1836d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1836d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1836d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1836dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1836dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1836e0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1836e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1836e4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1836e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1836e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1836E8u;
    {
        const bool branch_taken_0x1836e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1836ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836E8u;
        // 0x1836ec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836e8) {
            ctx->pc = 0x1836C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1836c8;
        }
    }
    ctx->pc = 0x1836F0u;
label_1836f0:
    // 0x1836f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1836f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1836f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1836f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1836f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1836f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1836fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1836fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183700: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183704: 0x3e00008  jr          $ra
    ctx->pc = 0x183704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183704u;
        // 0x183708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18370Cu;
}
