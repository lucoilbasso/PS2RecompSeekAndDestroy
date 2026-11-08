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

// Function: WModelExpandPBHdr__FP5BcObjP5PBHDRi
// Address: 0x17f148 - 0x17f3f0
void WModelExpandPBHdr__FP5BcObjP5PBHDRi_0x17f148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelExpandPBHdr__FP5BcObjP5PBHDRi_0x17f148");
#endif

    switch (ctx->pc) {
        case 0x17f190u: goto label_17f190;
        case 0x17f1ccu: goto label_17f1cc;
        case 0x17f1ecu: goto label_17f1ec;
        case 0x17f218u: goto label_17f218;
        case 0x17f2e8u: goto label_17f2e8;
        default: break;
    }

    ctx->pc = 0x17f148u;

    // 0x17f148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17f148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f14c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f154: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17f154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f158: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f15c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f160: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17f164: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17f164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f16c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x17f16cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f170: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17f174: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17f174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17f178: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17f17c: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x17f17cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17f180: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17f180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f184: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x17F184u;
    {
        const bool branch_taken_0x17f184 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F184u;
        // 0x17f188: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f184) {
            ctx->pc = 0x17F1B4u;
            goto label_17f1b4;
        }
    }
    ctx->pc = 0x17F18Cu;
    // 0x17f18c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x17f18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17f190:
    // 0x17f190: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17f194: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x17f194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x17f198: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17f198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17f19c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17f1a0: 0xe8202b  sltu        $a0, $a3, $t0
    ctx->pc = 0x17f1a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x17f1a4: 0x1231018  mult        $v0, $t1, $v1
    ctx->pc = 0x17f1a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f1a8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x17f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17f1ac: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17F1ACu;
    {
        const bool branch_taken_0x17f1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1ACu;
        // 0x17f1b0: 0x24650002  addiu       $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1ac) {
            ctx->pc = 0x17F190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f190;
        }
    }
    ctx->pc = 0x17F1B4u;
label_17f1b4:
    // 0x17f1b4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x17f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17f1b8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F1B8u;
    {
        const bool branch_taken_0x17f1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1B8u;
        // 0x17f1bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1b8) {
            ctx->pc = 0x17F1C4u;
            goto label_17f1c4;
        }
    }
    ctx->pc = 0x17F1C0u;
    // 0x17f1c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17f1c4:
    // 0x17f1c4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17F1C4u;
    SET_GPR_U32(ctx, 31, 0x17F1CCu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17F1C4u, 0x17F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1CCu;
label_17f1cc:
    // 0x17f1cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17f1ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1d0: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F1D0u;
    {
        const bool branch_taken_0x17f1d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f1d0) {
            ctx->pc = 0x17F1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F1D0u;
            // 0x17f1d4: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F1F0u;
            goto label_17f1f0;
        }
    }
    ctx->pc = 0x17F1D8u;
    // 0x17f1d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17f1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17f1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1e0: 0x24a57d00  addiu       $a1, $a1, 0x7D00
    ctx->pc = 0x17f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32000));
    // 0x17f1e4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17F1E4u;
    SET_GPR_U32(ctx, 31, 0x17F1ECu);
    ctx->pc = 0x17F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1E4u;
    // 0x17f1e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17F1E4u, 0x17F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1ECu;
label_17f1ec:
    // 0x17f1ec: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x17f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_17f1f0:
    // 0x17f1f0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x17f1f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1f4: 0x12400074  beqz        $s2, . + 4 + (0x74 << 2)
    ctx->pc = 0x17F1F4u;
    {
        const bool branch_taken_0x17f1f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1F4u;
        // 0x17f1f8: 0x2823821  addu        $a3, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1f4) {
            ctx->pc = 0x17F3C8u;
            goto label_17f3c8;
        }
    }
    ctx->pc = 0x17F1FCu;
    // 0x17f1fc: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x17f1fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17f200: 0x24190010  addiu       $t9, $zero, 0x10
    ctx->pc = 0x17f200u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17f204: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x17f204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f208: 0x3c187000  lui         $t8, 0x7000
    ctx->pc = 0x17f208u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)28672 << 16));
    // 0x17f20c: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x17f20cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17f210: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x17f210u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17f214: 0xf7ff8  dsll        $t7, $t7, 31
    ctx->pc = 0x17f214u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 31);
