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

// Function: audioDecSendToIOP
// Address: 0x1711c0 - 0x17136c
void audioDecSendToIOP_0x1711c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecSendToIOP_0x1711c0");
#endif

    switch (ctx->pc) {
        case 0x171260u: goto label_171260;
        case 0x17128cu: goto label_17128c;
        case 0x171318u: goto label_171318;
        default: break;
    }

    ctx->pc = 0x1711c0u;

    // 0x1711c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1711c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1711c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1711c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1711c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1711c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1711cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1711ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1711d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1711d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1711d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1711d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1711d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1711dc: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1711DCu;
    {
        const bool branch_taken_0x1711dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1711E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711DCu;
        // 0x1711e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711dc) {
            ctx->pc = 0x171218u;
            goto label_171218;
        }
    }
    ctx->pc = 0x1711E4u;
    // 0x1711e4: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1711e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1711e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1711E8u;
    {
        const bool branch_taken_0x1711e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711E8u;
        // 0x1711ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711e8) {
            ctx->pc = 0x171200u;
            goto label_171200;
        }
    }
    ctx->pc = 0x1711F0u;
    // 0x1711f0: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1711F0u;
    {
        const bool branch_taken_0x1711f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711F0u;
        // 0x1711f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711f0) {
            ctx->pc = 0x171358u;
            goto label_171358;
        }
    }
    ctx->pc = 0x1711F8u;
    // 0x1711f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1711F8u;
    {
        const bool branch_taken_0x1711f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711F8u;
        // 0x1711fc: 0x8e0c0038  lw          $t4, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711f8) {
            ctx->pc = 0x171290u;
            goto label_171290;
        }
    }
    ctx->pc = 0x171200u;
label_171200:
    // 0x171200: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x171200u;
    {
        const bool branch_taken_0x171200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x171204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171200u;
        // 0x171204: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171200) {
            ctx->pc = 0x171250u;
            goto label_171250;
        }
    }
    ctx->pc = 0x171208u;
    // 0x171208: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x171208u;
    {
        const bool branch_taken_0x171208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171208u;
        // 0x17120c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171208) {
            ctx->pc = 0x171358u;
            goto label_171358;
        }
    }
    ctx->pc = 0x171210u;
    // 0x171210: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x171210u;
    {
        const bool branch_taken_0x171210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171210u;
        // 0x171214: 0x8e0c0038  lw          $t4, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171210) {
            ctx->pc = 0x171290u;
            goto label_171290;
        }
    }
    ctx->pc = 0x171218u;
label_171218:
    // 0x171218: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x171218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17121c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x17121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x171220: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x171220u;
    {
        const bool branch_taken_0x171220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171220) {
            ctx->pc = 0x171224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171220u;
            // 0x171224: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x171228u;
            goto label_171228;
        }
    }
    ctx->pc = 0x171228u;
label_171228:
    // 0x171228: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x171228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17122c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x17122cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x171230: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x171230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171234: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x171234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x171238: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x171238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x17123c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x17123cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x171240: 0x2810  mfhi        $a1
    ctx->pc = 0x171240u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x171244: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x171244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171248: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x171248u;
    {
        const bool branch_taken_0x171248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171248u;
        // 0x17124c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171248) {
            ctx->pc = 0x17128Cu;
            goto label_17128c;
        }
    }
    ctx->pc = 0x171250u;
label_171250:
    // 0x171250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x171250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171254: 0x34058100  ori         $a1, $zero, 0x8100
    ctx->pc = 0x171254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x171258: 0xc071254  jal         func_1C4950
    ctx->pc = 0x171258u;
    SET_GPR_U32(ctx, 31, 0x171260u);
    ctx->pc = 0x17125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171258u;
    // 0x17125c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4950u, 0x171258u, 0x171260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171260u;
label_171260:
    // 0x171260: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x171260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x171264: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x171264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x171268: 0x8e090044  lw          $t1, 0x44($s0)
    ctx->pc = 0x171268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17126c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x171270: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x171270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171274: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x171278: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x171278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x17127c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x17127cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x171280: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x171280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x171284: 0xc05c4dc  jal         func_171370
    ctx->pc = 0x171284u;
    SET_GPR_U32(ctx, 31, 0x17128Cu);
    ctx->pc = 0x171288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171284u;
    // 0x171288: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171370u, 0x171284u, 0x17128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17128Cu;
label_17128c:
    // 0x17128c: 0x8e0c0038  lw          $t4, 0x38($s0)
    ctx->pc = 0x17128cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_171290:
    // 0x171290: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x171290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x171294: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x171294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x171298: 0x258603ff  addiu       $a2, $t4, 0x3FF
    ctx->pc = 0x171298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 1023));
    // 0x17129c: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x17129cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1712a0: 0x29840000  slti        $a0, $t4, 0x0
    ctx->pc = 0x1712a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1712a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1712a8: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x1712a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712ac: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1712acu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1712b0: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x1712b0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1712b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1712B4u;
    {
        const bool branch_taken_0x1712b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712b4) {
            ctx->pc = 0x1712B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1712B4u;
            // 0x1712b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1712BCu;
            goto label_1712bc;
        }
    }
    ctx->pc = 0x1712BCu;
label_1712bc:
    // 0x1712bc: 0x8e0a0030  lw          $t2, 0x30($s0)
    ctx->pc = 0x1712bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1712c0: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x1712c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x1712c4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1712c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1712c8: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x1712c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1712cc: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x1712ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1712d0: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x1712d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x1712d4: 0x28840400  slti        $a0, $a0, 0x400
    ctx->pc = 0x1712d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1712d8: 0x3810  mfhi        $a3
    ctx->pc = 0x1712d8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1712dc: 0xa74823  subu        $t1, $a1, $a3
    ctx->pc = 0x1712dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1712e0: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x1712e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1712e4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1712e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1712e8: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1712e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x1712ec: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1712ECu;
    {
        const bool branch_taken_0x1712ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1712F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712ECu;
        // 0x1712f0: 0x695823  subu        $t3, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712ec) {
            ctx->pc = 0x171320u;
            goto label_171320;
        }
    }
    ctx->pc = 0x1712F4u;
    // 0x1712f4: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x1712f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1712f8: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x1712f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1712fc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1712FCu;
    {
        const bool branch_taken_0x1712fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712fc) {
            ctx->pc = 0x171300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1712FCu;
            // 0x171300: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171324u;
            goto label_171324;
        }
    }
    ctx->pc = 0x171304u;
    // 0x171304: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x171304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171308: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x171308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17130c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17130cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171310: 0xc05c506  jal         func_171418
    ctx->pc = 0x171310u;
    SET_GPR_U32(ctx, 31, 0x171318u);
    ctx->pc = 0x171314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171310u;
    // 0x171314: 0x1a0382d  daddu       $a3, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171418u, 0x171310u, 0x171318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171318u;
label_171318:
    // 0x171318: 0x8e0c0038  lw          $t4, 0x38($s0)
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17131c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17131cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171320:
    // 0x171320: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x171320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_171324:
    // 0x171324: 0x1913823  subu        $a3, $t4, $s1
    ctx->pc = 0x171324u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x171328: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x171328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17132c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17132cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171330: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x171330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x171334: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x171334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x171338: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x171338u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17133c: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x17133cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x171340: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x171344: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x171344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x171348: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x171348u;
    {
        const bool branch_taken_0x171348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x171348) {
            ctx->pc = 0x17134Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171348u;
            // 0x17134c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x171350u;
            goto label_171350;
        }
    }
    ctx->pc = 0x171350u;
label_171350:
    // 0x171350: 0x3010  mfhi        $a2
    ctx->pc = 0x171350u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x171354: 0xae06004c  sw          $a2, 0x4C($s0)
    ctx->pc = 0x171354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 6));
label_171358:
    // 0x171358: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x171358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17135c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17135cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171364: 0x3e00008  jr          $ra
    ctx->pc = 0x171364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171364u;
        // 0x171368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17136Cu;
}