label_17f218:
    // 0x17f218: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x17f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17f21c: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x17f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x17f220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f224: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x17f224u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f228: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x17f228u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17f22c: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x17f22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x17f230: 0xb91024  and         $v0, $a1, $t9
    ctx->pc = 0x17f230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 25));
    // 0x17f234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F234u;
    {
        const bool branch_taken_0x17f234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F234u;
        // 0x17f238: 0x8d0b000c  lw          $t3, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f234) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F23Cu;
    // 0x17f23c: 0x240d0412  addiu       $t5, $zero, 0x412
    ctx->pc = 0x17f23cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x17f240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17F240u;
    {
        const bool branch_taken_0x17f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F240u;
        // 0x17f244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f240) {
            ctx->pc = 0x17F250u;
            goto label_17f250;
        }
    }
    ctx->pc = 0x17F248u;
label_17f248:
    // 0x17f248: 0x240d0041  addiu       $t5, $zero, 0x41
    ctx->pc = 0x17f248u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x17f24c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17f250:
    // 0x17f250: 0x26b2018  mult        $a0, $s3, $t3
    ctx->pc = 0x17f250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17f254: 0xa1420004  sb          $v0, 0x4($t2)
    ctx->pc = 0x17f254u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f258: 0xa14b0005  sb          $t3, 0x5($t2)
    ctx->pc = 0x17f258u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 11));
    // 0x17f25c: 0x1711825  or          $v1, $t3, $s1
    ctx->pc = 0x17f25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x17f260: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x17f260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
    // 0x17f264: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x17f264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x17f268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17f268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17f26c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x17f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17f270: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17f270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17f274: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x17f274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x17f278: 0xa544000a  sh          $a0, 0xA($t2)
    ctx->pc = 0x17f278u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x17f27c: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x17f27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x17f280: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x17f280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f284: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17f284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f288: 0x95040002  lhu         $a0, 0x2($t0)
    ctx->pc = 0x17f288u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x17f28c: 0x25090010  addiu       $t1, $t0, 0x10
    ctx->pc = 0x17f28cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x17f290: 0xa1530006  sb          $s3, 0x6($t2)
    ctx->pc = 0x17f290u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 6), (uint8_t)GPR_U32(ctx, 19));
    // 0x17f294: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x17f294u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f298: 0xa5440008  sh          $a0, 0x8($t2)
    ctx->pc = 0x17f298u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x17f29c: 0x9542000a  lhu         $v0, 0xA($t2)
    ctx->pc = 0x17f29cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x17f2a0: 0x91040006  lbu         $a0, 0x6($t0)
    ctx->pc = 0x17f2a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x17f2a4: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x17f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x17f2a8: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x17f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x17f2ac: 0xa1440007  sb          $a0, 0x7($t2)
    ctx->pc = 0x17f2acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x17f2b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x17f2b4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x17f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x17f2b8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x17f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x17f2bc: 0xfced0008  sd          $t5, 0x8($a3)
    ctx->pc = 0x17f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 13));
    // 0x17f2c0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x17f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17f2c4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17f2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17f2c8: 0x1160003b  beqz        $t3, . + 4 + (0x3B << 2)
    ctx->pc = 0x17F2C8u;
    {
        const bool branch_taken_0x17f2c8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2C8u;
        // 0x17f2cc: 0xad42000c  sw          $v0, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2c8) {
            ctx->pc = 0x17F3B8u;
            goto label_17f3b8;
        }
    }
    ctx->pc = 0x17F2D0u;
    // 0x17f2d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17f2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17f2d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17f2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17f2d8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x17f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17f2dc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17f2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f2e0: 0x2a660004  slti        $a2, $s3, 0x4
    ctx->pc = 0x17f2e0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17f2e4: 0x0  nop
    ctx->pc = 0x17f2e4u;
    // NOP
label_17f2e8:
    // 0x17f2e8: 0x85220004  lh          $v0, 0x4($t1)
    ctx->pc = 0x17f2e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x17f2ec: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F2ECu;
    {
        const bool branch_taken_0x17f2ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2ECu;
        // 0x17f2f0: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2ec) {
            ctx->pc = 0x17F310u;
            goto label_17f310;
        }
    }
    ctx->pc = 0x17F2F4u;
    // 0x17f2f4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17f2f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f2fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f300: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x17f300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x17f304: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f308: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F308u;
    {
        const bool branch_taken_0x17f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F308u;
        // 0x17f30c: 0xe4e10004  swc1        $f1, 0x4($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f308) {
            ctx->pc = 0x17F314u;
            goto label_17f314;
        }
    }
    ctx->pc = 0x17F310u;
label_17f310:
    // 0x17f310: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x17f310u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
label_17f314:
    // 0x17f314: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x17f314u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x17f318: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x17f318u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x17f31c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17f31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17f320: 0x85220006  lh          $v0, 0x6($t1)
    ctx->pc = 0x17f320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x17f324: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17F324u;
    {
        const bool branch_taken_0x17f324 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F324u;
        // 0x17f328: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f324) {
            ctx->pc = 0x17F358u;
            goto label_17f358;
        }
    }
    ctx->pc = 0x17F32Cu;
    // 0x17f32c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x17f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17f330: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17f334: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x17f334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f338: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x17f338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x17f33c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x17f33cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x17f340: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x17f340u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x17f344: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x17f344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17f348: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x17f348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x17f34c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x17f34cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x17f350: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17F350u;
    {
        const bool branch_taken_0x17f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F350u;
        // 0x17f354: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f350) {
            ctx->pc = 0x17F368u;
            goto label_17f368;
        }
    }
    ctx->pc = 0x17F358u;
label_17f358:
    // 0x17f358: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x17f358u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x17f35c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x17f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x17f360: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x17f360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x17f364: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x17f364u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
label_17f368:
    // 0x17f368: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x17f368u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17f36c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17f36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17f370: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x17f370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f374: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17f374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f37c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x17f37cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f380: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x17f380u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x17f384: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F384u;
    {
        const bool branch_taken_0x17f384 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F384u;
        // 0x17f388: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f384) {
            ctx->pc = 0x17F3A8u;
            goto label_17f3a8;
        }
    }
    ctx->pc = 0x17F38Cu;
    // 0x17f38c: 0x95240002  lhu         $a0, 0x2($t1)
    ctx->pc = 0x17f38cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x17f390: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x17f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17f394: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17f394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f39c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x17f39cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f3a0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x17f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x17f3a4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17f3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_17f3a8:
    // 0x17f3a8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17f3a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x17f3ac: 0x18b102b  sltu        $v0, $t4, $t3
    ctx->pc = 0x17f3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x17f3b0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x17F3B0u;
    {
        const bool branch_taken_0x17f3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3B0u;
        // 0x17f3b4: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3b0) {
            ctx->pc = 0x17F2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f2e8;
        }
    }
    ctx->pc = 0x17F3B8u;
label_17f3b8:
    // 0x17f3b8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x17f3bc: 0x1d2102b  sltu        $v0, $t6, $s2
    ctx->pc = 0x17f3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x17f3c0: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x17F3C0u;
    {
        const bool branch_taken_0x17f3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3C0u;
        // 0x17f3c4: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3c0) {
            ctx->pc = 0x17F218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f218;
        }
    }
    ctx->pc = 0x17F3C8u;
label_17f3c8:
    // 0x17f3c8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x17f3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f3d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f3d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f3d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f3d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17f3d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f3dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17f3dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f3e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17f3e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f3e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17f3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17F3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3E8u;
        // 0x17f3ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F3F0u;
}
